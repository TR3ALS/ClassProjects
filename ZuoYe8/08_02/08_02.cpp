#include <iostream>
#include <string>
#include <deque>

int main()
{
    system("chcp 65001");
    std::deque<int> queue;
    std::string choice;

    do {
        std::cout << "请输入操作('push'、'pop'、'print' 或 'exit'): ";
        std::cin >> choice;

        if (choice == "push")
        {
            int value;  
            std::cout << "请输入要入队的元素: ";
            std::cin >> value;
            queue.push_back(value);
            std::cout << "入队成功!" << std::endl;
        }
        else if (choice == "pop")
        {
            if (!queue.empty())
            {
                int value = queue.front();
                queue.pop_front();
                std::cout << "出队元素: " << value << std::endl;
            }
            else
            {
                std::cout << "队列为空，无法出队!" << std::endl;
            }
        }
        else if (choice == "print")
        {
            std::cout << "队列中的元素: ";
            for (const auto& element : queue)
            {
                std::cout << element << " ";
            }
            std::cout << std::endl;
        }
        else if (choice == "exit")
        {
            std::cout << "退出程序!" << std::endl;
            break;
        }
        else
        {
            std::cout << "无效的操作，请重新输入!" << std::endl;
        }
    } 
    while (choice != "exit");

    return 0;
}