#include<iostream>
using namespace std;

int main()
{

    int N;
    int odd = 0;
    int even = 0;
    while ( N != 0)
    {
        cout << "Enter an integer:";
        cin >> N;
            if(N%2 == 0){
                even += 1; 
            if(N == 0){
                even --;
            } 
            }else{
                odd ++;
            }
    
    }

    cout << "#Even numbers = " << even << "\n";
    cout << "#Odd numbers = " << odd;

    return 0;
}
