#include <movingaverage.h>

MovingAverage::MovingAverage(const int &_numberofSamples)
    : N{_numberofSamples} {};
/// @brief Constructor
/// @param _numberofSamples number of samples for moving average
/// @param _samples define a queue to store the samples
MovingAverage::MovingAverage(const int &_numberofSamples, std::queue<float> _samples)
    : N{_numberofSamples}, samples{_samples} {};

float MovingAverage::mafunc(float sensorValue)
{
 
        samples.push(sensorValue);
        if (samples.size() > N)
        {
            samples.pop();
        }
        float sum = 0;
        std::queue<float> copySamples = samples;
        while (!copySamples.empty())
        {
            sum += copySamples.front();
            copySamples.pop();
        }
        float movingAverage = sum / samples.size();
        return movingAverage;
   
}

MovingAverage::~MovingAverage()
{
    delete &N;
    delete &samples;
}