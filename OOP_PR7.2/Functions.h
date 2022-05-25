#pragma once
#include <iostream>
#include <list>
#include <algorithm>
#include <ctime>
#include <numeric>
using namespace std;

int RandomNumber()
{
    return rand() % 20;
}

void print(list<int> a)
{
    for (int i : a)
        cout << i << " ";
    cout << endl;
}

void RemoveIf(list<int> &a, int x)
{
    a.erase( remove( a.begin(), a.end(), x ), a.end() );
}
