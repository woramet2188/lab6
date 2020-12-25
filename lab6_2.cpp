//Dialog of the first example is given below.
#include<iostream>
#include<string>
using namespace std;

int main(){
string name,name2,day ;
int num;

    cout<<"Fahsai: Sawadee ka...Can you tell me your name?";
    cout<<"\n?????: ";
    getline(cin,name);
    cout<<"Fahsai: Wow!!! "<<name<<" is a really cool name.";
    cout<<"\nFahsai: I think you are an Engineering student. What is your student ID?";
    cout<<"\n"<<name<<": "; 
    cin >> num;
    cin.ignore();
    num = num/10000000;
    cout<<"Fahsai: I think you may be GEAR "<< num-12 <<". I have a free movie ticket for you.";
    cout<<"\nFahsai: Let's go to the cinema together!!!";
    cout<<"\nFahsai: What movie do you want to watch?";
    cout<<"\n"<<name<<": ";
    getline(cin,name2);
    cout<<"Fahsai: So....which day are you free to go with me?";
    cout<<"\n"<<name<<": ";
    getline(cin,day);
    cout<<"Fahsai: "<<day<<"....that is OK!!! I'm looking forward to watching "<<name2<<" with you.";
    cout<<"\n"<<name<<": ";
    getline(cin,name);
    cout<<"Fahsai: 555+ see you "<<day<<". Bye Bye \\(^ ^)/";

}