CFLAGS += -Wall -Wextra -Wno-unused-parameter -O3

INSTALL = install
INSTALL_PROGRAM = $(INSTALL)
INSTALL_DATA = $(INSTALL) -m 644

prefix = /usr/local
exec_prefix = $(prefix)
bindir = $(exec_prefix)/bin
datarootdir = $(prefix)/share
mandir = $(datarootdir)/man
man1dir = $(mandir)/man1


.PHONY: all clean install installdirs

all: a.out

a.out : browser.c
	$(CC) $(CFLAGS) $(LDFLAGS) \
		-o $@ $< main.c \
		`pkg-config --cflags --libs gtk+-3.0 glib-2.0 webkit2gtk-4.0`

install: all installdirs
	$(INSTALL_PROGRAM) $(__NAME__) $(DESTDIR)$(bindir)/$(__NAME__)
	$(INSTALL_DATA) man1/$(__NAME__).1 $(DESTDIR)$(man1dir)/$(__NAME__).1
	$(INSTALL_DATA) man1/$(__NAME__).usage.1 \
		$(DESTDIR)$(man1dir)/$(__NAME__).usage.1

installdirs:
	mkdir -p $(DESTDIR)$(bindir) $(DESTDIR)$(man1dir)

clean:
	rm -f a.out
