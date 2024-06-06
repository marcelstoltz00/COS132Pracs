#ifndef MONITORINGSYSTEM_H
#define MONITORINGSYSTEM_H
#include "PressureControl.h"
#include "HumidityControl.h"
#include "TemperatureControl.h"
#include <iostream>
void monitorAndAdjust(float temperature, float pressure, float humidity);
#endif // MONITORING_SYSTEM_H