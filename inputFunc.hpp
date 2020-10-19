#include <iostream>
#include <cstdio>
#include <iomanip>
#include <vector>

using namespace std;


class CustomFunc 
{
    public:
        static void getVecIn(vector<int> &array, int numOfInput)
        {
            for (int i = 0; i < numOfInput; i++)
            {
                int len;
                cin >> len;
                for (int i = 0; i < len; i++)
                {
                    int input;
                    cin >> input;
                    array.push_back(input);
                }
            }
        }

        static void printVec(vector<int> const &array)
        {
            cout << "-----------" << endl;
            for (auto i:array)
                cout << i << " ";
            cout << "\n" << "-----------" << endl;
        }
};
