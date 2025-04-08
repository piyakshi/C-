#include <iostream>
#include <string.h>
using namespace std;
class sensordata
{
protected:
    int temperature;
    string humidity, windspeed;

public:
    void put_data(int t, string h, string ws)
    {
        temperature = t;
        humidity = h;
        windspeed = ws;
    }
};
class processeddata : public sensordata
{
public:
    string weather_condition, wind_direction;
    void put_data1(string wc, string wd)
    {
        weather_condition = wc;
        wind_direction = wd;
    }
};
class display : public processeddata
{
public:
    void ShowData()
    {
        cout << "Temperature is " << temperature << endl
             << "Humidity :-" << humidity << endl
             << "Windspeed :-" <<
             
              windspeed << endl
             << "weather condition  " << weather_condition << endl
             << "wind direction :- " << wind_direction << endl;
    }
};

int main()
{

    
    display obj;
    obj.put_data(30, "moderate", "low");
    obj.put_data1("sunny", "N");
    obj.ShowData();

    return 0;
}
