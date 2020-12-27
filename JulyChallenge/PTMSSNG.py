import sys
sys.stdout = open('out', 'w')
sys.stdin = open('in', 'r')

for t in range(0, int(input())):
	n = int(input())
	pts = [[int(x) for x in input().split()] for i in range(0, 4*n - 1)]
	cy = {}
	cx = {}
	for pt in pts:
		cx[pt[0]] = 1 if pt[0] not in cx else cx[pt[0]] + 1
		cy[pt[1]] = 1 if pt[1] not in cy else cy[pt[1]] + 1
	mx = [x for x in cx if cx[x] & 1]
	my = [y for y in cy if cy[y] & 1]
	if len(mx) == len(my) == 1:
		print(mx[0], my[0])
