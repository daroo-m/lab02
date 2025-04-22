#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main() {
  for(matNum = 0; matNum < 5; ++matNum) {
    for(n = 0; n < 10; ++n) {
        double total = 0

	    // get_exp_result() takes in 2 int and calculates tensile strength and returns a double
double tensileStrength = get_exp_result(mat_num, n) // No errors in function

        total += tensileStrength
    }
    int average = total / 10
    cout << "Material #" << matNum
         << " has " << average << " avg. tensile strength." << endl
    if (average = 0) {
       cout << "Material # " << matNum << " is weak" << endl
    }
  }
}