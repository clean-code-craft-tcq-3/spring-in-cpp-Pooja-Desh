#include <vector>



namespace Statistics 
{
    class Stats
    {
       public:
       double average, max, min; 

       //constructor
       Stats(const std::vector<double>& inputdata);
    };

    //Stats ComputeStatistics(const std::vector<double>& inputData);

}
