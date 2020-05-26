import java.math.BigInteger;

public class Task6 {
	public static void main(String[] args) {
		String x = "14";
		int ans = Solution.solution(x);
		System.out.println(ans);
	}

	public static class Solution {
		public static int solution(String x) {
			// Your code here
			return solve(x);
		}

		public static int solve(String s) {
			BigInteger n = new BigInteger(s);
			return go(n);
		}

		private static int go(BigInteger n) {
			if(n.equals(BigInteger.valueOf(1))) {
				return 0;
			}
			if(n.mod(BigInteger.valueOf(2)).equals(BigInteger.valueOf(1))) {
				if(n.equals(BigInteger.valueOf(3)) || n.mod(BigInteger.valueOf(4)).equals(BigInteger.valueOf(1))) {
					return 1 + go(n.subtract(BigInteger.valueOf(1)));
				} else {
					return 1 + go(n.add(BigInteger.valueOf(1)));
				}
			}
			return 1 + go(n.shiftRight(1));
		}

		/*
		* t(n) = min(t(n+1), t(n-1), )
		* */
	}
}
