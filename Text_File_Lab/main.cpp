#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>


using namespace std;

///function declarations
void listDisplay();
void putBack();


int main()
{
    string menuOptionBuffer;
    int menuOption(0);
    ///menu readout and selection


    while(1)
    {
        cout<<"What would you like to do?"<<endl<< "1. Display the list."<<endl<<"2. Add a name to the list,"<<endl<<"3. Exit."<<endl;
        cout<<endl<<"Enter the number and press return."<<endl;
        getline(cin,menuOptionBuffer);
        menuOption= atoi(menuOptionBuffer.c_str());


        ///beginning of the menu switch

        switch (menuOption)
        {
        case 1:
        {
            cout<<"List so far:"<<endl<<endl;
            listDisplay();
        }
        break;
        case 2:
            cout<<"Input the name to add."<<endl<<endl;
            putBack();
            break;
        case 3:
            cout<<"Exiting."<<endl<<endl;
            exit(0);
            break;
        default:
            cout<<"are you sure?"<<endl<<endl;
            break;
        }
    }




    return 0;
}


void listDisplay()
{
    string fileName,inputBuff;
    ifstream dataFile;


    cout<<"Input file name and press return."<<endl<<endl;
    getline(cin,fileName);
    dataFile.open(fileName.c_str());

    if(dataFile.fail())
    {
        cout<<endl<<"Invalid file name."<<endl<<endl;
        return;
    }
    else
    {

        while(!dataFile.eof())
        {
            getline(dataFile,inputBuff);

            if(!dataFile.eof())
            {
                cout<<inputBuff<<endl;
            }

        }
    }
    return;
}



void putBack()
{
    string putFilePath, putName;
    ofstream putFile;

    cout<<"Type file name and press return."<<endl;
    getline(cin,putFilePath);

    putFile.open(putFilePath.c_str(),ios::app);

    cout<<endl<<"What name would you like to enter into the file?"<<endl;
    getline(cin,putName);

    putFile<<putName<<endl;

    return;

}
