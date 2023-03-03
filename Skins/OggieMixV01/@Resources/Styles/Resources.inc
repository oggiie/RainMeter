;----------------------------------------------------------------------------------------
; RESOURCES

;----------------------------------------------
; MEASURES

[MeasureYear]
Measure=TIME
Format="%Y"
UpdateDivider=86400

;----------------------------------------------
; STYLES

;-----------------------
; TITLE

[StyleTitleBackground]
ImageName=#TaskbarImage#
X=0
H=33
W=#PanelWidth#

[StyleTitleBackgroundFilter]
SolidColor=#ColorFilter3#
X=r
Y=r
H=33
W=#PanelWidth#

[StyleTitle]
X=20
Y=9
StringStyle=BOLD
StringAlign=LEFT
FontColor=#Color1#
FontSize=#Size1#
FontFace=#Font#
AntiAlias=1
Text="E    N    I    G    M    A"

[StyleSubtitle]
X=5R
Y=15
FontFace=#Font#
FontSize=#Size4#
FontColor=#Color2#
StringStyle=NORMAL
StringAlign=LEFT
AntiAlias=1

[StyleButtonHome]
ImageName=#SKINSPATH#\Enigma\Resources\Images\Home\Home.#ColorImage#.png
X=(#PanelWidth#-75)
Y=10
LeftMouseUpAction=!Execute [!RainmeterActivateConfig Enigma Enigma.ini][!RainmeterDeactivateConfig]
TooltipTitle="Home"
TooltipText="Return to Enigma's main control panel."

[StyleButtonHelp]
ImageName=#SKINSPATH#\Enigma\Resources\Images\Home\Help.#ColorImage#.png
X=(#PanelWidth#-50)
Y=10
LeftMouseUpAction=!Execute ["http://enigma.kaelri.com/index.php?p=manual"]
TooltipTitle="Help"
TooltipText="Launch Enigma's online manual for advanced configuration instructions."

[StyleButtonClose]
ImageName=#SKINSPATH#\Enigma\Resources\Images\Home\Close.#ColorImage#.png
X=(#PanelWidth#-25)
Y=10
LeftMouseUpAction=!Execute [!RainmeterDeactivateConfig]
TooltipTitle="Close"
TooltipText="Close this panel."

;-----------------------
; BODY

[StyleBodyBackground]
SolidColor=#ColorFilter2#
X=0
Y=33
W=#PanelWidth#
H=(#PanelHeight#-65)

[StyleBodyBorder]
SolidColor=#ColorBorder3#
X=1
Y=33
H=1
W=(#PanelWidth#-2)

[StyleBodyBorder2]
Y=(#PanelHeight#-33)

;-----------------------
; MENU

[StyleMenuBackground]
SolidColor=#ColorPanel2#
X=0
Y=34
W=35
H=(#PanelHeight#-67)

[StyleMenuBorder]
SolidColor=#ColorBorder4#
X=35
Y=34
H=(#PanelHeight#-66)
W=1

[StyleMenuFirst]
Y=48

[StyleMenu]
X=7
Y=40r
W=20
H=20

[StyleMenuHomeManual]
ImageName=#SKINSPATH#\Enigma\Resources\Images\Reader.#ColorImage#.png

[StyleMenuHomeOptions]
ImageName=#SKINSPATH#\Enigma\Resources\Images\Home\Config.#ColorImage#.png

[StyleMenuHomeSupport]
ImageName=#SKINSPATH#\Enigma\Resources\Images\Home\Support.#ColorImage#.png

[StyleMenuOptionsGeneral]
ImageName=#SKINSPATH#\Enigma\Resources\Images\System.#ColorImage#.png

[StyleMenuOptionsLayout]
ImageName=#SKINSPATH#\Enigma\Resources\Images\Home\ConfigLayout.#ColorImage#.png

[StyleMenuOptionsApps]
ImageName=#SKINSPATH#\Enigma\Resources\Images\Home\ConfigApps.#ColorImage#.png

[StyleMenuOptionsFeeds]
ImageName=#SKINSPATH#\Enigma\Resources\Images\Reader.#ColorImage#.png

[StyleMenuOptionsNotes]
ImageName=#SKINSPATH#\Enigma\Resources\Images\Notes.#ColorImage#.png

[StyleMenuOptionsWorld]
ImageName=#SKINSPATH#\Enigma\Resources\Images\Home\ConfigWorld.#ColorImage#.png

[StyleMenuArrow]
ImageName=#SKINSPATH#\Enigma\Resources\Images\Home\MenuArrow.#ColorImage#.png
X=32
Y=40r
W=15
H=20

;-----------------------
; HOME CONTENT

[StylePreview]
X=60
Y=63

[StyleLink]
X=80r
Y=20r
FontFace=#Font#
FontSize=#Size3#
FontColor=#ColorLink2#
FontStyle=NORMAL
StringStyle=BOLD
StringAlign=LEFT
StringEffect=SHADOW
AntiAlias=1

[StyleLinkActive]
X=r
Y=r
FontFace=#Font#
FontSize=#Size3#
FontColor=#Color1#
FontStyle=NORMAL
StringStyle=BOLD
StringAlign=LEFT
AntiAlias=1
Hidden=1

[StyleCaption]
X=r
Y=15r
FontFace=#Font#
FontSize=#Size4#
FontColor=#Color2#
FontStyle=NORMAL
StringStyle=BOLD
StringAlign=LEFT
StringEffect=SHADOW
AntiAlias=1
W=150
H=30
ClipString=1

[StyleDescription]
X=250
Y=-15r
FontFace=#Font#
FontSize=#Size4#
FontColor=#Color1#
FontStyle=NORMAL
StringStyle=BOLD
StringAlign=LEFT
StringEffect=SHADOW
AntiAlias=1
W=175
H=40
ClipString=1

;-----------------------
; OPTIONS CONTENT

; [StyleContentBorder]
; X=220

[StyleContentGradient]
X=220
Y=79
H=20
SolidColor2=#ColorBorder4#
SolidColor=#ColorTransparent#
GradientAngle=90

[StyleContentBorder]
Y=99
X=220
H=(#PanelHeight#-131)

[StyleNameFirst]
Y=44
FontColor=#Color2#
StringStyle=NORMAL

[StyleName]
Y=10R
X=215
H=15
FontColor=#Color1#
FontSize=#Size1#
FontFace=#Font#
StringStyle=BOLD
StringAlign=RIGHT
AntiAlias=1

[StyleNameSub]
Y=R
FontSize=#Size3#
StringStyle=NORMAL

[StyleText]
X=225
Y=r
W=205
H=15
FontColor=#ColorLink2#
FontSize=#Size1#
FontFace=#Font#
ClipString=1
AntiAlias=1
TooltipWidth=300

[StyleImage]
X=225
Y=r
W=25
H=25
GrayScale=1
ImageTint=#ColorLink2#
AntiAlias=1
TooltipWidth=300

[StyleImageNoTint]
GrayScale=0
ImageTint=255,255,255

[StyleColorBackgroundFirst]
X=225

[StyleColorBackground]
SolidColor=#ColorBorder2#
X=6R
Y=-1r
H=25
W=25

[StyleColorBackgroundNewRow]
X=225
Y=6R

[StyleColor]
X=1r
Y=1r
H=23
W=23
TooltipWidth=300

[StyleNotes]
X=225
Y=20r
W=195
H=48
FontColor=#Color2#
FontSize=#Size3#
FontFace=#Font#
AntiAlias=1
ClipString=1

;-----------------------
; STATUS

[StyleStatusBackground]
Y=(#PanelHeight#-32)

[StyleUpdate]
X=10
Y=(#PanelHeight#-23)
FontFace=#Font#
FontSize=#Size4#
AntiAlias=1

[StyleUpdateError]
Text="Connecting to enigma.kaelri.com..."
FontColor=#Color1#
TooltipTitle="Trying to Connect"
TooltipText="If this message is not changing, there may be a problem with your Internet connection. Rainmeter may also have been blocked by a firewall application. Refresh this config when the issue has been resolved."
TooltipWidth=300

[StyleUpdateNo]
Text="Your version of Enigma is up to date."
FontColor=#Color2#

[StyleUpdateYes]
Text="Upgrade to Enigma [MeasureVersion]"
FontColor=#ColorLink2#
StringStyle=BOLD
LeftMouseUpAction=!Execute ["http://enigma.kaelri.com/files/Enigma.rmskin"]

[StyleCC]
ImageName=#SKINSPATH#Enigma\Resources\Images\Home\CC.#ColorImage#.png
ImageAlpha=128
X=(#PanelWidth#-100)
Y=(#PanelHeight#-25)
W=15
H=15
AntiAlias=1

[StyleAuthor]
X=R
Y=(#PanelHeight#-23)
FontFace=#Font#
FontSize=#Size4#
FontColor=#Color2#
AntiAlias=1

;-----------------------
; LAYOUT BAR IMAGE

[StyleBarImageBase]
ImageName=#SKINSPATH#Enigma\Resources\Images\Home\ConfigLayout.#ColorImage#.png
X=215
Y=-15r

[StyleBarImageBaseBackground]
ImageName=#SKINSPATH#Enigma\Resources\Images\Home\Wallpaper.png
X=23r
Y=26r
W=83
H=54

[StyleTaskbarImage]
X=2r
Y=45r
H=7
W=79
TooltipWidth=300

[StyleSecondSidebarImage]
ImageAlpha=192
X=r
Y=-43r
H=41
W=14
TooltipWidth=300

[StyleSidebarImage]
ImageAlpha=192
X=65r
Y=r
H=41
W=14
TooltipWidth=300

;-----------------------
; OUTLINE

[StyleOutline]
SolidColor=#Color4#

[StyleOutlineTop]
X=0
Y=0
W=#PanelWidth#
H=1

[StyleOutlineLeft]
X=0
Y=1
W=1
H=(#PanelHeight#-1)

[StyleOutlineRight]
X=(#PanelWidth#-1)
Y=1
W=1
H=(#PanelHeight#-1)

[StyleOutlineBottom]
X=0
Y=#PanelHeight#
W=#PanelWidth#
H=1