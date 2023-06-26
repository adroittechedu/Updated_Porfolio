from m_number_name import monthNumber

class monthnumbertoname:
    def show(self):
        while True:
            month=monthNumber()
            print("____________________")
            month.number=int(input("Enter The Month Number:"))
            print("____________________")
            nam=month.mnumber()
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
                
           
obj=monthnumbertoname()
obj.show()