// Manifest Constants
#include <iostream> // Contents is replaced by CPP
#include <cmath> // Contents is replaced by CPP

using namespace std;

#define TWO 2 // Manifest const. Consumed by CPP
#define PI 4.0 * atan(1.0) // Const expr. Consumed by CPP

int main() { int r = 10;
// CPP replaces the token TWO by 2. CPP replaces the token PI by 4.0*atan(1.0). Compiler sees them as constants
    double peri = TWO * PI * r; 
    cout << "Perimeter = " << peri << endl;
}