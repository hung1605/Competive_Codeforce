for _ in range(int(input())):
	n, k, x = [int(i) for i in input().split()]
	low = k * (k + 1) / 2
	hight = n * (n - k + 1) / 2
	
