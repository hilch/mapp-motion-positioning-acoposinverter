/* Automation Studio generated header file */
/* Do not edit ! */
/* McAxis 5.08.0 */

#ifndef _MCAXIS_
#define _MCAXIS_
#ifdef __cplusplus
extern "C" 
{
#endif
#ifndef _McAxis_VERSION
#define _McAxis_VERSION 5.08.0
#endif

#include <bur/plctypes.h>

#ifndef _BUR_PUBLIC
#define _BUR_PUBLIC
#endif

#ifdef _SG4
#include <McBase.h>
#endif
 
#ifdef _SG3
#include <McBase.h>
#endif
 
#ifdef _SGC
#include <McBase.h>
#endif

/* Datatypes and datatypes of function blocks */
typedef enum McBrakeCmdEnum
{	mcBRAKE_CLOSE,
	mcBRAKE_OPEN,
	mcBRAKE_GET_STATUS
} McBrakeCmdEnum;

typedef enum McBrakeStatusEnum
{	mcBRAKE_STATUS_NOT_PROVIDED,
	mcBRAKE_CLOSED,
	mcBRAKE_OPENED
} McBrakeStatusEnum;

typedef enum McDirectionEnum
{	mcDIR_POSITIVE,
	mcDIR_NEGATIVE,
	mcDIR_CURRENT,
	mcDIR_SHORTEST_WAY,
	mcDIR_EXCEED_PERIOD = 8,
	mcDIR_UNDEFINED,
	mcDIR_BOTH
} McDirectionEnum;

typedef enum McCamAutCouplingSourceEnum
{	mcCAMAUT_COUPLING_SRC_NOT_USED,
	mcCAMAUT_COUPLING_SRC_AXIS,
	mcCAMAUT_COUPLING_SRC_VARIABLE,
	mcCAMAUT_COUPLING_SRC_SYSTIME
} McCamAutCouplingSourceEnum;

typedef enum McPlcopenParEnum
{	mcPAR_COMMANDED_AX_POSITION = 1,
	mcPAR_SW_LIMIT_POSITIVE,
	mcPAR_SW_LIMIT_NEGATIVE,
	mcPAR_ENABLE_LIMIT_POSITIVE,
	mcPAR_ENABLE_LIMIT_NEGATIVE,
	mcPAR_ENABLE_POS_LAG_MONITORING,
	mcPAR_MAX_AX_POSITION_LAG,
	mcPAR_MAX_AX_VELOCITY_SYSTEM,
	mcPAR_MAX_AX_VELOCITY_APPL,
	mcPAR_ACTUAL_AX_VELOCITY,
	mcPAR_COMMANDED_AX_VELOCITY,
	mcPAR_MAX_AX_ACCELERATION_SYSTEM,
	mcPAR_MAX_AX_ACCELERATION_APPL,
	mcPAR_MAX_AX_DECELERATION_SYSTEM,
	mcPAR_MAX_AX_DECELERATION_APPL,
	mcPAR_MAX_AX_JERK,
	mcPAR_AX_PERIOD = 1008,
	mcPAR_HOMING_OFFSET = 1019,
	mcPAR_AX_MEASUREMENT_RESOLUTION = 1020,
	mcPAR_REFERENCE_PULSE_DISTANCE = 1021,
	mcPAR_DISTANCE_PER_ENCODER_REV = 1022
} McPlcopenParEnum;

typedef enum McCamIplModeEnum
{	mcCAMIPL_CUBIC_SPLINE,
	mcCAMIPL_OPTIMIZED_VELOCITY,
	mcCAMIPL_OPTIMIZED_ACCELERATION,
	mcCAMIPL_BESTFIT_5TH_ORDER,
	mcCAMIPL_BESTFIT_6TH_ORDER
} McCamIplModeEnum;

typedef enum McCamTypeEnum
{	mcCAMTYPE_NON_PERIODIC,
	mcCAMTYPE_PERIODIC
} McCamTypeEnum;

typedef enum McCamSectRefPointEnum
{	mcCAMSECTREF_ABSOLUTE = 0,
	mcCAMSECTREF_RELATIVE = 1
} McCamSectRefPointEnum;

typedef enum McCamSectLawOfMotionEnum
{	mcCAMSECTLAW_LAST_POINT = 0,
	mcCAMSECTLAW_STRAIGHT_LINE = 1,
	mcCAMSECTLAW_QUADRATIC_PARABOLA = 2,
	mcCAMSECTLAW_SIMPLE_SINE_CURVE = 3,
	mcCAMSECTLAW_5TH_ORDER_POLYNOM = 4,
	mcCAMSECTLAW_INCLINED_SINE_CURVE = 5,
	mcCAMSECTLAW_MOD_ACCEL_TRAPEZOID = 6,
	mcCAMSECTLAW_MOD_SINE_CURVE = 7,
	mcCAMSECTLAW_HARMONIC_COMBI = 8
} McCamSectLawOfMotionEnum;

typedef enum McShiftModeEnum
{	mcSHIFT_ABSOLUTE,
	mcSHIFT_RELATIVE,
	mcSHIFT_ABSOLUTE_NO_RESET,
	mcSHIFT_RELATIVE_NO_RESET
} McShiftModeEnum;

typedef enum McProfileBaseEnum
{	mcPROFBASE_TIME,
	mcPROFBASE_MASTER_POSITION,
	mcPROFBASE_MASTER_DISTANCE,
	mcPROFBASE_SLAVE_POSITION,
	mcPROFBASE_SLAVE_DISTANCE,
	mcPROFBASE_MASTER_ZONE,
	mcPROFBASE_SLAVE_ZONE
} McProfileBaseEnum;

typedef enum McCamAutCrossLeftBoundEnum
{	mcCAMAUT_LIMIT_HORIZONTAL,
	mcCAMAUT_EXTEND_POLY
} McCamAutCrossLeftBoundEnum;

typedef enum McCamAutCamChangeImmedEnum
{	mcCAMAUT_MASTER_DIR,
	mcCAMAUT_POSITIVE_DIR
} McCamAutCamChangeImmedEnum;

typedef enum McCamAutErrorsInStandbyEnum
{	mcCAMAUT_ERRORS_OFF,
	mcCAMAUT_ERRORS_ON
} McCamAutErrorsInStandbyEnum;

typedef enum McCamAutExceedingLimitsEnum
{	mcCAMAUT_WARNING,
	mcCAMAUT_ERROR
} McCamAutExceedingLimitsEnum;

typedef enum McCamAutGetParCmdEnum
{	mcGET_PAR_FROM_OBJECT,
	mcGET_PAR_ACTUAL,
	mcGET_PAR_DEFAULT
} McCamAutGetParCmdEnum;

typedef enum McCamAutSetParCmdEnum
{	mcSET_ALL_PAR_FROM_OBJ,
	mcSET_ALL_PAR_FROM_ADR,
	mcSET_ALL_PAR_DEFAULT,
	mcSET_UPDATE_FROM_OBJ,
	mcSET_UPDATE_FROM_ADR,
	mcSET_UPDATE_DEFAULT,
	mcSET_SYNC_UPDATE_FROM_OBJ,
	mcSET_SYNC_UPDATE_FROM_ADR,
	mcSET_SYNC_UPDATE_DEFAULT
} McCamAutSetParCmdEnum;

typedef enum McCamAutResetCmdEnum
{	mcRESET_ALL_AUTOMAT_PARAMS,
	mcRESET_COMMON_PARAMS,
	mcRESET_ALL_STATE_PARAMS,
	mcRESET_ONE_STATE_PARAMS
} McCamAutResetCmdEnum;

typedef enum McCamAutParLockCmdEnum
{	mcCAMAUT_NO_LOCK,
	mcCAMAUT_LOCK,
	mcCAMAUT_UNLOCK_NEXT_STATE,
	mcCAMAUT_UNLOCK_SYNCHRON
} McCamAutParLockCmdEnum;

typedef enum McCamAutCompModeEnum
{	mcCOMP_OFF = 0,
	mcCOMP_BETWEEN_CAMS = 30,
	mcCOMP_BETWEEN_CAMS_DIRECT = 35,
	mcCOMP_CAM_CENTER_POINTS = 31,
	mcCOMP_MA_LATCHPOS = 32,
	mcCOMP_SL_LATCHPOS = 34,
	mcCOMP_SL_ABSOLUTE = 33,
	mcCOMP_VELOCITY_S_MA = 37,
	mcCOMP_VELOCITY_S_SL = 38,
	mcCOMP_VELOCITY_A_SL = 36,
	mcCOMP_VELOCITY_A_CYC = 39,
	mcCOMP_MA_SL_ABSOLUTE = 40
} McCamAutCompModeEnum;

typedef enum McCamAutEventTypeEnum
{	mcEVENT_OFF = 0,
	mcEVENT_START_POSITION = 10,
	mcEVENT_STATE_END = 12,
	mcEVENT_STATE_END_NEGATIVE = 13,
	mcEVENT_COUNT = 11,
	mcEVENT_SIGNAL1 = 91,
	mcEVENT_SIGNAL2 = 92,
	mcEVENT_SIGNAL3 = 93,
	mcEVENT_SIGNAL4 = 94,
	mcEVENT_TRIGGER1_P_EDGE = 20,
	mcEVENT_TRIGGER1_N_EDGE = 21,
	mcEVENT_TRIGGER2_P_EDGE = 22,
	mcEVENT_TRIGGER2_N_EDGE = 23,
	mcEVENT_AND_NEXT_TWO = 15,
	mcEVENT_PARID1 = 16,
	mcEVENT_PARID2 = 17,
	mcEVENT_PARID3 = 18,
	mcEVENT_PARID4 = 19,
	mcEVENT_START_IV_POS1 = 41,
	mcEVENT_START_IV_POS2 = 42,
	mcEVENT_START_IV_POS3 = 43,
	mcEVENT_START_IV_POS4 = 44
} McCamAutEventTypeEnum;

typedef enum McCamAutMaStartPosModeEnum
{	mcCAMAUT_EVALUATE_NEW,
	mcCAMAUT_NO_NEW_EVALUATION
} McCamAutMaStartPosModeEnum;

typedef enum McCamAutEventTransitionEnum
{	mcEVENT_IMMEDIATELY = 0,
	mcEVENT_END_OF_STATE = 12
} McCamAutEventTransitionEnum;

typedef enum McABTEnum
{	mcABT_LIN_BD = 0,
	mcABT_LIN = 1,
	mcABT_LIN_PER = 2,
	mcABT_ROT_BD = 10,
	mcABT_ROT = 11,
	mcABT_ROT_PER = 12
} McABTEnum;

typedef enum McAMLEnum
{	mcAML_INT = 0,
	mcAML_INT_PATH_AX = 1,
	mcAML_EXT = 2
} McAMLEnum;

typedef enum McAMoveLimVelEnum
{	mcAMLV_BASIC = 0,
	mcAMLV_ADV = 1
} McAMoveLimVelEnum;

typedef enum McAMoveLimAccEnum
{	mcAMLA_BASIC = 0,
	mcAMLA_ADV = 1
} McAMoveLimAccEnum;

typedef enum McAMoveLimDecEnum
{	mcAMLD_BASIC = 0,
	mcAMLD_ADV = 1
} McAMoveLimDecEnum;

typedef struct McLibraryInfoType
{	plcstring Name[33];
} McLibraryInfoType;

typedef struct McDigitalInputStatusType
{	plcbit HomingSwitch;
	plcbit PositiveLimitSwitch;
	plcbit NegativeLimitSwitch;
	plcbit Trigger1;
	plcbit Trigger2;
	plcbit DriveEnable;
} McDigitalInputStatusType;

typedef struct McAddInfoType
{	struct McDigitalInputStatusType DigitalInputStatus;
	plcbit LagWarning;
	unsigned long StartupCount;
	enum McCommunicationStateEnum CommunicationState;
	enum McAxisPLCopenStateEnum PLCopenState;
} McAddInfoType;

typedef struct McAdvVelCtrlParType
{	float Acceleration;
	float Deceleration;
	float Jerk;
} McAdvVelCtrlParType;

typedef struct McAdvShiftDistanceParType
{	double ProfileDistance;
} McAdvShiftDistanceParType;

typedef struct McAdvShiftZoneParType
{	double StartPosition;
	double EndPosition;
	double Period;
} McAdvShiftZoneParType;

typedef struct McAdvPhasingParType
{	enum McShiftModeEnum ShiftMode;
	enum McProfileBaseEnum ProfileBase;
	float ProfileBaseMaxVelocity;
	struct McAdvShiftDistanceParType DistanceParameters;
	struct McAdvShiftZoneParType ZoneParameters;
} McAdvPhasingParType;

typedef struct McAdvOffsetParType
{	enum McShiftModeEnum ShiftMode;
	enum McProfileBaseEnum ProfileBase;
	float ProfileBaseMaxVelocity;
	struct McAdvShiftDistanceParType DistanceParameters;
	struct McAdvShiftZoneParType ZoneParameters;
} McAdvOffsetParType;

typedef struct McAdvGearInParType
{	float MasterMaxVelocity;
} McAdvGearInParType;

typedef struct McCamDefineType
{	plcstring DataObjectName[13];
	unsigned long DataAdress;
} McCamDefineType;

typedef struct McAdvCamAutSetParType
{	enum McCamAutParLockCmdEnum ParLock;
} McAdvCamAutSetParType;

typedef struct McCamAutEventParType
{	enum McCamAutEventTypeEnum Type;
	enum McCamAutEventTransitionEnum Transition;
	enum McSwitchEnum SynchronousUpdate;
	unsigned char NextState;
} McCamAutEventParType;

typedef struct McCamAutCompParType
{	double MasterCompDistance;
	double SlaveCompDistance;
	double MasterCamLeadIn;
	double MinMasterCompDistance;
	double MinSlaveCompDistance;
	double MaxSlaveCompDistance;
	float MinSlaveCompVelocity;
	float MaxSlaveCompVelocity;
	float MaxSlaveCompAccel1;
	float MaxSlaveCompAccel2;
	float SlaveCompJoltTime;
} McCamAutCompParType;

typedef struct McCamAutMasterAxisType
{	struct McAxisType* Axis;
	enum McValueSrcEnum ValueSource;
	float MaxVelocity;
} McCamAutMasterAxisType;

typedef struct McCamAutMasterVarType
{	double* VariableAddress;
	float MaxVelocity;
} McCamAutMasterVarType;

typedef struct McCamAutAxisType
{	struct McAxisType* Axis;
	enum McValueSrcEnum ValueSource;
} McCamAutAxisType;

typedef struct McCamAutVariableType
{	double* VariableAddress;
} McCamAutVariableType;

typedef struct McCamAutAdvStateParType
{	unsigned short RepeatCounterInit;
	enum McSwitchEnum RepeatCounterSetTransfer;
	unsigned short RepeatCounterSet;
	enum McCamAutCouplingSourceEnum MasterSource;
	struct McCamAutAxisType MasterAxis;
	struct McCamAutVariableType MasterVariable;
} McCamAutAdvStateParType;

typedef struct McCamAutStateParType
{	unsigned short CamID;
	signed long MasterFactor;
	signed long SlaveFactor;
	enum McCamAutCompModeEnum CompensationMode;
	struct McCamAutCompParType CompensationParameters;
	struct McCamAutAdvStateParType AdvancedParameters;
	struct McCamAutEventParType Event[5];
} McCamAutStateParType;

typedef struct McCamAutCtrlSettingsType
{	enum McCamAutCrossLeftBoundEnum CrossLeftBoundary;
	enum McCamAutCamChangeImmedEnum CamChangeImmediately;
} McCamAutCtrlSettingsType;

typedef struct McCamAutStartStateParType
{	unsigned char StartState;
	double MasterStartRelPos;
} McCamAutStartStateParType;

typedef struct McCamAutAddAxesType
{	enum McCamAutCouplingSourceEnum AdditiveMasterSource;
	struct McCamAutAxisType AdditiveMasterAxis;
	struct McCamAutVariableType AdditiveMasterVariable;
	enum McCamAutCouplingSourceEnum AdditiveSlaveSource;
	struct McCamAutAxisType AdditiveSlaveAxis;
	struct McCamAutVariableType AdditiveSlaveVariable;
} McCamAutAddAxesType;

typedef struct McCamAutAdvParType
{	struct McCamAutStartStateParType StartStateParam;
	struct McCamAutAddAxesType AdditiveAxes;
	enum McCamAutMaStartPosModeEnum MasterStartPosMode;
	struct McCamAutCtrlSettingsType ControlSettings;
	double StartIntervalPos1;
	double StartIntervalPos2;
	double StartIntervalPos3;
	double StartIntervalPos4;
} McCamAutAdvParType;

typedef struct McCamAutMasterParType
{	enum McCamAutCouplingSourceEnum MasterSource;
	struct McCamAutMasterAxisType MasterAxis;
	struct McCamAutMasterVarType MasterVariable;
	double MasterStartPosition;
	double MasterStartInterval;
} McCamAutMasterParType;

typedef struct McCamAutCommonParType
{	struct McCamAutMasterParType Master;
	struct McCamAutAdvParType AdvancedParameters;
} McCamAutCommonParType;

typedef struct McCamAutParType
{	struct McCamAutCommonParType Common;
	struct McCamAutStateParType State[15];
} McCamAutParType;

typedef struct McCamAutDefineType
{	plcstring DataObjectName[33];
	unsigned long DataAddress;
} McCamAutDefineType;

typedef struct McPolynomialDataType
{	float A;
	float B;
	float C;
	float D;
	float E;
	float F;
	float G;
	float X;
	unsigned long Reserve;
} McPolynomialDataType;

typedef struct McCamDataType
{	signed long MasterPeriod;
	signed long SlavePeriod;
	unsigned long PolynomialNumber;
	struct McPolynomialDataType PolynomialData[128];
} McCamDataType;

typedef struct McAdvCalcCamFromPointsParType
{	enum McCamIplModeEnum InterpolationMode;
	enum McCamTypeEnum Type;
	unsigned long NumberOfPolynomials;
	signed long MasterPeriod;
	double StartSlope;
	double StartCurvature;
	double EndSlope;
	double EndCurvature;
} McAdvCalcCamFromPointsParType;

typedef struct McCamSectionType
{	float MasterPoint;
	float SlavePoint;
	float FirstDerivative;
	float SecondDerivative;
	enum McCamSectRefPointEnum Mode;
	enum McCamSectLawOfMotionEnum Type;
	float InflectionPoint;
} McCamSectionType;

typedef struct McCamSectionsType
{	struct McCamSectionType Section[130];
} McCamSectionsType;

typedef struct McABTLinBdType
{	enum McCfgLocLenUnitEnum MeasurementUnit;
	double MeasurementResolution;
	enum McCfgCntDirEnum CountDirection;
} McABTLinBdType;

typedef struct McABTLinType
{	enum McCfgLocLenUnitEnum MeasurementUnit;
	double MeasurementResolution;
	enum McCfgCntDirEnum CountDirection;
} McABTLinType;

typedef struct McABTLinPerPerSetType
{	double Period;
} McABTLinPerPerSetType;

typedef struct McABTLinPerType
{	enum McCfgLocLenUnitEnum MeasurementUnit;
	double MeasurementResolution;
	enum McCfgCntDirEnum CountDirection;
	struct McABTLinPerPerSetType PeriodSettings;
} McABTLinPerType;

typedef struct McABTRotBdType
{	enum McCfgLocRotUnitEnum MeasurementUnit;
	double MeasurementResolution;
	enum McCfgCntDirEnum CountDirection;
} McABTRotBdType;

typedef struct McABTRotType
{	enum McCfgLocRotUnitEnum MeasurementUnit;
	double MeasurementResolution;
	enum McCfgCntDirEnum CountDirection;
} McABTRotType;

typedef struct McABTRotPerPerSetType
{	double Period;
} McABTRotPerPerSetType;

typedef struct McABTRotPerType
{	enum McCfgLocRotUnitEnum MeasurementUnit;
	double MeasurementResolution;
	enum McCfgCntDirEnum CountDirection;
	struct McABTRotPerPerSetType PeriodSettings;
} McABTRotPerType;

typedef struct McABTType
{	enum McABTEnum Type;
	struct McABTLinBdType LinearBounded;
	struct McABTLinType Linear;
	struct McABTLinPerType LinearPeriodic;
	struct McABTRotBdType RotaryBounded;
	struct McABTRotType Rotary;
	struct McABTRotPerType RotaryPeriodic;
} McABTType;

typedef struct McAMoveLimVelType
{	enum McAMoveLimVelEnum Type;
	struct McCfgLimVelBaseType Basic;
	struct McCfgLimVelAdvType Advanced;
} McAMoveLimVelType;

typedef struct McAMoveLimAccType
{	enum McAMoveLimAccEnum Type;
	struct McCfgLimAccBaseType Basic;
	struct McCfgLimAccAdvType Advanced;
} McAMoveLimAccType;

typedef struct McAMoveLimDecType
{	enum McAMoveLimDecEnum Type;
	struct McCfgLimDecBaseType Basic;
	struct McCfgLimDecAdvType Advanced;
} McAMoveLimDecType;

typedef struct McAMLIntType
{	struct McCfgLimPosType Position;
	struct McAMoveLimVelType Velocity;
	struct McAMoveLimAccType Acceleration;
	struct McAMoveLimDecType Deceleration;
} McAMLIntType;

typedef struct McAMLIntPathAxType
{	struct McCfgLimPosType Position;
	struct McAMoveLimVelType Velocity;
	struct McAMoveLimAccType Acceleration;
	struct McAMoveLimDecType Deceleration;
	struct McCfgLimJerkType Jerk;
	struct McCfgLimTorqType Torque;
	struct McCfgLimForType Force;
} McAMLIntPathAxType;

typedef struct McAMLType
{	enum McAMLEnum Type;
	struct McAMLIntType Internal;
	struct McAMLIntPathAxType InternalPathAxis;
	struct McCfgExtLimRefType External;
} McAMLType;

typedef struct McCfgAxType
{	struct McABTType BaseType;
	struct McAMLType MovementLimits;
} McCfgAxType;

typedef struct McCfgAxBaseTypType
{	struct McABTType BaseType;
} McCfgAxBaseTypType;

typedef struct McCfgAxMoveLimType
{	struct McAMLType MovementLimits;
} McCfgAxMoveLimType;

typedef struct MC_BR_GetAxisLibraryInfo
{
	/* VAR_INPUT (analog) */
	struct McAxisType* Axis;
	/* VAR_OUTPUT (analog) */
	signed long ErrorID;
	struct McLibraryInfoType Info;
	/* VAR (analog) */
	struct McInternalType Internal;
	/* VAR_INPUT (digital) */
	plcbit Execute;
	/* VAR_OUTPUT (digital) */
	plcbit Done;
	plcbit Busy;
	plcbit Active;
	plcbit Error;
} MC_BR_GetAxisLibraryInfo_typ;

typedef struct MC_Power
{
	/* VAR_INPUT (analog) */
	struct McAxisType* Axis;
	/* VAR_OUTPUT (analog) */
	signed long ErrorID;
	/* VAR (analog) */
	struct McInternalType Internal;
	/* VAR_INPUT (digital) */
	plcbit Enable;
	/* VAR_OUTPUT (digital) */
	plcbit Status;
	plcbit Busy;
	plcbit Error;
} MC_Power_typ;

typedef struct MC_Home
{
	/* VAR_INPUT (analog) */
	struct McAxisType* Axis;
	double Position;
	enum McHomingModeEnum HomingMode;
	enum McBufferModeEnum BufferMode;
	/* VAR_OUTPUT (analog) */
	signed long ErrorID;
	/* VAR (analog) */
	struct McInternalType Internal;
	/* VAR_INPUT (digital) */
	plcbit Execute;
	/* VAR_OUTPUT (digital) */
	plcbit Done;
	plcbit Busy;
	plcbit Active;
	plcbit CommandAborted;
	plcbit Error;
} MC_Home_typ;

typedef struct MC_BR_BrakeOperation
{
	/* VAR_INPUT (analog) */
	struct McAxisType* Axis;
	enum McBrakeCmdEnum Command;
	/* VAR_OUTPUT (analog) */
	signed long ErrorID;
	enum McBrakeStatusEnum BrakeStatus;
	/* VAR (analog) */
	struct McInternalType Internal;
	/* VAR_INPUT (digital) */
	plcbit Execute;
	/* VAR_OUTPUT (digital) */
	plcbit Done;
	plcbit Busy;
	plcbit Error;
} MC_BR_BrakeOperation_typ;

typedef struct MC_Stop
{
	/* VAR_INPUT (analog) */
	struct McAxisType* Axis;
	float Deceleration;
	float Jerk;
	/* VAR_OUTPUT (analog) */
	signed long ErrorID;
	/* VAR (analog) */
	struct McInternalType Internal;
	/* VAR_INPUT (digital) */
	plcbit Execute;
	/* VAR_OUTPUT (digital) */
	plcbit Done;
	plcbit Busy;
	plcbit CommandAborted;
	plcbit Error;
} MC_Stop_typ;

typedef struct MC_Halt
{
	/* VAR_INPUT (analog) */
	struct McAxisType* Axis;
	float Deceleration;
	float Jerk;
	enum McBufferModeEnum BufferMode;
	/* VAR_OUTPUT (analog) */
	signed long ErrorID;
	/* VAR (analog) */
	struct McInternalType Internal;
	/* VAR_INPUT (digital) */
	plcbit Execute;
	/* VAR_OUTPUT (digital) */
	plcbit Done;
	plcbit Busy;
	plcbit Active;
	plcbit CommandAborted;
	plcbit Error;
} MC_Halt_typ;

typedef struct MC_BR_CamAutomatCommand
{
	/* VAR_INPUT (analog) */
	struct McAxisType* Slave;
	float Deceleration;
	/* VAR_OUTPUT (analog) */
	signed long ErrorID;
	unsigned char ActualStateIndex;
	unsigned short ActualStateCamIndex;
	/* VAR (analog) */
	struct McInternalType Internal;
	/* VAR_INPUT (digital) */
	plcbit Enable;
	plcbit Start;
	plcbit Stop;
	plcbit Restart;
	plcbit EndAutomat;
	plcbit SetSignal1;
	plcbit SetSignal2;
	plcbit SetSignal3;
	plcbit SetSignal4;
	plcbit ResetSignal1;
	plcbit ResetSignal2;
	plcbit ResetSignal3;
	plcbit ResetSignal4;
	/* VAR_OUTPUT (digital) */
	plcbit Valid;
	plcbit Busy;
	plcbit CommandAborted;
	plcbit Error;
	plcbit Running;
	plcbit StandBy;
	plcbit InCam;
	plcbit InCompensation;
	plcbit Ready;
} MC_BR_CamAutomatCommand_typ;

typedef struct MC_BR_CamAutomatReset
{
	/* VAR_INPUT (analog) */
	struct McAxisType* Slave;
	enum McCamAutResetCmdEnum Command;
	unsigned char StateIndex;
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
} MC_BR_CamAutomatReset_typ;

typedef struct MC_BR_CamAutomatParLock
{
	/* VAR_INPUT (analog) */
	struct McAxisType* Slave;
	enum McCamAutParLockCmdEnum Command;
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
} MC_BR_CamAutomatParLock_typ;

typedef struct MC_MoveAbsolute
{
	/* VAR_INPUT (analog) */
	struct McAxisType* Axis;
	double Position;
	float Velocity;
	float Acceleration;
	float Deceleration;
	float Jerk;
	enum McDirectionEnum Direction;
	enum McBufferModeEnum BufferMode;
	/* VAR_OUTPUT (analog) */
	signed long ErrorID;
	/* VAR (analog) */
	struct McInternalType Internal;
	/* VAR_INPUT (digital) */
	plcbit Execute;
	/* VAR_OUTPUT (digital) */
	plcbit Done;
	plcbit Busy;
	plcbit Active;
	plcbit CommandAborted;
	plcbit Error;
} MC_MoveAbsolute_typ;

typedef struct MC_MoveAdditive
{
	/* VAR_INPUT (analog) */
	struct McAxisType* Axis;
	double Distance;
	float Velocity;
	float Acceleration;
	float Deceleration;
	float Jerk;
	enum McBufferModeEnum BufferMode;
	/* VAR_OUTPUT (analog) */
	signed long ErrorID;
	/* VAR (analog) */
	struct McInternalType Internal;
	/* VAR_INPUT (digital) */
	plcbit Execute;
	/* VAR_OUTPUT (digital) */
	plcbit Done;
	plcbit Busy;
	plcbit Active;
	plcbit CommandAborted;
	plcbit Error;
} MC_MoveAdditive_typ;

typedef struct MC_MoveVelocity
{
	/* VAR_INPUT (analog) */
	struct McAxisType* Axis;
	float Velocity;
	float Acceleration;
	float Deceleration;
	float Jerk;
	enum McDirectionEnum Direction;
	enum McBufferModeEnum BufferMode;
	/* VAR_OUTPUT (analog) */
	signed long ErrorID;
	/* VAR (analog) */
	struct McInternalType Internal;
	/* VAR_INPUT (digital) */
	plcbit Execute;
	/* VAR_OUTPUT (digital) */
	plcbit InVelocity;
	plcbit Busy;
	plcbit Active;
	plcbit CommandAborted;
	plcbit Error;
} MC_MoveVelocity_typ;

typedef struct MC_BR_MoveCyclicPosition
{
	/* VAR_INPUT (analog) */
	struct McAxisType* Axis;
	enum McIplModeEnum InterpolationMode;
	struct McAdvMoveCycParType AdvancedParameters;
	double CyclicPosition;
	/* VAR_OUTPUT (analog) */
	signed long ErrorID;
	/* VAR (analog) */
	struct McInternalType Internal;
	/* VAR_INPUT (digital) */
	plcbit Enable;
	/* VAR_OUTPUT (digital) */
	plcbit Valid;
	plcbit Busy;
	plcbit CommandAborted;
	plcbit Error;
} MC_BR_MoveCyclicPosition_typ;

typedef struct MC_BR_MoveCyclicVelocity
{
	/* VAR_INPUT (analog) */
	struct McAxisType* Axis;
	enum McIplModeEnum InterpolationMode;
	struct McAdvMoveCycParType AdvancedParameters;
	float CyclicVelocity;
	/* VAR_OUTPUT (analog) */
	signed long ErrorID;
	/* VAR (analog) */
	struct McInternalType Internal;
	/* VAR_INPUT (digital) */
	plcbit Enable;
	/* VAR_OUTPUT (digital) */
	plcbit Valid;
	plcbit Busy;
	plcbit CommandAborted;
	plcbit Error;
} MC_BR_MoveCyclicVelocity_typ;

typedef struct MC_SetOverride
{
	/* VAR_INPUT (analog) */
	struct McAxisType* Axis;
	float VelFactor;
	float AccFactor;
	/* VAR_OUTPUT (analog) */
	signed long ErrorID;
	/* VAR (analog) */
	struct McInternalType Internal;
	/* VAR_INPUT (digital) */
	plcbit Enable;
	/* VAR_OUTPUT (digital) */
	plcbit Enabled;
	plcbit Busy;
	plcbit Error;
} MC_SetOverride_typ;

typedef struct MC_ReadStatus
{
	/* VAR_INPUT (analog) */
	struct McAxisType* Axis;
	/* VAR_OUTPUT (analog) */
	signed long ErrorID;
	/* VAR (analog) */
	struct McInternalType Internal;
	/* VAR_INPUT (digital) */
	plcbit Enable;
	/* VAR_OUTPUT (digital) */
	plcbit Valid;
	plcbit Busy;
	plcbit Error;
	plcbit ErrorStop;
	plcbit Disabled;
	plcbit Stopping;
	plcbit Homing;
	plcbit StandStill;
	plcbit DiscreteMotion;
	plcbit ContinuousMotion;
	plcbit SynchronizedMotion;
} MC_ReadStatus_typ;

typedef struct MC_ReadAxisInfo
{
	/* VAR_INPUT (analog) */
	struct McAxisType* Axis;
	/* VAR_OUTPUT (analog) */
	signed long ErrorID;
	struct McAddInfoType AdditionalInfo;
	/* VAR (analog) */
	struct McInternalType Internal;
	/* VAR_INPUT (digital) */
	plcbit Enable;
	/* VAR_OUTPUT (digital) */
	plcbit Valid;
	plcbit Busy;
	plcbit Error;
	plcbit Simulation;
	plcbit CommunicationReady;
	plcbit ReadyForPowerOn;
	plcbit PowerOn;
	plcbit IsHomed;
	plcbit AxisWarning;
} MC_ReadAxisInfo_typ;

typedef struct MC_ReadActualPosition
{
	/* VAR_INPUT (analog) */
	struct McAxisType* Axis;
	/* VAR_OUTPUT (analog) */
	signed long ErrorID;
	double Position;
	/* VAR (analog) */
	struct McInternalType Internal;
	/* VAR_INPUT (digital) */
	plcbit Enable;
	/* VAR_OUTPUT (digital) */
	plcbit Valid;
	plcbit Busy;
	plcbit Error;
} MC_ReadActualPosition_typ;

typedef struct MC_ReadActualVelocity
{
	/* VAR_INPUT (analog) */
	struct McAxisType* Axis;
	/* VAR_OUTPUT (analog) */
	signed long ErrorID;
	float Velocity;
	/* VAR (analog) */
	struct McInternalType Internal;
	/* VAR_INPUT (digital) */
	plcbit Enable;
	/* VAR_OUTPUT (digital) */
	plcbit Valid;
	plcbit Busy;
	plcbit Error;
} MC_ReadActualVelocity_typ;

typedef struct MC_ReadActualTorque
{
	/* VAR_INPUT (analog) */
	struct McAxisType* Axis;
	/* VAR_OUTPUT (analog) */
	signed long ErrorID;
	float Torque;
	/* VAR (analog) */
	struct McInternalType Internal;
	/* VAR_INPUT (digital) */
	plcbit Enable;
	/* VAR_OUTPUT (digital) */
	plcbit Valid;
	plcbit Busy;
	plcbit Error;
} MC_ReadActualTorque_typ;

typedef struct MC_ReadAxisError
{
	/* VAR_INPUT (analog) */
	struct McAxisType* Axis;
	/* VAR_OUTPUT (analog) */
	signed long ErrorID;
	signed long AxisErrorID;
	signed long RecordID;
	/* VAR (analog) */
	struct McInternalType Internal;
	/* VAR_INPUT (digital) */
	plcbit Enable;
	plcbit ReadNext;
	/* VAR_OUTPUT (digital) */
	plcbit Valid;
	plcbit Busy;
	plcbit Error;
} MC_ReadAxisError_typ;

typedef struct MC_Reset
{
	/* VAR_INPUT (analog) */
	struct McAxisType* Axis;
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
} MC_Reset_typ;

typedef struct MC_BR_VelocityControl
{
	/* VAR_INPUT (analog) */
	struct McAxisType* Axis;
	struct McAdvVelCtrlParType AdvancedParameters;
	float CyclicVelocity;
	/* VAR_OUTPUT (analog) */
	signed long ErrorID;
	/* VAR (analog) */
	struct McInternalType Internal;
	/* VAR_INPUT (digital) */
	plcbit Enable;
	/* VAR_OUTPUT (digital) */
	plcbit Valid;
	plcbit Busy;
	plcbit CommandAborted;
	plcbit Error;
} MC_BR_VelocityControl_typ;

typedef struct MC_BR_ReadCyclicPosition
{
	/* VAR_INPUT (analog) */
	struct McAxisType* Axis;
	enum McValueSrcEnum ValueSource;
	/* VAR_OUTPUT (analog) */
	signed long ErrorID;
	double CyclicPosition;
	/* VAR (analog) */
	struct McInternalType Internal;
	/* VAR_INPUT (digital) */
	plcbit Enable;
	/* VAR_OUTPUT (digital) */
	plcbit Valid;
	plcbit Busy;
	plcbit Error;
} MC_BR_ReadCyclicPosition_typ;

typedef struct MC_ReadParameter
{
	/* VAR_INPUT (analog) */
	struct McAxisType* Axis;
	enum McPlcopenParEnum ParameterNumber;
	/* VAR_OUTPUT (analog) */
	signed long ErrorID;
	double Value;
	/* VAR (analog) */
	struct McInternalType Internal;
	/* VAR_INPUT (digital) */
	plcbit Enable;
	/* VAR_OUTPUT (digital) */
	plcbit Valid;
	plcbit Busy;
	plcbit Error;
} MC_ReadParameter_typ;

typedef struct MC_BR_JogVelocity
{
	/* VAR_INPUT (analog) */
	struct McAxisType* Axis;
	float Velocity;
	float Acceleration;
	float Deceleration;
	float Jerk;
	/* VAR_OUTPUT (analog) */
	signed long ErrorID;
	/* VAR (analog) */
	struct McInternalType Internal;
	/* VAR_INPUT (digital) */
	plcbit Enable;
	plcbit JogPositive;
	plcbit JogNegative;
	/* VAR_OUTPUT (digital) */
	plcbit Ready;
	plcbit Busy;
	plcbit CommandAborted;
	plcbit Error;
	plcbit Jogging;
} MC_BR_JogVelocity_typ;

typedef struct MC_BR_JogLimitPosition
{
	/* VAR_INPUT (analog) */
	struct McAxisType* Axis;
	double FirstPosition;
	double LastPosition;
	float Velocity;
	float Acceleration;
	float Deceleration;
	float Jerk;
	/* VAR_OUTPUT (analog) */
	signed long ErrorID;
	/* VAR (analog) */
	struct McInternalType Internal;
	/* VAR_INPUT (digital) */
	plcbit Enable;
	plcbit JogPositive;
	plcbit JogNegative;
	/* VAR_OUTPUT (digital) */
	plcbit Ready;
	plcbit Busy;
	plcbit CommandAborted;
	plcbit Error;
	plcbit Jogging;
	plcbit LimitReached;
} MC_BR_JogLimitPosition_typ;

typedef struct MC_BR_JogTargetPosition
{
	/* VAR_INPUT (analog) */
	struct McAxisType* Axis;
	float Velocity;
	float Acceleration;
	float Deceleration;
	float Jerk;
	double TargetPosition;
	/* VAR_OUTPUT (analog) */
	signed long ErrorID;
	/* VAR (analog) */
	struct McInternalType Internal;
	/* VAR_INPUT (digital) */
	plcbit Enable;
	plcbit JogToTarget;
	plcbit JogPositive;
	plcbit JogNegative;
	/* VAR_OUTPUT (digital) */
	plcbit Ready;
	plcbit Busy;
	plcbit CommandAborted;
	plcbit Error;
	plcbit Jogging;
	plcbit MovingToTarget;
	plcbit TargetReached;
} MC_BR_JogTargetPosition_typ;

typedef struct MC_TorqueControl
{
	/* VAR_INPUT (analog) */
	struct McAxisType* Axis;
	float Torque;
	float TorqueRamp;
	float Velocity;
	float Acceleration;
	float Jerk;
	enum McBufferModeEnum BufferMode;
	/* VAR_OUTPUT (analog) */
	signed long ErrorID;
	/* VAR (analog) */
	struct McInternalType Internal;
	/* VAR_INPUT (digital) */
	plcbit Execute;
	/* VAR_OUTPUT (digital) */
	plcbit InTorque;
	plcbit Busy;
	plcbit Active;
	plcbit CommandAborted;
	plcbit Error;
	plcbit AxisLimitActive;
} MC_TorqueControl_typ;

typedef struct MC_LimitLoad
{
	/* VAR_INPUT (analog) */
	struct McAxisType* Axis;
	float Load;
	enum McDirectionEnum Direction;
	/* VAR_OUTPUT (analog) */
	signed long ErrorID;
	/* VAR (analog) */
	struct McInternalType Internal;
	/* VAR_INPUT (digital) */
	plcbit Enable;
	/* VAR_OUTPUT (digital) */
	plcbit Busy;
	plcbit Ready;
	plcbit Active;
	plcbit Error;
} MC_LimitLoad_typ;

typedef struct MC_BR_LoadSimulationCommand
{
	/* VAR_INPUT (analog) */
	struct McAxisType* Axis;
	enum McSwitchEnum Command;
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
} MC_BR_LoadSimulationCommand_typ;

typedef struct MC_GearIn
{
	/* VAR_INPUT (analog) */
	struct McAxisType* Master;
	struct McAxisType* Slave;
	signed long RatioNumerator;
	signed long RatioDenominator;
	enum McValueSrcEnum MasterValueSource;
	float Acceleration;
	float Deceleration;
	float Jerk;
	enum McBufferModeEnum BufferMode;
	struct McAdvGearInParType AdvancedParameters;
	/* VAR_OUTPUT (analog) */
	signed long ErrorID;
	/* VAR (analog) */
	struct McInternalTwoRefType Internal;
	/* VAR_INPUT (digital) */
	plcbit Execute;
	/* VAR_OUTPUT (digital) */
	plcbit InGear;
	plcbit Busy;
	plcbit Active;
	plcbit CommandAborted;
	plcbit Error;
} MC_GearIn_typ;

typedef struct MC_BR_CamPrepare
{
	/* VAR_INPUT (analog) */
	struct McAxisType* Axis;
	struct McCamDefineType Cam;
	unsigned short CamID;
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
} MC_BR_CamPrepare_typ;

typedef struct MC_BR_CommandError
{
	/* VAR_INPUT (analog) */
	struct McAxisType* Axis;
	enum McErrorCmdEnum Command;
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
} MC_BR_CommandError_typ;

typedef struct MC_PhasingAbsolute
{
	/* VAR_INPUT (analog) */
	struct McAxisType* Master;
	struct McAxisType* Slave;
	double PhaseShift;
	float Velocity;
	float Acceleration;
	float Deceleration;
	float Jerk;
	enum McBufferModeEnum BufferMode;
	/* VAR_OUTPUT (analog) */
	signed long ErrorID;
	double AbsolutePhaseShift;
	/* VAR (analog) */
	struct McInternalTwoRefType Internal;
	/* VAR_INPUT (digital) */
	plcbit Execute;
	/* VAR_OUTPUT (digital) */
	plcbit Done;
	plcbit Busy;
	plcbit Active;
	plcbit CommandAborted;
	plcbit Error;
} MC_PhasingAbsolute_typ;

typedef struct MC_PhasingRelative
{
	/* VAR_INPUT (analog) */
	struct McAxisType* Master;
	struct McAxisType* Slave;
	double PhaseShift;
	float Velocity;
	float Acceleration;
	float Deceleration;
	float Jerk;
	enum McBufferModeEnum BufferMode;
	/* VAR_OUTPUT (analog) */
	signed long ErrorID;
	double CoveredPhaseShift;
	/* VAR (analog) */
	struct McInternalTwoRefType Internal;
	/* VAR_INPUT (digital) */
	plcbit Execute;
	/* VAR_OUTPUT (digital) */
	plcbit Done;
	plcbit Busy;
	plcbit Active;
	plcbit CommandAborted;
	plcbit Error;
} MC_PhasingRelative_typ;

typedef struct MC_BR_Phasing
{
	/* VAR_INPUT (analog) */
	struct McAxisType* Slave;
	double PhaseShift;
	float Velocity;
	float Acceleration;
	struct McAdvPhasingParType AdvancedParameters;
	/* VAR_OUTPUT (analog) */
	signed long ErrorID;
	double ActualPhaseShift;
	/* VAR (analog) */
	struct McInternalType Internal;
	/* VAR_INPUT (digital) */
	plcbit Enable;
	plcbit StartShift;
	/* VAR_OUTPUT (digital) */
	plcbit Valid;
	plcbit Busy;
	plcbit Error;
	plcbit ShiftAttained;
	plcbit ShiftStarted;
} MC_BR_Phasing_typ;

typedef struct MC_BR_Offset
{
	/* VAR_INPUT (analog) */
	struct McAxisType* Slave;
	double OffsetShift;
	float Velocity;
	float Acceleration;
	struct McAdvOffsetParType AdvancedParameters;
	/* VAR_OUTPUT (analog) */
	signed long ErrorID;
	double ActualOffsetShift;
	/* VAR (analog) */
	struct McInternalType Internal;
	/* VAR_INPUT (digital) */
	plcbit Enable;
	plcbit StartShift;
	/* VAR_OUTPUT (digital) */
	plcbit Valid;
	plcbit Busy;
	plcbit Error;
	plcbit ShiftAttained;
	plcbit ShiftStarted;
} MC_BR_Offset_typ;

typedef struct MC_BR_CamAutomatSetPar
{
	/* VAR_INPUT (analog) */
	struct McAxisType* Slave;
	enum McCamAutSetParCmdEnum Command;
	struct McCamAutDefineType CamAutomat;
	struct McAdvCamAutSetParType AdvancedParameters;
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
} MC_BR_CamAutomatSetPar_typ;

typedef struct MC_BR_CamAutomatGetPar
{
	/* VAR_INPUT (analog) */
	struct McAxisType* Slave;
	enum McCamAutGetParCmdEnum Command;
	struct McCamAutDefineType CamAutomat;
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
} MC_BR_CamAutomatGetPar_typ;

typedef struct MC_BR_CalcCamFromPoints
{
	/* VAR_INPUT (analog) */
	double* MasterPointsAddress;
	double* SlavePointsAddress;
	unsigned short NumberOfPoints;
	struct McCamDataType* CamDataAddress;
	struct McAdvCalcCamFromPointsParType AdvancedParameters;
	/* VAR_OUTPUT (analog) */
	signed long ErrorID;
	/* VAR (analog) */
	struct McExec1InternalType Internal;
	/* VAR_INPUT (digital) */
	plcbit Execute;
	/* VAR_OUTPUT (digital) */
	plcbit Done;
	plcbit Busy;
	plcbit Error;
} MC_BR_CalcCamFromPoints_typ;

typedef struct MC_BR_CalcCamFromSections
{
	/* VAR_INPUT (analog) */
	struct McCamSectionsType* CamSectionsAddress;
	struct McCamDataType* CamDataAddress;
	/* VAR_OUTPUT (analog) */
	signed long ErrorID;
	unsigned short ErrorInSection;
	/* VAR (analog) */
	struct McExec1InternalType Internal;
	/* VAR_INPUT (digital) */
	plcbit Execute;
	/* VAR_OUTPUT (digital) */
	plcbit Done;
	plcbit Busy;
	plcbit Error;
} MC_BR_CalcCamFromSections_typ;



/* Prototyping of functions and function blocks */
_BUR_PUBLIC void MC_BR_GetAxisLibraryInfo(struct MC_BR_GetAxisLibraryInfo* inst);
_BUR_PUBLIC void MC_Power(struct MC_Power* inst);
_BUR_PUBLIC void MC_Home(struct MC_Home* inst);
_BUR_PUBLIC void MC_BR_BrakeOperation(struct MC_BR_BrakeOperation* inst);
_BUR_PUBLIC void MC_Stop(struct MC_Stop* inst);
_BUR_PUBLIC void MC_Halt(struct MC_Halt* inst);
_BUR_PUBLIC void MC_BR_CamAutomatCommand(struct MC_BR_CamAutomatCommand* inst);
_BUR_PUBLIC void MC_BR_CamAutomatReset(struct MC_BR_CamAutomatReset* inst);
_BUR_PUBLIC void MC_BR_CamAutomatParLock(struct MC_BR_CamAutomatParLock* inst);
_BUR_PUBLIC void MC_MoveAbsolute(struct MC_MoveAbsolute* inst);
_BUR_PUBLIC void MC_MoveAdditive(struct MC_MoveAdditive* inst);
_BUR_PUBLIC void MC_MoveVelocity(struct MC_MoveVelocity* inst);
_BUR_PUBLIC void MC_BR_MoveCyclicPosition(struct MC_BR_MoveCyclicPosition* inst);
_BUR_PUBLIC void MC_BR_MoveCyclicVelocity(struct MC_BR_MoveCyclicVelocity* inst);
_BUR_PUBLIC void MC_SetOverride(struct MC_SetOverride* inst);
_BUR_PUBLIC void MC_ReadStatus(struct MC_ReadStatus* inst);
_BUR_PUBLIC void MC_ReadAxisInfo(struct MC_ReadAxisInfo* inst);
_BUR_PUBLIC void MC_ReadActualPosition(struct MC_ReadActualPosition* inst);
_BUR_PUBLIC void MC_ReadActualVelocity(struct MC_ReadActualVelocity* inst);
_BUR_PUBLIC void MC_ReadActualTorque(struct MC_ReadActualTorque* inst);
_BUR_PUBLIC void MC_ReadAxisError(struct MC_ReadAxisError* inst);
_BUR_PUBLIC void MC_Reset(struct MC_Reset* inst);
_BUR_PUBLIC void MC_BR_VelocityControl(struct MC_BR_VelocityControl* inst);
_BUR_PUBLIC void MC_BR_ReadCyclicPosition(struct MC_BR_ReadCyclicPosition* inst);
_BUR_PUBLIC void MC_ReadParameter(struct MC_ReadParameter* inst);
_BUR_PUBLIC void MC_BR_JogVelocity(struct MC_BR_JogVelocity* inst);
_BUR_PUBLIC void MC_BR_JogLimitPosition(struct MC_BR_JogLimitPosition* inst);
_BUR_PUBLIC void MC_BR_JogTargetPosition(struct MC_BR_JogTargetPosition* inst);
_BUR_PUBLIC void MC_TorqueControl(struct MC_TorqueControl* inst);
_BUR_PUBLIC void MC_LimitLoad(struct MC_LimitLoad* inst);
_BUR_PUBLIC void MC_BR_LoadSimulationCommand(struct MC_BR_LoadSimulationCommand* inst);
_BUR_PUBLIC void MC_GearIn(struct MC_GearIn* inst);
_BUR_PUBLIC void MC_BR_CamPrepare(struct MC_BR_CamPrepare* inst);
_BUR_PUBLIC void MC_BR_CommandError(struct MC_BR_CommandError* inst);
_BUR_PUBLIC void MC_PhasingAbsolute(struct MC_PhasingAbsolute* inst);
_BUR_PUBLIC void MC_PhasingRelative(struct MC_PhasingRelative* inst);
_BUR_PUBLIC void MC_BR_Phasing(struct MC_BR_Phasing* inst);
_BUR_PUBLIC void MC_BR_Offset(struct MC_BR_Offset* inst);
_BUR_PUBLIC void MC_BR_CamAutomatSetPar(struct MC_BR_CamAutomatSetPar* inst);
_BUR_PUBLIC void MC_BR_CamAutomatGetPar(struct MC_BR_CamAutomatGetPar* inst);
_BUR_PUBLIC void MC_BR_CalcCamFromPoints(struct MC_BR_CalcCamFromPoints* inst);
_BUR_PUBLIC void MC_BR_CalcCamFromSections(struct MC_BR_CalcCamFromSections* inst);


#ifdef __cplusplus
};
#endif
#endif /* _MCAXIS_ */

