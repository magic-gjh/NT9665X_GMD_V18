//This source code is generated by UI Designer Studio.

#ifndef UIMENUWNDPHOTOQUICKSETTINGRES_H
#define UIMENUWNDPHOTOQUICKSETTINGRES_H

#include "UIFramework.h"
#include "UIFrameworkExt.h"
#include "UIGraphics.h"
#include "NVTToolCommand.h"
#include "UIDisplayUtil.h"
//------------------------------------------------------------

SHOW_ITEM_RECT(CMD_Rectangle,Skin1Rect,0,0,319,239,0,0,0,0,0,0,0)
SHOW_MAP_BEGIN(Skin1)
SHOW_MAP_BODY(Skin1Rect)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin1,0,0,319,239)

SHOW_ITEM_IMAGE(CMD_Image,Image3, 115, 0, 175,39, ICON_TITLE_BAR,0,0,0,0,0,0,0,0)
SHOW_ITEM_IMAGE(CMD_Image,Image4, 174, 0, 234,39, ICON_TITLE_BAR,0,0,0,0,0,0,0,0)
SHOW_ITEM_IMAGE(CMD_Image,Image5, 233, 0, 293,39, ICON_TITLE_BAR,0,0,0,0,0,0,0,0)
SHOW_ITEM_IMAGE(CMD_Image,Image6, 235, 0, 295,39, ICON_TITLE_BAR,0,0,0,0,0,0,0,0)
SHOW_ITEM_IMAGE(CMD_Image,Image7, 59, 0, 119,39, ICON_TITLE_BAR,0,0,0,0,0,0,0,0)
SHOW_ITEM_IMAGE(CMD_Image,Image8, 0, 0, 60,41, ICON_QM_VIDEO,0,0,0,0,0,0,0,0)
SHOW_MAP_BEGIN(Skin2)
SHOW_MAP_BODY(Image3)
SHOW_MAP_BODY(Image4)
SHOW_MAP_BODY(Image5)
SHOW_MAP_BODY(Image6)
SHOW_MAP_BODY(Image7)
SHOW_MAP_BODY(Image8)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin2,0,0,295,39)

SHOW_MAP_BEGIN(Skin10)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin10,0,0,54,39)

SHOW_ITEM_IMAGE(CMD_Image|CMD_ITEM,Icon11, 0, 0, 63,34, ICONID_NULL,0,0,0,0,0,0,0,0)
SHOW_MAP_BEGIN(Normal9)
SHOW_MAP_BODY(Skin10)
SHOW_MAP_BODY(Icon11)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Normal9,12,5,66,44)

CREATE_STATE_ITEM_DATA(ICON_QM_STILL12,STRID_NULL,ICON_QM_STILL,NULL) 
CREATE_STATE_ITEM_DATA(ICON_QM_VIDEO13,STRID_NULL,ICON_QM_VIDEO,NULL) 
SHOW_MAP_BEGIN(UIMenuWndPhotoQS_Tile_Icon)
SHOW_MAP_BODY(Normal9)
SHOW_MAP_END

DECLARE_EVENT(UIMenuWndPhotoQS_Tile_Icon)
STATE_LIST_BEGIN(UIMenuWndPhotoQS_Tile_Icon)
STATE_LIST_ITEM(ICON_QM_STILL12)
STATE_LIST_ITEM(ICON_QM_VIDEO13)
STATE_LIST_END

CREATE_STATE_DATA(UIMenuWndPhotoQS_Tile_Icon,0)
CREATE_STATE_CTRL(UIMenuWndPhotoQS_Tile_Icon,0,0,0,54,39)

//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

SHOW_ITEM_IMAGE(CMD_Image,Image16, 0, 1, 61,33, ICON_TITLE_BAR,0,0,0,0,0,0,0,0)
SHOW_ITEM_IMAGE(CMD_Image,Image17, 60, 1, 121,33, ICON_TITLE_BAR,0,0,0,0,0,0,0,0)
SHOW_ITEM_IMAGE(CMD_Image,Image18, 121, 1, 182,33, ICON_TITLE_BAR,0,0,0,0,0,0,0,0)
SHOW_MAP_BEGIN(Skin15)
SHOW_MAP_BODY(Image16)
SHOW_MAP_BODY(Image17)
SHOW_MAP_BODY(Image18)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin15,0,0,181,39)

