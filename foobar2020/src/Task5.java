import java.util.LinkedList;
import java.util.Queue;

public class Task5 {
	public static void main(String[] args) {
		int[][] map = {{0, 1, 0, 1, 0, 0, 0}, {0, 0, 0, 1, 0, 1, 0}};
		int sol = Solution.solution(map);
		System.out.println(sol);
	}

	public static class Solution {
		public static int solution(int[][] map) {
			// Your code here
			int ans = solve(map);
			return ans;
		}

		public static int solve(int[][] map) {
			int ans = findPath(map);
			int n = map.length;
			int m = map[0].length;
			for(int i = 0; i < n; ++i) {
				for(int j = 0; j < m; ++j) {
					if(map[i][j] == 1) {
						map[i][j] = 0;
						int pathlen = findPath(map);
//						System.out.println(pathlen);
						if(pathlen != -1) {
							if(ans == -1) {
								ans = pathlen;
							} else {
								ans = Math.min(ans, pathlen);
							}
						}
						map[i][j] = 1;
					}
				}
			}
			return ans;
		}

		public static int findPath(int[][] map) {
			int n = map.length;
			int m = map[0].length;
			int[][] vis = new int[n][m];
			for(int i = 0; i < n; ++i) {
				for(int j = 0; j < m; ++j) {
					vis[i][j] = -1;
				}
			}
			Queue<QNode> queue = new LinkedList<>();
			queue.add(new QNode(0, 0));
			vis[0][0] = 1;
			int[] off = {0, 1, -1};
			while(!queue.isEmpty()) {
				QNode front = queue.remove();
				int visa = vis[front.x][front.y];
				for(int i = 0; i < off.length; ++i) {
					for(int j = 0; j < off.length; ++j) {
						if(Math.abs(off[i]) != Math.abs(off[j])) {
							int x = front.x + off[i];
							int y = front.y + off[j];
							if(isValid(x, y, n, m, vis, map)) {
								vis[x][y] = visa + 1;
								queue.add(new QNode(x, y));
							}
						}
					}
				}
			}
			printArr(map);
			printArr(vis);
			return vis[n-1][m-1];
		}

		private static void printArr(int[][] map) {
			int n = map.length;
			int m = map[0].length;
			for(int i = 0; i < n; ++i) {
				for(int j = 0; j < m; ++j) {
					System.out.print(map[i][j] + " ");
				}
				System.out.println();
			}
			System.out.println();
		}

		private static boolean isValid(int i, int j, int n, int m, int[][] vis, int[][] map) {
			return (i >= 0 && i < n && j >= 0 && j < m && vis[i][j] == -1 && map[i][j] == 0);
		}

		public static class QNode {
			int x, y;

			public QNode() {
				this(0, 0);
			}

			public QNode(int x, int y) {
				this.x = x;
				this.y = y;
			}
		}
	}
}
