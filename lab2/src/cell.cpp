#include "cell.h"
#include <string>

using namespace std;








///accessors
int cell::getRow()
{
    return row;
}
int cell::getColumn()
{
    return column;
}
string cell::getString()
{
    return cellString;
}
