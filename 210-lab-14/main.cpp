#include <iostream>
#include <iomanip>
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



int main()
{
    Color colorOne;
    colorOne.setRed(12);
    colorOne.setBlue(52);
    colorOne.setGreen(39);
    
    colorOne.print_colors();
    
    
    return 0;
}
