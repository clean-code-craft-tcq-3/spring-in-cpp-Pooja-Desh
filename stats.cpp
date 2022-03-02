#include "stats.h"
using namespace Statistics;

Stats ComputeStatistics(const std::vector<double>& InputData) 
{
    double sum = 0,average,max=0,min=0;
    for (int i=0; i<sizeof(InputData); i++)
    {
        sum += InputData[i];
    }
    average = sum/sizeof(InputData);

    for (int i=0; i<sizeof(InputData); i++)
    {
        if(max < InputData[i])
        {
            max = InputData[i]; 
        }

        if(min > InputData[i])
        {
            min = InputData[i]; 
        }
    }  
    ComputeStatistics.average = average;
    ComputeStatistics.max = max;
    ComputeStatistics.min = min;
}
