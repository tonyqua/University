#include <iostream>
#include <cstdlib>
#include <vector>
#include <ctime>

class arrCalc {
private:
  // Створюємо вектор з типом double (для дійсних чисел). 
  // Вектор це як динамічний масив, який сам контролює пам'ять і є кращим за динамічні масиви. 
  std::vector<double> array;
public:
  // Конструктор, який приймає значення масиву та генерує випадкові числа для масиву
  arrCalc(size_t size){
    
    // Ініціалізуємо генератор випадкових чисел
    srand(time(0));

    // Заповнюємо масив числами від 1 до 10
    for (size_t i = 0; i < size; ++i) {
      
      // Тут ми змінюємо діапазон з [0, 9] до [1, 10] завдяки 1 + static_cast<double>(std::rand()) / ...
      double randomValue = 1 + static_cast<double>(std::rand()) / (static_cast<double>(RAND_MAX / 9.0)); 
      
      // Вставляємо елемент вектора у кінець
      array.push_back(randomValue);
    }
  }

  // Функція для добутку чисел, які менше 6
  double lessThanSix() const {
    double product = 1;
    bool found = false;
    for (double num : array) {
      if (num < 6) {
        product *= num;
        found = true;
      }
    }
    return found ? product : 0.0;
  }

  void printArray() const {
    std::cout << "Масив: ";
    for (double num : array) {
      std::cout << num << " ";
    }
    std::cout << std::endl;
  }
};

int main() {
  setlocale(0, "");
  
  size_t arraySize = 12;

  arrCalc calc(arraySize);

  calc.printArray();

  std::cout << calc.lessThanSix();

  return 0;
}