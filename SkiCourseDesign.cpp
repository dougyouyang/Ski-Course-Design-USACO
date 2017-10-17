//  Copyright © 2017 Dougy Ouyang. All rights reserved.

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n, hill[1024];
    long long cost, fcost=1000000000000;
    int i, j;
    
    cin >> n;
    for(i=0;i<n;i++){
        cin >> hill[i];
    }
    sort(hill, hill+n);
    
    for(i=0;i<=83;i++){
        cost=0;
        for(j=0;j<n;j++){
            if(hill[j]<i){
                cost+=(i-hill[j])*(i-hill[j]);
            }
            else if(hill[j]>i+17){
                cost+=(hill[j]-i-17)*(hill[j]-i-17);
            }
        }
        if(cost<fcost){
            fcost=cost;
        }
    }
    
    cout << fcost << endl;
    
    return 0;
}
