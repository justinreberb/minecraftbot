#include <iostream>
double marks[5];
int sum = 0;
void marksLoop();
void inputTaker();

int main()
{

    inputTaker();
    marksLoop();
    double total = sum;//test
    double avg = sum / 5;
    std::cout << total<<std::endl;

    std::cout << avg<<std::endl;
}
//commit
void marksLoop()
{

    for (int i = 0; i < 5; i++)
    {

        sum += marks[i];
    }
}

void inputTaker()
{

    std::cout << "Enter the marks: " << std::endl;
    for (int i = 0; i < 5; i++)
    {
        std::cin >> marks[i];
    }
}
