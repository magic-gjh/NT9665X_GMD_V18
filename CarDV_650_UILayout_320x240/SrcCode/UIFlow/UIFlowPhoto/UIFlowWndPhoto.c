//This source code is generated by UI Designer Studio.

#include "UIFramework.h"
#include "UIFrameworkExt.h"
#include "UIGraphics.h"
#include "NVTToolCommand.h"
#include "UIFlowWndPhotoRes.c"
#include "UIFlowWndPhoto.h"
#include "PrjCfg.h"

//---------------------UIFlowWndPhotoCtrl Debug Definition -----------------------------
#define _UIFLOWWNDPHOTO_ERROR_MSG        1
#define _UIFLOWWNDPHOTO_TRACE_MSG        0

#if (_UIFLOWWNDPHOTO_ERROR_MSG&(PRJ_DBG_LVL>=PRJ_DBG_LVL_ERR))
#define UIFlowWndPhotoErrMsg(...)            debug_msg ("^R UIFlowWndPhoto: "__VA_ARGS__)
#else
#define UIFlowWndPhotoErrMsg(...)
#endif

#if (_UIFLOWWNDPHOTO_TRACE_MSG&(PRJ_DBG_LVL>=PRJ_DBG_LVL_TRC))
#define UIFlowWndPhotoTraceMsg(...)          debug_msg ("^B UIFlowWndPhoto: "__VA_ARGS__)
#else
#define UIFlowWndPhotoTraceMsg(...)
#endif

//---------------------UIFlowWndPhotoCtrl Global Variables -----------------------------

//---------------------UIFlowWndPhotoCtrl Prototype Declaration  -----------------------

//---------------------UIFlowWndPhotoCtrl Public API  ----------------------------------

//---------------------UIFlowWndPhotoCtrl Private API  ---------------------------------
//---------------------UIFlowWndPhotoCtrl Control List---------------------------
CTRL_LIST_BEGIN(UIFlowWndPhoto)
CTRL_LIST_ITEM(UIFlowWndPhoto_StaticICN_DSCMode)
CTRL_LIST_ITEM(UIFlowWndPhoto_StatusICN_Selftimer)
CTRL_LIST_ITEM(UIFlowWndPhoto_StaticTXT_FreePic)
CTRL_LIST_ITEM(UIFlowWndPhoto_StatusICN_EV)
CTRL_LIST_ITEM(UIFlowWndPhoto_StatusICN_ISO)
CTRL_LIST_ITEM(UIFlowWndPhoto_StaticTXT_Size)
CTRL_LIST_ITEM(UIFlowWndPhoto_StatusICN_AntiShaking)
CTRL_LIST_ITEM(UIFlowWndPhoto_StatusICN_WB)
CTRL_LIST_ITEM(UIFlowWndPhoto_StatusICN_FD)
CTRL_LIST_ITEM(UIFlowWndPhoto_StatusICN_Quality)
CTRL_LIST_ITEM(UIFlowWndPhoto_StatusICN_Storage)
CTRL_LIST_ITEM(UIFlowWndPhoto_StaticTXT_DZoom)
CTRL_LIST_ITEM(UIFlowWndPhoto_StatusICN_Battery)
CTRL_LIST_ITEM(UIFlowWndPhoto_StaticTXT_SelftimerCnt)
CTRL_LIST_ITEM(UIFlowWndPhoto_PNL_Histogram)
CTRL_LIST_ITEM(UIFlowWndPhoto_PNL_FDFrame)
CTRL_LIST_ITEM(UIFlowWndPhoto_StatusICN_ContinueShot)
CTRL_LIST_END

