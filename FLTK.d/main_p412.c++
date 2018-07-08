#include "Simple_window.h"
#include "Graph.h"

int main()
{
  using namespace Graph_lib;

  Point tl{100,100};

  Simple_window win {tl,600,400,"Canvas"};

  Axis xa { Axis::x, Point{20,300},280,10, "x axis"};
  Axis ya { Axis::y, Point{20,300},280,10, "y axis"};

  ya.set_color(Color::cyan);
  ya.label.set_color(Color::dark_red);
  win.attach(ya);
  win.attach(xa);

  Function sine {sin,0,100,Point{20,150},1000,50,50};
  win.attach(sine);

  
  Rectangle r {Point{200,200},100,50};
  r.set_fill_color(Color::yellow);
  win.attach(r);


  Closed_polyline poly_rect;

  poly_rect.add(Point{100,50});
  poly_rect.add(Point{200,50});
  poly_rect.add(Point{200,100});
  poly_rect.add(Point{100,100});
  poly_rect.add(Point{50,75});
  poly_rect.set_style(Line_style(Line_style::dash,2));
  poly_rect.set_fill_color(Color::green);
  win.attach(poly_rect);

  
  Polygon poly;


  poly.add(Point{300,200});
  poly.add(Point{350,100});
  poly.add(Point{400,200});

  poly.set_color(Color::red);
  poly.set_style(Line_style(Line_style::dash,4));
  win.attach(poly);

  Text t {Point{150,150},"Hello, graphical world!"};
  t.set_font(Graph_lib::Font::times_bold);
  t.set_font_size(20);
  win.attach(t);
  

  Image ii {Point{200,250},"image.jpg"};

  win.attach(ii);

  Circle c {Point{100,200},50};
  Ellipse e {Point{100,200},75,25};
  e.set_color(Color::dark_red);
  Mark m {Point{1000,200},'x'};
  win.attach(c);
  win.attach(m);
  win.attach(e);

  
  
  win.wait_for_button();
  return 1;
}
