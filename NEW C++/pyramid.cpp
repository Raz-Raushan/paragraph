#include <iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    
   for(int z=1;z<=a;z++){
        for(int x=1;x<=z;x++){
            cout<<' ';
        }
        for(int c=1;c<=(2*a-2*z +1);c++){
            cout<<'*';
        }
        //cout<<'%';
        cout<<'\n';
    }
    for(int z=0;z<a;z++){
     for(int c=0;c<(a-z);c++){
            cout<<'#';
        }
           for(int x=0;x<(2*z+1);x++){
            cout<<'*';
        }
        cout<<'\n';
    }
}
