class username:
  def entries(self):
     self.server=input("SERVER = ")
     self.dbname=input("DB NAME = ")
     self.usr=input("USR = ")
     self.passs=input("PASS = ")
     return self
  def show(self):
     print("server = %s "%(self.server))
     print("db name = %s "%(self.dbname))
     print("USR = %s "%(self.usr))
     print("PASS = %s "%(self.passs))
  def dict(self):
      dict1={"server":self.server,"db name":self.dbname,"username":self.usr,"password":self.passs}
      print(dict1)
x=username()
p=x.entries()
x.show()
print(p.server)
print(p.dbname)
print(p.usr)
print(p.passs)
x.dict()
