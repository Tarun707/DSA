    int n = a.size();
    int left = 0, right = 0, maxi = 0;
    long long sum = 0;
    while(right < n)
    {
        sum += a[right];

        if(sum == k) {
            maxi = max(maxi, right - left + 1);
            right++;
        }

        else if(sum < k)
            right++;

        else if(sum > k) {
            while(sum > k && left <= right) {
                sum -= a[left];
                left++;
            }

            if(sum == k)
                maxi = max(maxi, right - left + 1);

            right++;
        }
    }

    return maxi;
