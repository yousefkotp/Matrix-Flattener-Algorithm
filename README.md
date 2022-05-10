# Matrix-Flattener-Algorithm

The algorithm flatten a 3D matrix into 1D vector in row major in a very simple way, here is a pseudo code for the algorithm: 
1. insert the matrix element into 1D array in row major, meaning we iterate depth, then iterate columns, then iterate rows
2. using a simple formula, which is : **i + ( j * HEIGHT ) + ( k * HEIGHT * WIDTH )**, we can access the 1D array from the result of previous equation
