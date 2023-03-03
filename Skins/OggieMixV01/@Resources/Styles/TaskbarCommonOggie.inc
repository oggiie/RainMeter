;--------------------------------------------------------------------------------------------
; TASKBAR

[Variables]
TaskbarSkinWidth=(80*#SkinWidthMultiplier#)
;ClockFace=#SKINSPATH#Enigma\Resources\Images\Clock\ChevronClock.#ColorImage#.png

;-----------------------
; NORMAL

[StyleNormalText]
X=(#TaskbarSkinWidth#/2)
Y=((#TaskbarHeight#-25)/2)
H=15
W=#TaskbarSkinWidth#
FontColor=#Color1#
FontFace=#Font#
FontSize=#Size1#
StringAlign=CENTER
StringStyle=NORMAL
AntiAlias=1
ClipString=1

[StyleNormalLabel]
X=r
Y=R
H=15
W=#TaskbarSkinWidth#
FontColor=#Color2#
FontFace=#Font#
FontSize=#Size4#
StringAlign=CENTER
StringStyle=NORMAL
AntiAlias=1
ClipString=1


[StyleMiniText]
X=(#TaskbarSkinWidth#/2)
Y=((#TaskbarHeight#-15)/2)
H=15
W=#TaskbarSkinWidth#
FontColor=#Color1#
FontFace=#Font#
FontSize=#Size1#
StringAlign=LEFT
StringStyle=NORMAL
AntiAlias=1
ClipString=1

[StyleMiniLabel]
X=r
Y=3r
H=15
W=(#TaskbarSkinWidth#/2)
FontColor=#Color2#
FontFace=#Font#
FontSize=#Size4#
StringAlign=RIGHT
StringStyle=NORMAL
AntiAlias=1
ClipString=1
Postfix=" |"


[StyleTinyText]
X=(#TaskbarSkinWidth#/2)
Y=(((#TaskbarHeight#/2)-10)/2)
H=10
W=#TaskbarSkinWidth#
FontColor=#Color1#
FontFace=#Font#
FontSize=#Size4#
StringAlign=LEFT
StringStyle=BOLD
AntiAlias=1
ClipString=1

[StyleTinyLabel]
X=r
Y=r
H=10
W=(#TaskbarSkinWidth#/2)
FontColor=#Color2#
FontFace=#Font#
FontSize=#Size4#
StringAlign=RIGHT
StringStyle=NORMAL
AntiAlias=1
ClipString=1
Postfix=" ·"


[StyleTextlessText]
W=0
H=0
Hidden=1

[StyleTextlessLabel]
W=0
H=0
Hidden=1


[StyleDoubleTextFirst]
Y=(((#TaskbarHeight#)-30)/2)

[StyleDoubleText]
X=((#TaskbarSkinWidth#*1.5)/2)
Y=R
H=15
W=((#TaskbarSkinWidth#*1.5)/2)
FontColor=#Color1#
FontFace=#Font#
FontSize=#Size4#
StringAlign=LEFT
StringStyle=BOLD
AntiAlias=1
ClipString=1

[StyleDoubleLabel]
X=r
Y=r
H=15
W=((#TaskbarSkinWidth#*1.5)/2)
FontColor=#Color2#
FontFace=#Font#
FontSize=#Size4#
StringAlign=RIGHT
StringStyle=NORMAL
AntiAlias=1
ClipString=1
Postfix=" ·"