//----------------------UIFlowWndPhotoCtrl Event---------------------------
INT32 UIFlowWndPhoto_OnOpen(VControl *, UINT32, UINT32 *);
INT32 UIFlowWndPhoto_OnClose(VControl *, UINT32, UINT32 *);
INT32 UIFlowWndPhoto_OnKeyUp(VControl *, UINT32, UINT32 *);
INT32 UIFlowWndPhoto_OnKeyDown(VControl *, UINT32, UINT32 *);
INT32 UIFlowWndPhoto_OnKeyShutter1(VControl *, UINT32, UINT32 *);
INT32 UIFlowWndPhoto_OnKeyShutter2(VControl *, UINT32, UINT32 *);
INT32 UIFlowWndPhoto_OnKeyZoomin(VControl *, UINT32, UINT32 *);
INT32 UIFlowWndPhoto_OnKeyZoomout(VControl *, UINT32, UINT32 *);
INT32 UIFlowWndPhoto_OnKeyEnter(VControl *, UINT32, UINT32 *);
INT32 UIFlowWndPhoto_OnKeyMenu(VControl *, UINT32, UINT32 *);
INT32 UIFlowWndPhoto_OnKeyMode(VControl *, UINT32, UINT32 *);
INT32 UIFlowWndPhoto_OnKeyPlayback(VControl *, UINT32, UINT32 *);
INT32 UIFlowWndPhoto_OnChildClose(VControl *, UINT32, UINT32 *);
INT32 UIFlowWndPhoto_OnStorageInit(VControl *, UINT32, UINT32 *);
INT32 UIFlowWndPhoto_OnStorageChange(VControl *, UINT32, UINT32 *);
INT32 UIFlowWndPhoto_OnBattery(VControl *, UINT32, UINT32 *);
INT32 UIFlowWndPhoto_OnTimer(VControl *, UINT32, UINT32 *);
INT32 UIFlowWndPhoto_OnJpgOK(VControl *, UINT32, UINT32 *);
INT32 UIFlowWndPhoto_OnCapFstOK(VControl *, UINT32, UINT32 *);
INT32 UIFlowWndPhoto_OnOZoomStepChange(VControl *, UINT32, UINT32 *);
INT32 UIFlowWndPhoto_OnDZoomStepChange(VControl *, UINT32, UINT32 *);
INT32 UIFlowWndPhoto_OnFocusEnd(VControl *, UINT32, UINT32 *);
INT32 UIFlowWndPhoto_OnFdEnd(VControl *, UINT32, UINT32 *);
INT32 UIFlowWndPhoto_OnSdEnd(VControl *, UINT32, UINT32 *);
EVENT_BEGIN(UIFlowWndPhoto)
EVENT_ITEM(NVTEVT_OPEN_WINDOW,UIFlowWndPhoto_OnOpen)
EVENT_ITEM(NVTEVT_CLOSE_WINDOW,UIFlowWndPhoto_OnClose)
EVENT_ITEM(NVTEVT_KEY_UP,UIFlowWndPhoto_OnKeyUp)
EVENT_ITEM(NVTEVT_KEY_DOWN,UIFlowWndPhoto_OnKeyDown)
EVENT_ITEM(NVTEVT_KEY_SHUTTER1,UIFlowWndPhoto_OnKeyShutter1)
EVENT_ITEM(NVTEVT_KEY_SHUTTER2,UIFlowWndPhoto_OnKeyShutter2)
EVENT_ITEM(NVTEVT_KEY_ZOOMIN,UIFlowWndPhoto_OnKeyZoomin)
EVENT_ITEM(NVTEVT_KEY_ZOOMOUT,UIFlowWndPhoto_OnKeyZoomout)
EVENT_ITEM(NVTEVT_KEY_ENTER,UIFlowWndPhoto_OnKeyEnter)
EVENT_ITEM(NVTEVT_KEY_MENU,UIFlowWndPhoto_OnKeyMenu)
EVENT_ITEM(NVTEVT_KEY_MODE,UIFlowWndPhoto_OnKeyMode)
EVENT_ITEM(NVTEVT_KEY_PLAYBACK,UIFlowWndPhoto_OnKeyPlayback)
EVENT_ITEM(NVTEVT_CHILD_CLOSE,UIFlowWndPhoto_OnChildClose)
EVENT_ITEM(NVTEVT_STORAGE_INIT,UIFlowWndPhoto_OnStorageInit)
EVENT_ITEM(NVTEVT_STORAGE_CHANGE,UIFlowWndPhoto_OnStorageChange)
EVENT_ITEM(NVTEVT_BATTERY,UIFlowWndPhoto_OnBattery)
EVENT_ITEM(NVTEVT_TIMER,UIFlowWndPhoto_OnTimer)
EVENT_ITEM(NVTEVT_CB_JPGOK,UIFlowWndPhoto_OnJpgOK)
EVENT_ITEM(NVTEVT_CB_CAPFSTOK,UIFlowWndPhoto_OnCapFstOK)
EVENT_ITEM(NVTEVT_CB_OZOOMSTEPCHG,UIFlowWndPhoto_OnOZoomStepChange)
EVENT_ITEM(NVTEVT_CB_DZOOMSTEPCHG,UIFlowWndPhoto_OnDZoomStepChange)
EVENT_ITEM(NVTEVT_CB_FOCUSEND,UIFlowWndPhoto_OnFocusEnd)
EVENT_ITEM(NVTEVT_CB_FDEND,UIFlowWndPhoto_OnFdEnd)
EVENT_ITEM(NVTEVT_CB_SDEND,UIFlowWndPhoto_OnSdEnd)
EVENT_END

