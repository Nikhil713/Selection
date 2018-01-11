#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    cin >> n;
    float p=0,nv=0,z=0;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
    }
    for(int arr_i = 0;arr_i < n;arr_i++){
        if(arr[arr_i]>0)
            p++;
        else if (arr[arr_i]<0)
               nv++;
             else if(arr[arr_i]==0)
                 z++;
    }
    cout<<p/n<<"\n"<<nv/n<<"\n"<<z/n;
    return 0;
}
