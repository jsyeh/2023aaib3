# 開新的 +程式碼 Python
# week11-1.py 主題 Hash Map, Hash Set (在「資料結構與演算法」教過的 Hash 雜湊)
table = {} # Python用大括號,代表字典、也就是 Hash Table (Hash Map, Hash Set)
table[9977341] = 9
table[4433997] = 4

print(table[9977341]) # 會印出 9
print(table[4433997]) # 會印出 4
# print(table[0]) # 糟! 如果沒有這個key, 就會爆炸!
if 0 not in table: # 如果沒有在裡面
  print("table[0]不存在")
