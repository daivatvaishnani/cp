package TRPLSRT;

import java.io.*;
import java.util.StringTokenizer;

public class Main {

	public static void main(String[] args) throws FileNotFoundException {
		InputReader in = new InputReader(new FileInputStream("/Users/dvaishnani/dev/cp/MayChallenge/src/TRPLSRT/in"));
		PrintWriter out = new PrintWriter(new FileOutputStream("/Users/dvaishnani/dev/cp/MayChallenge/src/TRPLSRT/out"));
		TaskC solver = new TaskC();
		int cases = in.nextInt();
		for(int i = 0; i < cases; ++i) {
			solver.solve(i, in, out);
		}
		out.close();
	}

	static class TaskC {
		InputReader in;
		PrintWriter out;
		int n, k;
		int[] p, ps;

		void print(int[] arr) {
			for(int i = 0; i < arr.length; ++i) {
				out.print(arr[i] + " ");
			}
			out.println();
		}

		void solve(int testcase, InputReader in, PrintWriter out) {
			this.in = in;
			this.out = out;
			n = in.nextInt();
			k = in.nextInt();
			p = new int[n+1]; ps = new int[n+1];
			for(int i = 1; i <= n; ++i) {
				p[i] = in.nextInt();
				ps[p[i]] = i;
			}
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
