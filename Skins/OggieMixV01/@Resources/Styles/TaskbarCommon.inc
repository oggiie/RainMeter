;--------------------------------------------------------------------------------------------
; TASKBAR

[Variables]
TaskbarSkinWidth=(80*#SkinWidthMultiplier#)
ClockFace=#SKINSPATH#Enigma\Resources\Images\Clock\ChevronClock.#ColorImage#.png

;-----------------------
; NORMAL

[StyleNormalBackground]
SolidColor=#ColorTransparent#
X=0
Y=0
W=#TaskbarSkinWidth#
H=#TaskbarHeight#

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

[StyleNormalIcon]
X=0
Y=0
W=0
H=0
Hidden=1

[StyleNormalBarFirst]
X=0
Y=0
W=0
H=0
Hidden=1

[StyleNormalBar]
X=0
Y=0
W=0
H=0
Hidden=1

;-----------------------
; MINI

[StyleMiniBackground]
SolidColor=#ColorTransparent#
X=0
Y=0
W=(#TaskbarSkinWidth#*1.5)
H=#TaskbarHeight#

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

[StyleMiniIcon]
X=0
Y=0
W=0
H=0
Hidden=1

[StyleMiniBarFirst]
X=0
Y=0
W=0
H=0
Hidden=1

[StyleMiniBar]
X=0
Y=0
W=0
H=0
Hidden=1

;-----------------------
; TINY

[StyleTinyBackground]
SolidColor=#ColorTransparent#
X=0
Y=0
W=(#TaskbarSkinWidth#*1.5)
H=(#TaskbarHeight#/2)

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

[StyleTinyIcon]
X=0
Y=0
W=0
H=0
Hidden=1

[StyleTinyBarFirst]
X=0
Y=0
W=0
H=0
Hidden=1

[StyleTinyBar]
X=0
Y=0
W=0
H=0
Hidden=1

;-----------------------
; ICON

[StyleIconBackground]
SolidColor=#ColorTransparent#
X=0
Y=0
W=(#TaskbarSkinWidth#+35)
H=#TaskbarHeight#

[StyleIconIcon]
X=5
Y=((#TaskbarHeight#-25)/2)
W=25
H=25

[StyleIconText]
X=35
Y=((#TaskbarHeight#-22)/2)
H=12
W=#TaskbarSkinWidth#
FontColor=#Color1#
FontFace=#Font#
FontSize=#Size3#
StringAlign=LEFT
StringStyle=NORMAL
AntiAlias=1
ClipString=1

[StyleIconLabel]
X=r
Y=R
H=10
W=#TaskbarSkinWidth#
FontColor=#Color2#
FontFace=#Font#
FontSize=#Size4#
StringAlign=LEFT
StringStyle=NORMAL
AntiAlias=1
ClipString=1

[StyleIconBarFirst]
X=R
Y=5r

[StyleIconBar]
X=3r
Y=r
H=15
W=2
BarColor=#Color3#
;BarColor=#Color1#
;SolidColor=#Color3#
BarOrientation=VERTICAL

;-----------------------
; ICON-RIGHT

[StyleIconRightBackground]
SolidColor=#ColorTransparent#
X=0
Y=0
W=(#TaskbarSkinWidth#+35)
H=#TaskbarHeight#

[StyleIconRightIcon]
X=(#TaskbarSkinWidth#+5)
Y=((#TaskbarHeight#-25)/2)
W=25
H=25

[StyleIconRightText]
X=(#TaskbarSkinWidth#)
Y=((#TaskbarHeight#-22)/2)
H=12
W=#TaskbarSkinWidth#
FontColor=#Color1#
FontFace=#Font#
FontSize=#Size3#
StringAlign=RIGHT
StringStyle=NORMAL
AntiAlias=1
ClipString=1

[StyleIconRightLabel]
X=r
Y=R
H=10
W=#TaskbarSkinWidth#
FontColor=#Color2#
FontFace=#Font#
FontSize=#Size4#
StringAlign=RIGHT
StringStyle=NORMAL
AntiAlias=1
ClipString=1

[StyleIconRightBarFirst]
X=R
Y=5r

[StyleIconRightBar]
X=3r
Y=r
H=15
W=2
BarColor=#Color3#
;BarColor=#Color1#
;SolidColor=#Color3#
BarOrientation=VERTICAL

;-----------------------
; TEXTLESS

[StyleTextlessBackground]
SolidColor=#ColorTransparent#
X=0
Y=0
W=35
H=#TaskbarHeight#

[StyleTextlessIcon]
X=5
Y=((#TaskbarHeight#-25)/2)
W=25
H=25

[StyleTextlessText]
W=0
H=0
Hidden=1

[StyleTextlessLabel]
W=0
H=0
Hidden=1

[StyleTextlessBarFirst]
X=R
Y=5r

[StyleTextlessBar]
X=3r
Y=r
H=15
W=2
BarColor=#Color3#
;BarColor=#Color1#
;SolidColor=#Color3#
BarOrientation=VERTICAL

;---------------------------------------------------------------------
; DOUBLE

[StyleDoubleBackground]
SolidColor=#ColorTransparent#
X=0
Y=0
W=(#TaskbarSkinWidth#*1.5)
H=#TaskbarHeight#

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

;---------------------------------------------------------------------
; BARS

[StyleBarFirst]
X=R
Y=5r

[StyleBar]
X=3r
Y=r
H=15
W=2
BarColor=#Color3#
;BarColor=#Color1#
;SolidColor=#Color3#
BarOrientation=VERTICAL

;---------------------------------------------------------------------
; CLOCK & WORLD

[StyleClockIcon]
ImageName=#ClockFace#
W=27
H=27

[StyleClockHands]
X=r
Y=r
W=27
H=27
StartAngle=4.7123889
RotationAngle=6.2831853
LineStart=0
AntiAlias=1
Solid=0

[StyleClockSeconds]
LineWidth=1
LineLength=10
LineColor=#ColorLink2#
ValueReminder=60

[StyleClockHours]
LineWidth=2
LineLength=6
LineColor=#Color1#
ValueReminder=43200

[StyleClockMinutes]
LineWidth=2
LineLength=9
LineColor=#Color1#
ValueReminder=3600

;---------------------------------------------------------------------
; GCAL

[StyleGcalIcon]
ImageName=#SKINSPATH#Enigma\Resources\Images\Gcal.#ColorImage#.png

;---------------------------------------------------------------------
; GMAIL

[StyleGmailIcon]
ImageName=#SKINSPATH#Enigma\Resources\Images\Gmail.%1.#ColorImage#.png

;---------------------------------------------------------------------
; MOON

[StyleMoonIcon]
ImageName=#SKINSPATH#Enigma\Resources\Images\Moon\Moon.png
H=24
W=24

;---------------------------------------------------------------------
; MUSIC

[StyleMusicIconBack]
ImageName=#SKINSPATH#Enigma\Resources\Images\MusicAlbum.#ColorImage#.png

[StyleMusicIcon]
X=1r
Y=1r
W=23
H=23

;---------------------------------------------------------------------
; NETWORK

[StyleNetworkIcon]
ImageName=#SKINSPATH#Enigma\Resources\Images\Net.#ColorImage#.png

;---------------------------------------------------------------------
; RAIN

[StyleRainIcon]
ImageName=#SKINSPATH#Enigma\Resources\Images\Rain.#ColorImage#.png

;---------------------------------------------------------------------
; RECYCLER

[StyleRecyclerIconEmpty]
ImageName=#SKINSPATH#Enigma\Resources\Images\RecyclerEmpty.#ColorImage#.png

[StyleRecyclerIconFull]
ImageName=#SKINSPATH#Enigma\Resources\Images\RecyclerFull.#ColorImage#.png

;---------------------------------------------------------------------
; SEARCH

[StyleSearchIconGoogle]
ImageName=#SKINSPATH#Enigma\Resources\Images\Search\Google.#ColorImage#.png

[StyleSearchIconWiki]
ImageName=#SKINSPATH#Enigma\Resources\Images\Search\Wiki.#ColorImage#.png

[StyleSearchIconRun]
ImageName=#SKINSPATH#Enigma\Resources\Images\Search\Run.#ColorImage#.png

;---------------------------------------------------------------------
; SUN

[StyleSunIcon]
ImageName=#SKINSPATH#Enigma\Resources\Images\Sun.#ColorImage#.png

;---------------------------------------------------------------------
; SYSTEM

[StyleSystemIcon]
ImageName=#SKINSPATH#Enigma\Resources\Images\System.#ColorImage#.png
W=28
H=28

;---------------------------------------------------------------------
; SYSTEM\HDD

[StyleHDDIcon]
ImageName=#SKINSPATH#Enigma\Resources\Images\HDD.#ColorImage#.png
W=33
H=33

[StyleHDDBar]
X=14r
Y=5r
H=15
W=4
BarColor=#Color1#
SolidColor=#Color3#

;---------------------------------------------------------------------
; SYSTEM\PWR

[StylePWRIcon]
ImageName=#SKINSPATH#Enigma\Resources\Images\PWR.#ColorImage#.png

[StylePWRBar]
X=10r
Y=6r
H=14
W=5
BarColor=#Color1#
SolidColor=#Color3#

;---------------------------------------------------------------------
; TOGGLE

[StyleToggleIcon]
ImageName=#SKINSPATH#Enigma\Resources\Images\Sidebar.#ColorImage#.png

;---------------------------------------------------------------------
; WEATHER

[StyleWeatherNormalIcon]

[StyleWeatherMiniIcon]

[StyleWeatherTinyIcon]

[StyleWeatherIconIcon]
X=-10
Y=((#TaskbarHeight#-33)/2)
W=45
H=33
ImageName=#SKINSPATH#Enigma\Resources\Images\MoxaWeather\%1.#ColorImage#.png

[StyleWeatherIconRightIcon]
X=(#TaskbarSkinWidth#-5)
Y=((#TaskbarHeight#-33)/2)
W=45
H=33
ImageName=#SKINSPATH#Enigma\Resources\Images\MoxaWeather\%1.#ColorImage#.png

[StyleWeatherTextlessIcon]
X=-5
Y=((#TaskbarHeight#-33)/2)
W=45
H=33
ImageName=#SKINSPATH#Enigma\Resources\Images\MoxaWeather\%1.#ColorImage#.png

;-----------------------
; EXTENDED

[StyleWeatherExtendedBackground]
W=395

[StyleWeatherExtendedText]
X=5R
Y=5r

[StyleWeatherExtendedIconSecond]
X=105

[StyleWeatherExtendedIconThird]
X=215

;---------------------------------------------------------------------
; EXTRAS: TRAY CLOCK

[StyleTrayClockDate]
X=200
Y=((#TaskbarHeight#-10)/2)
W=200
H=10

[StyleTrayClockDate2]
X=230
Y=((#TaskbarHeight#-15)/2)
W=80
H=15
StringAlign=CENTER

[StyleTrayClockDate3]
X=260
StringAlign=LEFT

;---------------------------------------------------------------------
; EXTRAS: TRAY SYSTEMS

[StyleTraySystemsBackground]
W=260

[StyleTraySystemsCPU]
X=40

[StyleTraySystemsRAM]
X=100

[StyleTraySystemsHDD]
X=160

[StyleTraySystemsPWR]
X=230