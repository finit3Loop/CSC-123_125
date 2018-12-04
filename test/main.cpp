#include <iostream>
#include <cmath>

using namespace std;

void printBackwards(string printOut);


int main()
{


string name="Oliver Twist";
   printBackwards(name);
// tsiwT revilO is sent to cout

   printBackwards("nothing");
// gnihtin is sent to cout

    return 0;
}





void printBackwards(string printOut)
{


    int stringEnd;
    char coutChar;
    stringEnd=printOut.size();
    for(int i(stringEnd);i>=0;i--)
    {
        coutChar=printOut[i] ;
        cout<<coutChar;

    }



cout<<endl;
return;



}



