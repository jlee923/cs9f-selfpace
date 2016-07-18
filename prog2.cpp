#include <iostream>
using namespace std;

int main() {
   cout << "Time to add some numbers!" << endl;
   cout << "Enter integers one at a time below" << endl;

   int total, input;
   total = input = 0;
   cin >> input;
   if (input == 0) {
      cout << "Subtotal: " << input << endl;
      cin >> input;
   }

   while (input != 0) {
      total += AddSubtotal(input);
      cin >> input;
   }

   cout << "Total: " << total << endl;
   return 0;
}
