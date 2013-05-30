#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::vector;

int main()
{
    const int MAX_NB_INTS = 3;

    int number;

    vector<int> v;
     
    for (int i = 0; i != MAX_NB_INTS; ++i)
    {
        cin >> number;
        v.push_back(number);
    }

    for (const auto& element : v)
    {
        cout << element << " ";
    }
    cout << std::endl;
}
