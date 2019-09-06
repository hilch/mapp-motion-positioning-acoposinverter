/* Automation Studio generated header file */
/* Do not edit ! */
/* McDS402Ax 5.08.0 */

#ifndef _MCDS402AX_
#define _MCDS402AX_
#ifdef __cplusplus
extern "C" 
{
#endif
#ifndef _McDS402Ax_VERSION
#define _McDS402Ax_VERSION 5.08.0
#endif

#include <bur/plctypes.h>

#ifndef _BUR_PUBLIC
#define _BUR_PUBLIC
#endif

#ifdef _SG4
#include <McBase.h> 
#include <McAxis.h>
#endif
 
#ifdef _SG3
#include <McBase.h> 
#include <McAxis.h>
#endif
 
#ifdef _SGC
#include <McBase.h> 
#include <McAxis.h>
#endif

/* Datatypes and datatypes of function blocks */
typedef struct McDS402AxHomingParType
{	enum McHomingModeEnum HomingMode;
	double Position;
	float StartVelocity;
	float HomingVelocity;
	float Acceleration;
	enum McDirectionEnum SwitchEdge;
	enum McDirectionEnum StartDirection;
	enum McDirectionEnum HomingDirection;
	enum McSwitchEnum ReferencePulse;
	enum McSwitchEnum DriveSpecificHoming;
	signed char DriveSpecificHomingMode;
} McDS402AxHomingParType;

typedef struct MC_BR_InitHome_DS402Ax
{
	/* VAR_INPUT (analog) */
	struct McAxisType* Axis;
	struct McDS402AxHomingParType HomingParameters;
	/* VAR_OUTPUT (analog) */
	signed long ErrorID;
	/* VAR (analog) */
	struct McInternalType Internal;
	/* VAR_INPUT (digital) */
	plcbit Execute;
	/* VAR_OUTPUT (digital) */
	plcbit Done;
	plcbit Busy;
	plcbit Error;
} MC_BR_InitHome_DS402Ax_typ;



/* Prototyping of functions and function blocks */
_BUR_PUBLIC void MC_BR_InitHome_DS402Ax(struct MC_BR_InitHome_DS402Ax* inst);


#ifdef __cplusplus
};
#endif
#endif /* _MCDS402AX_ */