SHOW_ITEM_TEXT(CMD_Text|CMD_ITEM,Text20,2,10,178,31,STRID_NULL,0,0,0,0,2,1,1,256,0,17,0,0,0,0)
SHOW_MAP_BEGIN(Normal14)
SHOW_MAP_BODY(Skin15)
SHOW_MAP_BODY(Text20)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Normal14,86,4,267,43)

CREATE_STATE_ITEM_DATA(STRID_EXPOSURE21,STRID_EXPOSURE,ICONID_NULL,NULL) 
CREATE_STATE_ITEM_DATA(STRID_WB22,STRID_WB,ICONID_NULL,NULL) 
SHOW_MAP_BEGIN(UIMenuWndPhotoQS_Title_Mode_Status)
SHOW_MAP_BODY(Normal14)
SHOW_MAP_END

DECLARE_EVENT(UIMenuWndPhotoQS_Title_Mode_Status)
STATE_LIST_BEGIN(UIMenuWndPhotoQS_Title_Mode_Status)
STATE_LIST_ITEM(STRID_EXPOSURE21)
STATE_LIST_ITEM(STRID_WB22)
STATE_LIST_END

CREATE_STATE_DATA(UIMenuWndPhotoQS_Title_Mode_Status,0)
CREATE_STATE_CTRL(UIMenuWndPhotoQS_Title_Mode_Status,0,74,-1,255,38)

//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

SHOW_MAP_BEGIN(UIMenuWndPhotoQS_Title_Panel)
SHOW_MAP_BODY(Skin2)
SHOW_MAP_END

DECLARE_EVENT(UIMenuWndPhotoQS_Title_Panel)
DECLARE_CTRL_LIST(UIMenuWndPhotoQS_Title_Panel)
CREATE_CTRL(UIMenuWndPhotoQS_Title_Panel,UIMenuWndPhotoQS_Title_Panel,CTRL_WND,NULL,0 ,12,5,307,44)
SHOW_ITEM_IMAGE(CMD_Image,Image24, 0, 0, 30,31, ICON_QM_HINT_BAR,0,0,0,0,0,0,0,0)
SHOW_ITEM_IMAGE(CMD_Image,Image25, 34, 0, 64,22, ICON_QM_HINT_BAR,0,0,0,0,0,0,0,0)
SHOW_ITEM_IMAGE(CMD_Image,Image26, 66, 0, 96,22, ICON_QM_HINT_BAR,0,0,0,0,0,0,0,0)
SHOW_ITEM_IMAGE(CMD_Image,Image27, 101, 0, 131,22, ICON_QM_HINT_BAR,0,0,0,0,0,0,0,0)
SHOW_ITEM_IMAGE(CMD_Image,Image28, 135, 0, 165,22, ICON_QM_HINT_BAR,0,0,0,0,0,0,0,0)
SHOW_ITEM_IMAGE(CMD_Image,Image29, 169, 0, 199,22, ICON_QM_HINT_BAR,0,0,0,0,0,0,0,0)
SHOW_ITEM_IMAGE(CMD_Image,Image30, 204, 0, 234,22, ICON_QM_HINT_BAR,0,0,0,0,0,0,0,0)
SHOW_ITEM_IMAGE(CMD_Image,Image31, 222, 0, 258,31, ICON_QM_HINT_BAR,0,0,0,0,0,0,0,0)
SHOW_ITEM_IMAGE(CMD_Image,Image32, 226, 4, 238,26, ICON_DIR_LEFT,83886080,0,0,0,0,0,0,0)
SHOW_ITEM_IMAGE(CMD_Image,Image33, 243, 4, 255,26, ICON_DIR_RIGHT,83886080,0,0,0,0,0,0,0)
SHOW_MAP_BEGIN(Skin23)
SHOW_MAP_BODY(Image24)
SHOW_MAP_BODY(Image25)
SHOW_MAP_BODY(Image26)
SHOW_MAP_BODY(Image27)
SHOW_MAP_BODY(Image28)
SHOW_MAP_BODY(Image29)
SHOW_MAP_BODY(Image30)
SHOW_MAP_BODY(Image31)
SHOW_MAP_BODY(Image32)
SHOW_MAP_BODY(Image33)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin23,0,0,258,31)

