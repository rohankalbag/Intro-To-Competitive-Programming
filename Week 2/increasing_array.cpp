#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }
    long long moves = 0;
    for(int i=1;i<n;i++){
        if(arr[i]<arr[i-1]){
            moves += (arr[i-1]-arr[i]);
            arr[i] = arr[i-1];
        }
    }
    cout<<moves;
}
