# week05-4.py UVA10222 Decode the Mad Man (multiple lines)
s = "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./"
while True:
	try: a = input()
	except: break
	for c in a:
		c = c.lower()
		
		if c==' ' or c=='\n':
			print(c, end='')
		else:
			i = s.find(c)
			print(s[i-2], end='')	
	print()