# Experiment-8

# Aim:
To study and implement C++ 2D Array - Matrices

# Theory:

A 2D array in C++ can be defined as a data structure that deals with two-dimensional grid formats such as matrices wherein every single element is well identified by two indices: one for rows and another one for columns. It is similar to an array composed of other arrays.

A two-dimensional array could be declared using the syntax type arrayName[rows][columns]; For instance, int matrix[3][4]; indicates three rows by four columns. All its members occupy successive positions in memory meaning they are laid out linearly following row-major order scheme hence it makes it different from accessing them through single index only but rather via two indexes.They may be initialized while being declared. For static arrays they require listing down values enclosed in nested braces whereas dynamic arrays size calculation occurs at run-time stage hence this involves dynamic allocation using new’s keyword and deallocation using delete’s keyword in C++.Elements can be accessed using their respective row and column indexes. The iteration uses mostly a two-fold loop: the outer one is run for rows while the inner one does columns. It enables you to treat or manipulate one element of an entire array.

Here’s the algorithm for the code you provided, which calculates the sum of the diagonal elements of a 3x3 matrix and checks for symmetry:

### Algorithm to Calculate Diagonal Sum and Check Symmetry of a Matrix

1. **Initialize the Matrix**:
   - Create a 3x3 array `arr`.
   - Initialize a variable `add` to 0 for storing the sum of diagonal elements.

2. **Input Matrix Elements**:
   - Prompt the user to enter the elements of the matrix.
   - Use nested loops to fill the matrix:
     - Outer loop iterates over rows.
     - Inner loop iterates over columns, storing user inputs in `arr`.

3. **Display the Matrix**:
   - Use nested loops to print the matrix:
     - Print each element followed by a space.
     - Print a newline after each row.

4. **Calculate the Sum of Diagonal Elements**:
   - Use a loop that iterates over the range of the matrix size (3):
     - If the row index equals the column index (i.e., diagonal element), add that element to `add`.

5. **Check for Symmetry**:
   - In the same loop, check if `arr[i][j]` is equal to `arr[j][i]` for symmetry.
   - If they are equal, print that the matrix is symmetrical.

6. **Output Results**:
   - Print the sum of diagonal elements.

Here’s the algorithm for the code you provided, which sums two 2x3 matrices:

### Algorithm to Sum Two 2x3 Matrices

1. **Initialize Matrices**:
   - Create three 2x3 matrices: `arr`, `arr1`, and `answer`.

2. **Input First Matrix**:
   - Prompt the user to enter elements for the first 2x3 matrix.
   - Use nested loops to read the elements into `arr`:
     - Outer loop iterates over rows (2).
     - Inner loop iterates over columns (3).

3. **Display First Matrix**:
   - Use nested loops to print the elements of `arr` in matrix format.

4. **Input Second Matrix**:
   - Prompt the user to enter elements for the second 2x3 matrix.
   - Use nested loops to read the elements into `arr1`.

5. **Display Second Matrix**:
   - Use nested loops to print the elements of `arr1` in matrix format.

6. **Sum the Matrices**:
   - Use nested loops to calculate the sum of `arr` and `arr1`, storing the result in `answer`:
     - For each element at position `(i, j)`, calculate `answer[i][j] = arr[i][j] + arr1[i][j]`.

7. **Display Sum of Matrices**:
   - Use nested loops to print the elements of `answer` in matrix format.

Here’s the algorithm for the code you provided, which inputs and displays a 2x3 matrix:

### Algorithm to Input and Display a 2x3 Matrix

1. **Initialize the Matrix**:
   - Create a 2x3 array called `arr`.

2. **Input Matrix Elements**:
   - Prompt the user to enter the elements of the matrix.
   - Use nested loops to read the elements into `arr`:
     - Outer loop iterates over rows (2).
     - Inner loop iterates over columns (3).

3. **Display the Matrix**:
   - Print a label for the matrix.
   - Use nested loops to print the elements of `arr` in matrix format:
     - Print each element followed by a space.
     - Print a newline after each row.

Here’s the algorithm for the code you provided, which multiplies two matrices:

### Algorithm to Multiply Two Matrices

1. **Initialize Matrices**:
   - Create a 2x3 matrix `a` initialized with values `{{1, 2, 3}, {4, 5, 6}}`.
   - Create a 3x2 matrix `b` initialized with values `{{1, 2}, {3, 4}, {5, 6}}`.
   - Create a 2x2 result matrix `result`, initialized to zero.

2. **Matrix Multiplication**:
   - Use a nested loop to iterate over the rows of matrix `a` (2 rows).
     - Outer loop iterates variable `i` from 0 to 1.
     - For each row, initialize `result[i][j]` to zero.
     - Use another loop to iterate over the columns of matrix `b` (2 columns).
       - Inner loop iterates variable `j` from 0 to 1.
       - Use a third loop to iterate over the columns of `a` (or rows of `b`) (3 columns).
         - Inner-most loop iterates variable `k` from 0 to 2.
         - Calculate the product and sum: `result[i][j] += a[i][k] * b[k][j]`.

3. **Display Result**:
   - Print the product of the two matrices by using nested loops to access each element in `result`.
Here’s the algorithm for the code you provided, which computes the transpose of a matrix:

### Algorithm to Transpose a Matrix

1. **Initialize Variables**:
   - Create a 2D array `a` for the original matrix and a 2D array `transpose` for the transposed matrix.
   - Declare variables `row` and `column` to store the dimensions of the matrix.

2. **Input Dimensions**:
   - Prompt the user to enter the number of rows and columns for the matrix.

3. **Input Matrix Elements**:
   - Use nested loops to read the elements of the matrix `a`:
     - Outer loop iterates over rows.
     - Inner loop iterates over columns.
     - Prompt the user for each element using formatted input.

4. **Display Entered Matrix**:
   - Use nested loops to print the elements of the matrix `a` in matrix format.

5. **Compute Transpose**:
   - Use nested loops to calculate the transpose of the matrix:
     - Outer loop iterates over rows of `a`.
     - Inner loop iterates over columns of `a`.
     - Assign `transpose[j][i] = a[i][j]`.

6. **Display Transposed Matrix**:
   - Use nested loops to print the elements of the transposed matrix.
