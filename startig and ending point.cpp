#include<iostream>
 
 using namespace std;
 
 int main() {
 
 	 
  int i, x, y, sum ;
  
  cout << " enter the starting point" <<endl;
  cin >> x;
  
  cout << "enter the ending point" << endl;
  cin >> y;
  
  for (i = x; i <= y; i++){
  
  cout << i << endl;
  
  sum += i;
  }
 
 
  cout << "The sum of " << " x " << "and" << " y " << "is " << sum << endl;

  return 0;
 } 	