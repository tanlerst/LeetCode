int climbStairs(int n) {
        int steps[n];
        steps[0] = 1;
        if (n>1){
            steps[1] = 2;
        }
        if (n>2){
            for (int i=2;i<n;i++){
                steps[i] = steps[i-1]+steps[i-2];
            }
        }
        return steps[n-1];
    }
