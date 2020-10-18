// 2. Write a program that asks the user to enter up to 10 golf scores,
// which are to be stored in an array.
// You should provide a means for the user
// to terminate input prior to entering 10 scores.
// The program should display all the scores on one line
// and report the average score.
// Handle input, display, and the average calculation
// with three separate array-processing functions.
#include <iostream>

const int MAX_SIZE = 10;

int inputScores(int scores[], int maxSize);
void displayScores(const int scores[], int scoresNum);
double averageScore(const int scores[], int scoresNum);

int main() {
  int golf_scores[MAX_SIZE];
  int entries = inputScores(golf_scores, MAX_SIZE);

  if (entries) {
    displayScores(golf_scores, entries);
    std::cout << "The average score is "
              << averageScore(golf_scores, entries) << std::endl;
  }
  else
    std::cout << "No scores to display. Bye!\n";

  return 0;
}

int inputScores(int scores[], int maxSize) {
  std::cout << "Enter up to " << maxSize << " scores." << std::endl;
  std::cout << "Enter score #1 (q to quit): ";

  int count = 0;
  int score;

  while (count < maxSize && std::cin >> score) {
    scores[count++] = score;

    if (count < maxSize)
      std::cout << "Enter score #" << count + 1 << " (q to quit): ";
  }

  return count;
}

void displayScores(const int scores[], int scoresNum) {
  std::cout << "Your golf scores are:\n";

  for (int i = 0; i < scoresNum; i++)
    std::cout << scores[i] << " ";
  std::cout << std::endl;
}

double averageScore(const int scores[], int scoresNum) {
  double total = 0;

  for (int i = 0; i < scoresNum; i++)
    total += scores[i];

  return total / scoresNum;
}
