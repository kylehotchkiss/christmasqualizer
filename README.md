Christmasqualizer!
==================

This code allows you to use a [MSGEQ7](http://www.sparkfun.com/products/10468) to control christmas lights!
While the wiring is basically up to you, I found [this site](http://nuewire.com/info-archive/msgeq7-by-j-skoba/)
to be an awesome help with wiring it. I also used a bunch of [S108T02s](http://www.sparkfun.com/products/10636)
for the relays actually controlling the christmas lights and I have to
recommend these if you don't have a better solid-state relay decided on.

As far as the code goes, you'll need to edit the first four lines once
you have your MSGEQ7 wired in so that it all links to the right pins.
The array of pins on the 4th line is your relay / light pins and go
from the lowest channel to the highest in order. You can use less than 7
sets of lights, just set the first and last value in that array to something
or the code won't work (it absolutely must have 7 values!)

Good luck and if you make something with this please send it my way! 
(@kylehotchkiss on Twitter)

