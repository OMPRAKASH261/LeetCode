// Two Pointer apporach, T.C:- O(n+m), S.C:- O(n+m)
class Solution {
    public String mergeAlternately(String word1, String word2) {
        int i = 0;
        int j = 0;
        StringBuilder merged = new StringBuilder();

        while (i < word1.length() || j < word2.length()) {
            if (i < word1.length()) {
                merged.append(word1.charAt(i++));
            }

            if (j < word2.length()) {
                merged.append(word2.charAt(j++));
            }
        }

        return merged.toString();
    }
}

