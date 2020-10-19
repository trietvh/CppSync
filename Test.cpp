#include<iostream>
#include<vector>
using namespace std;

bool isEven(int k){
    return ((k%2) == 0);
}

int main(){

    vector<int> v {1,2,3,4,5,6,7,8,9,10};
    //Initially the vector contains elements from 1 to 10.
    vector<int>::iterator it;
    it = remove_if(v.begin(), v.end(), isEven);
    //isEven() method checks each element whether it is even or not.

    for(decltype(v.size()) i=0;i<v.size(); i++){
        cout << v[i] << " " ;
    }
    cout << endl;
    //Print the elements in vector
    //[1,3,5,7,9]

    return 0;
}
