class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        H = len(haystack)
        N = len(needle)
        ///sadbutsad
        ///sad i:0
        ///sad i:1
        ///....
        ///     sad i:6
        for i in range(H-N+1): ///����9 �����3 ��0...6
            if haystack[i:i+N] == needle: ///�Y���׬ۦP
            ///��r��A�qi�}�l�C����i+N �@N�Ӧr
                return i ///���\����m
        return -1 ///�S�����\
