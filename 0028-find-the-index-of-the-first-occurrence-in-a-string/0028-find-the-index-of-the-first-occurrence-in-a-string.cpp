class Solution {
public:
    int strStr(string haystack, string needle) {
        size_t c = haystack.find(needle);
        if(c!=string::npos){
            return c;
        }
        else return -1;
    }
};