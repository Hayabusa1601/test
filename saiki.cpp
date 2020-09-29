#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int func(vector<vector<int>> &ch, int x){
    if(ch.at(x).size() == 0){
        return 0;
    int maxtime = 0;

    for(int c: ch.at(x)){
        int retime = func(ch,c) + 1;

        maxtime = (func, retime);
    }
    return maxtime;
    }

}
int main(){
    int n;
    cin >> n;
    vector<int> p(n);
    p.at(0) = -1;
    for(int i = 1; i < n; ++i){
        cin >> p.at(i);
    }

    vector<vector<int>> ch(n);
    for(int i = 1; i < n; ++i){
        int parent = p.at(i);
        ch.at(parent).push_back(i);
    }

    cout << func(ch, 0) << endl;

}