def pcard(num):
	p = 0
	while num > 0:
		p += num % 10
		num //= 10
	return p


t = int(input())
for i in range(0, t):
	n = int(input())
	pts = [0, 0]
	for j in range(0, n):
		pt = [pcard(int(pt)) for pt in input().split()]
		gr = [1 if ptt == max(pt) else 0 for ptt in pt]
		pts = list(map(lambda x, y: x + y, pts, gr))
	win = 0 if pts[0] > pts[1] else 1
	win = 2 if pts[0] == pts[1] else win
	print(win, max(pts))
