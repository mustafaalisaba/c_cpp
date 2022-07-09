#include <iostream>
#include <vector>
#include <string>

using namespace std;

/* Compute the arithmetic mean of the given data points */
double arithmetic_mean(double data[], long int size) {
   double sum = 0.0;
   for(long int i = 0; i < size; i++) {
      sum += data[i];
   }
   return sum / size;
}

int main() {
    
    double data_set[] = {25.3, 45.21, 78.56, 96.21, 22.12, 36.97};

    cout << "Mean: " << arithmetic_mean(data_set, 6);

    // vector<string> msg {"Days", "of", "your", "life", "till", "now."};
    // /*cout << "I am a sequence of characters"; return 0;*/
    // for(const string& word: msg) {
    //     cout << word << " ";
    // }
    // cout << endl;
}

