#include <iostream>
#include <vector>

using namespace std;



int solution(int arr[], int N) {
    vector<int> digit(10,0);
    for(int i=0;i<N;i++){
        digit[arr[i]%10]++;
        if(arr[i]%11!=0){
            digit[arr[i]/10]++;
        }
    }
    int maxi=0;
    for(int i=0;i<10;i++){
        maxi=max(maxi,digit[i]);
    }

    return maxi;
}

int main() {
    int numbers[] = {25, 56, 15, 22};
    int N = sizeof(numbers) / sizeof(numbers[0]);

    int maxElements = solution(numbers, N);
    cout << "Maximum number of elements that can be chosen: " << maxElements << endl;

    return 0;
}
