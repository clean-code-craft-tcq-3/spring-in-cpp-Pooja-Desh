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
    int alert_flag;
    virtual void set_alert()
    {
        //alert_flag = 0;
    }
};

class EmailAlert : public IAlerter
{
    bool emailSent;
    void set_alert()
    {
        emailSent = true;
    }
};

class LEDAlert : public IAlerter
{
    bool ledGlows;
    void set_alert()
    {
        ledGlows = true;
    }
};

class StatsAlerter : public EmailAlert, public LEDAlert
{
    private:
    float maxThreshold;
    std::vector<float> inputData;
    std::vector<IAlerter> alerters_input;

    public:
    void checkAndAlert(const std::vector<float>& inputData);

    //parametrised constructor
    void StatsAlerter(const float maxThreshold_temp, std::vector<IAlerter*> alerters)
    {
        maxThreshold = maxThreshold_temp;
        alerters_input = alerters;
    }

};



//alerters is vector of struct

