#include "Simple_window.h"
#include "Graph.h"

int main()
{
  using namespace Graph_lib;

  Simple_window win20 {{100,100},600,400,"colors"};

  Vector_ref<Rectangle> rect;
  
  for (int i = 0; i<16; ++i)
    for (int j = 0; j < 16; ++j) {
      rect.push_back(new Rectangle{Point{i*20,j*20},20,20});
      rect[rect.size()-1].set_fill_color(Color{i*16+j});
      win20.attach(rect[rect.size()-1]);
    }
      

  
  win20.wait_for_button();
  return 0;
}
