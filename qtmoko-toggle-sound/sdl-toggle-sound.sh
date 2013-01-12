#!/bin/sh
if [ -f ~/.sdlnosound ]
then
	rm -f ~/.sdlnosound
	qui showmessage SDL "Sound in SDL is now ON"
else
	touch ~/.sdlnosound
	qui showmessage SDL "Sound in SDL is now OFF"
fi
