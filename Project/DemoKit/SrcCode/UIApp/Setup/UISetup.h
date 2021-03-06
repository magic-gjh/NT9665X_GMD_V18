
#ifndef UI_SYSTEMOBJ_H
#define UI_SYSTEMOBJ_H

#include "UIFramework.h"
#include "NVTUserCommand.h"
#include "UIInfo.h"

// Change DSC mode type
#define DSCMODE_CHGTO_NEXT              0
#define DSCMODE_CHGTO_PREV              1
#define DSCMODE_CHGTO_CURR              2

//#NT#2009/10/29#Jeah Yen - begin
// APP event class

typedef enum
{
    NVTEVT_EXE_FORMAT   = NVTEVT_SYS_MAX + 1,
    NVTEVT_EXE_BEEPVOLUME,
    NVTEVT_EXE_BEEPSHUTTER,
    NVTEVT_EXE_BEEPKEY,
    NVTEVT_EXE_BEEPSELFTIMER,
    NVTEVT_EXE_BEEPPOWER,
    NVTEVT_EXE_SLIDESHOW_EFFECT,
    NVTEVT_EXE_SLIDESHOW_INTERVAL,
    NVTEVT_EXE_SLIDESHOW_REPEAT,
//#NT#2011/01/12#Steven feng -begin
#if ( SLIDESHOW_MUSIC_OPTION ==   ENABLE )
    NVTEVT_EXE_SLIDESHOW_MUSIC,
#endif
//#NT#2011/01/12#Steven feng -end
    NVTEVT_EXE_LANGUAGE,
//#NT#2012/07/04#Philex Lin -begin
    NVTEVT_EXE_SENSOR_ROTATE,
    NVTEVT_EXE_CHANGEDSCMODE,
    NVTEVT_FORCETO_LIVEVIEW_MODE,
    NVTEVT_FORCETO_PLAYBACK_MODE,
    NVTEVT_FILEID_RESET,
    NVTEVT_EXE_LED,
    //#NT#2012/07/04#Philex Lin -end
    //#NT#2009/12/17#Photon Lin -begin
    NVTEVT_EXE_LCDOFF,
    //#NT#2009/12/17#Photon Lin -end
    NVTEVT_EXE_POWEROFF,
    //#NT#2010/01/14#Photon Lin -begin
    NVTEVT_EXE_PANMODE,
    //#NT#2010/01/14#Photon Lin -end
    NVTEVT_EXE_DELAYOFF,
    NVTEVT_EXE_SYSRESET,
    NVTEVT_EXE_SYSRESET_NO_WIN,//#NT#2010/03/08#Lily Kao
    NVTEVT_EXE_NUMRESET,
    NVTEVT_EXE_FREQ,
    NVTEVT_EXE_BRIGHTADJ,
    NVTEVT_EXE_BRIGHTLVL,
    NVTEVT_EXE_DISPLAY,
    NVTEVT_EXE_DATEFORMAT,
    //#NT#2010/01/28#JeahYen -begin
    NVTEVT_EXE_TIMEFORMAT,
    //#NT#2010/01/28#JeahYen -end
    NVTEVT_EXE_USBMODE,
    //#NT#2010/01/20#JeahYen -begin
    NVTEVT_EXE_DISPLAYDEV,
    //#NT#2010/01/20#JeahYen -end
    NVTEVT_EXE_TVFORMAT,
    NVTEVT_EXE_HDMIFORMAT,
    NVTEVT_EXE_DUALDISP,
    //#NT#2009/12/17#Ben Wang -begin
    //#NT#2009/12/16#Lincy Lin -begin
    NVTEVT_EXE_FWUPDATE,
    NVTEVT_PREVIEWMODE,
    //#NT#2009/12/16#Lincy Lin -end
    //#NT#2009/12/17#Ben Wang -end
    //#NT#2009/12/17#Photon Lin -begin
    NVTEVT_EXE_WALLPAPER_MENU,
    NVTEVT_EXE_WALLPAPER_STARTUP,
    //#NT#2010/01/08#Lincy -begin
    NVTEVT_EXE_WALLPAPER_BACK,
    NVTEVT_EXE_SET_DCFNEXTID,
    //#NT#2010/01/08#Lincy -end
    NVTEVT_EXE_SETUPCOPY2CARD,
    //#NT#2009/12/17#Photon Lin -end
    NVTEVT_EXE_ZONE,
    //#NT#2010/03/29#Lincy Lin -begin
    //#NT#Add for playback retract lens
    NVTEVT_EXE_PB_RETRACT_LENS,
    //#NT#2010/03/29#Lincy Lin -end
    //#NT#2010/10/01#Lincy Lin -begin
    //#NT#
    NVTEVT_EXE_FILESYS_INIT,
    //#NT#2010/10/01#Lincy Lin -end
    NVTEVT_EXE_WIFI_START,
    NVTEVT_EXE_WIFI_STOP,
}
CUSTOM_SYS_EVENT;
//#NT#2009/10/29#Jeah Yen - end

extern VControl UISetupObjCtrl;

extern EVENT_ENTRY UISystemObjCtrlCmdMap[];

#endif //UI_SYSTEMOBJ_H
