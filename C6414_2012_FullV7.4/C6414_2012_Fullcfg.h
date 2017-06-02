/*   Do *not* directly modify this file.  It was    */
/*   generated by the Configuration Tool; any  */
/*   changes risk being overwritten.                */

/* INPUT C6414_2012_Full.cdb */

#define CHIP_6414 1

/*  Include Header Files  */
#include <std.h>
#include <hst.h>
#include <swi.h>
#include <tsk.h>
#include <log.h>
#include <sem.h>
#include <lck.h>
#include <sts.h>
#include <csl.h>
#include <csl_edma.h>
#include <csl_emifa.h>
#include <csl_emifb.h>

#ifdef __cplusplus
extern "C" {
#endif

extern far HST_Obj RTA_fromHost;
extern far HST_Obj RTA_toHost;
extern far SWI_Obj KNL_swi;
extern far TSK_Obj TSK_idle;
extern far TSK_Obj TSK_KEY;
extern far TSK_Obj TSK_GUI_INPUT;
extern far TSK_Obj TSK_SHOW_CAPTURE_IMAGE;
extern far TSK_Obj TSK_REGISTER;
extern far TSK_Obj TSK_RECOGNITION;
extern far TSK_Obj TSK_SEND_MESSAGE;
extern far TSK_Obj TSK_SUB_MANAGER;
extern far TSK_Obj TSK_PASSWORD;
extern far LOG_Obj LOG_system;
extern far SEM_Obj SEM_CAMERA;
extern far SEM_Obj SEM_INPUT;
extern far SEM_Obj SEM_OK;
extern far SEM_Obj SEM_CAPTURE;
extern far SEM_Obj SEM_REGISTER;
extern far SEM_Obj SEM_RECOGNITION;
extern far SEM_Obj SEM_T9;
extern far SEM_Obj SEM_SUB_MANAGER;
extern far SEM_Obj SEM_PASSWORD;
extern far LCK_Obj flash_lock;
extern far STS_Obj IDL_busyObj;
extern far EDMA_Config edmaCfg_FingerVein;
extern far EDMA_Config edmaCfg_FingerPrint;
extern far EMIFA_Config MyEmifaConfig;
extern far EMIFB_Config MyEmifbConfig;
extern far EDMA_Handle hEdmaCha5;
extern far EDMA_Handle hEdmaCha7;
extern far void CSL_cfgInit();

#ifdef __cplusplus
}
#endif /* extern "C" */
