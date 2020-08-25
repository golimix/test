/* Copyright (C) Rong Tao @Sylincom Beijing, 2019年 06月 14日 星期五 09:06:33 CST. */
/* 
 Copyright (C) Rong Tao @Beijing

 Permission is granted to copy, distribute and/or modify this document
 under the terms of the GNU Free Documentation License, Version 1.3
 or any later version published by the Free Software Foundation;
 with no Invariant Sections, no Front-Cover Texts, and no Back-Cover
 Texts. A copy of the license is included in the section entitled ‘‘GNU
 Free Documentation License’’.
   2019年 03月 14日 星期四 19:24:45 CST. 
*/
/* Copyright (C) Rong Tao @Sylincom Beijing, 2019年 03月 08日 星期五 08:10:29 CST. */
/* Copyright (C) Rong Tao @Sylincom Beijing, 2019年 03月 07日 星期四 20:28:04 CST. */
/*
 * Note: this file originally auto-generated by mib2c using
 *        $
 */

#include <net-snmp/net-snmp-config.h>
#include <net-snmp/net-snmp-includes.h>
#include <net-snmp/agent/net-snmp-agent-includes.h>
#include "cpriConfigInfo.h"
#include "sbs_type.h"
#include "sbs_log.h"
#include "cfig_common.h"
#include "rrus_mgmt_api_cfig_mgmt.h"
#include "om_common_h.h"

/*
 * cpriConfigInfo_variables_oid:
 *   this is the top level oid that we want to register under.  This
 *   is essentially a prefix, with the suffix appearing in the
 *   variable below.
 */
cpriDealyCfgTable	 cpriDealyCfgTable_RowBuf;
cpriSingleCfgTable	 cpriSingleCfgTable_RowBuf;


oid             cpriConfigInfo_variables_oid[] =
    { 1, 3, 6, 1, 4, 1, 12001, 1, 3, 3, 3 };

/*
 * variable4 cpriConfigInfo_variables:
 *   this variable defines function callbacks and type return information 
 *   for the cpriConfigInfo mib section 
 */

struct variable4 cpriConfigInfo_variables[] = {
    /*
     * magic number        , variable type , ro/rw , callback fn  , L, oidsuffix 
     */

#define CPRICONFIGINDEX		1
    {CPRICONFIGINDEX, ASN_INTEGER, NETSNMP_OLDAPI_RONLY,
     var_cpriConfigTable, 3, {1, 1, 1}},
#define CPRICONFIGCPRISPEED		2
    {CPRICONFIGCPRISPEED, ASN_UNSIGNED, NETSNMP_OLDAPI_RWRITE,
     var_cpriConfigTable, 3, {1, 1, 2}},
#define CPRICONFIGCHANNELSTATE		3
    {CPRICONFIGCHANNELSTATE, ASN_UNSIGNED, NETSNMP_OLDAPI_RWRITE,
     var_cpriConfigTable, 3, {1, 1, 3}},
#define CPRICONFIGRINGTESTREQ		4
    {CPRICONFIGRINGTESTREQ, ASN_UNSIGNED, NETSNMP_OLDAPI_RWRITE,
     var_cpriConfigTable, 3, {1, 1, 4}},
#define CPRICONFIGCTLWORD		5
    {CPRICONFIGCTLWORD, ASN_UNSIGNED, NETSNMP_OLDAPI_RWRITE,
     var_cpriConfigTable, 3, {1, 1, 5}},
#define CPRICONFIGTOTALHIGH		6
    {CPRICONFIGTOTALHIGH, ASN_UNSIGNED, NETSNMP_OLDAPI_RWRITE,
     var_cpriConfigTable, 3, {1, 1, 6}},
#define CPRICONFIGTOTALLOW		7
    {CPRICONFIGTOTALLOW, ASN_UNSIGNED, NETSNMP_OLDAPI_RWRITE,
     var_cpriConfigTable, 3, {1, 1, 7}},
#define CPRICONFIGERRHIGH		8
    {CPRICONFIGERRHIGH, ASN_UNSIGNED, NETSNMP_OLDAPI_RWRITE,
     var_cpriConfigTable, 3, {1, 1, 8}},
#define CPRICONFIGERRLOW		9
    {CPRICONFIGERRLOW, ASN_UNSIGNED, NETSNMP_OLDAPI_RWRITE,
     var_cpriConfigTable, 3, {1, 1, 9}},
#define CPRICONFIGROWSTATUS		10
    {CPRICONFIGROWSTATUS, ASN_INTEGER, NETSNMP_OLDAPI_RWRITE,
     var_cpriConfigTable, 3, {1, 1, 10}},
#define CPRIDELAYCFGINDEX		1
    {CPRIDELAYCFGINDEX, ASN_UNSIGNED, NETSNMP_OLDAPI_RONLY,
     var_cpriDelayCfgTable, 3, {2, 1, 1}},
#define CPRIDELAYCFGAXCIND		2
    {CPRIDELAYCFGAXCIND, ASN_UNSIGNED, NETSNMP_OLDAPI_RWRITE,
     var_cpriDelayCfgTable, 3, {2, 1, 2}},
#define CPRIDELAYCFGTIMEDELAYUL		3
    {CPRIDELAYCFGTIMEDELAYUL, ASN_UNSIGNED, NETSNMP_OLDAPI_RONLY,
     var_cpriDelayCfgTable, 3, {2, 1, 3}},
#define CPRIDELAYCFGTIMEDELAYDL		4
    {CPRIDELAYCFGTIMEDELAYDL, ASN_UNSIGNED, NETSNMP_OLDAPI_RWRITE,
     var_cpriDelayCfgTable, 3, {2, 1, 4}},
#define CPRIDELAYCFGT14		5
    {CPRIDELAYCFGT14, ASN_UNSIGNED, NETSNMP_OLDAPI_RWRITE,
     var_cpriDelayCfgTable, 3, {2, 1, 5}},
#define CPRIDELAYCFGROWSTATUS		6
    {CPRIDELAYCFGROWSTATUS, ASN_INTEGER, NETSNMP_OLDAPI_RWRITE,
     var_cpriDelayCfgTable, 3, {2, 1, 6}},
#define CPRISINGLECFGINDEX		1
    {CPRISINGLECFGINDEX, ASN_UNSIGNED, NETSNMP_OLDAPI_RONLY,
     var_cpriSingleCfgTable, 3, {3, 1, 1}},
#define CPRISINGLECFGAXCIND		2
    {CPRISINGLECFGAXCIND, ASN_UNSIGNED, NETSNMP_OLDAPI_RWRITE,
     var_cpriSingleCfgTable, 3, {3, 1, 2}},
#define CPRISINGLECFGONOROFF		3
    {CPRISINGLECFGONOROFF, ASN_UNSIGNED, NETSNMP_OLDAPI_RWRITE,
     var_cpriSingleCfgTable, 3, {3, 1, 3}},
#define CPRISINGLECFGSINGLEMODE		4
    {CPRISINGLECFGSINGLEMODE, ASN_UNSIGNED, NETSNMP_OLDAPI_RWRITE,
     var_cpriSingleCfgTable, 3, {3, 1, 4}},
#define CPRISINGLECFGROWSTATUS		5
    {CPRISINGLECFGROWSTATUS, ASN_INTEGER, NETSNMP_OLDAPI_RWRITE,
     var_cpriSingleCfgTable, 3, {3, 1, 5}},
};

