#include "stats.h"
//using namespace Statistics;

Stats Statistics::ComputeStatistics(const std::vector<float>& InputData) 
{
    float i, sum = 0, average,min,max;
    if(InputData.size())
    {
        for (i = 0; i < float(InputData.size()); i++)
        {
            sum += InputData[i];
        }
        average = sum / float(InputData.size());
        //std::cout<<average;

        //average = (std::accumulate(InputData.begin(),InputData.end(),0))/int(sizeof(InputData));
        //std::cout<<average;

        max = InputData[0];
        min = InputData[0];
        for (int i = 0; i < int(InputData.size()); i++)
        {
            if (max < InputData[i])
            {
                max = InputData[i];
            }
            if (min > InputData[i])
            {
                min = InputData[i];
            }
        }
    }
    else
    {
        average = 0/0;
        max = 0/0;
        min = 0/0;
    }
    Stats ComputeStatIstics_Temp; 
    ComputeStatIstics_Temp.average = average;
    ComputeStatIstics_Temp.max = max;
    ComputeStatIstics_Temp.min = min;

    return ComputeStatIstics_Temp;
}
