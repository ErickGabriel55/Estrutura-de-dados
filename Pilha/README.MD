Last in first out (LIFO);
Geralmente usamos listas em python;
push (append, adicionar), pop (del, remover);
Criar uma classe que proteja a pilha de métodos que vc não quer expor, reordenar por exemplo.

Caso utilizemos o laço for normalmente para fazer uma iteração ela virá fora da ordem esperada então faríamos isso: for item in stack(::-1). já com o while isso não acontece:
while stack:
    item = stack.pop()
    print(item)
A lista será exibida normalmente. Contudo tudo isso afeta a sua pilha original para resolver isso faça uma cópia.

23:24