#include <iostream>
using namespace std;

int main() {
   int decimalNum;
   cout << "Enter a decimal number: ";
   cin >> decimalNum;

   int binaryNum[32];
   int index = 0;
   while (decimalNum > 0) {
      binaryNum[index] = decimalNum % 2;
      decimalNum = decimalNum / 2;
      index++;
   }

   cout << "Binary number: ";
   for (int i = index - 1; i >= 0; i--) {
      cout << binaryNum[i];
   }
   cout << endl;

   return 0;
}
