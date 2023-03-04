class Employee:
    company = 'Tutorial Gateway'

    def __init__(self):
        print('Hello World')

    def func_message(self):
        print('Welcome to Programming Language')

emp1 = Employee() #Created on Instance

print(emp1.company)
emp1.func_message()
