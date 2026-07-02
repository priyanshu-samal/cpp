#include <iostream>
#include <array>
#include <vector>
#include <stack>
#include <map>

using namespace std;


int main(){
   
    map<int,string>m;
    m.insert({1,"priyanshu"});
   auto it = m.find(1);

    if (it != m.end()) {
        cout << it->second << endl;   // prints: priyanshu
    }

    return 0;
}
