#include <iostream>
using namespace std;

// global variables
const int ROWS = 5;
const int COLS = 10;

// function prototypes
void initializeArray(double alpha[ROWS][COLS]);
void printArray(double anyArray[ROWS][COLS]);
void copyArray(double beta[ROWS][COLS], double alpha[ROWS][COLS]);

int main ()
{
    // variables
    double alpha[ROWS][COLS];
    double beta[ROWS][COLS];

    // body
    initializeArray(alpha);
    cout << "The output of the alpha array:" << endl;
    printArray(alpha);
    cout << endl;
    cout << "The output of the beta array:" << endl;
    copyArray(beta, alpha);
    printArray(beta);
    cout << endl;

    return 0;
}

// functions
// alpha function
void initializeArray(double alpha[ROWS][COLS])
{
    int num = 0;
    for (int row = 0; row < ROWS; row++)
    {
        for (int col = 0; col < COLS; col++)
        {
            if (num < 25)
            {
                alpha[row][col] = num * num;
            }
            else
            {
                alpha[row][col] = num * 3;
            }
            num++;
        }
    }
}

// copy array
void copyArray(double beta[ROWS][COLS], double alpha[ROWS][COLS])
{
    for (int row = 0; row < ROWS; row++)
    {
        for (int col = 0; col < COLS; col++)
        {
            beta[row][col] = alpha[row][col];
        }
    }
}

// print array
void printArray(double anyArray[ROWS][COLS])
{
    for (int row = 0; row < ROWS; row++)
    {
        for (int col = 0; col < COLS; col++)
        {
            cout << anyArray[row][col] << '\t';
            if ((col + 1) % 10 == 0)
            {
                cout << endl;
            }
        }
    }
}


