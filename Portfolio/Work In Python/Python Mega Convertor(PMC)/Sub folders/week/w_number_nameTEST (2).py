from w_number_name import weekNumber

class weeknumbertoname:
    def show(self):
        while True:
            we=weekNumber()
            print("____________________")
            we.number=int(input("Enter The Week Number:"))
            print("____________________")
            nam=we.wnumber()
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
                
           
obj=weeknumbertoname()
obj.show()