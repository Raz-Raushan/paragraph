#include <iostream>
using namespace std;

int main() {

    char arr[200];
    cin.getline(arr,200);

    int total = 14;
    int remaining = total;
    int count = 0;

    char arr2[200];

    for(int a = 0; arr[a] != '\0'; a++) {

        if(arr[a] == ' ') {

            arr2[count] = arr[a];

            if(count<=remaining) {

                for(int z = 0; z < count; z++) {
                    cout << arr2[z];
                }
                    remaining =(remaining - count -1);
                cout<<' ';
                count = 0;

            }
            else {

                remaining = total;
                cout << '\n';

                for(int z = 0; z < count; z++) {
                    cout << arr2[z];
                }
                                       remaining =(remaining - count-1);

                    count = 0;
                  cout<<' ';
            }
            
        }
        else {

            arr2[count] = arr[a];
            count++;
        }
    }

    return 0;
}
