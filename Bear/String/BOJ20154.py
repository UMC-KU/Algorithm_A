alpha='ABCDEFGHIJKLMNOPQRSTUVWXYZ'
numbers='32123333113133122212112221'

cnt=0

str=input()

for spel in str:

   cnt+=int (numbers[alpha.index(spel)])
   cnt%=10


if cnt%2==0: print("You're the winner?")
else: print("I'm a winner!")