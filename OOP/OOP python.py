class Operation : 
    def __init__(self, numero) :
        self.numero= numero

    def getTotal(self) : 
        total = 0
        for num in self.numero : 
            total+=num
        return total
    

    def getAverage(self) : 
        total = 0
        for num in self.numero : 
            total+=num
        return total/len(self.numero)
    


class Compare(Operation) : 
    def __init__(self, numero):
        super().__init__(numero)
    
    def getMax(self) : 
        biggest = self.numero[0]
        for num in self.numero : 
            if biggest < num : biggest = num
        return biggest
    
    def getMin(self) : 
        smallest = self.numero[0]
        for num in self.numero : 
            if smallest > num : smallest = num
        return smallest
    
user_input = input()
raw = user_input.split()
num_list = [int(x) for x in raw]
execute = Compare(num_list)
print(f'Total number : {execute.getTotal()}\nAverage number : {execute.getAverage()}')
print(f'The biggest number : {execute.getMax()}\nThe smallest number : {execute.getMin()}')
