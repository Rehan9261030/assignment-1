#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
   double eng, urdu, math, IT, phy, total, obt;
   string grade;
   float per;
   cout << "Enter your English marks" << endl;
   cin >> eng;
   cout << "Enter your urdu marks" << endl;
   cin >> urdu;
   cout << "Enter your math marks" << endl;
   cin >> math;
   cout << "Enter your IT marks" << endl;
   cin >> IT;
   cout << "Enter your phy marks" << endl;
   cin >> phy;
   cout << "enter your total marks" << endl;
   cin >> total;
   obt = eng + urdu + phy + IT + math;
   per = (obt / total) * 100;
   if ((per >= 90) && (per <= 100))
   {
      grade = "A+";
   }
   else if (per >= 80)
   {
      grade = "A";
   }
   else if (per >= 70)
   {
      grade = "B";
   }
   else if (per >= 60)
   {
      grade = "C";
   }
   else if (per >= 50)
   {
      grade = "D";
   }
   else
   {
      grade = "E";
   }
   cout << "_________________________________" << endl;
   cout<<"        RESULT CARD"<<endl;
   cout<<"_________________________________"<<endl;
   cout<<setw(10)<<left<<"ENGLISH"<<setw(10)<<right<<"MARKS"<<setw(10)<<right<<"GRADE"<<endl;
   cout<<"_________________________________"<<endl;
cout<<setw(10)<<left<<"ENGLISH"<<setw(10)<<right<<eng<<setw(10)<<right<<grade<<endl;
cout<<setw(10)<<left<<"MATH"<<setw(10)<<right<<math<<setw(10)<<right<<grade<<endl;
cout<<setw(10)<<left<<"URDU"<<setw(10)<<right<<urdu<<setw(10)<<right<<grade<<endl;
cout<<setw(10)<<left<<"PHYSICS"<<setw(10)<<right<<phy<<setw(10)<<right<<grade<<endl;
cout<<setw(10)<<left<<"IT"<<setw(10)<<right<<IT<<setw(10)<<right<<grade<<endl;

   return 0;
}
