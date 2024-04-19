#include "VLUAVG.h"

VLUAVG::VLUAVG()
{
    readingCount = 0;
    for (int i = 0; i < 10; i++)
    {
        temperatureReadings[i] = 0;
        humidityReadings[i] = 0;
    }
}

void VLUAVG::addReading(float temperature, float humidity)
{
    if (readingCount < 10)
    {
        temperatureReadings[readingCount] = temperature;
        humidityReadings[readingCount] = humidity;
        readingCount++;
    }
}

float VLUAVG::getAverageTemperature()
{
    float sum = 0;
    for (int i = 0; i < readingCount; i++)
    {
        sum += temperatureReadings[i];
    }
    return sum / readingCount;
}

float VLUAVG::getAverageHumidity()
{
    float sum = 0;
    for (int i = 0; i < readingCount; i++)
    {
        sum += humidityReadings[i];
    }
    return sum / readingCount;
}