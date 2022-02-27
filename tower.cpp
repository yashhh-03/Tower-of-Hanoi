#include<iostream>

using namespace std;

void TOH(int n, char src, char help, char dest){

    if(n > 0){

        TOH(n-1, src, dest, help);
        
        cout << "Move disk from " << src << " to " << dest << endl;

        TOH(n-1, help, src, dest);
    }

}

int main(){
    
    int n;
    cout << "Enter the number of disk: ";
    cin >> n;

    TOH(n, 'A', 'B', 'C');

    return 0;
}
