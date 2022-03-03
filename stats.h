#include <vector>

class Stats
{
public:
    float average, max, min;

    //constructor
    //Stats(const std::vector<double>& inputdata);
};

    //}ComputeStatIstics_Temp;
    
namespace Statistics 
{
    Stats ComputeStatistics(const std::vector<float>& inputData);
}

class IAlerter
{
    /*int alert_flag;
    virtual void set_alert()
    {
        alert_flag = 0;
    }*/
}

class EmailAlert::public IAlerter
{
    bool emailSent;
    void alert_email()
    {
        emailSent = true;
    }
}

class LEDAlert::public IAlerter
{
    bool ledGlows;
    void alert_LED()
    {
        ledGlows = true;
    }
}

class StatsAlerter::public IAlerter
{
    private:
    float maxThreshold;
    std::vector<float> inputData;
    std::vector<IAlerter> alerters_input;

    public:
    checkAndAlert(const std::vector<float>& inputData);

    //parametrised constructor
    StatsAlerter(maxThreshold_temp, alerters)
    {
        maxThreshold = maxThreshold_temp;
        alerters_input = alerters;
    }

}



//alerters is vector of struct

