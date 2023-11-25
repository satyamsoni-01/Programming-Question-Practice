#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<auto> &v1;

    v1.assign(2,1);
    cout<<v1[1];

    v1.assign(1,2);
    cout<<v1[0]<<v1[1];

    v1.insert(v1.begin(),4);
    cout<<v1[0]<<v1[1];

    cout<<*(v1.end());


    return 0;
}