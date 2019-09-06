
PROGRAM _CYCLIC


	MpAxisBasic_0(	
		Stop := MC_ReadStatus_0.ErrorStop
	);
	 	
	MC_Power_0(
		Enable := MpAxisBasic_0.PowerOn
	);

	MC_BR_VelocityControl_0(
		Enable := MC_Power_0.Status, 
		CyclicVelocity := MpAxisBasic_0.Velocity / 10 * 360
	);

	MC_ReadStatus_0();

	MC_ReadActualVelocity_0();
	Position := Position + MC_ReadActualVelocity_0.Velocity * 0.01;

	MC_Reset_0();
END_PROGRAM
