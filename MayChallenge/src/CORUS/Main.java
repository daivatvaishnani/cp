package CORUS;

import java.io.*;
import java.util.StringTokenizer;

public class Main {

	public static void main(String[] args) {
		InputReader in = new InputReader(System.in);
		PrintWriter out = new PrintWriter(System.out);
		TaskB solver = new TaskB();
		int cases = in.nextInt();
		for(int i = 0; i < cases; ++i) {
			solver.solve(i, in, out);
		}
		out.close();
	}

	static class TaskB {
		int[] cnt;
		String s;

		void solve(int testcase, InputReader in, PrintWriter out) {
			int n = in.nextInt();
			cnt = new int[26];
			int q = in.nextInt();
			s = in.next();
			for(int i = 0; i < s.length(); ++i) {
				cnt[s.charAt(i)-'a']++;
			}
			for(int i = 0; i < q; ++i) {
				int c = in.nextInt();
				out.println(findLength(c));
			}
		}

		private int findLength(int c) {
			int ans = 0;
			for(int i = 0; i < 26; ++i) {
				ans += Math.max(0, cnt[i]-c);
			}
			return ans;
		}
	}

	static class InputReader {
		BufferedReader reader;
		StringTokenizer tokenizer;

		InputReader(InputStream stream) {
			reader = new BufferedReader(new InputStreamReader(stream), 32768);
			tokenizer = null;
		}

		String next() {
			while (tokenizer == null || !tokenizer.hasMoreTokens()) {
				try {
					tokenizer = new StringTokenizer(reader.readLine());
				} catch (IOException e) {
					throw new RuntimeException(e);
				}
			}
			return tokenizer.nextToken();
		}

		int nextInt() {
			return Integer.parseInt(next());
		}
	}
}
