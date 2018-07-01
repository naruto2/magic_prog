CPPFLAGS = -Iinclude -Llib -lmagic -Wall
CPP := c++

all: ;
	(cd lib;make)
	$(CPP)  English.d/main_je.c++ -o bin/je $(CPPFLAGS)
	$(CPP)  English.d/main_hello.c++ -o bin/hello $(CPPFLAGS)
	$(CPP)  Musics.d/main_jbox.c++ -o bin/jbox $(CPPFLAGS)
	$(CPP)  Musics.d/main_musiclist.c++ -o bin/musiclist $(CPPFLAGS)
	$(CPP)  Physiedu.d/main_stopwatch.c++ -o bin/stopwatch $(CPPFLAGS)

clean: ;
	rm -f bin/*
