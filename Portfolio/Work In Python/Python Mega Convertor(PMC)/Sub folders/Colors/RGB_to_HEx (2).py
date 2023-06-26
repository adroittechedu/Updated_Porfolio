def rgb_to_hex(r, g, b):
  return ('{:X}{:X}{:X}').format(r, g, b)
r=int(input("Enter the r value:"))
g=int(input("Enter the g value:"))
b=int(input("Enter the b value:"))
print("The Value of HEX is:",rgb_to_hex(r, g, b))