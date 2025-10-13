#include<iostream>
#include<iomanip>

 using namespace std;
 int main(){
    float a,b,pro,sum,subtract,divison;
    cout<<"Enter 1st number"<<endl;
    cin>>a;
    cout<<"Enter 2nd number"<<endl;
    cin>>b;
     sum=a+b;
     pro=a*b;
     subtract=a-b;
     divison=a/b;
     cout<<fixed<<setprecision(3)<<sum<<endl;
     cout<<fixed<<setprecision(3)<<pro<<endl;
     cout<<fixed<<setprecision(3)<<subtract<<endl;
     cout<<fixed<<setprecision(3)<<divison<<endl;
     int x=int(a);
     cout<<x;
      int y=int(b);
      cout<<y;
         return 0;
 }
