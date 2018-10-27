
Debian
====================
This directory contains files used to package swid/swi-qt
for Debian-based Linux systems. If you compile swid/swi-qt yourself, there are some useful files here.

## swi: URI support ##


swi-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install swi-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your swiqt binary to `/usr/bin`
and the `../../share/pixmaps/swi128.png` to `/usr/share/pixmaps`

swi-qt.protocol (KDE)

