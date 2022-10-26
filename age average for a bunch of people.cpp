 #include <iostream>
 using namespace std;
 
 int main () {
 
  int age;
  double totalAge = 0;
  int numberOfPeopleEntered = 0;
  
  cout << "Enter the age of a person or -2 to quit" << endl;
  cin >> age;
  
  while( age != -2) {
    totalAge = totalAge + age;
    numberOfPeopleEntered++;
  
  	 cout << "Enter the age of a person or -2 to quit" << endl;	
  	 cin >> age;
  
  }	
  
  cout << "The number of people entered " << numberOfPeopleEntered << endl;
  cout << "The average age " << totalAge/numberOfPeopleEntered << endl;
  
  return 0;
 }
