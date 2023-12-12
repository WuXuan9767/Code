class Rectangle:
    def __init__(self, length, width):
        self.length = length
        self.width = width
    
    def perimeter(self):
        return 2 * (self.length + self.width)
    
    def area(self):
        return self.length * self.width
    
rectangle = Rectangle(2, 3)
print("该矩形的周长为", rectangle.perimeter())
print("该矩形的面积为", rectangle.area())