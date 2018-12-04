#include <iostream>
#include "HtmlTable.h"

using namespace std;

int main()
{
    cout << "Content-type: text/html" << endl << endl;



HtmlTable mainTable;


mainTable.insert(1,1,"string1");
mainTable.insert(2,2,"string2");
mainTable.insert(3,3,"string3");
mainTable.insert(4,4,"string4");
mainTable.insert(5,5,"string5");
mainTable.insert(6,6,"string6");





mainTable.borderon();
mainTable.print();



mainTable.insert(5,9,"string7");
mainTable.insert(7,2,"another string here");
mainTable.insert(10,2,"asdfasdf");




mainTable.borderoff();
mainTable.print();



    return 0;
}
