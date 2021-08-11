#include <iostream>
#include <cmath>
using namespace std;

int main()
{
   // max = 10//
    float values [10],variance, meanValues, standardDev,sumValues = 0.0;
    int i;

    cout << "Enter any 10 values of your choice: " << endl;
    for (i = 0; i < 10; i++)
    {
        cin >> values [i];
        sumValues += values[i];            //summation of values
        meanValues = sumValues / 10;        //mean
    }
    for (i = 0;i < 10; i++)
    {
        variance = pow((values[i]- meanValues), 2);
        variance = variance / 10;
        standardDev = sqrt(variance);

    }
    cout << standardDev;

    return 0;
}
