#include <iostream>
using namespace std;

float fahrenheitToCelsius(float fahrenheit);

int main(){
	float fahrenheit;
	double celsius;
	 
	cout << "Enter temperature in fahrenheit"<< endl;
	cin >> fahrenheit ; 
	celsius = (fahrenheit - 32.0) * 5.0 / 9.0;   
	
	cout << "Tempereture in celsius is = "<< celsius << endl;
	return 0;
}
	float fahrenheitToCelsius(float fahrenheit){
	double celsius;	
	celsius = (fahrenheit - 32.0) * 5.0 / 9.0; 
	
	return celsius;
} 	   
	   
	   	