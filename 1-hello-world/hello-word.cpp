#include <iostream>

int number1;
int number2;

using namespace std;

int main()
{
    // Hello World
    std::cout << "Hello, World!" << std::endl;

    std::cout << "Type first number: ";
    std::cin >> number1;
    std::cout << "Type the second number: ";
    std::cin >> number2;

    // Math Operations
    int sum = number1 + number2;
    int sub = number1 - number2;
    int times = number1 * number2;
    int div = number1 / number2;
    float fdiv = (float)number1 / (float)number2;
    int res = number1 % number2;

    // Conditionals
    if (number1 == number2)
        cout << number1 << "==" << number2 << std::endl;
    if (number1 != number2)
        cout << number1 << "!=" << number2 << std::endl;
    if (number1 < number2)
        cout << number1 << "<" << number2 << std::endl;
    if (number1 > number2)
        cout << number1 << ">" << number2 << std::endl;

    // While
    int number3;
    int counter = 0;
    int amount = 0;

    while (counter < 10)
    {
        cout << "Type a number (" << counter << ")" << std::endl;
        std::cin >> number3;

        if (number3 < 5)
        {
            amount++;
        }
        counter++;
    }

    // For
    int total;

    for (int number = 2; number <= 20; number++)
        total += number;

    cout << "The sum is " << total << endl;

    // Do while
    int count;
    int number;
    int total_sum;

    do
    {
        cout << "Type a new number" << std::endl;
        cin >> number;

        total_sum += number;
        count++;
    } while (number != 10);

    float average = (float)total_sum / (float)(count - 1);
    cout << "The total sum of do while is" << average << endl;

    return 0;
}

// Functions
int f_sum(int number1, int number2)
{
    return number1 + number2;
}

void change_by_value(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = a;
}

void change_reference(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}