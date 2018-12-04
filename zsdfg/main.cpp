#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream outputFile;

    outputFile.open("myDataFile.txt");

    outputFile << "Hello Disk" << endl;
    outputFile << 100 / 34.7 << endl;
    outputFile << "Ken wuz here" << endl;

    outputFile.close();

    return 0;
}
