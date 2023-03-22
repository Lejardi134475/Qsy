// algoritmo de celcius 
//Autor: Gustavo Lejardi

#include <iostream>

using namespace std;

int main() {



	float temperature;


	cout << "input the temperature in farenheit" << endl;
	cin >> temperature;

	cout << "The temperature is";

	cout << (temperature - 32) * .5556;

	cout << "in celcius" << endl;
	return 0;

}