SHOW_ITEM_IMAGE(CMD_Image,Image36, 3, -1, 26,24, ICON_QM_HINT_BAR,0,0,0,0,0,0,0,0)
SHOW_MAP_BEGIN(Skin35)
SHOW_MAP_BODY(Image36)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin35,0,0,34,27)

SHOW_ITEM_IMAGE(CMD_Image|CMD_ITEM,Icon37, 5, 1, 20,16, ICONID_NULL,83886080,0,0,2,0,0,0,0)
SHOW_MAP_BEGIN(Normal34)
SHOW_MAP_BODY(Skin35)
SHOW_MAP_BODY(Icon37)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Normal34,82,203,116,230)

SHOW_ITEM_IMAGE(CMD_Image,Image40, 1, -1, 41,36, ICON_SEL_BAR_ITEM,0,0,0,0,0,0,0,0)
SHOW_MAP_BEGIN(Skin39)
SHOW_MAP_BODY(Image40)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin39,0,0,34,27)

SHOW_ITEM_IMAGE(CMD_Image|CMD_ITEM,Icon41, 5, 1, 20,16, ICONID_NULL,83886080,0,0,1,0,0,0,0)
SHOW_MAP_BEGIN(Focused38)
SHOW_MAP_BODY(Skin39)
SHOW_MAP_BODY(Icon41)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Focused38,82,203,116,230)

SHOW_MAP_BEGIN(Skin43)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin43,0,0,34,27)

SHOW_ITEM_IMAGE(CMD_Image|CMD_ITEM,Icon44, 5, 1, 20,16, ICONID_NULL,83886080,0,0,2,0,0,0,0)
SHOW_MAP_BEGIN(Normal_Disable42)
SHOW_MAP_BODY(Skin43)
SHOW_MAP_BODY(Icon44)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Normal_Disable42,82,203,116,230)

SHOW_MAP_BEGIN(Skin46)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin46,0,0,34,27)

SHOW_ITEM_IMAGE(CMD_Image|CMD_ITEM,Icon47, 5, 1, 20,16, ICONID_NULL,83886080,0,0,2,0,0,0,0)
SHOW_MAP_BEGIN(Focused_Disable45)
SHOW_MAP_BODY(Skin46)
SHOW_MAP_BODY(Icon47)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Focused_Disable45,82,203,116,230)

SHOW_MAP_BEGIN(Skin49)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin49,0,0,34,27)

SHOW_ITEM_IMAGE(CMD_Image|CMD_ITEM,Icon50, 5, 1, 20,16, ICONID_NULL,83886080,0,0,0,0,0,0,0)
SHOW_MAP_BEGIN(Pressed48)
SHOW_MAP_BODY(Skin49)
SHOW_MAP_BODY(Icon50)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Pressed48,82,203,116,230)

