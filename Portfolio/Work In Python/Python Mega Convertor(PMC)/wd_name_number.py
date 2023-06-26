#name to number (Days)
class dayName:
    def dname(self):
        if self.name == "Monday" or self.name == "monday":
            return  "The Day Number is: 1"
        elif self.name == "Tuesday" or self.name == "tuesday":
            return "The Day Number is: 2"
        elif self.name == "Wednesday" or self.name == "wednesday":
            return "The Day Number is: 3"
        elif self.name == "Thursday" or self.name == "thursday":
            return "The Day Number is: 4"
        elif self.name == "Friday" or self.name == "friday":
            return "The Day Number is: 5"
        elif self.name == "Saturday" or self.name == "saturday":
            return "The Day Number is: 6"
        elif self.name == "Sunday" or self.name == "sunday":
            return "The Day Number is: 7"
        else:
            return "Wrong Format"