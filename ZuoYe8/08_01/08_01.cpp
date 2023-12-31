#include <iostream>  
#include <list>  

int main() 
{  
    system("chcp 65001");
    std::list<int> nums;  
    std::cout << "请输入一系列整数（以-1结束）: ";  
    int num;  
    while (std::cin >> num && num != -1) 
    {  
        nums.push_back(num);  
    }  
    if (!nums.empty()) 
    {  
        nums.pop_front();  
    }  

    if (!nums.empty()) 
    {  
        nums.pop_back();  
    }  

    std::cout << "剩余的链表为: ";  
    for (const auto& num : nums) 
    {  
        std::cout << num << " ";  
    }  
    std::cout << std::endl;  

    system("pause");
    return 0;  
}