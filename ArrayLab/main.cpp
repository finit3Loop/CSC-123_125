#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

using namespace std;




///inventory item class definition
class Item
{
public:
    string name;
    string numCode;
    double price;
    int quantity;

};


///function prototypes
void itemAdd();
void inventoryList();
void searchArray();
double totalValue();
void saveToFile();
void readIn();



///global variable area
int itemArrayCounter(0);
Item itemList[10000];

int main()
{
    int menuChoice;
    string inputBuffer;
///menu read out
    while(true)
    {


        cout<<"1) Add an item to memory"<<endl;
        cout<<"2) Search memory for an item"<<endl;
        cout<<"3) List what's in memory"<<endl;
        cout<<"4) Total value on hand"<<endl;
        cout<<"5) Save to a file"<<endl;
        cout<<"6) Read in from a file"<<endl;
        cout<<"0) Exit Program"<<endl<<endl<<endl<<endl;
        cout<<itemArrayCounter<<" items stored."<<endl<<endl;
        getline(cin,inputBuffer);
        cout<<endl;
        menuChoice=atoi(inputBuffer.c_str());

///switch for the menu
        switch (menuChoice)
        {
        case 1:
        {
            itemAdd();
            break;
        }
        case 2:
        {
            searchArray();

            break;
        }
        case 3:
        {
            inventoryList();
            break;
        }
        case 4:
        {
            cout<<"Total value of invintory...."<<endl<<endl;
            cout<<totalValue()<<endl<<endl;
            break;
        }
        case 5:
        {
            saveToFile();
            break;
        }
        case 6:
        {
            readIn();
            break;
        }
        case 0:
        {
            exit(0);
            break;
        }
        default:
            cout<<"Not valid input!"<<endl;
            break;

        }
    }
}

///itemAdd definition
void itemAdd()
{

    string inItemName,inNumCode,inputBuffer;
    double inPrice(0);
    int inQuantity(0);

    cout<<"Adding item to inventory....."<<endl<<endl;

///input block for new item in array
    cout<<"Input item name."<<endl;
    getline(cin,inItemName);

    cout<<"Input item number code."<<endl;
    getline(cin,inNumCode);

    cout<<"Input item price."<<endl;
    getline(cin,inputBuffer);
    inPrice=atof(inputBuffer.c_str());



    cout<<"Input item quantity."<<endl;
    getline(cin,inputBuffer);
    inQuantity=atoi(inputBuffer.c_str());



    itemList[itemArrayCounter].name=inItemName;
    itemList[itemArrayCounter].numCode=inNumCode;
    itemList[itemArrayCounter].price=inPrice;
    itemList[itemArrayCounter].quantity=inQuantity;


    /// item member tesring
    cout<<itemList[itemArrayCounter].name<<endl;



    itemArrayCounter++;



    return;

}

void inventoryList()
{
    int numberToDisplay(0), i(0);
    string inputBuffer;

    cout<<"Enter how many rows to display:"<<endl;
    getline(cin,inputBuffer);
    numberToDisplay=atoi(inputBuffer.c_str());
    cout<<endl;
    cout<<"Name"<< "*****";
    cout<<"Number Code"<<"*****";
    cout<<"Price"<<"*****";
    cout<<"Quantity"<<"*****"<<endl;

    for (i=0; i<numberToDisplay; i++)
    {
        cout<<itemList[i].name<< "*****";
        cout<<itemList[i].numCode<<"*****";
        cout<<itemList[i].price<<"*****";
        cout<<itemList[i].quantity<<"*****"<<endl<<endl;

        if (i % 15 == 14)
        {
            system("pause");
            system("cls");
        }

    }
    return;
}

void searchArray()
{
    string searchFor;



    cout<<"What item would you like to find?"<<endl;
    getline(cin,searchFor);


    for(int i(0); i<itemArrayCounter; i++)
    {
        if (itemList[i].name==searchFor)
        {
            cout<<"Item found."<<endl;
            cout<<itemList[i].name<< "*****";
            cout<<itemList[i].numCode<<"*****";
            cout<<itemList[i].price<<"*****";
            cout<<itemList[i].quantity<<"*****"<<endl;
        }
        else
        {
            cout<<"Item not found"<<endl;
        }


    }
    return;
}


double totalValue()
{
    double valueSum(0.0);
    for(int i(0); i<itemArrayCounter; i++)
    {
        valueSum=valueSum+(itemList[i].price*itemList[i].quantity);
    }
    return(valueSum);
}

void saveToFile()

{
    string filePath;

    cout<<"Where would you like to save the list to?"<<endl;
    getline(cin,filePath);

    ofstream dataFile(filePath.c_str());





    for(int i(0); i<itemArrayCounter; i++)
    {
        dataFile<<itemList[i].name<<",";
        dataFile<<itemList[i].numCode<<",";
        dataFile<<itemList[i].price<<",";
        dataFile<<itemList[i].quantity<<endl;
    }
    dataFile.close();
    return;
}


void readIn()
{

    string fileName,inputBuffer;
    int i(0);


    cout<<"What file would you like to read in from?"<<endl;
    getline(cin,fileName);

    ifstream dataFile(fileName.c_str());

    if(dataFile.fail())
    {
        cout<<"File not found."<<endl;
        return;
    }
    {
        itemArrayCounter=0;


        while(!dataFile.eof())
        {
            getline(dataFile,itemList[i].name,',');
            getline(dataFile,itemList[i].numCode,',');
            getline(dataFile,inputBuffer,',');
            itemList[i].price=atof(inputBuffer.c_str());
            getline(dataFile,inputBuffer);
            itemList[i].quantity=atoi(inputBuffer.c_str());
            i++;
            itemArrayCounter++;
        };
        itemArrayCounter=itemArrayCounter-1;
        return;
    }
}






