/*
 * (L = length of the oidsuffix) 
 */


/** Initializes the cpriConfigInfo module */
void
init_cpriConfigInfo(void)
{

    DEBUGMSGTL(("cpriConfigInfo", "Initializing\n"));

    /*
     * register ourselves with the agent to handle our mib tree 
     */
    REGISTER_MIB("cpriConfigInfo", cpriConfigInfo_variables, variable4,
                 cpriConfigInfo_variables_oid);

    /*
     * place any other initialization junk you need here 
     */
}



UINT32 header_cpriTable
(
  struct variable *vp,
  oid			  *name,
  size_t		  *length,
  int			   exact,
  size_t		  *var_len,
  WriteMethod	 **write_method,
  long			  *plIndex
)
{
  UINT32 ret = 0;
  UINT32 lComp =  MATCH_FAILED; 
  UINT32 lIndex = 0;
  oid newname[MAX_OID_LEN];

  memset(newname, 0x00, sizeof(newname));
  memcpy(newname, name, (*length) * sizeof(oid));

  if(exact)  /* get/set  */
  {
	  ret = snmp_oid_compare(newname, vp->namelen, vp->name, vp->namelen);
	  if((ret == 0) && (*length == (vp->namelen + 1)))
	  {
		  lIndex = newname[vp->namelen];
		  if((lIndex > 0) && (lIndex <= MAX_CPRI_INDEX))
			  lComp = MATCH_SUCCEEDED;
	  }
  }
  else
  {
	  lComp = MATCH_FAILED;
  }
  
  if(lComp == MATCH_SUCCEEDED)
  {
	 *length  = vp->namelen + 1;
	 *plIndex = lIndex;
	  newname[vp->namelen] = lIndex;
	  memcpy(name, newname, (*length) * sizeof(oid));
  }
  return(lComp);
}

unsigned char  *
var_cpriConfigInfo(struct variable *vp,
                   oid * name,
                   size_t *length,
                   int exact, size_t *var_len, WriteMethod ** write_method)
{
    /*
     * variables we may use later 
     */
    static long     long_ret;
    static u_long   ulong_ret;
    static unsigned char string[SPRINT_MAX_LEN];
    static oid      objid[MAX_OID_LEN];
    static struct counter64 c64;

    if (header_generic(vp, name, length, exact, var_len, write_method)
        == MATCH_FAILED)
        return NULL;
    /*
     * this is where we do the value assignments for the mib results.
     */
    switch (vp->magic) {
    default:
        ERROR_MSG("");
    }
    return NULL;
}

   unsigned char  *
   var_cpriConfigTable(struct variable *vp,
					   oid * name,
					   size_t *length,
					   int exact,
					   size_t *var_len, WriteMethod ** write_method)
   {
	   /*
		* variables we may use later 
		*/
	   static long	   long_ret;
	   static u_long   ulong_ret;
	   static unsigned char string[SPRINT_MAX_LEN];
	   static oid	   objid[MAX_OID_LEN];
	   static struct counter64 c64;
   
	 
	   static long	   VAR = 0;
	   long 		   lIndex = 0;
	   long 		   flag = 0;
	   UINT32		   ret = 0;
	   UINT32		   haveok = 0;
	   
//	   if (header_simple_table
//		   (vp, name, length, exact, var_len, write_method, TABLE_SIZE)
//		   == MATCH_FAILED)
//		   return NULL;
   
	   ret = header_cpriTable(vp,name,length,exact,var_len,write_method, &lIndex);
	   if (ret != MATCH_SUCCEEDED)
	   {
		   log_msg(LOG_ERR,CFIG_MGMT,"index match failed\n");
		   return (u_char *)NULL;
	   }
   
	   switch (vp->magic) {
	   case CPRICONFIGINDEX:
		   VAR = lIndex;		   
		   *var_len = sizeof(VAR);
		   return (u_char *) & VAR;
	   case CPRICONFIGCPRISPEED:
		   *write_method = write_cpriConfigCpriSpeed;
		   //VAR = VALUE;			
		   return (u_char *) NULL;
	   case CPRICONFIGCHANNELSTATE:
		   //*write_method = write_cpriConfigChannelState;
		   VAR = 0;
		   if(get_cpri_channel_state((UINT16)lIndex, &VAR) != 0){  
			   *var_len = 0;
			   log_msg(LOG_ERR,CFIG_MGMT,"get cpri channel state failed\n");
			   return (u_char *)NULL;
		   }
		   *var_len = sizeof(VAR);
		   return (u_char *) & VAR;
	   case CPRICONFIGRINGTESTREQ:
		   *write_method = write_cpriConfigRingTestReq;
		   //VAR = VALUE;			 
		   return (u_char *) NULL;
	   case CPRICONFIGCTLWORD:
		   *write_method = write_cpriConfigCtlWord;
		   //VAR = VALUE;		   
		   return (u_char *) NULL;
	   case CPRICONFIGTOTALHIGH:
		   //*write_method = write_cpriConfigTotalHigh;
		   if(get_cpri_ser_test_result((UINT16)lIndex, 0, &VAR) != 0){	
			   *var_len = 0;
			   log_msg(LOG_ERR,CFIG_MGMT,"get cpri ser test result failed\n");
			   return (u_char *)NULL;
		   }
		   *var_len = sizeof(VAR);
		   return (u_char *) & VAR;
		   
	   case CPRICONFIGTOTALLOW:
		   //*write_method = write_cpriConfigTotalLow;
		   if(get_cpri_ser_test_result((UINT16)lIndex, 1, &VAR) != 0){	
			   *var_len = 0;
			   log_msg(LOG_ERR,CFIG_MGMT,"get cpri ser test result failed\n");
			   return (u_char *)NULL;
		   }
		   *var_len = sizeof(VAR);
		   return (u_char *) & VAR;
	   case CPRICONFIGERRHIGH:
		   //*write_method = write_cpriConfigErrHigh;
		   if(get_cpri_ser_test_result((UINT16)lIndex, 2, &VAR) != 0){	
			   *var_len = 0;
			   log_msg(LOG_ERR,CFIG_MGMT,"get cpri ser test result failed\n");
			   	return (u_char *)NULL;
		   }
		   *var_len = sizeof(VAR);
		   return (u_char *) & VAR;
	   case CPRICONFIGERRLOW:
		   //*write_method = write_cpriConfigErrLow;
		   if(get_cpri_ser_test_result((UINT16)lIndex, 3, &VAR) != 0){	
			   *var_len = 0;
			   log_msg(LOG_ERR,CFIG_MGMT,"get cpri ser test result failed\n");
			   return (u_char *)NULL;
		   }
		   *var_len = sizeof(VAR);
		   return (u_char *) & VAR;
	   case CPRICONFIGROWSTATUS:
		   *write_method = write_cpriConfigRowStatus;
		  
		   return (u_char *) NULL;
	   default:
		   ERROR_MSG("");
	   }
	   return NULL;
   }


