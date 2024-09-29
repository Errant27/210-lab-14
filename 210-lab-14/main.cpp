#include <iostream>
#include <iomanip>
#include <random>
using namespace std;

class Color
{
private:
    int red;    // Private member variables for the red, green & blue values
    int blue;
    int green;
    
public:
    void setRed(int r) { red = r; }    // Setter Functions
    void setBlue(int b) { blue = b; }
    void setGreen(int g) { green = g; }
    
    int getRed() { return red; }    // Getter Functions
    int getBlue() { return blue; }
    int setGreen() { return green; }
    
    void print_colors() {     // Print Function
        cout << "R: " << red << endl;
        cout << "G: " << green << endl;
        cout << "B: " << blue << endl;
    }
};    // End of class

int gen_random_num();     // Function prototype to generate random number

int main()
{
    int n;    // int variable to store a random number
    Color colorOne;     // Color objects initiaized
    Color colorTwo;
    Color colorThree;
    Color colorFour;
    
    // Set Reds sequence
    n = gen_random_num();     // Random number stored in n from random number function
    colorOne.setRed(n);     // random number assigned to Color object's color variable via respective set function
    n = gen_random_num();
    colorTwo.setRed(n);
    n = gen_random_num();
    colorThree.setRed(n);
    n = gen_random_num();
    colorFour.setRed(n);
    
    // Set Greens sequence
    n = gen_random_num();    // Same logic as setting reds
    colorOne.setGreen(n);
    n = gen_random_num();
    colorTwo.setGreen(n);
    n = gen_random_num();
    colorThree.setGreen(n);
    n = gen_random_num();
    colorFour.setGreen(n);
    
    // Set Blues sequence
    n = gen_random_num();    // Same logic as setting greens & reds
    colorOne.setBlue(n);
    n = gen_random_num();
    colorTwo.setBlue(n);
    n = gen_random_num();
    colorThree.setBlue(n);
    n = gen_random_num();
    colorFour.setBlue(n);
    
    cout << "Color 1\n";    // Each color outputted via the print_colors member function
    colorOne.print_colors();
    cout << "---------" << endl;
    cout << "Color 2\n";
    colorTwo.print_colors();
    cout << "---------" << endl;
    cout << "Color 3\n";
    colorThree.print_colors();
    cout << "---------" << endl;
    cout << "Color 4\n";
    colorFour.print_colors();
    
    return 0;
}


int gen_random_num()     // Function definition to generate random number
{
    int num;
    
    random_device randNum;
    uniform_int_distribution<int>range(0, 255);
    num = range(randNum);    // Random number is generated and stored in num
    
    return num;     // random number returned
}
