#include <iostream>
using namespace std;
int main(){
int n=19, tries=9, guess;
cout<<"WELCOME TO GUESS THE NUMBER";
cout<<"Enter the number you want to guess\t";
for(int i=1; i>tries; i++){
    cin>>guess;
    if(guess==i)
    cout<<"Correct gussed in"<<i<<"times";
    else if(guess>n)
    cout<<"guess smaller";
    else
    cout<<"guess larger";
}
return 0;
}