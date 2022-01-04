#include <iostream>
using namespace std;

// global variables
const int ARRAY_SIZE = 50;

// function prototypes
void initializeArray(double alpha[], int ARRAY_SIZE);
void printArray(double newArray[], int ARRAY_SIZE);
void copyArray(double beta[], int ARRAY_SIZE, double alpha[]);

int main ()
{
    // variables
    double alpha[ARRAY_SIZE];
    double beta[ARRAY_SIZE];

    // body
    initializeArray(alpha, ARRAY_SIZE);
    cout << "The output of the alpha array:" << endl;
    printArray(alpha, ARRAY_SIZE);
    cout << endl;
    cout << "The output of the beta array:" << endl;
    copyArray(beta, ARRAY_SIZE, alpha);
    printArray(beta, ARRAY_SIZE);
    cout << endl;

    return 0;
}

// functions
// initialize alpha function
void initializeArray(double alpha[], int ARRAY_SIZE)
{
    for (int index = 0; index < ARRAY_SIZE; index++)
    {
        if (index < 25)
        {
            alpha[index] = index * index;
        }
        else
        {
            alpha[index] = index * 3;
        }
    }
}

// print function
void printArray(double newArray[], int ARRAY_SIZE)
{
    for (int index = 0; index < ARRAY_SIZE; index++)
    {
        cout << newArray[index] << '\t';
        if ((index + 1) % 10 == 0)
        {
            cout << endl;
        }
    }
}

// copy function
void copyArray(double beta[], int ARRAY_SIZE, double alpha[])
{
    for (int index = 0; index < ARRAY_SIZE; index++)
    {
        beta[index] = alpha[index];
    }
}
