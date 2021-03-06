//This source code is generated by UI Designer Studio.

#include "UIFramework.h"
#include "UIFrameworkExt.h"
#include "UIGraphics.h"
#include "NVTToolCommand.h"
#include "UIMenuWndPlaySlideShowCBRes.c"
#include "UIMenuWndPlaySlideShowCB.h"
#include "PrjCfg.h"

//---------------------UIMenuWndPlaySlideShowCBCtrl Debug Definition -----------------------------
#define _UIMENUWNDPLAYSLIDESHOWCB_ERROR_MSG        1
#define _UIMENUWNDPLAYSLIDESHOWCB_TRACE_MSG        0

#if (_UIMENUWNDPLAYSLIDESHOWCB_ERROR_MSG&(PRJ_DBG_LVL>=PRJ_DBG_LVL_ERR))
#define UIMenuWndPlaySlideShowCBErrMsg(...)            debug_msg ("^R UIMenuWndPlaySlideShowCB: "__VA_ARGS__)
#else
#define UIMenuWndPlaySlideShowCBErrMsg(...)
#endif

#if (_UIMENUWNDPLAYSLIDESHOWCB_TRACE_MSG&(PRJ_DBG_LVL>=PRJ_DBG_LVL_TRC))
#define UIMenuWndPlaySlideShowCBTraceMsg(...)          debug_msg ("^B UIMenuWndPlaySlideShowCB: "__VA_ARGS__)
#else
#define UIMenuWndPlaySlideShowCBTraceMsg(...)
#endif

//---------------------UIMenuWndPlaySlideShowCBCtrl Global Variables -----------------------------

//---------------------UIMenuWndPlaySlideShowCBCtrl Prototype Declaration  -----------------------

//---------------------UIMenuWndPlaySlideShowCBCtrl Public API  ----------------------------------

//---------------------UIMenuWndPlaySlideShowCBCtrl Private API  ---------------------------------
//---------------------UIMenuWndPlaySlideShowCBCtrl Control List---------------------------
CTRL_LIST_BEGIN(UIMenuWndPlaySlideShowCB)
CTRL_LIST_END

//----------------------UIMenuWndPlaySlideShowCBCtrl Event---------------------------
INT32 UIMenuWndPlaySlideShowCB_OnOpen(VControl *, UINT32, UINT32 *);
INT32 UIMenuWndPlaySlideShowCB_OnClose(VControl *, UINT32, UINT32 *);
EVENT_BEGIN(UIMenuWndPlaySlideShowCB)
EVENT_ITEM(NVTEVT_OPEN_WINDOW,UIMenuWndPlaySlideShowCB_OnOpen)
EVENT_ITEM(NVTEVT_CLOSE_WINDOW,UIMenuWndPlaySlideShowCB_OnClose)
EVENT_END

INT32 UIMenuWndPlaySlideShowCB_OnOpen(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    Ux_DefaultEvent(pCtrl,NVTEVT_OPEN_WINDOW,paramNum,paramArray);
    return NVTEVT_CONSUME;
}
INT32 UIMenuWndPlaySlideShowCB_OnClose(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    Ux_DefaultEvent(pCtrl,NVTEVT_CLOSE_WINDOW,paramNum,paramArray);
    return NVTEVT_CONSUME;
}
