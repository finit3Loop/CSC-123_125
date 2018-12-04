#include <iostream>
#include <cstdlib>

using namespace std;

void hands(int numberOf1s,int numberOf2s,int numberOf3s,int numberOf4s,int numberOf5s, int numberOf6s);

int main()
{
    string inputBuffer;
    int roll1(0),roll2(0),roll3(0),roll4(0),roll5(0);///for dice roll in
    int numberOf1s(0),numberOf2s(0),numberOf3s(0),numberOf4s(0),numberOf5s(0),numberOf6s(0);
    cout<<"Enter first number."<<endl;
    getline(cin, inputBuffer);
    roll1 = atoi(inputBuffer.c_str());
    switch (roll1)
    {
    case 1:
        numberOf1s++;
        break;
    case 2:
        numberOf2s++;
        break;
    case 3:
        numberOf3s++;
        break;
    case 4:
        numberOf4s++;
        break;
    case 5:
        numberOf5s++;
        break;
    case 6:
        numberOf6s++;
        break;
    default:
        cout<<"Are you sure that's your roll?"<<endl;
        exit(2);
        break;
    }
    cout<<"Enter second number."<<endl;
    getline(cin, inputBuffer);
    roll2 = atoi(inputBuffer.c_str());
    switch (roll2)
    {
    case 1:
        numberOf1s++;
        break;
    case 2:
        numberOf2s++;
        break;
    case 3:
        numberOf3s++;
        break;
    case 4:
        numberOf4s++;
        break;
    case 5:
        numberOf5s++;
        break;
    case 6:
        numberOf6s++;
        break;
    default:
        cout<<"Are you sure that's your roll?"<<endl;
        exit(2);
        break;
    }
    cout<<"Enter third number."<<endl;
    getline(cin, inputBuffer);
    roll3 = atoi(inputBuffer.c_str());
    switch (roll3)
    {
    case 1:
        numberOf1s++;
        break;
    case 2:
        numberOf2s++;
        break;
    case 3:
        numberOf3s++;
        break;
    case 4:
        numberOf4s++;
        break;
    case 5:
        numberOf5s++;
        break;
    case 6:
        numberOf6s++;
        break;
    default:
        cout<<"Are you sure that's your roll?"<<endl;
        exit(2);
        break;
    }
    cout<<"Enter fourth number."<<endl;
    getline(cin, inputBuffer);
    roll4= atoi(inputBuffer.c_str());
    switch (roll4)
    {
    case 1:
        numberOf1s++;
        break;
    case 2:
        numberOf2s++;
        break;
    case 3:
        numberOf3s++;
        break;
    case 4:
        numberOf4s++;
        break;
    case 5:
        numberOf5s++;
        break;
    case 6:
        numberOf6s++;
        break;
    default:
        cout<<"Are you sure that's your roll?"<<endl;
        exit(2);
        break;
    }

    cout<<"Enter fifth number."<<endl;
    getline(cin, inputBuffer);
    roll5 = atoi(inputBuffer.c_str());
    switch (roll5)
    {
    case 1:
        numberOf1s++;
        break;
    case 2:
        numberOf2s++;
        break;
    case 3:
        numberOf3s++;
        break;
    case 4:
        numberOf4s++;
        break;
    case 5:
        numberOf5s++;
        break;
    case 6:
        numberOf6s++;
        break;
    default:
        cout<<"Are you sure that's your roll?"<<endl;
        exit(2);
        break;
    }
    cout<<"There are "<<numberOf1s<<" ones."<<endl;
    cout<<"There are "<<numberOf2s<<" twos."<<endl;
    cout<<"There are "<<numberOf3s<<" threes."<<endl;
    cout<<"There are "<<numberOf4s<<" fours."<<endl;
    cout<<"There are "<<numberOf5s<<" fives."<<endl;
    cout<<"There are "<<numberOf6s<<" sixes."<<endl;
    hands(numberOf1s,numberOf2s,numberOf3s,numberOf4s,numberOf5s,numberOf6s);




    return 0;
}
void hands(int numberOf1s,int numberOf2s,int numberOf3s,int numberOf4s,int numberOf5s, int numberOf6s)/// read outs for the different types of hands
{
    bool twoOfAKind=false,threeOfAKind=false;
    cout<<endl;
    {
        if (numberOf1s==2||numberOf1s==2||numberOf2s==2||numberOf3s==2||numberOf4s==2||numberOf5s==2||numberOf6s==2)///2 of a kind for full house
        {
            twoOfAKind=true;
        }
    }
    {
        if (numberOf1s>=3||numberOf1s>=3||numberOf2s>=3||numberOf3s>=3||numberOf4s>=3||numberOf5s>=3||numberOf6s>=3)///3 or more
        {
            cout<<"Yes three of a kind!"<<endl;
            threeOfAKind=true;
        }
        else
        {
            cout<<"No three of a kind."<<endl;
        }
    }
    {
        if (numberOf1s>=4||numberOf1s>=4||numberOf2s>=4||numberOf3s>=4||numberOf4s>=4||numberOf5s>=4||numberOf6s>=4)///4 or more
        {
            cout<<"Yes four of a kind!"<<endl;

        }
        else
        {
            cout<<"No four of a kind."<<endl;
        }

    }
    {
        ///5 of a kind
        if (numberOf1s>=5||numberOf1s>=5||numberOf2s>=5||numberOf3s>=5||numberOf4s>=5||numberOf5s>=5||numberOf6s>=5)
        {
            cout<<"Yes five of a kind!"<<endl;

        }
        else
        {
            cout<<"No five of a kind."<<endl;
        }
    }
    {
        ///full house
        if ((twoOfAKind==true)&&(threeOfAKind==true))
        {
            cout<<"Yes full house!"<<endl;
        }
        else
        {
            cout<<"No full house."<<endl;
        }
    }
    {
        ///long straight
        if ((numberOf1s==1&&numberOf2s==1&&numberOf3s==1&&numberOf4s==1&&numberOf5s==1)||(numberOf2s==1&&numberOf3s==1&&numberOf4s==1&&numberOf5s==1&&numberOf6s==1))
        {
            cout<<"Yes long straight!"<<endl;
        }
        else
        {
            cout<<"No long straight."<<endl;
        }

    }
    {
        ///short straight
        if ((numberOf1s==1&&numberOf2s==1&&numberOf3s==1&&numberOf4s==1)||(numberOf2s==1&&numberOf3s==1&&numberOf4s==1&&numberOf5s==1)||(numberOf3s==1&&numberOf4s==1&&numberOf5s==1&&numberOf6s==1))
        {
            cout<<"Yes short straight!"<<endl;
        }
        else
        {
            cout<<"No short straight."<<endl;
        }


    }
    exit(0);
}
