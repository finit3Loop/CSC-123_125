#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    string  num1,num2,num3,num4,num5,adj1,adj2,adj3,adj4,adj5;
    string  singNoun1,singNoun2,singNoun3,singNoun4,singNoun5;
    string  adverb,largeNum,cloth1,cloth2,pluralNoun;

    cout<<"This is how to make a snow man."<<endl<<endl;

    cout<<"Enter a number then hit return 5 times"<<endl;
    getline(cin,num1);getline(cin,num2);getline(cin,num3);getline(cin,num4);getline(cin,num5);

    cout<<"Now enter a adjective and hit return 5 times"<<endl;
    getline(cin,adj1);getline(cin,adj2);getline(cin,adj3);getline(cin,adj4);getline(cin,adj5);

    cout<<"Enter a singular noun and then hit return 5 times"<<endl;
    getline(cin,singNoun1);getline(cin,singNoun2);getline(cin,singNoun3);getline(cin,singNoun4);getline(cin,singNoun5);

    cout<<"Enter an adverb and hit return"<<endl;
    getline(cin,adverb);

    cout<<"Enter a large number and hit return"<<endl;
    getline(cin,largeNum);

    cout<<"Enter a singular article of clothing and then press return 2 times"<<endl;
    getline(cin,cloth1);getline(cin,cloth2);

    cout<<"Enter a plural noun and hit return"<<endl;
    getline(cin,pluralNoun);
    cout<<endl;



    cout<<"Your adjectives were "<<adj1+", "<<adj2+", "<<adj3+", "<<adj4+", and "<<adj5<<endl;
    cout<<"Your numbers were "<<num1+", "<<num2+", "<<num3+", "<<num4+", and "<<num5<<endl;
    cout<<"Your singular nouns were "<<singNoun1+", "<<singNoun2+", "<<singNoun3+", "<<singNoun4+", and "<<singNoun5<<endl;
    cout<<"Your adverb was "<<adverb<<endl;
    cout<<"Your large number was "<<largeNum<<endl;
    cout<<"Your clothing was "<<cloth1+" and "<<cloth2<<endl;
    cout<<"Your plural noun was "<<pluralNoun<<endl<<endl<<endl;

    cout<<"Ingredients to make a snowman"<<endl<<endl;
    cout<<num1<<" tablespoon(s) "<<adj1+" "<<singNoun1<<endl;
    cout<<num2<<" teaspoon(s) "<<singNoun2<<endl;
    cout<<num3<<" cup(s) "<< adj2+" "<<singNoun3<<endl;
    cout<<num4<<" tablespoon(s) "<<singNoun4<<endl;
    cout<<"Combine all ingredients in a bowl. Mix "<<adverb<<" with a spoon until "<<adj3<<".  Place on"<<endl;
    cout<<"front lawn or other cold location. Bake at -"<<largeNum<<" degrees for "<<num5<<" minutes until snow "<<endl;
    cout<<"is "<<adj4<<" and "<<adj5<<". Test with stick or carrot to make sure it is ready."<<endl<<endl;
    cout<<"When done, decorate with a(n) "<<cloth1<<" and a(n) "<<cloth2<<". Use a(n) "<<singNoun5<<" for a mouth and"<<endl;
    cout<<pluralNoun<<" for eyes."<<endl<<endl;
    cout<<"serves everyone!"<<endl;



	return 0;
}
