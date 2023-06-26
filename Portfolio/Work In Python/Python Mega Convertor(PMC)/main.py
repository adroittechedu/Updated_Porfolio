from m_name_number import monthName
from m_number_name import monthNumber
from wd_name_number import dayName
from wd_number_name import dayNumber
from w_number_name import weekNumber
from week_name_number import weekName




print("   ____     ___   __    ___ ")
print('''  |  _"\ ||'|  \/| |/\ /___|''')
print("  | |_) |/\ | |\/| |/\| | u  ")
print("  |  __/    | |  | |  | |/__ ")
print("  |_|       |_|  |_|   \____| ")
print("  ||>>_    <<,-,,-.    _// \\ ")
print(" (__)__)    (./  \.)  (__)(__) ")
print("_____________________________")
print("      Python Mega Convertor\t")
print("*******************************")
# while True:
print("Python Mega Convertor can help you to convert the following things:")
print("__________________________________")



class A:
    def convertor(self):
        while True:
            print("***********************************")
            print("___________________________________")
            print("\t MAIN MENU\t")
            print("***********************************")
            print("___________________________________")
            print("1.Week Day Name to Week Day Number.")
            print("2.Week Day Number to Week Day Name.")
            print("3.Week Name to Week Number:")
            print("4.Week Number to Week Name.")
            print("5.Month Name to Month Number.")
            print("6.Month Number to Month Name.")
            # print("7.RGB to HEX Color.")
            # print("8.HEX to RGB Color.")
            print("___________________________________")
            print("Which Convertor will you use...?")
            print("Kinldy Choose The Convertor Number:")
            con=int(input("Enter The Number of Convertor You want to use:"))
            if con == (1):
                d=dayName()
                print("____________________")
                d.name=input("Enter The Day Name:")
                print("____________________")
                num=d.dname()
                print(num)
            elif con == (2):
                da=dayNumber()
                print("____________________")
                da.number=int(input("Enter The Day Number:"))
                print("____________________")
                nam=da.dnumber()
                print(nam)
            elif con == (3):
                w=weekName()
                print("____________________")
                w.name=input("Enter The Week Name (eg:Week1):")
                print("____________________")
                num=w.wname()
                print(num)
            elif con == (4):
                we=weekNumber()
                print("____________________")
                we.number=int(input("Enter The Week Number:"))
                print("____________________")
                nam=we.wnumber()
                print(nam)
            elif con == (5):
                
                    month=monthName()
                    print("____________________")
                    month.name=input("Enter The Month Name:")
                    print("____________________")
                    num=month.mname()
                    print(num)
                    print("____________________")              
            elif con == (6):
                month=monthNumber()
                print("____________________")
                month.number=int(input("Enter The Month Number:"))
                print("____________________")
                nam=month.mnumber()
                print(nam)
           
            else:
                print("Wrong format.")
                print("_______________")
            
            print("////////////////////////////")
            print("-------------------------------")
            print("To exit press X.")
            print("To continue press any other key.")
            k=input("Enter your decision:")
            if k == "x" or k == "X":
                print("Thanks for Using me.See you soon...")
                break
            else:
                ("I hope you are enjoying me...")

    
 
            
obj=A()
obj.convertor()    