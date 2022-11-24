#include<iostream>
using namespace std;

int main (){
    
    int Score;
    string customerFullName;

cout<<"Enter customer Fullname: ";
getline(cin,customerFullName);
 cout<<"Please Enter the Score: ";
    cin>>Score;
    if (Score>=70){
        cout<<"Grade is A";
    }
    else if (Score>=60){
        cout<<"Grade is B";
    }
    else if (Score>=50){
        cout<<"Grade is C";
    }
    else if (Score>=40){
        cout<<"Grade is D";
    }
    else if (Score<40){
        cout<<"Grade is F";
    }
    else{
        cout<<"Invalide score";
    }
}    