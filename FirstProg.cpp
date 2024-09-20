#include <iostream>
using namespace std;

//My first Program in Cpp
 int main(){
    cout<<"Waheguru"<<endl;
    cout<<"Hello World!"<<endl;

// variables and datatypes
int p=5;
cout<<p<<endl;

float pi=3.14;
cout<<pi<<endl;

   int num = 18;
   cout<< num <<endl;

     //Taking input from the user 
     
int age;
cout<<"Enter your age : "<<endl;
cin>>age;

     double price;
      cout<<"Enter your price"<<endl;
     cin>>price;

     
   //Operators : Arithmetic operator , ternary operator , bitwise operator , Logical operators 
   
    int a,b;
    cout<<"enter the value of a = "<<endl;
    cin>> a ;
    cout<<"enter the value of b = "<<endl;
    cin>> b ;
    cout<< (a+b)<<endl;  //sum of two numbers
    cout<< (a-b)<<endl;  //difference of two numbers
     cout<< (a/b)<<endl; //division of two numbers 
    cout<< (a%b)<<endl;  //modulus of two numbers 
    cout<< (a!=b)<<endl; // for true we are having 1 as an output and  for false are having output as 0
    cout<< (a==b)<<endl;  //checking condition that a is really equal to b 
    cout<< (a>b)<<endl;   //checking condition that a is really greater than b
    cout<< (a<b)<<endl;    //checking condition that a is really less than b
    
    int x,c,d,e;
    cout<<"enter the value of x , c , d ,e "<<endl;
    cin>>x;
    cin>>c;
    cin>>d;
    cin>>e;
    cout<< (x>c)||(d<e) ; //checking condition if any one of them is true them it gives output as 1 i.e true
    cout<< endl;
    cout<< (x>c)&&(d<e);  //checking condition if any one of them is false them it gives output as 0 i.e false
   cout<< endl;

    //Type conversion
    char grade ='A';  //65 as ascii value
    int value = grade;
    cout<< value <<endl;

    float ch = 3.14;
    int result = ch;
    cout<< result <<endl;

    //Type Casting
    double h = 100.99;
    int s = (int)h;
    cout<< s <<endl;
   

return 0;
   
 }


    
