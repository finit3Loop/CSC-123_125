#ifndef HTMLTABLE_H
#define HTMLTABLE_H

#include "cell.h"
#include <vector>
#include <string>

using namespace std;



class HtmlTable
{
    public:
        ///constructors
        HtmlTable(bool printBorderInput)
            {printBorder=printBorderInput;maxRow=1;maxColumn=1;}
        HtmlTable()
            {printBorder=true;}
        ///accessors
        void print();
        bool borderPrint()
        {return printBorder;}

        ///mutators
        void insert(int rowIn,int columnIn, string stringIn);
        void borderon()
        {printBorder=true;}
        void borderoff()
        {printBorder=false;}




    protected:

    private:
        int maxRow,maxColumn;
        vector<cell> tableCells;
        bool printBorder;
};

#endif // HTMLTABLE_H
