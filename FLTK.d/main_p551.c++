#include "GUI.h"

using namespace Graph_lib;

struct Lines_window : Graph_lib::Window {
  Lines_window(Point xy, int w, int h, const string& title);
  Menu color_menu;

private:
  Open_polyline lines;
  Button next_button;
  Button quit_button;
  In_box next_x;
  In_box next_y;
  Out_box xy_out;

  Button menu_button;
  
  void change(Color c) {lines.set_color(c); hide_menu(); }
  void hide_menu() { color_menu.hide(); menu_button.show();}

  void red_pressed() { change(Color::red); }
  void blue_pressed() { change(Color::blue); }
  void black_pressed() { change(Color::black); }
  void menu_pressed() { menu_button.hide(); color_menu.show();}
  
  static void cb_red(Address, Address pw)
  { reference_to<Lines_window>(pw).red_pressed();}
  static void cb_blue(Address, Address pw)
  { reference_to<Lines_window>(pw).blue_pressed();}
  static void cb_black(Address, Address pw)
  { reference_to<Lines_window>(pw).black_pressed();}
  static void cb_menu(Address, Address pw)
  { reference_to<Lines_window>(pw).menu_pressed();}
  
  void next();
  void quit();
};


Lines_window::Lines_window(Point xy, int w, int h, const string& title)
  :Window{xy,w,h,title},
   next_button{Point{x_max()-150,0},70,20,"Next point",
			      [](Address, Address pw)
				{reference_to<Lines_window>(pw).next();}},
   quit_button{Point{x_max()-70,0},70,20,"Quit",
			      [](Address, Address pw)
				{reference_to<Lines_window>(pw).quit();}},
   next_x{Point{x_max()-310,0},50,20,"next x:"},
   next_y{Point{x_max()-210,0},50,20,"next y:"},
   xy_out{Point{100,0},100,20,"current (x,y):"},
   color_menu{Point{x_max()-70,40},70,20,Menu::vertical,"color"},
   menu_button{Point{x_max()-90,30},90,20,"color menu" ,cb_menu}
{
  attach(next_button);
  attach(quit_button);
  attach(next_x);
  attach(next_y);
  attach(xy_out);
  xy_out.put("no point");
  color_menu.attach(new Button{Point{x_max()-70,20},0,0,"red",cb_red});
  color_menu.attach(new Button{Point{x_max()-70,40},0,0,"blue",cb_blue});
  color_menu.attach(new Button{Point{x_max()-70,60},0,0,"black",cb_black});
  attach(color_menu);
  color_menu.hide();
  attach(menu_button);
  attach(lines);
}


void Lines_window::quit()
{
  hide();
}


void Lines_window::next()
{
  int x = next_x.get_int();
  int y = next_y.get_int();

  lines.add(Point{x,y});

  ostringstream ss;
  ss << '(' << x << ',' << y << ')';
  xy_out.put(ss.str());

  redraw();
}


int main()
{

  try {
    Lines_window win {Point{100,100},600,400,"lines"};
    return gui_main();
  }
  catch(exception& e) {
    cerr << "exception: " << e.what() << '\n';
    return 1;
  }
  catch(...) {
    cerr << "Some exception\n";
    return 2;
  }
}