INT32 UIFlowWndPhoto_OnOpen(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    Ux_DefaultEvent(pCtrl,NVTEVT_OPEN_WINDOW,paramNum,paramArray);
    return NVTEVT_CONSUME;
}
INT32 UIFlowWndPhoto_OnClose(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    Ux_DefaultEvent(pCtrl,NVTEVT_CLOSE_WINDOW,paramNum,paramArray);
    return NVTEVT_CONSUME;
}
INT32 UIFlowWndPhoto_OnKeyUp(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    return NVTEVT_CONSUME;
}
INT32 UIFlowWndPhoto_OnKeyDown(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    return NVTEVT_CONSUME;
}
INT32 UIFlowWndPhoto_OnKeyShutter1(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    return NVTEVT_CONSUME;
}
INT32 UIFlowWndPhoto_OnKeyShutter2(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    return NVTEVT_CONSUME;
}
INT32 UIFlowWndPhoto_OnKeyZoomin(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    return NVTEVT_CONSUME;
}
INT32 UIFlowWndPhoto_OnKeyZoomout(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    return NVTEVT_CONSUME;
}
INT32 UIFlowWndPhoto_OnKeyEnter(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    return NVTEVT_CONSUME;
}
INT32 UIFlowWndPhoto_OnKeyMenu(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    return NVTEVT_CONSUME;
}
INT32 UIFlowWndPhoto_OnKeyMode(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    return NVTEVT_CONSUME;
}
INT32 UIFlowWndPhoto_OnKeyPlayback(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    return NVTEVT_CONSUME;
}
INT32 UIFlowWndPhoto_OnChildClose(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    Ux_DefaultEvent(pCtrl,NVTEVT_CHILD_CLOSE,paramNum,paramArray);
    return NVTEVT_CONSUME;
}
INT32 UIFlowWndPhoto_OnStorageInit(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    return NVTEVT_CONSUME;
}
INT32 UIFlowWndPhoto_OnStorageChange(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    return NVTEVT_CONSUME;
}
INT32 UIFlowWndPhoto_OnBattery(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    return NVTEVT_CONSUME;
}
INT32 UIFlowWndPhoto_OnTimer(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    return NVTEVT_CONSUME;
}
INT32 UIFlowWndPhoto_OnJpgOK(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    return NVTEVT_CONSUME;
}
INT32 UIFlowWndPhoto_OnCapFstOK(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    return NVTEVT_CONSUME;
}
INT32 UIFlowWndPhoto_OnOZoomStepChange(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    return NVTEVT_CONSUME;
}
INT32 UIFlowWndPhoto_OnDZoomStepChange(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    return NVTEVT_CONSUME;
}
INT32 UIFlowWndPhoto_OnFocusEnd(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    return NVTEVT_CONSUME;
}
INT32 UIFlowWndPhoto_OnFdEnd(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    return NVTEVT_CONSUME;
}
INT32 UIFlowWndPhoto_OnSdEnd(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    return NVTEVT_CONSUME;
}
//----------------------UIFlowWndPhoto_StaticICN_DSCModeCtrl Event---------------------------
EVENT_BEGIN(UIFlowWndPhoto_StaticICN_DSCMode)
EVENT_END

//----------------------UIFlowWndPhoto_StatusICN_SelftimerCtrl Event---------------------------
INT32 UIFlowWndPhoto_StatusICN_Selftimer_OnKeyLeft(VControl *, UINT32, UINT32 *);
EVENT_BEGIN(UIFlowWndPhoto_StatusICN_Selftimer)
EVENT_ITEM(NVTEVT_KEY_LEFT,UIFlowWndPhoto_StatusICN_Selftimer_OnKeyLeft)
EVENT_END

INT32 UIFlowWndPhoto_StatusICN_Selftimer_OnKeyLeft(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    Ux_SendEvent(pCtrl,NVTEVT_NEXT_ITEM,0);
    return NVTEVT_CONSUME;
}
//----------------------UIFlowWndPhoto_StaticTXT_FreePicCtrl Event---------------------------
EVENT_BEGIN(UIFlowWndPhoto_StaticTXT_FreePic)
EVENT_END

