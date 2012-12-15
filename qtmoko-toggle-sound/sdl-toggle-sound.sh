#!/bin/sh
if [ -f ~/.sdlnosound ]
then
	rm -f ~/.sdlnosound
	echo '\n\n\nSound in SDL is now\n\n\n           E N A B L E D\n\n\n' > /tmp/banner.txt
	echo '            _ ' >> /tmp/banner.txt
	echo '           / |' >> /tmp/banner.txt
	echo '          /  |' >> /tmp/banner.txt
	echo '      ___/   |' >> /tmp/banner.txt
	echo '     /   |   |' >> /tmp/banner.txt
	echo '     |   |   |' >> /tmp/banner.txt
	echo '     |   |   |' >> /tmp/banner.txt
	echo '     \___|   |' >> /tmp/banner.txt
	echo '         \\   |' >> /tmp/banner.txt
	echo '          \\  |' >> /tmp/banner.txt
	echo '           \\_|' >> /tmp/banner.txt
else
	touch ~/.sdlnosound
	echo '\n\n\nSound in SDL is now\n\n\n           D I S A B L E D\n\n\n' > /tmp/banner.txt
	echo '       _    _ ' >> /tmp/banner.txt
	echo '       \\\\  / |' >> /tmp/banner.txt
	echo '        \\\\/  |' >> /tmp/banner.txt
	echo '      ___\\\\  |' >> /tmp/banner.txt
	echo '     /   |\\\\ |' >> /tmp/banner.txt
	echo '     |   | \\\\|' >> /tmp/banner.txt
	echo '     |   |  \\\\' >> /tmp/banner.txt
	echo '     \___|   \\\\' >> /tmp/banner.txt
	echo '         \   |\\\\' >> /tmp/banner.txt
	echo '          \  | \\\\' >> /tmp/banner.txt
	echo '           \_|  \\\\' >> /tmp/banner.txt
fi

qterminal -c cat /tmp/banner.txt

sleep 1
