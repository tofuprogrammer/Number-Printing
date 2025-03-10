#include <iostream>

int main(int argc, const char * argv[]) {
    int userNumber = 0;
    int numberIndex = 0;
    int numberArray[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int endIndex = 0;
    bool userNumberValid = false;
    do {
        std::cout << "Enter a number between 1 and 10: ";
        std::cin >> userNumber;
        if (!std::cin || userNumber < 1 || userNumber > 10) {
            std::cout << "Invalid input\n";
            if (!std::cin) {
                std::cin.clear();
                std::cin
                    .ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            }
            continue;
        }
        else {
            userNumberValid = true;
        }
    } while (userNumberValid == false);
    for (int numbersPrinted = 0; numbersPrinted < userNumber; numbersPrinted++) {
        while (numberIndex <= endIndex) {
            std::cout << numberArray[numberIndex] << ' ';
            numberIndex++;
        }
        numberIndex = 0;
        endIndex++;
        std::cout << '\n';
    }
    }
