class Task1 {
    public static void main(String[] args) {
        String x = "\"\"vmxibkgrlm\"\"";
        String ans = Solution.solution(x);
        System.out.println(ans);
    }

    static class Solution {
        static String solution(String x) {
            StringBuilder ans = new StringBuilder(x);
            System.out.println(ans.toString());
            for (int i = 0; i < x.length(); ++i) {
                char c = x.charAt(i);
                if (c >= 'a' && c <= 'z') {
                    ans.setCharAt(i, (char) ('a' + 'z' - c));
                }
            }
            return ans.toString();
        }
    }

}
