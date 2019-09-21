make -f Makefile.8mhz_unimap.unifying KEYMAP=usb_usb_hhkb_zzh_u TARGET=usb_usb_8mhz_unimap_unifying
mv usb_usb_8mhz_unimap_unifying.hex binary/
make -f Makefile.8mhz_unimap.unifying KEYMAP=usb_usb_hhkb_zzh_u TARGET=usb_usb_8mhz_unimap_unifying clean



make -f Makefile.8mhz_unimap KEYMAP=usb_usb_dvorak TARGET=usb_usb_8mhz_unimap_dvorak
mv usb_usb_8mhz_unimap_dvorak.hex binary/
make -f Makefile.8mhz_unimap KEYMAP=usb_usb_dvorak TARGET=usb_usb_8mhz_unimap_dvorak clean