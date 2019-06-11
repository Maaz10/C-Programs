class username:
  def entries(self):
     self.server=input()
     self.dbname=input()
     self.usr=input()
     self.passs=input()
     return self
  def show(self):
     print("server = %s "%(self.server))
     print("db name = %s "%(self.dbname))
     print("USR = %s "%(self.usr))
     print("PASS = %s "%(self.passs))
x=username()
p=x.entries()
x.show()
print(p.server)
print(p.dbname)
print(p.usr)
print(p.passs)
