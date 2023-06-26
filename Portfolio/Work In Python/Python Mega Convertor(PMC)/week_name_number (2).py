#name to number (Weeks)
class weekName:
    def wname(self):
        if self.name == "week1" or self.name == "Week1":
            return  "The Week Number is: 1"
        elif self.name == "week2" or self.name == "Week2":
            return "The Week Number is: 2"
        elif self.name == "week3" or self.name == "Week3":
            return "The Week Number is: 3"
        elif self.name == "week4" or self.name == "Week4":
            return "The Week Number is: 4"
       
           
        else:
            return "Wrong Format" 