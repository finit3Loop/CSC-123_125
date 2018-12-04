#ifndef CELL_H
#define CELL_H

#include <string>

using namespace std;


class cell
{
    public:
///constructor
        cell()
            {row=0;column=0;cellString="";}
        cell(int rowInput, int columnInput,string stringInput)
            {row=rowInput;column=columnInput;cellString=stringInput;}
///accessors
        int getRow();
        int getColumn();
        string getString();




    protected:

    private:
        int row,column;
        string cellString;
};

#endif // CELL_H
