#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    string name, quest, favoriteColor;

    cout << "STOP!" << endl << endl;

    cout << "Who would cross the bridge of death must answer me" << endl
         << "these questions three, ere the other side he see." << endl << endl;

    cout << "What is your name?";
    getline(cin, name);

    cout << "What is your quest?";
    getline(cin, quest);

    cout << "What is your favorite color?";
    getline(cin, favoriteColor);

    cout << "Right, off you go" << endl;

    cout << "For the record, the computer picked up:" << endl
         << "[" << name << "] for name, " << endl
         << "[" << quest << "] for quest, and" << endl
         << "[" << favoriteColor<< "] for favoriteColor, " << endl << endl;

    cout << "Notice that the cin only picks up one word at a time!" << endl;
    return 0;
}
