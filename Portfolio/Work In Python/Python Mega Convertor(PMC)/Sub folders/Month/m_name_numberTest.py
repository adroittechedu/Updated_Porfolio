from m_name_number import monthName

class monthnametonumber:
    def show(self):
        while True:
            month=monthName()
            print("____________________")
            month.name=input("Enter The Month Name:")
            print("____________________")
            num=month.mname()
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
                
           
obj=monthnametonumber()
obj.show()