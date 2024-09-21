//Conditional statements 
#include <iostream>
using namespace std;

int main(){

//check the number is positive or negative
int num ;
cout<<"enter the num"<<endl;
cin>>num;
if(num>=0){
    cout<<"Positive number"<<endl;
}
else{
    cout<<"Negative number"<<endl;
}

 //check the number is even or odd
 int n;
 cout<<"enter the value n"<<endl;
cin>>n;
if(n%2==0){
    cout<<"Even number"<<endl;
}
else{
    cout<<"Odd number"<<endl;
}

//check the case for elegibility creteria for vote
int age;
cout<<"enter your age"<<endl;
cin>>age;
if(age>=18){
    cout<<"eligible for vote"<<endl;
}
else{
    cout<<"Not eligible for vote"<<endl;
}

//check a character is of lowercase or uppercase
int alphabet;
cout<<"Enter any alphabet"<<endl;
cin>>alphabet;
if(alphabet>='a' && alphabet<='z'){
    cout<<"This alphabet is of lowercase"<<endl;
}
else{
    cout<<"This alphabet is of uppercase"<<endl;
}


//give grade to studnts according to their matrks
int marks;
cout<<"enter your marks"<<endl;
cin>>marks;
if(marks>=90 && marks<=100){
    cout<<"Grade:A"<<endl;
}
else if(marks>=80 && marks<90){
    cout<<"Grade:B"<<endl;
}
else if(marks>=70 && marks<80){
    cout<<"Grade:C";
}
else{
    cout<<"Pass"<<endl;
}

//Using ternary statement check a number is positive or negative
int number;
cout<<"Enter any number"<<endl;
cin>>number;
(number>=0)? "Positive":"negative";
    return 0;
}