public class Task2 {
	public static void main(String[] args) {
		int totalLambs = (int)143;
		int ans = Solution.solution(totalLambs);
		System.out.println(ans);
	}

	static class Solution {
		static int solution(int totalLambs) {
			//Your code here
			if(totalLambs <= 1) {
				return 0;
			}
			int minPossible = 1;
			long minGiven = 0, last = 0, cur;
			for(int i = 0; i < 64; ++i) {
				if(i == 0) {
					cur = 1;
				} else {
					cur = last*2;
				}
				minGiven += cur;
				last = cur;
				if(minGiven <= totalLambs) {
					minPossible = i+1;
				} else {
					break;
				}
			}
			int maxPossible = 2;
			last = 1;
			long maxGiven = 2, lastToLast = 1;
			for(int i = 2; i < 64; ++i) {
				cur = last + lastToLast;
				maxGiven += cur;
				lastToLast = last;
				last = cur;
				if(maxGiven <= totalLambs) {
					maxPossible = i+1;
				} else {
					break;
				}
			}
			return (int)(maxPossible - minPossible);
		}
	}
}
