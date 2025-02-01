//Rocky Wanek
//April 14, 2023

#include <iostream>
#include <fstream>
using namespace std;
// main function
int main() {
    // create output file conversion.txt
    ofstream frozen("conversion.txt");
    frozen << "\tTemperature Conversion Chart\n";
    frozen << "Celsius\t\t\tFahrenheit\n";
    // enter data 
    for (int i = 0; i <= 100; i += 10) {
        frozen << i << " C\t\t\t" << (i * 9 / 5 + 32) << " F\n";
    }
    return 0;
}

