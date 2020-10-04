int problem_01(int n) {
    int i;
    int sum = 0;
    for (i = 3; i < n; i+=1) {
        if ((i % 5 == 0) || (i % 3 == 0)) {
            sum+=i;
        }
    }
    return sum;
}

int problem_06(int n) {
    int i;
    int square_sum = 0;
    int sum_of_squares = 0;
    for (i = 0; i <= n; i+=1) {
        square_sum+=i;
    }
    for (i = 0; i <= n; i+=1) {
        sum_of_squares += (i * i);
    }
    square_sum*=square_sum;
    return (square_sum - sum_of_squares);
}