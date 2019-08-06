#include <iostream>
#include <vector>
#include <string>

using std::string;

int main()
{
    int count = 0;
    string s1;
    std::cin >> s1;
    for(auto i : s1)
    {
        for (auto itb = s1.begin(), ite = s1.end();itb != ite;--ite)
        {
            if (ite != itb)
            {
            s1.erase(ite);
            --ite;
            ++count;   
            }
        }
    }
    std::cout << count << std::endl;
}
