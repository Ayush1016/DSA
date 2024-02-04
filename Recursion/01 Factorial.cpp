Link: https://www.geeksforgeeks.org/problems/factorial5739/1

long long int factorial(int N){
        if(N==0){
        return 1;
        }
        else{
        return N*factorial(N-1);
        }
    }
