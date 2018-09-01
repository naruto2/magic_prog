CPPFLAGS = -Iinclude -Llib -lmagic -Wall -g
CPP := c++

all: ;
	(cd lib;make)
	mkdir -p bin
	$(CPP)  FLTK.d/main_p412.c++ -o bin/p412 $(CPPFLAGS) -lfltk -lfltk_images
	$(CPP)  English.d/main_je.c++ -o bin/je $(CPPFLAGS)
	$(CPP)  English.d/main_hello.c++ -o bin/hello $(CPPFLAGS)
	$(CPP)  Musics.d/main_jbox.c++ -o bin/jbox $(CPPFLAGS)
	$(CPP)  Musics.d/main_musiclist.c++ -o bin/musiclist $(CPPFLAGS)
	$(CPP)  Musics.d/main_70s.c++ -o bin/70s $(CPPFLAGS)
	$(CPP)  Musics.d/main_80s.c++ -o bin/80s $(CPPFLAGS)
	$(CPP)  Musics.d/main_Komuro.c++ -o bin/Komuro $(CPPFLAGS)
	$(CPP)  Musics.d/main_Bach.c++ -o bin/Bach $(CPPFLAGS)
	$(CPP)  Musics.d/main_Beethoven.c++ -o bin/Beethoven $(CPPFLAGS)
	$(CPP)  Musics.d/main_Chopin.c++ -o bin/Chopin $(CPPFLAGS)
	$(CPP)  Physiedu.d/main_stopwatch.c++ -o bin/stopwatch $(CPPFLAGS)
	$(CPP)  Socialstudies.d/main_usdjpy.c++ -o bin/usdjpy $(CPPFLAGS)


clean: ;
	rm -f bin/*

allclean: ;
	rm -f bin/* lib/*.o */a.exe lib/libmagic.a

install: ;
	cp lib/libmagic.a /usr/lib
	cp include/magic_prog.h /usr/include
