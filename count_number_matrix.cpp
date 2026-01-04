#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

/*
 * Algorithm Challenge – Level 3 | #15 Count Number Occurrences in Matrix
 *
 * This program counts how many times a given number appears inside a 3×3 matrix.
 *
 * The algorithm traverses the matrix element by element and increments a counter each time the target number is found.
 *
 * This challenge reinforces:
 * - Matrix traversal
 * - Counting-based algorithms
 * - User input handling
 * - Simple frequency analysis
 */

// Prints the matrix in a formatted layout
void PrintMatrix(int arr[3][3], short Rows, short Colms)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Colms; j++)
        {
            cout << setw(2) << arr[i][j] << "  ";
        }
        cout << endl;
    }
}

// Counts how many times a number appears in the matrix
short CountNumberInMatrix(int Matrix1[3][3], int Number, short Rows, short Colms)
{
    short NumberCount = 0; // Stores how many times the number appears

    for (short i = 0; i < Rows; i++) // Traverse rows
    {
        for (short j = 0; j < Colms; j++) // Traverse columns
        {
            if (Matrix1[i][j] == Number) // Check for match
            {
                NumberCount++;
            }
        }
    }
    return NumberCount;
}

int main()
{
    int Matrix1[3][3] =
        {
            {5, 5, 2},
            {2, 9, 5},
            {4, 7, 5}
        };

    cout << "Matrix:\n";
    PrintMatrix(Matrix1, 3, 3);

    int Number;
    cout << "\nEnter the number to count in matrix: ";
    cin >> Number;

    cout << "\nNumber " << Number
         << " count in matrix is "
         << CountNumberInMatrix(Matrix1, Number, 3, 3);

    return 0;
}
