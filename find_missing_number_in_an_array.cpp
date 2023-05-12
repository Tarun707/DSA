int missingNumber(int A[], int N)
{
    int xor1 = 0;
    int xor2 = 0;
    for(int i = 0; i < N-1; i++) {
        xor2 = xor2 xor A[i];
        xor1 = xor1 xor (i + 1);
    }
    xor1 = xor1 xor N;
    return xor1 xor xor2;
}
