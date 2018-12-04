#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>

using namespace std;
int numBody(0),numHead(0),numAntenna(0),numWing(0),numStinger(0),numLeg(0),numEye(0),rollCount(0);

///takes roll and decides if the part is added
void boddy_parts(int roll);
///returns string output for added body part
string part_added(string part);
///checks for the complete body for the Cootie
bool full_body();
///rolling
int random_roll();

int main()
{
    srand(time(0));
    string playAgain;
    do
    {



        while (full_body())
        {
            cout<<endl;
            boddy_parts(random_roll());
            rollCount++;
        }

        cout<<endl<<"Your cootie was completed in "<<rollCount<<" rolls."<<endl;
        cout<<endl<<"Do you want to play again[y/n]"<<endl;
        getline(cin,playAgain);
        numBody=0,numHead=0,numAntenna=0,numWing=0,numStinger=0,numLeg=0,numEye=0,rollCount=0;

    }
    while (playAgain=="y");
    cout<<endl<<endl<<endl<<"Bye."<<endl<<endl<<endl;
    return 0;
}




void boddy_parts(int roll)
{
    string part;
    switch (roll)
    {
    case 1:
        if (numBody==0)
        {
            numBody++;
            part="body";
            cout<<part_added(part)<<endl;
        }
        else
            cout<<"You already have a body! :("<<endl;
        break;

    case 2:
        if(numBody==1&&numHead==0)
        {
            numHead++;
            part="head";
            cout<<part_added(part)<<endl;
        }
        else if (numBody==0)
        {
            cout<<"You cant add the head without the body!"<<endl;

        }
        else if (numHead>0)
        {
            cout<<"You already have a head!"<<endl;
        }
        break;
    case 3:
        if (numHead==1&&numAntenna<2)
        {
            numAntenna++;
            part="antenna";
            cout<<part_added(part)<<endl;
        }
        else if (numHead==0)
        {
            cout<<"You don't have a head to attach those antenna to! :("<<endl;
        }

        else if (numAntenna==2)
        {
            cout<<"You already have 2 antenna! :("<<endl;
        }
        break;
    case 4:
        if (numBody==1&&numWing<2)
        {
            numWing++;
            part="wing";
            cout<<part_added(part)<<endl;
        }
        else if (numHead==0)
        {
            cout<<"You don't have a body to attach those wings to! :("<<endl;

        }
        else if (numWing==2)
        {
            cout<<"You already have 2 wings! :("<<endl;
        }

        break;
    case 5:
        if (numBody==1&&numStinger<1)
        {
            numStinger++;
            part="stinger";
            cout<<part_added(part)<<endl;
        }
        else if (numBody<1)
        {
            cout<<"You don't have a body to put that stinger on! :("<<endl;
        }
        else if (numStinger>=1)
        {
            cout<<"You already have 1 stinger! :("<<endl;
        }
        break;

    case 6:
        if (numBody==1&&numLeg<4)
        {
            numLeg++;
            part="leg";
            cout<<part_added(part)<<endl;
        }
        else if (numBody<1)
        {
            cout<<"You don't have a body to put that leg on! :( "<<endl;
        }
        else if (numLeg>=4)
        {
            cout<<"You already have 4 legs! :("<<endl;
        }
        break;
    case 7:
        if (numHead==1&&numEye<6)
        {
            numEye++;
            part="Eye";
            cout<<part_added(part)<<endl;
        }
        else if (numHead<1)
        {
            cout<<"You don't have head to put that eye on! :("<<endl;
        }
        else if (numEye>=6)
        {
            cout<<"You already have 6 eyes! :("<<endl;
        }
        break;
    default:
        cout<<"That's an odd roll!"<<endl;
    }
}

string part_added(string part)
{
    string statement;
    statement="Yeah, you can add that "+part+"!";
    return(statement);
}

bool full_body()
{
    cout<<"Cootie so far "<<numBody<<" body, "<<numHead<<" head, "<<numAntenna<<" antenna, "<<numWing<<" wings, "<<numStinger<<" stingers, "<<numLeg<<" legs, and "<<numEye<<" eyes."<<endl;
    return(numBody<1||numHead<1||numAntenna<2||numWing<2||numStinger<1||numLeg<4||numEye<6);
}

int random_roll()
{
    int roll(0);
    rollCount++;
    roll=((rand()%7)+1);
    cout<<"Dice roll is a "<<roll<<endl;
    return(roll);
}
