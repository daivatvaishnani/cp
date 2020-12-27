import sys

sys.stdout = open('out', 'w')
sys.stdin = open('in', 'r')


valid = lambda x: 0 <= x < 8
cords = [[x, r - x] for r in range(1, 15) for x in range(0, r + 1) if valid(x) and valid(r - x)]
for i in range(0, int(input())):
	k = int(input())
	board = [['X' for x in range(0, 8)] for y in range(0, 8)]
	for x in range(0, k - 1):
		board[cords[x][0]][cords[x][1]] = '.'
	board[0][0] = 'O'
	for row in board:
		print("".join(row))
