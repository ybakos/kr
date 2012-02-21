#include <iostream>

using namespace std;

void shellSort(int data[], int length) {
  int gap, i, j, temp;

  for (gap = length / 2; gap > 0; gap /= 2) {
    cout << "Gap is " << gap << endl;
    for (i = gap; i < length; ++i) {
      cout << "i is " << i << endl;
      for (j = i - gap; cout << "Comparing " << j << " to " << j+gap << endl, j >= 0 && data[j] > data[j+gap]; j -= gap) {

        temp = data[j];
        data[j] = data[j+gap];
        data[j+gap] = temp;
        cout << "Swapped " << j << " and " << j+gap << endl;
      }
      cout << "\n";
    }
    cout << "\n\n";
  }
}

void testShellSort() {
  const int LENGTH = 7;
  int unsorted[7] = {8, 7, 5, 3, 6, 9, 0};
  int sorted[7] = {0, 3, 5, 6, 7, 8, 9};
  shellSort(unsorted, LENGTH);
  for (int i = 0; i < LENGTH; ++i) {
    if (unsorted[i] != sorted[i]) {
      cout << "FAILED: testShellSort\n";
      cout << "Expected " << sorted[i] << " but received " << unsorted[i] << endl;
      exit(1);
    }
  }
  cout << "PASSED: testShellSort\n";
}

int main() {

    const int PHONE_NUMBER_LENGTH = 7;
    int number[PHONE_NUMBER_LENGTH] = {8, 6, 7, 5, 3, 0, 9};

    testShellSort();

    shellSort(number, PHONE_NUMBER_LENGTH);

    for (int i = 0; i < PHONE_NUMBER_LENGTH; ++i) {
      cout << number[i];
    }
    cout << endl;

    return 0;

}