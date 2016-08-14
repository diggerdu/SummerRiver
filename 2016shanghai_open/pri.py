def pri(x):
	if x < 2:
		return False
	for i in range(2, x):
		if x % i == 0:
			return False
	return True


s =  "["
cnt = 0;
for i in range(2005):
	if pri(i):
		cnt += 1;
		s = s + str(i)+","

print s+"]"
print cnt

