for k in range(3):
     yut= input()
     y = yut.split()
     if y.count('0') == 1 and y.count('1') == 3:
          print('A')
     elif y.count('0') == 2 and y.count('1') == 2:
          print('B')
     elif y.count('0') == 3 and y.count('1') == 1:
          print('C')
     elif y.count('0') == 4 and y.count('1') == 0:
          print('D')
     elif y.count('0') == 0 and y.count('1') == 4:
          print('E')
