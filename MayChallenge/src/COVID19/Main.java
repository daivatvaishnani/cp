package COVID19;

import java.io.*;
import java.util.StringTokenizer;

public class Main {

	public static void main(String[] args) {
		InputReader in = new InputReader(System.in);
		PrintWriter out = new PrintWriter(System.out);
		TaskA solver = new TaskA();
		int cases = in.nextInt();
		for(int i = 0; i < cases; ++i) {
			solver.solve(i, in, out);
		}
		out.close();
	}

	static class TaskA {
		int[] arr;

		int bfs(int i, int dir) {
			if(i < 0 || i >= arr.length) {
				return 0;
			}
			int ans = 1;
			if(i+dir < arr.length && i+dir >= 0 && Math.abs(arr[i+dir]-arr[i]) <= 2) {
				ans += bfs(i+dir, dir);
			}
			return ans;
		}

		void solve(int testcase, InputReader in, PrintWriter out) {
			int n = in.nextInt();
			arr = new int[n];
			for(int i = 0; i < n; ++i) {
				arr[i] = in.nextInt();
			}
			int mina = n, maxa = 0;
			for(int i = 0; i < n; ++i) {
				int cur = bfs(i, -1) + bfs(i, 1) - 1;
				mina = Math.min(mina, cur);
				maxa = Math.max(maxa, cur);
			}
			out.println(mina + " " + maxa);
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