//----------------------UIFlowWndPhoto_StatusICN_EVCtrl Event---------------------------
EVENT_BEGIN(UIFlowWndPhoto_StatusICN_EV)
EVENT_END

//----------------------UIFlowWndPhoto_StatusICN_ISOCtrl Event---------------------------
EVENT_BEGIN(UIFlowWndPhoto_StatusICN_ISO)
EVENT_END

//----------------------UIFlowWndPhoto_StaticTXT_SizeCtrl Event---------------------------
EVENT_BEGIN(UIFlowWndPhoto_StaticTXT_Size)
EVENT_END

//----------------------UIFlowWndPhoto_StatusICN_AntiShakingCtrl Event---------------------------
EVENT_BEGIN(UIFlowWndPhoto_StatusICN_AntiShaking)
EVENT_END

//----------------------UIFlowWndPhoto_StatusICN_WBCtrl Event---------------------------
EVENT_BEGIN(UIFlowWndPhoto_StatusICN_WB)
EVENT_END

//----------------------UIFlowWndPhoto_StatusICN_FDCtrl Event---------------------------
EVENT_BEGIN(UIFlowWndPhoto_StatusICN_FD)
EVENT_END

//----------------------UIFlowWndPhoto_StatusICN_QualityCtrl Event---------------------------
EVENT_BEGIN(UIFlowWndPhoto_StatusICN_Quality)
EVENT_END

//----------------------UIFlowWndPhoto_StatusICN_StorageCtrl Event---------------------------
EVENT_BEGIN(UIFlowWndPhoto_StatusICN_Storage)
EVENT_END

//----------------------UIFlowWndPhoto_StaticTXT_DZoomCtrl Event---------------------------
EVENT_BEGIN(UIFlowWndPhoto_StaticTXT_DZoom)
EVENT_END

//----------------------UIFlowWndPhoto_StatusICN_BatteryCtrl Event---------------------------
EVENT_BEGIN(UIFlowWndPhoto_StatusICN_Battery)
EVENT_END

//----------------------UIFlowWndPhoto_StaticTXT_SelftimerCntCtrl Event---------------------------
EVENT_BEGIN(UIFlowWndPhoto_StaticTXT_SelftimerCnt)
EVENT_END

//---------------------UIFlowWndPhoto_PNL_HistogramCtrl Control List---------------------------
CTRL_LIST_BEGIN(UIFlowWndPhoto_PNL_Histogram)
CTRL_LIST_END

//----------------------UIFlowWndPhoto_PNL_HistogramCtrl Event---------------------------
INT32 UIFlowWndPhoto_PNL_Histogram_OnTimer(VControl *, UINT32, UINT32 *);
INT32 UIFlowWndPhoto_PNL_Histogram_OnRedraw(VControl *, UINT32, UINT32 *);
EVENT_BEGIN(UIFlowWndPhoto_PNL_Histogram)
EVENT_ITEM(NVTEVT_TIMER,UIFlowWndPhoto_PNL_Histogram_OnTimer)
EVENT_ITEM(NVTEVT_REDRAW,UIFlowWndPhoto_PNL_Histogram_OnRedraw)
EVENT_END

INT32 UIFlowWndPhoto_PNL_Histogram_OnTimer(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    return NVTEVT_CONSUME;
}
INT32 UIFlowWndPhoto_PNL_Histogram_OnRedraw(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    return NVTEVT_CONSUME;
}
//---------------------UIFlowWndPhoto_PNL_FDFrameCtrl Control List---------------------------
CTRL_LIST_BEGIN(UIFlowWndPhoto_PNL_FDFrame)
CTRL_LIST_END

//----------------------UIFlowWndPhoto_PNL_FDFrameCtrl Event---------------------------
INT32 UIFlowWndPhoto_PNL_FDFrame_OnRedraw(VControl *, UINT32, UINT32 *);
EVENT_BEGIN(UIFlowWndPhoto_PNL_FDFrame)
EVENT_ITEM(NVTEVT_REDRAW,UIFlowWndPhoto_PNL_FDFrame_OnRedraw)
EVENT_END

INT32 UIFlowWndPhoto_PNL_FDFrame_OnRedraw(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    return NVTEVT_CONSUME;
}
//----------------------UIFlowWndPhoto_StatusICN_ContinueShotCtrl Event---------------------------
EVENT_BEGIN(UIFlowWndPhoto_StatusICN_ContinueShot)
EVENT_END