CREATE_MENU_ITEM_DATA(ICON_EV_M2P051,STRID_NULL,ICON_EV_M2P0,STATUS_ENABLE,NULL,NULL) 
CREATE_MENU_ITEM_DATA(ICON_EV_M1P652,STRID_MODE,ICON_EV_M1P6,STATUS_ENABLE,NULL,NULL) 
CREATE_MENU_ITEM_DATA(ICON_EV_M1P353,STRID_IMGSIZE,ICON_EV_M1P3,STATUS_ENABLE,NULL,NULL) 
CREATE_MENU_ITEM_DATA(ICON_EV_M1P054,STRID_RESOLUTION,ICON_EV_M1P0,STATUS_ENABLE,NULL,NULL) 
CREATE_MENU_ITEM_DATA(ICON_EV_M0P655,STRID_NULL,ICON_EV_M0P6,STATUS_ENABLE,NULL,NULL) 
CREATE_MENU_ITEM_DATA(ICON_EV_M0P356,STRID_NULL,ICON_EV_M0P3,STATUS_ENABLE,NULL,NULL) 
CREATE_MENU_ITEM_DATA(ICON_EV_P0P057,STRID_NULL,ICON_EV_P0P0,STATUS_ENABLE,NULL,NULL) 
CREATE_MENU_ITEM_DATA(ICON_EV_P0P358,STRID_NULL,ICON_EV_P0P3,STATUS_ENABLE,NULL,NULL) 
CREATE_MENU_ITEM_DATA(ICON_EV_P0P659,STRID_NULL,ICON_EV_P0P6,STATUS_ENABLE,NULL,NULL) 
CREATE_MENU_ITEM_DATA(ICON_EV_P1P060,STRID_NULL,ICON_EV_P1P0,STATUS_ENABLE,NULL,NULL) 
CREATE_MENU_ITEM_DATA(ICON_EV_P1P361,STRID_NULL,ICON_EV_P1P3,STATUS_ENABLE,NULL,NULL) 
CREATE_MENU_ITEM_DATA(ICON_EV_P1P662,STRID_NULL,ICON_EV_P1P6,STATUS_ENABLE,NULL,NULL) 
CREATE_MENU_ITEM_DATA(ICON_EV_P2P063,STRID_NULL,ICON_EV_P2P0,STATUS_ENABLE,NULL,NULL) 
SHOW_MAP_BEGIN(UIMenuWndPhotoQS_EV_Menu)
SHOW_MAP_BODY(Normal34)
SHOW_MAP_BODY(Focused38)
SHOW_MAP_BODY(Normal_Disable42)
SHOW_MAP_BODY(Focused_Disable45)
SHOW_MAP_BODY(Pressed48)
SHOW_MAP_END

DECLARE_EVENT(UIMenuWndPhotoQS_EV_Menu)
MENU_LIST_BEGIN(UIMenuWndPhotoQS_EV_Menu)
MENU_LIST_ITEM(ICON_EV_M2P051)
MENU_LIST_ITEM(ICON_EV_M1P652)
MENU_LIST_ITEM(ICON_EV_M1P353)
MENU_LIST_ITEM(ICON_EV_M1P054)
MENU_LIST_ITEM(ICON_EV_M0P655)
MENU_LIST_ITEM(ICON_EV_M0P356)
MENU_LIST_ITEM(ICON_EV_P0P057)
MENU_LIST_ITEM(ICON_EV_P0P358)
MENU_LIST_ITEM(ICON_EV_P0P659)
MENU_LIST_ITEM(ICON_EV_P1P060)
MENU_LIST_ITEM(ICON_EV_P1P361)
MENU_LIST_ITEM(ICON_EV_P1P662)
MENU_LIST_ITEM(ICON_EV_P2P063)
MENU_LIST_END

CREATE_MENU_DATA(UIMenuWndPhotoQS_EV_Menu,0,4,MENU_LAYOUT_HORIZONTAL|MENU_DISABLE_SHOW|MENU_SCROLL_CYCLE|MENU_SCROLL_NEXT_PAGE|MENU_DISABLE_NORMAL|MENU_DRAW_IMAGE)

CREATE_MENU_CTRL(UIMenuWndPhotoQS_EV_Menu,UIMenuWndPhotoQS_EV_Menu,0,33,1,67,28)
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

SHOW_ITEM_IMAGE(CMD_Image,Image66, 2, 0, 25,25, ICON_QM_HINT_BAR,0,0,0,0,0,0,0,0)
SHOW_MAP_BEGIN(Skin65)
SHOW_MAP_BODY(Image66)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin65,0,0,33,27)

SHOW_ITEM_IMAGE(CMD_Image|CMD_ITEM,Icon67, 4, 1, 31,25, ICONID_NULL,83886080,0,0,2,0,0,0,0)
SHOW_MAP_BEGIN(Normal64)
SHOW_MAP_BODY(Skin65)
SHOW_MAP_BODY(Icon67)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Normal64,83,202,116,229)

SHOW_ITEM_IMAGE(CMD_Image,Image70, 1, 0, 38,35, ICON_SEL_BAR_ITEM,0,0,0,0,0,0,0,0)
SHOW_MAP_BEGIN(Skin69)
SHOW_MAP_BODY(Image70)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin69,0,0,33,27)

