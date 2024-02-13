#include <iostream>;
int calculateSum(int* arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    return sum;
}
int countOnes(int num) {
    int count = 0;
    while (num > 0) {
        if (num % 10 == 1) {
            count++;
        }
        num /= 10;
    }
    return count;
}
int main() {
    int N;
    std::cout << "Enter the length of the arrays: ";
    std::cin >> N;
    int* arr1 = new int[N];
    int* arr2 = new int[N];
    int* adder = new int[N];
    std::cout << "Enter the elements of the first array." << std::endl;
    for (int i = 0; i < N; ++i) {
        std::cout << "Element " << i + 1 << ": ";
        std::cin >> arr1[i];
    }
    std::cout << "Enter the elements of the second array:" << std::endl;
    for (int i = 0; i < N; ++i) {
        std::cout << "Element " << i + 1 << ": ";
        std::cin >> arr2[i];
    }
    for (int i = 0; i < N; ++i) {
        adder[i] = arr1[i] + arr2[i];
    }
    std::cout << "Resultant Array (Addition of corresponding elements)." << std::endl;
    for (int i = 0; i < N; ++i) {
        std::cout << "Element " << i + 1 << " at address " << adder + i * sizeof(int) << ": " << adder[i] << std::endl;
    }
    int sum = calculateSum(adder, N);
    std::cout << "Sum of elements in the resulting array: " << sum << std::endl;
    int onesCount = countOnes(sum);
    std::cout << "Number of occurrences of digit '1' in the sum: " << onesCount << std::endl;
    delete[] arr1;
    delete[] arr2;
    delete[] adder;
    return 0;
}
