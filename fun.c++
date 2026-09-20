#include <iostream>

class MyClass
{
public:
    void fun(int arr[], int length)
    {
        int minPos = 0;
        for (int i = 1; i < length; i++)
        {
            if (arr[i] < arr[minPos])
            {
                minPos = i;
            }
        }
       
        int temp = arr[minPos];
        arr[minPos] = arr[length - 1];
        arr[length - 1] = temp;
    }
};

void printArray(int arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main()
{
    int n;
    std::cout << "长：";
    std::cin >> n;

    int arr[100];
    std::cout << "数字：";//不要输入逗号 用空格隔开因为逗号好像是不会识别为数字但我不太明白
    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }

    MyClass obj;
    std::cout << "交换前：";
    printArray(arr, n);

    obj.fun(arr, n);

    std::cout << "交换后：";
    printArray(arr, n);

    return 0;
}