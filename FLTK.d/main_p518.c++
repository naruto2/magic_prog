#include "Simple_window.h"
#include "Graph.h"
#include "magic_prog.h"


double fac(int n)
{
  double r = 1.0;
  while ( n > 1 ) {
    r *= n;
    --n;
  }
  return r;
}

int number_of_terms = 0;

double term(double x, int n)
{
  return pow(x,n)/fac(n);
}


double expe(double x, int n)
{
  double sum=0.0;
  for ( int i = 0; i<n; ++i ) sum += term(x,i);
  
  //cout<<x<<" "<<sum<<endl;
  return sum;
}


int main()
{
  using namespace Graph_lib;

  Point tl{100,100};

  constexpr int xmax = 600;
  constexpr int ymax = 400;

  constexpr int x_orig = xmax/2;
  constexpr int y_orig = ymax/2;
  constexpr Point orig {x_orig, y_orig};

  constexpr int r_min = -10;
  constexpr int r_max =  11;

  constexpr int n_points = 400;

  constexpr int x_scale = 30;
  constexpr int y_scale = 30;
  
  Simple_window win {tl,xmax,ymax,"Function graphing"};

  constexpr int xlength = xmax-40;
  constexpr int ylength = ymax-40;

  Axis x {Axis::x,Point{20,y_orig},xlength, xlength/x_scale,"one notch ==1"};
  Axis y {Axis::y,Point{x_orig,ylength+20},ylength, ylength/y_scale,"one notch ==1"};
  x.set_color(Color::red);
  y.set_color(Color::red);




  Function real_exp {exp, r_min, r_max, orig, 200, x_scale, y_scale};
  real_exp.set_color(Color::blue);

  win.attach(real_exp);


  for (int n = 0; n<50; ++n) {
    ostringstream ss;
    ss << "exp approximation; n==" << n;
    win.set_label(ss.str());
    number_of_terms = n;
 
    Function e { [](double x) { return expe(x,number_of_terms); },
	r_min, r_max, orig, 200, x_scale, y_scale};
    win.attach(e);
    win.attach(x);
    win.attach(y);
    win.wait_for_button();
    win.detach(e);
    win.detach(x);
    win.detach(y);
  }

  return 1;
}