unsigned char  *
var_cpriDelayCfgTable(struct variable *vp,
                      oid * name,
                      size_t *length,
                      int exact,
                      size_t *var_len, WriteMethod ** write_method)
{
    /*
     * variables we may use later 
     */
    static long     long_ret;
    static u_long   ulong_ret;
    static unsigned char string[SPRINT_MAX_LEN];
    static oid      objid[MAX_OID_LEN];
    static struct counter64 c64;
	
	static long 	VAR = 0;
	long			lIndex = 0;
	long			flag = 0;
	UINT32			ret = 0;
	UINT32			haveok = 0;
	
//	if (header_simple_table
//		(vp, name, length, exact, var_len, write_method, TABLE_SIZE)
//		== MATCH_FAILED)
//		return NULL;

	ret = header_cpriTable(vp,name,length,exact,var_len,write_method, &lIndex);
	if (ret != MATCH_SUCCEEDED)
	{
		log_msg(LOG_ERR,CFIG_MGMT,"cpri index match failed\n");
		return (u_char *)NULL;
	}
	
    switch (vp->magic) {
    case CPRIDELAYCFGINDEX:
        VAR = lIndex;           
		*var_len = sizeof(VAR);
        return (u_char *) & VAR;
    case CPRIDELAYCFGAXCIND:
        *write_method = write_cpriDelayCfgAxCInd;
        //VAR = VALUE;
        return (u_char *) NULL;
    case CPRIDELAYCFGTIMEDELAYUL:
        *write_method = write_cpriDelayCfgTimeDelayUL;
        //VAR = VALUE;
        return (u_char *) NULL;
    case CPRIDELAYCFGTIMEDELAYDL:
        *write_method = write_cpriDelayCfgTimeDelayDL;
        //VAR = VALUE;
        return (u_char *) NULL;
    case CPRIDELAYCFGT14:
       // *write_method = write_cpriDelayCfgT14;
		if(get_cpri_time_delay_measure((UINT16)lIndex, &VAR) != 0){  
			*var_len = 0;
			log_msg(LOG_ERR,CFIG_MGMT,"get cpri time delay measure failed\n");
			return (u_char *)NULL;
		}
        *var_len = sizeof(VAR);
        return (u_char *) & VAR;

    case CPRIDELAYCFGROWSTATUS:
        *write_method = write_cpriDelayCfgRowStatus;
        //VAR = VALUE;
        return (u_char *) NULL;
    default:
        ERROR_MSG("");
    }
    return NULL;
}

/*
 * var_cpriSingleCfgTable():
 *   Handle this table separately from the scalar value case.
 *   The workings of this are basically the same as for var_cpriConfigInfo above.
 */
unsigned char  *
var_cpriSingleCfgTable(struct variable *vp,
                       oid * name,
                       size_t *length,
                       int exact,
                       size_t *var_len, WriteMethod ** write_method)
{
    /*
     * variables we may use later 
     */
    static long     long_ret;
    static u_long   ulong_ret;
    static unsigned char string[SPRINT_MAX_LEN];
    static oid      objid[MAX_OID_LEN];
    static struct counter64 c64;

     static long 	VAR = 0;
	long			lIndex = 0;
	long			flag = 0;
	UINT32			ret = 0;
	UINT32			haveok = 0;
	
//	if (header_simple_table
//		(vp, name, length, exact, var_len, write_method, TABLE_SIZE)
//		== MATCH_FAILED)
//		return NULL;

	ret = header_cpriTable(vp,name,length,exact,var_len,write_method, &lIndex);
	if (ret != MATCH_SUCCEEDED)
	{
		log_msg(LOG_ERR,CFIG_MGMT,"cpri index match failed\n");
		return (u_char *)NULL;
	}
    switch (vp->magic) {
    case CPRISINGLECFGINDEX:
        //VAR = VALUE;
        return (u_char *) NULL;
    case CPRISINGLECFGAXCIND:
        *write_method = write_cpriSingleCfgAxCInd;
       // VAR = VALUE;
        return (u_char *) NULL;
    case CPRISINGLECFGONOROFF:
        *write_method = write_cpriSingleCfgOnOrOff;
      //  VAR = VALUE;
        return (u_char *) NULL;
    case CPRISINGLECFGSINGLEMODE:
        *write_method = write_cpriSingleCfgSingleMode;
        //VAR = VALUE;
        return (u_char *) NULL;
    case CPRISINGLECFGROWSTATUS:
        *write_method = write_cpriSingleCfgRowStatus;
        //VAR = VALUE;
        return (u_char *) NULL;
    default:
        ERROR_MSG("");
    }
    return NULL;
}

