#include <iostream>
using namespace std;

int i, j, input;
int showMatrix(int matrix[2][2]);
int showTranspose(int matrix[2][2]);
int showAdjoint(int matrix[2][2]);
int calculateDeterminant(int matrix[2][2]);

main()
{
	cout << "Enter your choice: " << endl;
	cout << "Press 1 to display the matrix and its transpos." << endl;
	cout << "Press 2 to display the adjoint and determint of the matrix." << endl;
	cout << "Press any other key to exit." << endl;
	cout << input;
	cin >> input;

	int matrix[2][2] = {{8, -4}, {-6, 2}};

	if (input == 1)
	{
		cout << showMatrix(matrix);
		cout << showTranspose(matrix);
	}
	else if (input == 2)
	{
		cout << showAdjoint(matrix);
		cout << calculateDeterminant(matrix);
	}
	else
	{
		cout << "This program will now terminate";
		exit;
	}
}

int showMatrix(int matrix[0][2])
{
	///////////////// I AM UNABLE TO WRITE SYNTAX FOR NESTED WHILE LOOPS  ///////////////////

	cout << "The Matrix is: " << endl;

	/*
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{

			cout << "\t" << matrix[i][j];
		}
		cout << endl;
	}
	*/

	i = 0;
	while (i < 2)
	{
		j = 0;
		while (j < 2)
		{

			cout << "\t" << matrix[i][j];
			j++;
		}
		cout << endl;
		i++;
	}
}

//////////////// TRANSPOSE FUNCTION /////////////////
int showTranspose(int matrix[0][2])
{
	cout << " The Transpose of the matrix is: " << endl;

	/*
	for (j = 0; j < 2; j++)
	{
		for (i = 0; i < 2; i++)
		{

			cout << "\t" << matrix[i][j];
		}

		cout << endl;
	}
	*/

	j = 0;
	while (j < 2)
	{
		i = 0;
		while (i < 2)
		{
			cout << "\t" << matrix[i][j];
			i++;
		}
		cout << endl;
		j++;
	}
}

/////////////// ADJOINT FUNCTION /////////////////////
int showAdjoint(int matrix[0][2])
{
	cout << "Adjoint of given matrix is: " << endl;

	int adjArray[2][2];

	adjArray[0][0] = matrix[1][1];
	adjArray[0][1] = -matrix[0][1];
	adjArray[1][0] = -matrix[1][0];
	adjArray[1][1] = matrix[0][0];

	/*
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{

			cout << "\t" << adjArray[i][j];
		}
		cout << endl;
	}
	*/

	i = 0;
	while (i < 2)
	{
		j = 0;
		while (j < 2)
		{

			cout << "\t" << adjArray[i][j];
			j++;
		}
		cout << endl;
		i++;
	}
}

///////////////// DETERMINANT FUNCTION //////////////////
int calculateDeterminant(int matrix[0][2])
{
	int determinant = (matrix[0][0] * matrix[1][1]) - (matrix[0][1] * matrix[1][0]);

	cout << "Determinant is: " << endl << determinant;
}