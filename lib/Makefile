LIBNAME = libmagic.a
SRCS = je.c++  jukebox.c++  lang.c++  stop_watch.c++  usdjpy.c++  zeller.c++ Pumplupinpull.c++ jukeboxs.c++ GUI.c++ Graph.c++ Simple_window.c++ Window.c++
#for GNU make
#SRCS = $(shell find . -name '*.c')
OBJS = $(SRCS:.c++=.o)
CPPFLAGS = -I../include -Wall -g

AR  := /bin/ar
CPP := c++
RM  := /bin/rm

.SUFFIXES: .c++ .o
.PHONY: clean all

all: $(LIBNAME)

$(LIBNAME): $(OBJS)
	$(AR) cr $(LIBNAME) $(OBJS)
.c++.o:
	$(CPP) $(CPPFLAGS) -c $< -o $@

clean:
	$(RM) -f $(OBJS) $(LIBNAME)
