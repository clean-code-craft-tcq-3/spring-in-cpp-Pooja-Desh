#include "stats.h"
//using namespace Statistics;

Stats Statistics::ComputeStatistics(const std::vector<float>& InputData) 
{
    if(InputData.size())
    {
        float i, sum = 0, average;
        for (i = 0; i < float(InputData.size()); i++)
        {
            sum += InputData[i];
        }
        average = sum / float(InputData.size());
        //std::cout<<average;

        //average = (std::accumulate(InputData.begin(),InputData.end(),0))/int(sizeof(InputData));
        //std::cout<<average;

        float max = InputData[0], min = InputData[0];
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
        average = InputData[0];
        max = InputData[0];
        min = InputData[0];
    }
    Stats ComputeStatIstics_Temp; 
    ComputeStatIstics_Temp.average = average;
    ComputeStatIstics_Temp.max = max;
    ComputeStatIstics_Temp.min = min;

    return ComputeStatIstics_Temp;
}
