#include <iostream>
#include <cstdlib>
#include <ctime>




int main() {
	setlocale(LC_ALL, "Russian");
	//Задача 1.	
    const int size = 10;
    int array[size];   
    for (int i = 0; i < size; i++) {
        array[i] = rand() % 100 + 1;
    }   
    std::cout << "Массив: ";
    for (int i = 0; i < size; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;   
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += array[i];
    }   
    int average = sum / size;    
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (array[i] < average) {
            count++;
        }
    }    
    std::cout << "Среднее арифметическое: " << average << std::endl;
    std::cout << "Количество элементов, значение которых меньше среднего арифметического: " << count << std::endl;
    std::cout << "\n\n";




    //Задача 2
    std::srand(time(NULL));    
    int array1[5][5];
    std::cout << "Первый массив:\n";
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            array1[i][j] = std::rand() % 10 + 1;
            std::cout << array1[i][j] << " ";
        }
        std::cout << "\n";
    }
    std::cout << "\n";    
    int array2[5][5];
    std::cout << "Второй массив:\n";
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            array2[i][j] = std::rand() % 10 + 1;
            std::cout << array2[i][j] << " ";
        }
        std::cout << "\n";
    }
    std::cout << "\n";    
    int result[5][5];
    std::cout << "Результат сложения:\n";
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            result[i][j] = array1[i][j] + array2[i][j];
            std::cout << result[i][j] << " ";
        }
        std::cout << "\n";
    }




    //Задача 3
    int number;    
    std::cout << "Введите шестизначное число: ";
    std::cin >> number;    
    if (number < 100000 || number > 999999) {
        std::cout << "Неверный ввод. Число должно быть шестизначным.\n";
        return 0;
    }    
    int digits[6];
    for (int i = 5; i >= 0; i--) {
        digits[i] = number % 10;
        number /= 10;
    }   
    std::cout << "Массив цифр числа:\n";
    for (int i = 0; i < 6; i++) {
        std::cout << digits[i] << " ";
    }
    std::cout << "\n";





	return 0;
}