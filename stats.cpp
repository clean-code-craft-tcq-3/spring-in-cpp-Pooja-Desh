#include "stats.h"
//using namespace Statistics;

Stats Statistics::ComputeStatistics(const std::vector<double>& InputData) 
{
    Stats ComputeStatIstics_Temp;
    float sum = 0,average,max=0,min=0;
    for (int i=0; i<int(InputData.size()); i++)
    {
        sum += InputData[i];
    }
    average = sum/sizeof(InputData);

    for (int i=0; i<int(InputData.size()); i++)
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
    ComputeStatIstics_Temp.average = average;
    ComputeStatIstics_Temp.max = max;
    ComputeStatIstics_Temp.min = min;

    return ComputeStatIstics_Temp;
}
