#include <vector>

using namespace std;

class Kata
{
public:
    static bool isEven(int k) 
    {
        return ((k%2) == 0);
    } 
    std::vector<int> sortArray(std::vector<int> &array)
    {
        vector<int> id{};
        vector<int> val{};
        if (array.empty())
            return array;
        for (decltype(array.size()) i = 0; i < array.size(); i++)
        {
            if(array[i]%2 == 0)
            {
                id.push_back(i);
                val.push_back(array[i]);
            }
        }
        vector<int>::iterator p;
        p = remove_if(array.begin(),array.end(), isEven);
        return array;
    }
    
};