if (canpaint(v, n, k, mid)) // O(N)
        {
            // if we can paint in mid time ->
            // move to left to find a lesser time
            ans = min(ans, mid);
            hi = mid - 1;
        }
        else
        {
            // move to right
            lo = mid + 1;
        }