 #include <iostream>
 
 using namespace std;
 
 int main ()
 {
 	
 int math,eng,CRE,french,germany;
 int avg;
 
 
 
 cout<< " enter marks for 5 units " << endl;
 cin>> math>> eng>> CRE>>french>> germany;
 
 avg= ( math+eng+CRE+french+germany)/5;

 if( avg>=70 && avg<=100)
 {
    cout<< " your average grade is A " << endl;
 
 } else if (avg >= 60&& avg< 70) {
 
    cout<< " your average grade is B " << endl;
 
 } else if( avg>=50 && avg <60) {
 
    cout << " your average grade is C " << endl;
  
 } else if( avg>=40 && avg<50 ) { 
 
 	cout<< " your average grade is D "<< endl;
 
 } else if( avg >=0 && avg<40) {
 
 	cout<< " your average grade is E " << endl;
 
 
 } else {
 
 	cout<< " THE GRADE DOES NOT EXIST: ";
 }


  
  
   return 0;
 }