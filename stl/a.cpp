#include <iostream>
#include <array>
#include <vector>

using namespace std;


int main(){
    vector<int> vec={1,2,3};
    vector<int> vec2(3,2);
    vector<int>vec3(vec);

    for(int val:vec3){
        cout<<val<<"";
    }
    return 0;
}