SHOW_ITEM_IMAGE(CMD_Image|CMD_ITEM,Icon71, 4, 1, 31,25, ICONID_NULL,83886080,0,0,1,0,0,0,0)
SHOW_MAP_BEGIN(Focused68)
SHOW_MAP_BODY(Skin69)
SHOW_MAP_BODY(Icon71)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Focused68,83,202,116,229)

SHOW_MAP_BEGIN(Skin73)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin73,0,0,33,27)

SHOW_ITEM_IMAGE(CMD_Image|CMD_ITEM,Icon74, 4, 1, 31,25, ICONID_NULL,83886080,0,0,2,0,0,0,0)
SHOW_MAP_BEGIN(Normal_Disable72)
SHOW_MAP_BODY(Skin73)
SHOW_MAP_BODY(Icon74)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Normal_Disable72,83,202,116,229)

SHOW_MAP_BEGIN(Skin76)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin76,0,0,33,27)

SHOW_ITEM_IMAGE(CMD_Image|CMD_ITEM,Icon77, 4, 1, 31,25, ICONID_NULL,83886080,0,0,2,0,0,0,0)
SHOW_MAP_BEGIN(Focused_Disable75)
SHOW_MAP_BODY(Skin76)
SHOW_MAP_BODY(Icon77)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Focused_Disable75,83,202,116,229)

SHOW_MAP_BEGIN(Skin79)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin79,0,0,33,27)

SHOW_ITEM_IMAGE(CMD_Image|CMD_ITEM,Icon80, 4, 1, 31,25, ICONID_NULL,83886080,0,0,0,0,0,0,0)
SHOW_MAP_BEGIN(Pressed78)
SHOW_MAP_BODY(Skin79)
SHOW_MAP_BODY(Icon80)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Pressed78,83,202,116,229)

CREATE_MENU_ITEM_DATA(ICON_WB_AUTO81,STRID_NULL,ICON_WB_AUTO,STATUS_ENABLE,NULL,NULL) 
CREATE_MENU_ITEM_DATA(ICON_WB_CLOUDY82,STRID_MODE,ICON_WB_CLOUDY,STATUS_ENABLE,NULL,NULL) 
CREATE_MENU_ITEM_DATA(ICON_WB_DAYLIGHT83,STRID_IMGSIZE,ICON_WB_DAYLIGHT,STATUS_ENABLE,NULL,NULL) 
CREATE_MENU_ITEM_DATA(ICON_WB_FLUORESCENT84,STRID_RESOLUTION,ICON_WB_FLUORESCENT,STATUS_ENABLE,NULL,NULL) 
CREATE_MENU_ITEM_DATA(ICON_WB_TUNGSTEN85,STRID_NULL,ICON_WB_TUNGSTEN,STATUS_ENABLE,NULL,NULL) 
SHOW_MAP_BEGIN(UIMenuWndPhotoQS_AWB_Menu)
SHOW_MAP_BODY(Normal64)
SHOW_MAP_BODY(Focused68)
SHOW_MAP_BODY(Normal_Disable72)
SHOW_MAP_BODY(Focused_Disable75)
SHOW_MAP_BODY(Pressed78)
SHOW_MAP_END

DECLARE_EVENT(UIMenuWndPhotoQS_AWB_Menu)
MENU_LIST_BEGIN(UIMenuWndPhotoQS_AWB_Menu)
MENU_LIST_ITEM(ICON_WB_AUTO81)
MENU_LIST_ITEM(ICON_WB_CLOUDY82)
MENU_LIST_ITEM(ICON_WB_DAYLIGHT83)
MENU_LIST_ITEM(ICON_WB_FLUORESCENT84)
MENU_LIST_ITEM(ICON_WB_TUNGSTEN85)
MENU_LIST_END

CREATE_MENU_DATA(UIMenuWndPhotoQS_AWB_Menu,0,5,MENU_LAYOUT_HORIZONTAL|MENU_DISABLE_SHOW|MENU_SCROLL_CYCLE|MENU_SCROLL_NEXT_PAGE|MENU_DISABLE_NORMAL|MENU_DRAW_IMAGE)

CREATE_MENU_CTRL(UIMenuWndPhotoQS_AWB_Menu,UIMenuWndPhotoQS_AWB_Menu,0,34,0,67,27)
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

