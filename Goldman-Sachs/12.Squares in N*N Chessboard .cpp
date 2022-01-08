class Solution {
  public:
    long long squaresInChessBoard(long long N) {
        // code here
        // Number of 1*1 squares = n*n
        // Number of 2*2 squares = (n-1)*(n-1)
        // ...
        // Number of n*n squares = 1*1
        // Total squares = 1*1+2*2+ ... +n*n
        return ((N*(N+1)*(2*N+1))/6);
    }
};
