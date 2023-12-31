#include <iostream>
#include <vector>
#include <set>

void uniqueSort(std::vector<int>& vec)
{
    std::set<int> s(vec.begin(), vec.end());
    vec.assign(s.begin(), s.end());
    for (int num : vec)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

int main()
{
    std::vector<int> vec;
    int num;
    while (std::cin >> num)
    {
        vec.push_back(num);
    }
    uniqueSort(vec);
    system("pause");
    return 0;  
}