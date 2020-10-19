#include "inputFunc.hpp"
#include "Sol.hpp"

using namespace std;

int main() 
{
   int numOfTest = 0;
   cin >> numOfTest;
   for (int i = 0; i < numOfTest; i++)
   {
      int i = 0;
      vector<int> array{};
      CustomFunc::getVecIn(array, 1);
      Kata kata;
      CustomFunc::printVec(array);
      cout << "Sorted:" <<  endl;
      CustomFunc::printVec(kata.sortArray(array));
   }
   return 0;
}

