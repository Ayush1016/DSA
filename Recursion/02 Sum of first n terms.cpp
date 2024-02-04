Link: https://www.geeksforgeeks.org/problems/sum-of-first-n-terms5843/1

long long sumOfSeries(long long N) {
        if(N==1)
        return 1;
        return powl(N, 3) + sumOfSeries(N - 1);
    }
