#include<iostream>
 using namespace std;
  
 int main(){
 	 int i = 1, sum = 0 , num;
     //int num;
  
     cout << "enter num "<< endl;
     cin >> num;
  
     for(i=1; i <= num; i++){
     	 cout << i << endl;
         sum += i;
     }
 
     cout << "sum" << sum << endl;

   return 0;
 } 	