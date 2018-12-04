#include "HtmlTable.h"
#include <iostream>
#include "cell.h"
#include <vector>



using namespace std;


void HtmlTable::insert(int rowIn,int columnIn, string stringIn)

{


    cell newCell(rowIn,columnIn,stringIn);
    tableCells.push_back(newCell);
    if(maxRow<rowIn)
    {
        maxRow=rowIn;
    }
    if(maxColumn<columnIn)
    {
        maxColumn=columnIn;
    }

}

void HtmlTable::print()
{

///set max row/column

    maxRow=0;
    maxColumn=0;
    for(int i(0); i<tableCells.size(); i++)
    {
        if (maxRow<tableCells.at(i).getRow())
        {
            maxRow=tableCells.at(i).getRow();
        }
        if (maxColumn<tableCells.at(i).getColumn())
        {
            maxColumn=tableCells.at(i).getColumn();
        }

    }

///table print
    {




        cout << "<table>"; /// start the table change based on whether or not there's a border
///border print
        {


            if(printBorder)
            {
                cout<<"<table border='1'>"; ///prints out a border
            }
            else
            {
                cout<<"<table border='0'>"; ///no border
            }
        }

/// start for cell print out
        for (int rowOut=1; rowOut<=maxRow; rowOut++)
        {
            cout << "<tr>"; /// start the row
            for (int colOut=1; colOut<=maxColumn; colOut++)
            {
                for(int i(0); i<tableCells.size(); i++)
                {


                    if(tableCells.at(i).getRow()==rowOut)
                    {

                        if(tableCells.at(i).getColumn()==colOut)
                        {




                            cout << "<td>" << tableCells.at(i).getString() << "</td>";




                        }
                        else
                        {
                            cout<<"<td>"<<"</td>";

                        }
                    }
                }

            }
            cout << "</tr>"; /// end the row
        }
        cout << "</table>"; /// end the table
    }
}
