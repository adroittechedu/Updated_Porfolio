from wd_name_number import dayName
class daynametonumber:
    def show(self):
        while True:
            d=dayName()
            print("____________________")
            d.name=input("Enter The Day Name:")
            print("____________________")
            num=d.dname()
            print(num)
            print("____________________")            
            print("Press x to Exit.")
            print("____________________") 
            print("Press any other key to continue...")
            print("____________________")            
            a=input("Enter your decision:")
            print("____________________")
            if a == "x":
                break
            else:
                print("I hope you are enjoying...!") 
                
           
obj=daynametonumber()
obj.show()