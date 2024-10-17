class Solution {
public:
    int maximumSwap(int num) {
    
    string str = to_string(num);   // Convert the number to string
    string SortedStr = str;              // Copy the string
    sort(SortedStr.begin(), SortedStr.end(),greater<char>());  // Sort the copied string in decending order

    if (str == SortedStr) return num;    // If the original string is already sorted, return the number


    for (int i = 0; i < str.size(); ++i) {
            if (str[i] != SortedStr[i]) {
                // Find the last occurrence of the larger digit in the original string
                for (int j = str.size() - 1; j > i; --j) {
                    if (str[j] == SortedStr[i]) {
                        swap(str[i], str[j]);  // Swap to make the number larger
                        return stoi(str);  // Convert back to integer and return
                    }
                }
            }
        }

        return num; 
    }
};