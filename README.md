# mapp-motion-positioning-acoposinverter
Positioning with mapp Motion &amp; ACOPOSinverters

## Mission
Starting with V5.8 mapp Motion supports the use of ACOPOSinverter as mapp axis.
If function model is configured as 'Motion configuration' instead of 'Direct control' the inverter will be controlled as 'DS402 profile' drive. 

Afterwards controlling the drive is very comfortable but there are still limitiations as there is only support for "Velocity mode", e.g. no support for MC_MoveAbsolute, MC_MoveAdditive e.g.

But sometimes positioning with a simple induction motor might be required even there is no feedback sensor for speed or position.

This example project will show a simple approach with mapp Motion's "Pure Virtual Axis"


## Configuring ACOPOSinverter in Physical View
function model = 'Motion configuration'
we assume no gear (1:1)

## Configuring real axis
As only 'Base type' = 'Rotary' and 'Linear' and integer units are allowed for ACOPOSinverter axis we use 
'Rotary' with 'Measurement resolution' = '1', e.g. one revolution of motor axis is 360 degrees

## Configuring virtual axis
Nothing special here as virtual axes support all 'Base types'. We assume 10 mm per motor axis revolution and
define borders with 'Base type' = 'Linear bounded'
Later on we 'couple' both axes in plc by calculating velocity by this factor, that it is...

## Result
see [Video](https://youtu.be/2xlJ4MhTJ84)

## Warranty/Disclaimer
This documentation and sample is **not an official B&amp;R product!**
For this reason the use it at your own risk and there is NO claim on support or maintenance.

