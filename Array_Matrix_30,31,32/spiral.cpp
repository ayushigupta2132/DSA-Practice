//spiral traversal of a matrix
//left.              right
//.   0  1. 2. 3. 4. 5  
//top
//0.  1  2  3  4  5  6
//1.  20 21 22 23 24 7
//2.  19 32 33 34 25 8
//3.  18
//4.  17
//5.  16
//bottom(5)
//right->bottom->left->top
//after indexing row and columns:
//top=0.    bottom=5
//left=0.   right=5
//to print 1 2 3 4 5 6..we go from left to right