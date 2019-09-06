

PROGRAM _INIT
	MpAxisBasic_0(
		MpLink := ADR(gVAxis_Inv), 
		Enable := FALSE , 
		Parameters := ADR(MpAxisParameters) 

	);
	MpAxisBasic_0.Enable := TRUE;

	
	MC_Power_0(
		Axis := ADR(gAxis_Inv), 
		Enable := FALSE 
	);

	MC_ReadStatus_0(
		Axis := ADR(gAxis_Inv), 
		Enable := TRUE
	);

	AdvancedParameters.Acceleration := 1e6;
	AdvancedParameters.Deceleration := 1e6;
	AdvancedParameters.Jerk := 0.0;
	MC_BR_VelocityControl_0(
		Axis := ADR(gAxis_Inv), 
		Enable := FALSE, 
		AdvancedParameters := AdvancedParameters, 
		CyclicVelocity := 0
	);



	MC_ReadActualVelocity_0(
		Axis := ADR(gAxis_Inv),  
		Enable := TRUE 
	);

	MC_Reset_0(
		Axis := ADR(gAxis_Inv), 
		Execute := FALSE
	);
 
END_PROGRAM