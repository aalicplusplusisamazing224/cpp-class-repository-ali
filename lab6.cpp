/// @file lab6.cpp
/// @author Abdulahi Ali
/// @date 2026-03-03
/// @brief Compare static arrays and vectors for processing student scores

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    arraySolution();
    vectorSolution();
    return 0;
}

void arraySolution() {
    const int SIZE = 10;
    int score[SIZE];

    std::cout << "\n==== Array Solution ====\n";
    std::cout << "Enter " << SIZE << " student scores (0-100):\n";
    for (int i = 0; i < SIZE; i++) {
        int input;
        while (true) {
            std::cout << "Score " << (i + 1) << ": ";
            std::cin >> input;
            if (input >= 0 && input <= 100) {
                score[i] = input;
                break;
            } else {
                std::cout << "Invalid score. Please enter a value between 0 and 100.\n";
            }
        }
        }
        float average = calculateAverage(score, SIZE);
        int highest = findmax(score, SIZE);
        int lowest = findmin(score, SIZE);
        std::cout << "Average Score: " << average << "\n";
        std::cout << "Highest Score: " << highest << "\n";
        std::cout << "Lowest Score: " << lowest << "\n";
}

void vectorSolution() {
    const int SIZE = 10;
    vector<int> scores(SIZE);

    std::cout << "\n==== Vector Solution ====\n";
    std::cout << "Enter " << SIZE << " student scores (0-100):\n";
    for (int i = 0; i < SIZE; i++) {
        int input;
        while (true) {
            std::cout << "Score " << (i + 1) << ": ";
            std::cin >> input;
            if (input >= 0 && input <= 100) {
                scores[i] = input;
                break;
            } else {
                std::cout << "Invalid score. Please enter a value between 0 and 100.\n";
            }
        }
    }
    float average = calculateAverage(scores.data(), SIZE);
    int highest = *max_element(scores.begin(), scores.end());
    int lowest = *min_element(scores.begin(), scores.end());
    std::cout << "Average Score: " << average << "\n";
    std::cout << "Highest Score: " << highest << "\n";
    std::cout << "Lowest Score: " << lowest << "\n";

    std::sort(scores.begin(), scores.end());
    std::cout << "Sorted Scores: ";
    int n = static_cast<int>(scores.size());
    for (int i = 0; i < n; i++) {
        std::cout << scores[i] << " ";
        if (i < n - 1) {
            std::cout << ", ";
        }
    }
    std::cout << "\n";
}

/// @brief Calculate the average of an array of integers
/// @param arr The array of integers
/// @param size The size of the array
/// @return The average as a float

float calculateAverage(const int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return static_cast<float>(sum) / size;
}
int findmax(const int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}
int findmin(const int arr[], int size) {
    int min = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}
