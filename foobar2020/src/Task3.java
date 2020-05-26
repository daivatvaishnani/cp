import java.util.ArrayList;
import java.util.Collections;

public class Task3 {
	public static void main(String[] args) {
		int[] xs = {-3,3,0};
		String ans = Solution.solution(xs);
		System.out.println(ans);
	}

	public static class Solution {
		static String solution(int[] xs) {
			// Your code here
			ArrayList<Integer> positives = new ArrayList<>();
			ArrayList<Integer> negatives = new ArrayList<>();
			for(int i : xs) {
				if(i < 0) {
					negatives.add(-i);
				} else if(i > 0) {
					positives.add(i);
				}
			}
			int sp = positives.size(), sn = negatives.size(), sx = xs.length;
			if(sp == 0 && sn == 0) {
				return "0";
			}
			if(sp == 0 && sn == 1 && sx == sn) {
				int val = -negatives.get(0);
				return Integer.toString(val);
			}
			if(sp == 0 && sn == 1 && sx != sn) {
				return "0";
			}
			Collections.sort(negatives);
			BigInt ans = BigInt.valueOf(1);
			for(int i : positives) {
				ans = ans.multiply(BigInt.valueOf(i));
			}
			int consider = 0;
			if(sn % 2 != 0) {
				consider++;
			}
			for(int i = sn-1; i >= consider; --i) {
				ans = ans.multiply(BigInt.valueOf(negatives.get(i)));
			}
			return ans.toString();
		}

		static class BigInt {
			private String value;

			private BigInt(String value) {
				this.value = value;
			}

			public static BigInt valueOf(Integer value) {
				return new BigInt(value.toString());
			}

			public String toString() {
				return value;
			}

			public BigInt multiply(BigInt b) {
				return new BigInt(multiplyStrings(this.value, b.toString()));
			}

			private String multiplyStrings(String a, String b) {
				Integer lena = a.length(), lenb = b.length();
				if(lena == 0 || lenb == 0) {
					return "0";
				}
				ArrayList<Integer> result = new ArrayList<>();
				for(int i = 0; i < lena + lenb; ++i) {
					result.add(0);
				}
				int in1 = 0, in2 = 0;
				for(int i = lena-1; i >= 0; --i) {
					int carry = 0;
					int n1 = a.charAt(i)-'0';
					in2 = 0;
					for(int j = lenb-1; j >= 0; --j) {
						int n2 = b.charAt(j)-'0';
						int sum = n1*n2 + result.get(in1 + in2) + carry;
						carry = sum/10;
						result.set(in1 + in2, sum%10);
						in2++;
					}
					if(carry > 0) {
						result.set(in1 + in2, result.get(in1 + in2) + carry);
					}
					in1++;
				}
				int i = result.size()-1;
				while(i >= 0 && result.get(i) == 0) {
					i--;
				}
				if(i == -1) {
					return "0";
				}
				StringBuilder ans = new StringBuilder();
				while(i >= 0) {
					ans.append(result.get(i--).toString());
				}
				return ans.toString();
			}
		}
	}
}
