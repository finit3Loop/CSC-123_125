#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cstdlib>




using namespace std;


class card
{
public:
    int cardRank,cardSuit;
};

void deckSet();
void printDeck(vector<card> &cardVector);
void analyzeHand(vector<card> &cardVector);


///Global deck/hand declaration
vector<card> cardDeck(52);
vector<card> hand(5);

bool sortByRank(const card &left,const card &right)
{
    return left.cardRank<right.cardRank;
}



int main()
{
    srand(time(0));

    deckSet();
    printDeck(cardDeck);
    cout<<endl<<endl;
    system("pause");
    random_shuffle(cardDeck.begin(),cardDeck.end());
    hand=cardDeck;
    hand.resize(5);


    cout<<endl<<"Unsorted hand:"<<endl;
    printDeck(hand);


    cout<<endl<<"Sorted hand:"<<endl;

    sort(hand.begin(),hand.end(),sortByRank);
    printDeck(hand);
    analyzeHand(hand);


}

void deckSet()
{
    for(int i(0); i<52; i++)
    {
        cardDeck[i].cardRank=((i)%13)+2;
        cardDeck[i].cardSuit=((i%4)+1);
        {


            if(i<12)
            {
                cardDeck[i].cardSuit=1;
            }
            else if(i>=13&i<25)
            {
                cardDeck[i].cardSuit=2;
            }
            else if(i>=26&i<38)
            {
                cardDeck[i].cardSuit=3;
            }
            else if (i>=39&i<52)
            {
                cardDeck[i].cardSuit=4;
            }
        }
    }
    return;
}

void printDeck(vector<card> &cardVector)
{
    int cardCounter(1);
    string suitOut,rankOut;
    for(int i(0); i<cardVector.size(); i++)
    {


///rank-->char
        {
            if (cardVector[i].cardRank==2)
            {
                rankOut="2";
            }
            else if (cardVector[i].cardRank==3)
            {
                rankOut="3";
            }
            else if (cardVector[i].cardRank==4)
            {
                rankOut="4";
            }
            else if (cardVector[i].cardRank==5)
            {
                rankOut="5";
            }
            else if (cardVector[i].cardRank==6)
            {
                rankOut="6";
            }
            else if (cardVector[i].cardRank==7)
            {
                rankOut="7";
            }
            else if (cardVector[i].cardRank==8)
            {
                rankOut="8";
            }
            else if (cardVector[i].cardRank==9)
            {
                rankOut="9";
            }
            else if (cardVector[i].cardRank==10)
            {
                rankOut="10";
            }
            else if (cardVector[i].cardRank==11)
            {
                rankOut="J";
            }
            else if (cardVector[i].cardRank==12)
            {
                rankOut="Q";
            }
            else if (cardVector[i].cardRank==13)
            {
                rankOut="K";
            }
            else if (cardVector[i].cardRank==14)
            {
                rankOut="A";
            }
        };
///suit--->string
        {
            if (cardVector[i].cardSuit==1)
            {
                suitOut="Club";
            }
            else if (cardVector[i].cardSuit==2)
            {
                suitOut="Spade";
            }
            else if (cardVector[i].cardSuit==3)
            {
                suitOut="Heart";
            }
            else if (cardVector[i].cardSuit==4)
            {
                suitOut="Diamond";
            }
        };
        cout<<"Card Number: "<<cardCounter++<<endl;
        cout<<rankOut<<"*****";
        cout<<suitOut<<endl;
    };
    return;
}

void analyzeHand(vector<card> &cardVector)
{
    string suitOut,rankOut,over,under;
    int threeOfAKind,twoOfAKind;
    for(int i(0); i<cardVector.size(); i++)
    {
        int straightStart(0);
        straightStart=cardVector[i].cardRank;


///rank-->char

        if (cardVector[i].cardRank==2)
        {
            rankOut="2";
        }
        else if (cardVector[i].cardRank==3)
        {
            rankOut="3";
        }
        else if (cardVector[i].cardRank==4)
        {
            rankOut="4";
        }
        else if (cardVector[i].cardRank==5)
        {
            rankOut="5";
        }
        else if (cardVector[i].cardRank==6)
        {
            rankOut="6";
        }
        else if (cardVector[i].cardRank==7)
        {
            rankOut="7";
        }
        else if (cardVector[i].cardRank==8)
        {
            rankOut="8";
        }
        else if (cardVector[i].cardRank==9)
        {
            rankOut="9";
        }
        else if (cardVector[i].cardRank==10)
        {
            rankOut="10";
        }
        else if (cardVector[i].cardRank==11)
        {
            rankOut="Jack";
        }
        else if (cardVector[i].cardRank==12)
        {
            rankOut="Queen";
        }
        else if (cardVector[i].cardRank==13)
        {
            rankOut="King";
        }
        else if (cardVector[i].cardRank==14)
        {
            rankOut="Ace";
        }

///suit--->string



        if (cardVector[i].cardSuit==1)
        {
            suitOut="Club";
        }
        else if (cardVector[i].cardSuit==2)
        {
            suitOut="Spade";
        }
        else if (cardVector[i].cardSuit==3)
        {
            suitOut="Heart";
        }
        else if (cardVector[i].cardSuit==4)
        {
            suitOut="Diamond";
        }














        ///flush
        if(i<=0)
        {


            if(cardVector[0].cardSuit==cardVector[1].cardSuit&&cardVector[1].cardSuit==cardVector[2].cardSuit&&
                    cardVector[2].cardSuit==cardVector[3].cardSuit&&cardVector[3].cardSuit==cardVector[4].cardSuit)
            {
                cout<<"You have a flush of "<<suitOut<<endl;
            }
        }
        ///four of a kind
        if(i<1)
        {


            if(cardVector[i].cardRank==cardVector[i+1].cardRank&&cardVector[i+1].cardRank==cardVector[i+2].cardRank&&
                    cardVector[i+2].cardRank==cardVector[i+3].cardRank)
            {
                cout<<"You have four "<<rankOut<<endl;
            }
        }
        ///straight
        if(i<1)
        {


            if((cardVector[i+1].cardRank==straightStart+1&&cardVector[i+2].cardRank==straightStart+2&&cardVector[i+3].cardRank==straightStart+3&&
                    cardVector[i+4].cardRank==straightStart+4)||(cardVector[i+4].cardRank==14&&cardVector[i].cardRank==2&&cardVector[i+1].cardRank==3&&
                            cardVector[i+2].cardRank==4&&cardVector[i+3].cardRank==5))
            {
                cout<<"You have a "<<rankOut<<" low straight."<<endl;
            }
        }

        ///three of a kind
        {
            if(cardVector[i].cardRank==cardVector[i+1].cardRank
                    &&cardVector[i+1].cardRank==cardVector[i+2].cardRank
                    &&cardVector[i+2].cardRank==cardVector[i+3].cardRank)
            {
                over=rankOut;
                threeOfAKind++;
                cout<<"Three "<<rankOut<<" of a kind"<<endl;
            }
        }
        ///a pair
        if(i<4)
        {


            if(cardVector[i].cardRank==cardVector[i+1].cardRank)
            {
                under=rankOut;
                twoOfAKind++;
                cout<<"Pair of "<<rankOut<<endl;

            }
        }
        ///full house
        if(i<4)
        {


            if(threeOfAKind==1&&twoOfAKind==1)
            {
                cout<<"Full house "<<over<<" over "<<under<<endl;
            }
        }
        ///two pair
        if(i<4)
        {


            if(twoOfAKind==2)
            {
                cout<<"Two of a Kind"<<endl;
            }
        }


    }




    return;
}

