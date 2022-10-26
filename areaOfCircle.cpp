//function
#include <iostream>
using namespace std;

float circle(int r); // funstion prototype

int main(){
	int radius;	
	float Area;
	  
	  
	cout << "the radius " << endl;
	cin >> radius;
	Area = circle (radius);
	  
	cout << " the area of a cicle is " << Area << endl;
	return 0; 
}
	float circle( int r){
		float Area;
		Area = 3.142*r*r;
		return Area;	
}	
  