SHOW_MAP_BEGIN(UIMenuWndPhotoQS_End_Panel)
SHOW_MAP_BODY(Skin23)
SHOW_MAP_END

DECLARE_EVENT(UIMenuWndPhotoQS_End_Panel)
DECLARE_CTRL_LIST(UIMenuWndPhotoQS_End_Panel)
CREATE_CTRL(UIMenuWndPhotoQS_End_Panel,UIMenuWndPhotoQS_End_Panel,CTRL_WND,NULL,0 ,49,202,307,233)
SHOW_ITEM_IMAGE(CMD_Image,Image87, 0, 0, 37,161, ICON_QM_ITEM_BAR,0,0,0,0,0,0,0,0)
SHOW_MAP_BEGIN(Skin86)
SHOW_MAP_BODY(Image87)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin86,0,0,37,156)

SHOW_MAP_BEGIN(Skin89)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin89,0,0,27,41)

SHOW_ITEM_IMAGE(CMD_Image|CMD_ITEM,Icon90, 1, 2, 16,17, ICONID_NULL,83886080,0,0,2,0,0,0,0)
SHOW_MAP_BEGIN(Normal88)
SHOW_MAP_BODY(Skin89)
SHOW_MAP_BODY(Icon90)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Normal88,16,54,43,95)

SHOW_ITEM_IMAGE(CMD_Image,Image93, -3, 0, 21,22, ICON_SEL_BAR_ITEM,0,0,0,0,0,0,0,0)
SHOW_MAP_BEGIN(Skin92)
SHOW_MAP_BODY(Image93)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin92,0,0,27,41)

SHOW_ITEM_IMAGE(CMD_Image|CMD_ITEM,Icon94, 1, 2, 16,17, ICONID_NULL,83886080,0,0,1,0,0,0,0)
SHOW_MAP_BEGIN(Focused91)
SHOW_MAP_BODY(Skin92)
SHOW_MAP_BODY(Icon94)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Focused91,16,54,43,95)

SHOW_MAP_BEGIN(Skin96)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin96,0,0,27,41)

SHOW_ITEM_IMAGE(CMD_Image|CMD_ITEM,Icon97, 1, 2, 16,17, ICONID_NULL,83886080,0,0,2,0,0,0,0)
SHOW_MAP_BEGIN(Normal_Disable95)
SHOW_MAP_BODY(Skin96)
SHOW_MAP_BODY(Icon97)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Normal_Disable95,16,54,43,95)

SHOW_MAP_BEGIN(Skin99)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin99,0,0,27,41)

SHOW_ITEM_IMAGE(CMD_Image|CMD_ITEM,Icon100, 1, 2, 16,17, ICONID_NULL,83886080,0,0,2,0,0,0,0)
SHOW_MAP_BEGIN(Focused_Disable98)
SHOW_MAP_BODY(Skin99)
SHOW_MAP_BODY(Icon100)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Focused_Disable98,16,54,43,95)

SHOW_MAP_BEGIN(Skin102)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin102,0,0,27,41)

SHOW_ITEM_IMAGE(CMD_Image|CMD_ITEM,Icon103, 1, 2, 16,17, ICONID_NULL,83886080,0,0,0,0,0,0,0)
SHOW_MAP_BEGIN(Pressed101)
SHOW_MAP_BODY(Skin102)
SHOW_MAP_BODY(Icon103)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Pressed101,16,54,43,95)

CREATE_MENU_ITEM_DATA(ICON_EV_P0P0104,STRID_NULL,ICON_EV_P0P0,STATUS_ENABLE,NULL,NULL) 
CREATE_MENU_ITEM_DATA(ICON_WB_AUTO105,STRID_NULL,ICON_WB_AUTO,STATUS_ENABLE,NULL,NULL) 
SHOW_MAP_BEGIN(UIMenuWndPhotoQS_Left_Menu)
SHOW_MAP_BODY(Normal88)
SHOW_MAP_BODY(Focused91)
SHOW_MAP_BODY(Normal_Disable95)
SHOW_MAP_BODY(Focused_Disable98)
SHOW_MAP_BODY(Pressed101)
SHOW_MAP_END

