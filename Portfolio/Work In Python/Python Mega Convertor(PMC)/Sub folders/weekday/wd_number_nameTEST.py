from wd_number_name import dayNumber

class daynumbertoname:
    def show(self):
        while True:
            da=dayNumber()
            print("____________________")
            da.number=int(input("Enter The Day Number:"))
            print("____________________")
            nam=da.dnumber()
            print(nam)
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
                
           
obj=daynumbertoname()
obj.show()