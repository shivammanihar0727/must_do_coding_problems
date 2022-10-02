class Sqrtx {
    public int mySqrt(int x) {
        int start = 0;
        int end = x;
        while(start <= end) {
            int mid = (end - start)/2 + start;
            if((long)mid * mid < x) {
                start = mid + 1;
            } else if((long)mid * mid > x) {
                end = mid - 1;
            } else {
                return mid;
            }
        }
        return end;
    }
}
