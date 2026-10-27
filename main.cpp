#include <iostream>

// Homework 9 — Betsy Caudel
// CIS 5 Week 09 · Menu on the lab

using std::cout;
using std::cin;
using std::endl;

void printMenu() {
  cout << "1) Average  2) High  3) Quit" << endl;
}

double average(const int a[], int n) {
  //Returns, meaning it doesn't print if n == 0.
   if (n == 0) {
    return 0.0;
  }
  //Calculates the average.
  int sum = 0;
  for (int i = 0; i < n; ++i){
    sum = sum + a[i];
  }
  // Returns the average.
  return sum * 1.0 / n;
}

void printSummary(double avg) {
  cout << "Average: " << avg << endl;
}

int high(const int a[], int n) {
  // Returns the highest number.
  int high = a[0];
  for (int i = 1; i < n; ++i){
    if (a[i] > high){
      high = a[i];
    }
  }
  return high;
}

int main() {
  const int N = 4;
  int scores[N] = {80, 90, 70, 100};
  int choice = 0;

  do {
    printMenu();
    cout << "Choice: ";
    cin >> choice;
    if (choice == 1) {
      double avg = average(scores, N);
      printSummary(avg);
    } else if (choice == 2) {
      int top = high(scores, N);
      cout << "High: " << top << endl;
    }
  } while (choice != 3);

  return 0;
}
