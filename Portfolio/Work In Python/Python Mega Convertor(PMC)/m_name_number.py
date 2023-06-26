#name to number (months)
class monthName:
    def mname(self):
        if self.name == "January" or self.name == "january":
            return  "The Month Number is: 1"
        elif self.name == "Feburary" or self.name == "feburary":
            return "The Month Number is: 2"
        elif self.name == "March" or self.name == "march":
            return "The Month Number is: 3"
        elif self.name == "April" or self.name == "april":
            return "The Month Number is: 4"
        elif self.name == "May" or self.name == "may":
            return "The Month Number is: 5"
        elif self.name == "June" or self.name == "june":
            return "The Month Number is: 6"
        elif self.name == "July" or self.name == "july":
            return "The Month Number is: 7"
        elif self.name == "August" or self.name == "august":
            return "The Month Number is: 8"
        elif self.name == "September" or self.name == "september":
            return "The Month Number is: 9"
        elif self.name == "October" or self.name == "october":
            return "The Month Number is: 10"
        elif self.name == "November" or self.name == "november":
            return "The Month Number is: 11"
        elif self.name == "December" or self.name == "december":
            return "The Month Number is: 12"
        
        else:
            return "Wrong Format"   
# month=monthName()
# # month.name=input("Enter The Month Name:")
# num=month.monthname()
# print(num)