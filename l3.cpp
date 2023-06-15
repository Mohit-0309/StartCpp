#include <iostream>
int lengthOfLongestSubstring(char *s) {
    int n = strlen(s);
    if (n <= 1) {
        return n;
    }
    int chars[10000] = {0};
    int max_len = 0, i = 0, j = 0;
    while (j < n) {
        if (chars[s[j]] == 0) {
            chars[s[j]] = 1;
            j++;
            max_len = (max_len > j - i) ? max_len : j - i;
        } else {
            chars[s[i]] = 0;
            i++;
        }
    }
    return max_len;
}