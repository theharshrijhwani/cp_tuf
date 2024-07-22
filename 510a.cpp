#include <iostream>
#include <vector>
using namespace std;

int main() {
    int row, col;
    cin>>row>>col;
    vector<vector<char>> temp(row, vector<char> (col, '.'));
    bool flag = true;

    // for(int i=0;i<row;i++) {
    //     for(int j=0;j<col;j++) {
    //         if(i%2==0) {
    //             temp[i][j] == '#';
    //             continue;
    //         }
    //         if(i%2==1) {
    //             if(flag) {
    //                 temp[i][col-1] = '#';
    //             } else {
    //                 temp[i][0] = '#';
    //             }
    //             flag = !flag;
    //             continue;
    //         }
    //     }
    // }
    
    // set the odd rows to #
    for(int i=0;i<row;i+=2) {
        for(int j=0;j<col;j++) {
            temp[i][j] = '#';
        }
    }

    // handling the even rows
    for(int i=1;i<row;i+=2) {
        if(flag) {
            temp[i][col-1] = '#';
        } else if(!flag) {
            temp[i][0] = '#';
        }
        flag = !flag;
    }

    for(auto i: temp) {
        for(auto j: i) {
            cout<<j;
        }
        cout<<endl;
    }

    return 0;
}