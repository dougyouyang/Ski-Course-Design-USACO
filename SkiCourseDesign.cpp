/*

This is free and unencumbered software released into the public domain.

Anyone is free to copy, modify, publish, use, compile, sell, or
distribute this software, either in source code form or as a compiled
binary, for any purpose, commercial or non-commercial, and by any
means.

In jurisdictions that recognize copyright laws, the author or authors
of this software dedicate any and all copyright interest in the
software to the public domain. We make this dedication for the benefit
of the public at large and to the detriment of our heirs and
successors. We intend this dedication to be an overt act of
relinquishment in perpetuity of all present and future rights to this
software under copyright law.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
IN NO EVENT SHALL THE AUTHORS BE LIABLE FOR ANY CLAIM, DAMAGES OR
OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
OTHER DEALINGS IN THE SOFTWARE.

For more information, please refer to <http://unlicense.org/>

*/


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