int
write_cpriConfigCpriSpeed(int action,
						 u_char * var_val,
						 u_char var_val_type,
						 size_t var_val_len,
						 u_char * statP, oid * name, size_t name_len)
{
   u_long		   value;
   int			   size;
   
   long 					   lVar = 0;
   long 					   lIndex = 0;
   ICR_INIT_INFO_CPRI_SPEED 	   cpri_speed_init_msg;
   UINT32						   cpri_speed_init_msg_len;
   cpri_speed_init_msg_len = sizeof(cpri_speed_init_msg);
   memset(&cpri_speed_init_msg, 0, sizeof(cpri_speed_init_msg));

   switch (action) {
   case RESERVE1:
	   if (var_val_type != ASN_UNSIGNED) {
		   fprintf(stderr, "write to cpriConfigInfo not ASN_UNSIGNED\n");
		   return SNMP_ERR_WRONGTYPE;
	   }
	   if (var_val_len > sizeof(u_long)) {
		   fprintf(stderr, "write to cpriConfigInfo: bad length\n");
		   return SNMP_ERR_WRONGLENGTH;
	   }
	   break;

   case RESERVE2:
	   size = var_val_len;
	   value = *(u_long *) var_val;

	   break;

   case FREE:
	   /*
		* Release any resources that have been allocated 
		*/
	   break;

   case ACTION:
	   lIndex = name[CPRICONFIGINFOTABLES_INDEX_POS];
	   size = var_val_len;
	   value = *(u_long*)var_val;
	   cpri_speed_init_msg.head.msg_type = MODULE_CFIG_MGMT;
	   cpri_speed_init_msg.head.msg_code = SET_INIT_INFO_CPRI_SPEED;
	   cpri_speed_init_msg.head.msg_len = cpri_speed_init_msg_len;
	   cpri_speed_init_msg.cpri_index = lIndex;
	   cpri_speed_init_msg.cpri_speed = value;
	   if(send_msg_to_om(MODULE_RRUS_MGMT, (UINT8*)&cpri_speed_init_msg, cpri_speed_init_msg_len) != 0)
	   {
		   return (SNMP_ERR_COMMITFAILED);
	   }	   
	
	   break;

   case UNDO:
	   /*
		* Back out any changes made in the ACTION case 
		*/
	   break;

   case COMMIT:
	   /*
		* Things are working well, so it's now safe to make the change
		* permanently.	Make sure that anything done here can't fail!
		*/
	   break;
   }
   return SNMP_ERR_NOERROR;
}


 int
 write_cpriConfigRingTestReq(int action,
							 u_char * var_val,
							 u_char var_val_type,
							 size_t var_val_len,
							 u_char * statP, oid * name, size_t name_len)
 {
	 u_long 		 value;
	 int			 size;
	 
	 long						 lVar = 0;
	 long						 lIndex = 0;
	 ICR_CPRI_RING_TEST 		 cpri_ring_test_msg;
	 INT32						 cpri_ring_test_msg_len;
	 cpri_ring_test_msg_len = sizeof(cpri_ring_test_msg);
	 memset(&cpri_ring_test_msg, 0, sizeof(cpri_ring_test_msg));
 
	 switch (action) {
	 case RESERVE1:
		 if (var_val_type != ASN_UNSIGNED) {
			 fprintf(stderr, "write to cpriConfigInfo not ASN_UNSIGNED\n");
			 return SNMP_ERR_WRONGTYPE;
		 }
		 if (var_val_len > sizeof(u_long)) {
			 fprintf(stderr, "write to cpriConfigInfo: bad length\n");
			 return SNMP_ERR_WRONGLENGTH;
		 }
		 break;
 
	 case RESERVE2:
		 size = var_val_len;
		 value = *(u_long *) var_val;
 
		 break;
 
	 case FREE:
		 /*
		  * Release any resources that have been allocated 
		  */
		 break;
 
	 case ACTION:
		 
		 lIndex = name[CPRICONFIGINFOTABLES_INDEX_POS];
		 size = var_val_len;
		 value = *(u_long*)var_val;
		 cpri_ring_test_msg.head.msg_type = MODULE_CFIG_MGMT;
		 cpri_ring_test_msg.head.msg_code = SET_CPRI_RING_TEST;
		 cpri_ring_test_msg.head.msg_len = cpri_ring_test_msg_len;
		 cpri_ring_test_msg.cpri_index = lIndex;
		 if(send_msg_to_om(MODULE_RRUS_MGMT, (char*)&cpri_ring_test_msg, cpri_ring_test_msg_len) != 0)
		 {
			 return (SNMP_ERR_COMMITFAILED);
		 }		 
	  
		 break;
 
	 case UNDO:
		 /*
		  * Back out any changes made in the ACTION case 
		  */
		 break;
 
	 case COMMIT:
		 /*
		  * Things are working well, so it's now safe to make the change
		  * permanently.  Make sure that anything done here can't fail!
		  */
		 break;
	 }
	 return SNMP_ERR_NOERROR;
 }

 int
 write_cpriConfigCtlWord(int action,
						 u_char * var_val,
						 u_char var_val_type,
						 size_t var_val_len,
						 u_char * statP, oid * name, size_t name_len)
 {
	 u_long 		 value;
	 int			 size;
 
	 long						 lVar = 0;
	 long						 lIndex = 0;
	 ICR_CPRI_SER_TEST			 cpri_ser_test_msg;
	 INT32						 cpri_ser_test_msg_len;
	 cpri_ser_test_msg_len = sizeof(cpri_ser_test_msg);
	 memset(&cpri_ser_test_msg, 0, sizeof(cpri_ser_test_msg));
 
	 switch (action) {
	 case RESERVE1:
		 if (var_val_type != ASN_UNSIGNED) {
			 fprintf(stderr, "write to cpriConfigInfo not ASN_UNSIGNED\n");
			 return SNMP_ERR_WRONGTYPE;
		 }
		 if (var_val_len > sizeof(u_long)) {
			 fprintf(stderr, "write to cpriConfigInfo: bad length\n");
			 return SNMP_ERR_WRONGLENGTH;
		 }
		 break;
 
	 case RESERVE2:
		 size = var_val_len;
		 value = *(u_long *) var_val;
 
		 break;
 
	 case FREE:
		 /*
		  * Release any resources that have been allocated 
		  */
		 break;
 
	 case ACTION:
		 lIndex = name[CPRICONFIGINFOTABLES_INDEX_POS];
		 size = var_val_len;
		 value = *(u_long*)var_val;
		 cpri_ser_test_msg.head.msg_type = MODULE_CFIG_MGMT;
		 cpri_ser_test_msg.head.msg_code = SET_CPRI_SER_TEST;
		 cpri_ser_test_msg.head.msg_len = cpri_ser_test_msg_len;
		 cpri_ser_test_msg.cpri_index = lIndex;
		 cpri_ser_test_msg.ctrl_word = value;
		 if(send_msg_to_om(MODULE_RRUS_MGMT, (char*)&cpri_ser_test_msg, cpri_ser_test_msg_len) != 0)
		 {
			 return (SNMP_ERR_COMMITFAILED);
		 }		 
	  
		 break;
	   
	 case UNDO:
		 /*
		  * Back out any changes made in the ACTION case 
		  */
		 break;
 
	 case COMMIT:
		 /*
		  * Things are working well, so it's now safe to make the change
		  * permanently.  Make sure that anything done here can't fail!
		  */
		 break;
	 }
	 return SNMP_ERR_NOERROR;
 }


