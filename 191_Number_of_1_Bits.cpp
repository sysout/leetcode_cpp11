class Solution {
public:
    int hammingWeight(uint32_t n) {
        // https://www.youtube.com/watch?v=Hzuzo9NJrlc
        // https://www.youtube.com/watch?v=Ti5tBAfQvjY
        n = (n & 0x55555555) + (n>>1 & 0x55555555);
        n = (n & 0x33333333) + (n>>2 & 0x33333333);
        n = (n & 0x0f0f0f0f) + (n>>4 & 0x0f0f0f0f);
        n += n>>8;
        n += n>>16;
        return n & 0xff;
    }
};