DECLARE_EVENT(UIMenuWndPhotoQS_Left_Menu)
MENU_LIST_BEGIN(UIMenuWndPhotoQS_Left_Menu)
MENU_LIST_ITEM(ICON_EV_P0P0104)
MENU_LIST_ITEM(ICON_WB_AUTO105)
MENU_LIST_END

CREATE_MENU_DATA(UIMenuWndPhotoQS_Left_Menu,0,2,MENU_LAYOUT_VERTICAL|MENU_DISABLE_HIDE|MENU_SCROLL_CYCLE|MENU_SCROLL_NEXT_PAGE|MENU_DISABLE_SKIP|MENU_DRAW_IMAGE)

CREATE_MENU_CTRL(UIMenuWndPhotoQS_Left_Menu,UIMenuWndPhotoQS_Left_Menu,0,4,5,31,46)
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

SHOW_MAP_BEGIN(UIMenuWndPhotoQS_Left_Panel)
SHOW_MAP_BODY(Skin86)
SHOW_MAP_END

DECLARE_EVENT(UIMenuWndPhotoQS_Left_Panel)
DECLARE_CTRL_LIST(UIMenuWndPhotoQS_Left_Panel)
CREATE_CTRL(UIMenuWndPhotoQS_Left_Panel,UIMenuWndPhotoQS_Left_Panel,CTRL_WND,NULL,0 ,12,49,49,205)
SHOW_ITEM_RECT(CMD_Rectangle,Skin107Rect,0,0,254,27,0,0,0,0,0,0,0)
SHOW_MAP_BEGIN(Skin107)
SHOW_MAP_BODY(Skin107Rect)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin107,0,0,254,27)

SHOW_ITEM_TEXT(CMD_Text|CMD_ITEM,Text109,6,6,245,21,STRID_NULL,0,0,0,0,2,1,1,256,0,17,0,0,0,0)
SHOW_MAP_BEGIN(Normal106)
SHOW_MAP_BODY(Skin107)
SHOW_MAP_BODY(Text109)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Normal106,49,175,303,202)

CREATE_STATE_ITEM_DATA(STRID_AUTO110,STRID_AUTO,ICONID_NULL,NULL) 
CREATE_STATE_ITEM_DATA(STRID_WB_CLOUDY111,STRID_WB_CLOUDY,ICONID_NULL,NULL) 
CREATE_STATE_ITEM_DATA(STRID_WB_DAY112,STRID_WB_DAY,ICONID_NULL,NULL) 
CREATE_STATE_ITEM_DATA(STRID_WB_TUNGSTEN113,STRID_WB_TUNGSTEN,ICONID_NULL,NULL) 
CREATE_STATE_ITEM_DATA(STRID_WB_FLUORESCENT114,STRID_WB_FLUORESCENT,ICONID_NULL,NULL) 
SHOW_MAP_BEGIN(UIMenuWndPhotoQS_Help_Status)
SHOW_MAP_BODY(Normal106)
SHOW_MAP_END

DECLARE_EVENT(UIMenuWndPhotoQS_Help_Status)
STATE_LIST_BEGIN(UIMenuWndPhotoQS_Help_Status)
STATE_LIST_ITEM(STRID_AUTO110)
STATE_LIST_ITEM(STRID_WB_CLOUDY111)
STATE_LIST_ITEM(STRID_WB_DAY112)
STATE_LIST_ITEM(STRID_WB_TUNGSTEN113)
STATE_LIST_ITEM(STRID_WB_FLUORESCENT114)
STATE_LIST_END

CREATE_STATE_DATA(UIMenuWndPhotoQS_Help_Status,0)
CREATE_STATE_CTRL(UIMenuWndPhotoQS_Help_Status,0,49,175,303,202)

//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

SHOW_MAP_BEGIN(UIMenuWndPhotoQuickSetting)
SHOW_MAP_BODY(Skin1)
SHOW_MAP_END

DECLARE_EVENT(UIMenuWndPhotoQuickSetting)
DECLARE_CTRL_LIST(UIMenuWndPhotoQuickSetting)
CREATE_CTRL(UIMenuWndPhotoQuickSetting,UIMenuWndPhotoQuickSetting,CTRL_WND,NULL,0 ,0,0,319,239)
#endif