int
write_cpriConfigRowStatus(int action,
                          u_char * var_val,
                          u_char var_val_type,
                          size_t var_val_len,
                          u_char * statP, oid * name, size_t name_len)
{
    long            value;
    int             size;

    switch (action) {
    case RESERVE1:
        if (var_val_type != ASN_INTEGER) {
            fprintf(stderr, "write to cpriConfigInfo not ASN_INTEGER\n");
            return SNMP_ERR_WRONGTYPE;
        }
        if (var_val_len > sizeof(long)) {
            fprintf(stderr, "write to cpriConfigInfo: bad length\n");
            return SNMP_ERR_WRONGLENGTH;
        }
        break;

    case RESERVE2:
        size = var_val_len;
        value = *(long *) var_val;

        break;

    case FREE:
        /*
         * Release any resources that have been allocated 
         */
        break;

    case ACTION:
        /*
         * The variable has been stored in 'value' for you to use,
         * and you have just been asked to do something with it.
         * Note that anything done here must be reversable in the UNDO case
         */
        break;

    case UNDO:
        /*
         * Back out any changes made in the ACTION case 
         */
        break;

    case COMMIT:
        /*
         * Things are working well, so it's now safe to make the change
         * permanently.  Make sure that anything done here can't fail!
         */
        break;
    }
    return SNMP_ERR_NOERROR;
}

  int
  write_cpriDelayCfgAxCInd(int action,
						   u_char * var_val,
						   u_char var_val_type,
						   size_t var_val_len,
						   u_char * statP, oid * name, size_t name_len)
  {
	  u_long		  value;
	  int			  size;
	  long			  lIndex;
  
	  switch (action) {
	  case RESERVE1:
		  if (var_val_type != ASN_UNSIGNED) {
			  fprintf(stderr, "write to cpriConfigInfo not ASN_UNSIGNED\n");
			  return SNMP_ERR_WRONGTYPE;
		  }
		  if (var_val_len > sizeof(u_long)) {
			  fprintf(stderr, "write to cpriConfigInfo: bad length\n");
			  return SNMP_ERR_WRONGLENGTH;
		  }
		  break;
  
	  case RESERVE2:
		  size = var_val_len;
		  value = *(u_long *) var_val;
  
		  break;
  
	  case FREE:
		  /*
		   * Release any resources that have been allocated 
		   */
		  break;
  
	  case ACTION:
		  lIndex = name[CPRICONFIGINFOTABLES_INDEX_POS];
		  size = var_val_len;
		  value = *(u_long*)var_val;
		  if((cpriDealyCfgTable_RowBuf.cpriDealyCfgRowStatus == SNMP_ROW_NOTINSERVICE) && (cpriDealyCfgTable_RowBuf.cpriDealyCfgIndex == lIndex))
		  {
			  cpriDealyCfgTable_RowBuf.cpriDealyCfgAxcInd = value;
			  setbit(cpriDealyCfgTable_RowBuf.fin_flag, 0);
		  }
		  else
		  {
			  return SNMP_ERR_WRONGVALUE;
		  }
		 
		  break;
  
	  case UNDO:
		  /*
		   * Back out any changes made in the ACTION case 
		   */
		  break;
  
	  case COMMIT:
		  /*
		   * Things are working well, so it's now safe to make the change
		   * permanently.  Make sure that anything done here can't fail!
		   */
		  break;
	  }
	  return SNMP_ERR_NOERROR;
  }
  
  int
  write_cpriDelayCfgTimeDelayUL(int action,
								u_char * var_val,
								u_char var_val_type,
								size_t var_val_len,
								u_char * statP, oid * name, size_t name_len)
  {
	  u_long		  value;
	  int			  size;
	  long			  lIndex;
  
	  switch (action) {
	  case RESERVE1:
		  if (var_val_type != ASN_UNSIGNED) {
			  fprintf(stderr, "write to cpriConfigInfo not ASN_UNSIGNED\n");
			  return SNMP_ERR_WRONGTYPE;
		  }
		  if (var_val_len > sizeof(u_long)) {
			  fprintf(stderr, "write to cpriConfigInfo: bad length\n");
			  return SNMP_ERR_WRONGLENGTH;
		  }
		  break;
  
	  case RESERVE2:
		  size = var_val_len;
		  value = *(u_long *) var_val;
  
		  break;
  
	  case FREE:
		  /*
		   * Release any resources that have been allocated 
		   */
		  break;
  
	  case ACTION:
		  lIndex = name[CPRICONFIGINFOTABLES_INDEX_POS];
		  size = var_val_len;
		  value = *(u_long*)var_val;
		  if((cpriDealyCfgTable_RowBuf.cpriDealyCfgRowStatus == SNMP_ROW_NOTINSERVICE) && (cpriDealyCfgTable_RowBuf.cpriDealyCfgIndex == lIndex))
		  {
			  cpriDealyCfgTable_RowBuf.cpriDealyCfgAxcInd = value;
			  setbit(cpriDealyCfgTable_RowBuf.fin_flag, 1);
		  }
		  else
		  {
			  return SNMP_ERR_WRONGVALUE;
		  }
		 
		  break;
	  case UNDO:
		  /*
		   * Back out any changes made in the ACTION case 
		   */
		  break;
  
	  case COMMIT:
		  /*
		   * Things are working well, so it's now safe to make the change
		   * permanently.  Make sure that anything done here can't fail!
		   */
		  break;
	  }
	  return SNMP_ERR_NOERROR;
  }
  
  int
  write_cpriDelayCfgTimeDelayDL(int action,
								u_char * var_val,
								u_char var_val_type,
								size_t var_val_len,
								u_char * statP, oid * name, size_t name_len)
  {
	  u_long		  value;
	  int			  size;
	  long			  lIndex;
  
	  switch (action) {
	  case RESERVE1:
		  if (var_val_type != ASN_UNSIGNED) {
			  fprintf(stderr, "write to cpriConfigInfo not ASN_UNSIGNED\n");
			  return SNMP_ERR_WRONGTYPE;
		  }
		  if (var_val_len > sizeof(u_long)) {
			  fprintf(stderr, "write to cpriConfigInfo: bad length\n");
			  return SNMP_ERR_WRONGLENGTH;
		  }
		  break;
  
	  case RESERVE2:
		  size = var_val_len;
		  value = *(u_long *) var_val;
  
		  break;
  
	  case FREE:
		  /*
		   * Release any resources that have been allocated 
		   */
		  break;
  
	  case ACTION:
		  lIndex = name[CPRICONFIGINFOTABLES_INDEX_POS];
		  size = var_val_len;
		  value = *(u_long*)var_val;
		  if((cpriDealyCfgTable_RowBuf.cpriDealyCfgRowStatus == SNMP_ROW_NOTINSERVICE) && (cpriDealyCfgTable_RowBuf.cpriDealyCfgIndex == lIndex))
		  {
			  cpriDealyCfgTable_RowBuf.cpriDealyCfgAxcInd = value;
			  setbit(cpriDealyCfgTable_RowBuf.fin_flag,2);
		  }
		  else
		  {
			  return SNMP_ERR_WRONGVALUE;
		  }
		 
		  break;
  
	  case UNDO:
		  /*
		   * Back out any changes made in the ACTION case 
		   */
		  break;
  
	  case COMMIT:
		  /*
		   * Things are working well, so it's now safe to make the change
		   * permanently.  Make sure that anything done here can't fail!
		   */
		  break;
	  }
	  return SNMP_ERR_NOERROR;
  }

