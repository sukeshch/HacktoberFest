#include <iostream>

using namespace std;

const int auxiliary_rod = 2;
const int origin_rod = 1;
const int destination_rod = 3;
const int sum_of_rod_numbers = auxiliary_rod+origin_rod+destination_rod;
int minimum_moves=0;

void PRINT(int origin, int destination) {
    cout<<"Move the top disk from rod "<<origin<<" to rod "<<destination<<endl;
}

void MOVE(int n, int start, int end) {
    if(n == 1) {
        PRINT(start, end);
        minimum_moves++;
    } else {
        int intermediate = sum_of_rod_numbers - start - end;
        MOVE(n-1, start, intermediate);
        PRINT(start, end);
        minimum_moves++;
        MOVE(n-1, intermediate, end);
    }
}

int main()
{
    int n;
    cin>>n;
    MOVE(n, 1, 3);
    cout<<"Minimum number of moves "<<minimum_moves;
}
