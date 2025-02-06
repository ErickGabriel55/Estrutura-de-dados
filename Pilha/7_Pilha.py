# push (append, adicionar), pop (remover), peek (retorna o elemento do topo)
# iterar com for e com while

from typing import List, Any
class Stack:
    def __init__(self) -> None:
        self.__data: List[Any] = []
        self.__index = 0 # controla as iterações de for e while
    
    def push(self, item: Any) -> None:
        self.__data.append(item)
    
    def pop(self) -> Any:
        return self.__data.pop()

    def peek(self) -> Any:
        if not self.__data:
            return []
        
        return self.__data[-1] 

    def __repr__(self) -> str:
        return f'{self.__class__.__name__}({self.__data})'


if __name__ == "__main__":
    stack = Stack()

    stack.push('A')
    stack.push('B')
    stack.push('C')
    top_item = stack.pop()

    print(stack, top_item)