int
write_cpriDelayCfgRowStatus(int action,
                            u_char * var_val,
                            u_char var_val_type,
                            size_t var_val_len,
                            u_char * statP, oid * name, size_t name_len)
{
    long            value;
    int             size;

	long						lVar = 0;
	long						lIndex = 0;
	ICR_CPRI_TIME_DELAY_CFG     cpri_time_delay_cfg_msg;
	INT32 						cpri_time_delay_cfg_msg_len;
	cpri_time_delay_cfg_msg_len = sizeof(cpri_time_delay_cfg_msg);
	memset(&cpri_time_delay_cfg_msg, 0, sizeof(cpri_time_delay_cfg_msg));

    switch (action) {
    case RESERVE1:
        if (var_val_type != ASN_INTEGER) {
            fprintf(stderr, "write to cpriConfigInfo not ASN_INTEGER\n");
            return SNMP_ERR_WRONGTYPE;
        }
        if (var_val_len > sizeof(long)) {
            fprintf(stderr, "write to cpriConfigInfo: bad length\n");
            return SNMP_ERR_WRONGLENGTH;
        }
        break;

    case RESERVE2:
        size = var_val_len;
        value = *(long *) var_val;

        break;

    case FREE:
        /*
         * Release any resources that have been allocated 
         */
        break;

    case ACTION:
        lVar = *(long *)var_val;
        if((lVar < 0) || (lVar > 6)) 
			return(SNMP_ERR_WRONGVALUE);
	    lIndex = name[CPRICONFIGINFOTABLES_INDEX_POS];
		switch(lVar)
		{
			case SNMP_ROW_CREATEANDWAIT:
				memset(&cpriDealyCfgTable_RowBuf, 0x00, sizeof(cpriDealyCfgTable_RowBuf));
				cpriDealyCfgTable_RowBuf.cpriDealyCfgIndex = lIndex;
		  		cpriDealyCfgTable_RowBuf.cpriDealyCfgRowStatus = SNMP_ROW_NOTINSERVICE;
			    break;
				
			case SNMP_ROW_ACTIVE:
				if((cpriDealyCfgTable_RowBuf.fin_flag == 0X07) && (cpriDealyCfgTable_RowBuf.cpriDealyCfgRowStatus == SNMP_ROW_NOTINSERVICE)) 
				{
					cpri_time_delay_cfg_msg.head.msg_type = MODULE_CFIG_MGMT;
					cpri_time_delay_cfg_msg.head.msg_code = SET_CPRI_TIME_DELAY_CFG;
					cpri_time_delay_cfg_msg.head.msg_len = cpri_time_delay_cfg_msg_len;
					cpri_time_delay_cfg_msg.cpri_index = cpriDealyCfgTable_RowBuf.cpriDealyCfgIndex;
					cpri_time_delay_cfg_msg.axc_ind = cpriDealyCfgTable_RowBuf.cpriDealyCfgAxcInd;
					cpri_time_delay_cfg_msg.time_delay_ul = cpriDealyCfgTable_RowBuf.cpriDealyCfgTimeDelayUl;
					cpri_time_delay_cfg_msg.time_delay_dl = cpriDealyCfgTable_RowBuf.cpriDealyCfgTimeDelayDl;
					
					if(send_msg_to_om(MODULE_RRUS_MGMT, (char*)&cpri_time_delay_cfg_msg, cpri_time_delay_cfg_msg_len) != 0)
					{
						return (SNMP_ERR_COMMITFAILED);
					}					
					memset(&cpriDealyCfgTable_RowBuf, 0, sizeof(cpriDealyCfgTable_RowBuf));
					cpriDealyCfgTable_RowBuf.cpriDealyCfgRowStatus = SNMP_ROW_NONEXISTENT;
				}
				else
					return (SNMP_ERR_COMMITFAILED);
				break;
			case SNMP_ROW_DESTROY:
				if((cpriDealyCfgTable_RowBuf.cpriDealyCfgRowStatus != SNMP_ROW_NONEXISTENT) &&
					(cpriDealyCfgTable_RowBuf.cpriDealyCfgIndex == lIndex))
				{
					memset(&cpriDealyCfgTable_RowBuf, 0, sizeof(cpriDealyCfgTable_RowBuf));
					cpriDealyCfgTable_RowBuf.cpriDealyCfgRowStatus = SNMP_ROW_NONEXISTENT;
				}
				else 
					return (SNMP_ERR_WRONGVALUE);
				break;
			default:
				return (SNMP_ERR_WRONGVALUE);
		}
		
        break;

    case UNDO:
        /*
         * Back out any changes made in the ACTION case 
         */
        break;

    case COMMIT:
        /*
         * Things are working well, so it's now safe to make the change
         * permanently.  Make sure that anything done here can't fail!
         */
        break;
    }
    return SNMP_ERR_NOERROR;
}

