#include <iostream>
#include <climits>

int main() {
    int n; 
    std::cout << "Input n: ";
    std::cin >> n;

    int* A = new int[n]; 
    std::cout << "Input array element: ";
    for (int i = 0; i < n; i++) {
        std::cin >> A[i];
    }

    int A1; 
    std::cout << "Input numper A1: ";
    std::cin >> A1;

    int B; 
    std::cout << "Input numperB: ";
    std::cin >> B;

    int min = INT_MAX; 
    for (int i = 0; i < n; i++) {
        if (A[i] > A1 && A[i] < B && A[i] < min) {
            min = A[i];
        }
    }

    if (min == INT_MAX) {
        std::cout << "no elements that satisfy the condition." << std::endl;
    }
    else {
        std::cout << "minimum value among elements less " << B << " and located to the first element greater " << A1 << ": " << min << std::endl;
    }

    delete[] A; 

    return 0;

}