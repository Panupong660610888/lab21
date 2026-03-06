#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{

    int n = argc;
    int average = 0, sum = 0;

    if (argc == 1){
        cout << "Please input numbers to find average.\n";
        return 1;
    }else if (argc == 2){
        average = atof(argv[1]);
    }else{
        for (int i = 0; i < n - 1; i++){
            sum += atof(argv[i]);
        }
        average = sum / (n - 1);
    }

    cout << "---------------------------------\n";
    cout << "Average of " << n - 1 << " numbers = " << average << "\n";
    cout << "---------------------------------\n";

    return 0;
}