int
write_cpriSingleCfgAxCInd(int action,
                          u_char * var_val,
                          u_char var_val_type,
                          size_t var_val_len,
                          u_char * statP, oid * name, size_t name_len)
{
    u_long          value;
    int             size;
	long			lIndex;

    switch (action) {
    case RESERVE1:
        if (var_val_type != ASN_UNSIGNED) {
            fprintf(stderr, "write to cpriConfigInfo not ASN_UNSIGNED\n");
            return SNMP_ERR_WRONGTYPE;
        }
        if (var_val_len > sizeof(u_long)) {
            fprintf(stderr, "write to cpriConfigInfo: bad length\n");
            return SNMP_ERR_WRONGLENGTH;
        }
        break;

    case RESERVE2:
        size = var_val_len;
        value = *(u_long *) var_val;

        break;

    case FREE:
        /*
         * Release any resources that have been allocated 
         */
        break;

    case ACTION:
		  lIndex = name[CPRICONFIGINFOTABLES_INDEX_POS];
		  size = var_val_len;
		  value = *(u_long*)var_val;
		  if((cpriSingleCfgTable_RowBuf.cpriSingleCfgRowStatus == SNMP_ROW_NOTINSERVICE) && (cpriSingleCfgTable_RowBuf.cpriSingleCfgIndex == lIndex))
		  {
			  cpriSingleCfgTable_RowBuf.cpriSingleCfgAxcInd = value;
			  setbit(cpriSingleCfgTable_RowBuf.fin_flag, 0);
		  }
		  else
		  {
			  return SNMP_ERR_WRONGVALUE;
		  }
		 
		  break;
     

    case UNDO:
        /*
         * Back out any changes made in the ACTION case 
         */
        break;

    case COMMIT:
        /*
         * Things are working well, so it's now safe to make the change
         * permanently.  Make sure that anything done here can't fail!
         */
        break;
    }
    return SNMP_ERR_NOERROR;
}

int
write_cpriSingleCfgOnOrOff(int action,
                           u_char * var_val,
                           u_char var_val_type,
                           size_t var_val_len,
                           u_char * statP, oid * name, size_t name_len)
{
    u_long          value;
    int             size;
	long			lIndex;

    switch (action) {
    case RESERVE1:
        if (var_val_type != ASN_UNSIGNED) {
            fprintf(stderr, "write to cpriConfigInfo not ASN_UNSIGNED\n");
            return SNMP_ERR_WRONGTYPE;
        }
        if (var_val_len > sizeof(u_long)) {
            fprintf(stderr, "write to cpriConfigInfo: bad length\n");
            return SNMP_ERR_WRONGLENGTH;
        }
        break;

    case RESERVE2:
        size = var_val_len;
        value = *(u_long *) var_val;

        break;

    case FREE:
        /*
         * Release any resources that have been allocated 
         */
        break;

    case ACTION:
        lIndex = name[CPRICONFIGINFOTABLES_INDEX_POS];
		  size = var_val_len;
		  value = *(u_long*)var_val;
		  if((cpriSingleCfgTable_RowBuf.cpriSingleCfgRowStatus == SNMP_ROW_NOTINSERVICE) && (cpriSingleCfgTable_RowBuf.cpriSingleCfgIndex == lIndex))
		  {
			  cpriSingleCfgTable_RowBuf.cpriSingleCfgAxcInd = value;
			  setbit(cpriSingleCfgTable_RowBuf.fin_flag, 1);
		  }
		  else
		  {
			  return SNMP_ERR_WRONGVALUE;
		  }
		 
		  break;

    case UNDO:
        /*
         * Back out any changes made in the ACTION case 
         */
        break;

    case COMMIT:
        /*
         * Things are working well, so it's now safe to make the change
         * permanently.  Make sure that anything done here can't fail!
         */
        break;
    }
    return SNMP_ERR_NOERROR;
}

