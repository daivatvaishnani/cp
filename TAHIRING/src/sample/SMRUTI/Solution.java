package sample.SMRUTI;

import java.util.*;
import java.io.*;

class Solution {
	static long find_cost(int N, int ch, int cv) {
		long res = N * (N - 1);
		res *= Math.max(ch, cv);
		long temp = (N - 1) * (Math.min(ch, cv));
		return res + temp;
	}

	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int test_cases = Integer.parseInt(br.readLine());
		while (test_cases-- > 0) {
			int[] arr = Arrays.stream(br.readLine().split(" ")).mapToInt(Integer::parseInt).toArray();
			int n = arr[0];
			int ch = arr[1];
			int cv = arr[2];
			System.out.println(find_cost(n, ch, cv));
		}
	}
}