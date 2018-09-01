#include "gtk/gtk.h"

void web(char*);

int
main(int argc, char **argv)
{
  gtk_init(&argc, &argv);
  web("https://www.google.co.jp");
  gtk_main();
  return 0;
}

