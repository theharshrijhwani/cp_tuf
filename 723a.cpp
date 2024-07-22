#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int a, b, c;
    cin>>a>>b>>c;
    vector<int> temp = {a,b,c};

    sort(temp.begin(), temp.end());

    cout<<abs(a-temp[1]) + abs(b-temp[1]) + abs(c-temp[1])<<endl;
    return 0;
}