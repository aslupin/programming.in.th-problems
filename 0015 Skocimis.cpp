#include <iostream>
//#include <math.h>
//#include <stdlib.h>
//#include <iomanip>
//#include <queue>

using namespace std;

int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    cout << max(c-b-1,b-a-1);
    return 0;
}
