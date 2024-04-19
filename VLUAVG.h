#ifndef VLUAVG_h
#define VLUAVG_h

#include "Arduino.h"

class VLUAVG
{
public:
    VLUAVG();
    void addReading(float temperature, float humidity);
    float getAverageTemperature();
    float getAverageHumidity();
private:
    float temperatureReadings[10];
    float humidityReadings[10];
    int readingCount;
};

#endif