int
write_cpriSingleCfgSingleMode(int action,
                              u_char * var_val,
                              u_char var_val_type,
                              size_t var_val_len,
                              u_char * statP, oid * name, size_t name_len)
{
    u_long          value;
    int             size;
	long			lIndex;

    switch (action) {
    case RESERVE1:
        if (var_val_type != ASN_UNSIGNED) {
            fprintf(stderr, "write to cpriConfigInfo not ASN_UNSIGNED\n");
            return SNMP_ERR_WRONGTYPE;
        }
        if (var_val_len > sizeof(u_long)) {
            fprintf(stderr, "write to cpriConfigInfo: bad length\n");
            return SNMP_ERR_WRONGLENGTH;
        }
        break;

    case RESERVE2:
        size = var_val_len;
        value = *(u_long *) var_val;

        break;

    case FREE:
        /*
         * Release any resources that have been allocated 
         */
        break;

    case ACTION:
        lIndex = name[CPRICONFIGINFOTABLES_INDEX_POS];
		  size = var_val_len;
		  value = *(u_long*)var_val;
		  if((cpriSingleCfgTable_RowBuf.cpriSingleCfgRowStatus == SNMP_ROW_NOTINSERVICE) && (cpriSingleCfgTable_RowBuf.cpriSingleCfgIndex == lIndex))
		  {
			  cpriSingleCfgTable_RowBuf.cpriSingleCfgAxcInd = value;
			  setbit(cpriSingleCfgTable_RowBuf.fin_flag, 2);
		  }
		  else
		  {
			  return SNMP_ERR_WRONGVALUE;
		  }
		 
		  break;

    case UNDO:
        /*
         * Back out any changes made in the ACTION case 
         */
        break;

    case COMMIT:
        /*
         * Things are working well, so it's now safe to make the change
         * permanently.  Make sure that anything done here can't fail!
         */
        break;
    }
    return SNMP_ERR_NOERROR;
}

int
write_cpriSingleCfgRowStatus(int action,
                             u_char * var_val,
                             u_char var_val_type,
                             size_t var_val_len,
                             u_char * statP, oid * name, size_t name_len)
{
    long            value;
    int             size;

	long						lVar = 0;
	long						lIndex = 0;
	ICR_SINGLE_SEND_CFG         cpri_single_cfg_msg;
	INT32 						cpri_single_cfg_msg_len;
	cpri_single_cfg_msg_len = sizeof(cpri_single_cfg_msg);
	memset(&cpri_single_cfg_msg, 0, sizeof(cpri_single_cfg_msg));

    switch (action) {
    case RESERVE1:
        if (var_val_type != ASN_INTEGER) {
            fprintf(stderr, "write to cpriConfigInfo not ASN_INTEGER\n");
            return SNMP_ERR_WRONGTYPE;
        }
        if (var_val_len > sizeof(long)) {
            fprintf(stderr, "write to cpriConfigInfo: bad length\n");
            return SNMP_ERR_WRONGLENGTH;
        }
        break;

    case RESERVE2:
        size = var_val_len;
        value = *(long *) var_val;

        break;

    case FREE:
        /*
         * Release any resources that have been allocated 
         */
        break;

    case ACTION:
		lVar = *(long*)var_val;
		if((lVar < 0) || (lVar > 6)) 
			return(SNMP_ERR_WRONGVALUE);
		lIndex = name[CPRICONFIGINFOTABLES_INDEX_POS];
		switch(lVar)
		{
			case SNMP_ROW_CREATEANDWAIT:
				memset(&cpriSingleCfgTable_RowBuf, 0x00, sizeof(cpriSingleCfgTable_RowBuf));
				cpriSingleCfgTable_RowBuf.cpriSingleCfgIndex = lIndex;
				cpriSingleCfgTable_RowBuf.cpriSingleCfgRowStatus = SNMP_ROW_NOTINSERVICE;
				break;
				
			case SNMP_ROW_ACTIVE:
				if((cpriSingleCfgTable_RowBuf.fin_flag == 0X07) && (cpriSingleCfgTable_RowBuf.cpriSingleCfgRowStatus == SNMP_ROW_NOTINSERVICE)) 
				{
					cpri_single_cfg_msg.head.msg_type = MODULE_CFIG_MGMT;
					cpri_single_cfg_msg.head.msg_code = SET_SINGLE_SEND_CFG;
					cpri_single_cfg_msg.head.msg_len = cpri_single_cfg_msg_len;
					cpri_single_cfg_msg.cpri_index = cpriSingleCfgTable_RowBuf.cpriSingleCfgIndex;
					cpri_single_cfg_msg.axc_ind = cpriSingleCfgTable_RowBuf.cpriSingleCfgAxcInd;
					cpri_single_cfg_msg.on_or_off = cpriSingleCfgTable_RowBuf.cpriSingleCfgOnOrOff;
					cpri_single_cfg_msg.single_mode = cpriSingleCfgTable_RowBuf.cpriSingleCfgSingleMode;
					
					if(send_msg_to_om(MODULE_RRUS_MGMT, (char*)&cpri_single_cfg_msg, cpri_single_cfg_msg_len) != 0)
					{
						return (SNMP_ERR_COMMITFAILED);
					}					
					memset(&cpriSingleCfgTable_RowBuf, 0, sizeof(cpriSingleCfgTable_RowBuf));
					cpriSingleCfgTable_RowBuf.cpriSingleCfgRowStatus = SNMP_ROW_NONEXISTENT;
				}
				else
					return (SNMP_ERR_COMMITFAILED);
				break;
			case SNMP_ROW_DESTROY:
				if((cpriSingleCfgTable_RowBuf.cpriSingleCfgRowStatus != SNMP_ROW_NONEXISTENT) &&
					(cpriSingleCfgTable_RowBuf.cpriSingleCfgIndex == lIndex))
				{
					memset(&cpriSingleCfgTable_RowBuf, 0, sizeof(cpriSingleCfgTable_RowBuf));
					cpriSingleCfgTable_RowBuf.cpriSingleCfgRowStatus = SNMP_ROW_NONEXISTENT;
				}
				else 
					return (SNMP_ERR_WRONGVALUE);
				break;
			default:
				return (SNMP_ERR_WRONGVALUE);
		}
		
		break;

    case UNDO:
        /*
         * Back out any changes made in the ACTION case 
         */
        break;

    case COMMIT:
        /*
         * Things are working well, so it's now safe to make the change
         * permanently.  Make sure that anything done here can't fail!
         */
        break;
    }
    return SNMP_ERR_NOERROR;
}