
#include <iostream>
#include<vector>
#include<functional>

using namespace std;


int getMin(vector<int> numbers) {
    int min = numbers[0];
    for (int i = 0; i < numbers.size(); i++) {
        if (min > numbers[i])
            min = numbers[i];
    }
    return min;
}
int getMax(vector<int> numbers) {
    int max = numbers[0];
    for (int i = 0; i < numbers.size(); i++) {
        if (max < numbers[i])
            max = numbers[i];
    }
    return max;
}
void getMinMax(vector<int> numbers, int* min, int* max) {
    for (int i = 0; i < numbers.size(); i++) {
        if (numbers[i] > *max) {
            *max = numbers[i];
        }
        if (numbers[i] < *min) {
            *min = numbers[i];
        }
        
    }
}

int main()
{
    vector<int>numbers={ 1, 2, -55, 99, 5, -2 };
    cout << getMin(numbers) << endl;
    cout << getMax(numbers) << endl;

    int min = numbers[0];
    int max = numbers[0];

    getMinMax(numbers, &min, &max);
    cout << min << endl;
    cout << max << endl;
}

