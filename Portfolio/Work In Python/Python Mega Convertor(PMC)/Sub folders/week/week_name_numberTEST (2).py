from week_name_number import weekName
class weeknametonumber:
    def show(self):
        while True:
            w=weekName()
            print("____________________")
            w.name=input("Enter The Week Name:")
            print("____________________")
            num=w.wname()
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
                
           
obj=weeknametonumber()
obj.show()