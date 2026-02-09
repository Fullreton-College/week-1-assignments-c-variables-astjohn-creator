/* create the code yourself */
#include <iostream>

using namespace std;

int main()
{
    string instuctorName;
    string name;
    string food;
    string number;
    string adjective;
    string color;
    string animal;

    cout<<"The first or last name of your instuctor: "<<endl;
    cin >> instuctorName;
    cout<<"Your name: "<<endl;
    cin >> name;
    cout<<"A food: "<<endl;
    cin >> food;
    cout<<"A number between 100 and 120: "<<endl;
    cin >> number;
    cout <<"An adjective: "<<endl;
    cin >> adjective;
    cout << "A color: "<<endl; 
    cin >> color;
    cout << "An animal: "<<endl;
    cin >> animal;

    cout<< "Dear Instructor " << instuctorName <<","<<endl;

    cout<< "I am sorry that I am unable to turn in my homework at this time. First, I ate a rotten "<<food<<", which made me turn "<<color<<" and extremely ill. I came down with a fever of " <<number<< ". Next, my "<<adjective<<" pet "<<animal<<" must have smelled the remains of the "<<food<<" on my homework, because he ate it. I am currently rewriting my homework and hope you will accept it late."<<endl;

    cout<<"Sincerely,"<<endl;
    cout<<name<<endl;

    return 0;

}