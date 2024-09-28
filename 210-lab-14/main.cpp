#include <iostream>
#include <iomanip>
#include <random>
using namespace std;

class Color
{
private:
    int red;
    int blue;
    int green;
    
public:
    void setRed(int r) {
        red = r;
    }
    
    void setBlue(int b) {
        blue = b;
    }
    
    void setGreen(int g) {
        green = g;
    }
    
    int getRed() {
        return red;
    }
    
    int getBlue() {
        return blue;
    }
    
    int setGreen() {
        return green;
    }
    
    void print_colors() {
        cout << "R: " << red << endl;
        cout << "B: " << blue << endl;
        cout << "G: " << green << endl;
    }
    
}; // End of class

int random_num();


int main()
{
    int n;
    Color colorOne;
    Color colorTwo;
    Color colorThree;
    
    // Set Reds
    n = random_num();
    colorOne.setRed(n);
    n = random_num();
    colorTwo.setRed(n);
    n = random_num();
    colorThree.setRed(n);
    
    // Set Blues
    n = random_num();
    colorOne.setBlue(n);
    n = random_num();
    colorTwo.setBlue(n);
    n = random_num();
    colorThree.setBlue(n);
    
    // Set Greens
    n = random_num();
    colorOne.setGreen(n);
    n = random_num();
    colorTwo.setGreen(n);
    n = random_num();
    colorThree.setGreen(n);
    
    
    cout << "Color 1\n";
    colorOne.print_colors();
    cout << endl;
    cout << "Color 2\n";
    colorTwo.print_colors();
    cout << endl;
    cout << "Color 3\n";
    colorThree.print_colors();
    
    return 0;
}


int random_num()
{
    int num;
    
    random_device randNum;
    uniform_int_distribution<int>range(1, 255);
    num = range(randNum);
    
    return num;
}
