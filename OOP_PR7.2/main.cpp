#include "Functions.h"
using namespace std;

int main()
{
    srand((unsigned int)time(NULL));
    int n;
    cout << "n = ? "; cin >> n;
    list<int> l(n);
    
    generate(l.begin(), l.end(), RandomNumber);
    print(l);
    
    int x;
    cout << "remove "; cin >> x;
    RemoveIf(l, x);
    print(l);

    return 0;
}
