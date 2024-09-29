#include <iostream>

using namespace std;

int main()
{

float edad, t = 0;
cin >> edad;

while(edad>=0){
    t += edad;
    cin >> edad;
}

cout << t/30 << endl;

    return 0;
}
