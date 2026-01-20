#include <iostream>
#include <string>

constexpr int MAX_SCORE = 100;

void printInfo(int score, double measurement, bool isStudent) {
    double percentage = score * 100.0 / MAX_SCORE;
    std::string studentStatus = isStudent ? "Yes" : "No";
    std::string performance;

    if (percentage >= 90) {
        performance = "Excellent";
    } else if (percentage >= 60) {
        performance = "Good";
    } else {
        performance = "Needs Improvement";
    }

    std::cout << "Score: " << score 
              << ", Measurement: " << measurement
              << ", Student: " << studentStatus 
              << ", Performance: " << performance << std::endl;
}

int main() {
    int score;
    double measurement;
    bool isStudent;
    int repeat = 1;

    while (repeat == 1) {
        std::cout << "Enter your score: ";
        std::cin >> score;

        std::cout << "Enter precise measurement: ";
        std::cin >> measurement;

        std::cout << "Are you a student? (1 = Yes, 0 = No): ";
        std::cin >> isStudent;

        printInfo(score, measurement, isStudent);

        std::cout << "\nDo you want to enter another person? (1 = Yes, 0 = No): ";
        std::cin >> repeat;
    }

    return 0;
}
