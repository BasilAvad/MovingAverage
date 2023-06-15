#ifndef H_MOVINGAVERAGE_H
#define H_MOVINGAVERAGE_H
#include <queue>

class MovingAverage
{
private:
    /*Number of samples to average عدد القيم التي سوف يتم قرائتها خلال زمن معين */
    int N;
    /*define a queue to store the samples  المصفوفة التي سيتم فيها تخزين القيم المقروئة من الحساس*/
    std::queue<float> samples;

public:
    /// @brief Moving Average constructor
    /// @param _numberofSamples Moving Average number of samples
    MovingAverage(const int &_numberofSamples);
    /// @brief Moving Average constructor overloads
    /// @param _numberofSamples Moving Average number of samples
    /// @param _samples queue where the sensor values whil be stroed
    MovingAverage(const int &_numberofSamples, std::queue<float> _samples);
    ~MovingAverage();
    float mafunc(float sensorValue);
    float movingAveragefunc(float sensorValue);
};
#endif