/*
**  Copyright 2022 bitValence, Inc.
**  All Rights Reserved.
**
**  This program is free software; you can modify and/or redistribute it
**  under the terms of the GNU Affero General Public License
**  as published by the Free Software Foundation; version 3 with
**  attribution addendums as found in the LICENSE.txt
**
**  This program is distributed in the hope that it will be useful,
**  but WITHOUT ANY WARRANTY; without even the implied warranty of
**  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
**  GNU Affero General Public License for more details.
**
**  Purpose:
**    Define application configurations for the GPIO Demo application
**
**  Notes:
**    1. These macros can only be built with the application and can't
**       have a platform scope because the same app_cfg.h filename is used for
**       all applications following the object-based application design.
**
**  References:
**    1. OpenSatKit Object-based Application Developer's Guide.
**    2. cFS Application Developer's Guide.
**
*/

#ifndef _app_cfg_
#define _app_cfg_

/*
** Includes
*/

#include "gpio_demo_eds_typedefs.h"
//#include "gpio_demo_eds_designparameters.h"

#include "gpio_demo_platform_cfg.h"
#include "osk_c_fw.h"


/******************************************************************************
** Application Macros
*/

/*
** Versions:
**
** 1.0 - Initial release
*/

#define  GPIO_DEMO_MAJOR_VER   0
#define  GPIO_DEMO_MINOR_VER   9


/******************************************************************************
** Init File declarations create:
**
**  typedef enum {
**     CMD_PIPE_DEPTH,
**     CMD_PIPE_NAME
**  } INITBL_ConfigEnum;
**    
**  typedef struct {
**     CMD_PIPE_DEPTH,
**     CMD_PIPE_NAME
**  } INITBL_ConfigStruct;
**
**   const char *GetConfigStr(value);
**   ConfigEnum GetConfigVal(const char *str);
**
** XX(name,type)
*/

#define CFG_APP_CFE_NAME     APP_CFE_NAME
#define CFG_APP_PERF_ID      APP_PERF_ID

#define CFG_CMD_PIPE_NAME    APP_CMD_PIPE_NAME
#define CFG_CMD_PIPE_DEPTH   APP_CMD_PIPE_DEPTH

#define CFG_GPIO_DEMO_CMD_TOPICID     GPIO_DEMO_CMD_TOPICID
#define CFG_GPIO_DEMO_SEND_HK_TOPICID GPIO_DEMO_SEND_HK_TOPICID
#define CFG_GPIO_DEMO_HK_TLM_TOPICID  GPIO_DEMO_HK_TLM_TOPICID

#define CFG_CHILD_NAME       CHILD_NAME
#define CFG_CHILD_PERF_ID    CHILD_PERF_ID
#define CFG_CHILD_STACK_SIZE CHILD_STACK_SIZE
#define CFG_CHILD_PRIORITY   CHILD_PRIORITY

#define CFG_CTRL_OUT_PIN     CTRL_OUT_PIN
#define CFG_CTRL_ON_TIME     CTRL_ON_TIME
#define CFG_CTRL_OFF_TIME    CTRL_OFF_TIME

#define APP_CONFIG(XX) \
   XX(APP_CFE_NAME,char*) \
   XX(APP_PERF_ID,uint32) \
   XX(APP_CMD_PIPE_NAME,char*) \
   XX(APP_CMD_PIPE_DEPTH,uint32) \
   XX(GPIO_DEMO_CMD_TOPICID,uint32) \
   XX(GPIO_DEMO_SEND_HK_TOPICID,uint32) \
   XX(GPIO_DEMO_HK_TLM_TOPICID,uint32) \
   XX(CHILD_NAME,char*) \
   XX(CHILD_PERF_ID,uint32) \
   XX(CHILD_STACK_SIZE,uint32) \
   XX(CHILD_PRIORITY,uint32) \
   XX(CTRL_OUT_PIN,uint32) \
   XX(CTRL_ON_TIME,uint32) \
   XX(CTRL_OFF_TIME,uint32) \
   
DECLARE_ENUM(Config,APP_CONFIG)


/******************************************************************************
** Command Macros
** - Load/dump table definitions are placeholders for a JSON table
*/

#define GPIO_DEMO_TBL_LOAD_CMD_FC      (CMDMGR_APP_START_FC + 0)
#define GPIO_DEMO_TBL_DUMP_CMD_FC      (CMDMGR_APP_START_FC + 1)


/******************************************************************************
** Event Macros
**
** Define the base event message IDs used by each object/component used by the
** application. There are no automated checks to ensure an ID range is not
** exceeded so it is the developer's responsibility to verify the ranges. 
*/

#define GPIO_DEMO_BASE_EID  (OSK_C_FW_APP_BASE_EID +  0)
#define GPIO_CTRL_BASE_EID  (OSK_C_FW_APP_BASE_EID + 20)


#endif /* _app_cfg_ */
