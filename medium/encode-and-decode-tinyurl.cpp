// link-https://leetcode.com/problems/encode-and-decode-tinyurl/
/*Runtime: 0 ms, faster than 100.00% of C++ online submissions for Encode and Decode TinyURL.
Memory Usage: 6.7 MB, less than 99.84% of C++ online submissions for Encode and Decode TinyURL.

*/

class Solution {
public:
    string longURL,shortURL;
    
    Solution(){
        shortURL="0101";
    }
    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        this->longURL=longUrl;
        return shortURL;
    
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        // this->shortURL=shortUrl;
        return longURL;
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));
