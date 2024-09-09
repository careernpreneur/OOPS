class Rectangle:
    # Attributes or fields
    def __init__(self, length=0, breadth=0):
        self.length = length
        self.breadth = breadth

    # Methods or Behavior
    def area(self):
        return self.length * self.breadth

    def perimeter(self):
        return 2 * (self.length + self.breadth)

# Creating the object of the class
r = Rectangle(10, 20)

print("The Area of Rectangle is :", r.area())
print("The Perimeter of Rectangle is :", r.perimeter())
