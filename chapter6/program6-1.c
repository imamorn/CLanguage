while true)
{
	temp = getTemperature();
	if (temp < 68)
		turnOnHeater(); turnOffAirCond()
	else if(temp > 78)
		turnOnAirCond(); turnOffHeater()
	else
	{
		turnOffHeater(); 
		turnOffAirCond()
	} // else 
} // while true
