#include <iostream>
#include <math.h>

using namespace std;

 void setToValue (string var, double height,double setTo)

{
     //double newVariable(0);
     var=setTo;
     cout<<string(var)<<endl;
 }


int main()
{
 double weight, height, pi, avagadrosNumber;
 setToValue(height, 65.7);
 setToValue(weight, 210);
 setToValue(pi, 3.14156);
 setToValue(avagadrosNumber, 6.02e-23);
 cout << "This should be 65.7 --> " << height << endl;
 cout << "This should be 210 --> " << weight << endl;
 cout << "This should be 3.14156 --> " << pi << endl;
 cout << "This should be 6.02e-23--> " << avagadrosNumber << endl;



    return 0;
}

