// ArraySort.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
    std::cout << "The program that sorts an array\n";
    std::cout << "Enter 15 float numbers:\n";
    float min, max, array[15];
    int min_point, max_point;

    for (int i = 0; i < 15; i++)
        std::cin >> array[i];

    for (int j = 0; j < 7; j++)
    {
        min = array[j];
        max = array[j];
        max_point = j;
        min_point = j;
        for (int i = j; i <= 14 - j; i++)
        {
            if (array[i] > max)
            {
                max = array[i];
                max_point = i;
            }
            else if (array[i] < min)
            {
                min = array[i];
                min_point = i;
            }
        }
        std::swap(array[j], array[max_point]);
        if (min_point == j)
            std::swap(array[14-j], array[max_point]);
        else 
            std::swap(array[14-j], array[min_point]);
    }
    if (array[6] < array[7])
        std::swap(array[6], array[7]);
    for (int i = 0; i < 15; ++i)
        std::cout << array[i] << "; ";
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
