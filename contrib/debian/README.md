
Debian
====================
This directory contains files used to package linuxpayd/linuxpay-qt
for Debian-based Linux systems. If you compile linuxpayd/linuxpay-qt yourself, there are some useful files here.

## linuxpay: URI support ##


linuxpay-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install linuxpay-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your linuxpayqt binary to `/usr/bin`
and the `../../share/pixmaps/linuxpay128.png` to `/usr/share/pixmaps`

linuxpay-qt.protocol (KDE)

