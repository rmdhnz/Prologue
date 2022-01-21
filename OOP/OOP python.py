class Operation : 
    def __init__(self, numero) :
        self.____numero= numero

    def getTotal(self) : 
        total = 0
        for num in self.____numero : 
            total+=num
        return total
    

    def getAverage(self) : 
        total = 0
        for num in self.____numero : 
            total+=num
        return total/len(self.____numero)
    
user_input = input()
raw = user_input.split()
num_list = [int(x) for x in raw]
execute = Operation(num_list)
print(f'Total number : {execute.getTotal()}\nAverage number : {execute.getAverage()}')
