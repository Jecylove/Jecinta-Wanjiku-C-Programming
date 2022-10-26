#include <iostream>
 
 using namespace std;
 
 int main ()
 {
 	
 int math,eng,CRE,french,scie;
 int avg;
 
 
 
 cout<< " enter marks for 5 units " << endl;
 cin>> math>> eng>> CRE>>french>> scie;
 
 avg= ( math+eng+CRE+french+scie)/5;

 if( avg>=70 && avg<=100)
 {
    cout<< " grade A " << endl;
 
 } else if (avg >= 60&& avg< 70) {
 
    cout<< " grade B " << endl;
 
 } else if( avg>=50 && avg <60) {
 
    cout << " grade C " << endl;
  
 } else if( avg>=40 && avg<50 ) { 
 
 	cout<< "grade D "<< endl;
 
 } else if( avg >=0 && avg<40) {
 
 	cout<< " fall " << endl;
 
 
 } else {
 
 	cout<< " invalid. ";
 }


  
  
   return 0;
 }