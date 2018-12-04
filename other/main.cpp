#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
// assume your answer is here so you don't need a
// prototype declaration// nothing in main() can change!

int countGenerator(string color)


{
    int num(0),ret(0);

    if (color="Red")

        num=rand();
        ret=(num%4)+1;
        return(ret);
}
int main()
{
  // seed the random number generator
  srand(time(0));

  // test "Red" parameter
  cout << "I will now print 20 numbers from 1 to 4:" << endl;
  for (int i=0;i<20;i++)
  {
    cout << countGenerator("Red") << " ";
  }
  cout << endl;

  // test "Blue" parameter
  cout << "I will now print 20 numbers from 1 to 6:" << endl;
  for (int i=0;i<20;i++)
  {
    cout << countGenerator("Blue") << " ";
  }
  cout << endl;

  // test "Green" parameter
  cout << "I will now print 20 numbers from 1 to 8:" << endl;
  for (int i=0;i<20;i++)
  {
    cout << countGenerator("Green") << " ";
  }
  cout << endl;

  // test the returning a zero if the name isn't valid
  cout << "I will now print 5 zeros:" << endl;
  cout << countGenerator("green") << " ";
  cout << countGenerator("red") << " ";
  cout << countGenerator("blue") << " ";
  cout << countGenerator("BLUE") << " ";
  cout << countGenerator("") << " ";
  cout << endl;
}

