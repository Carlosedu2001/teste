nome=input('Qual é o seu nome? ')
dia=input('Qual dia você nasceu? ')
mês=input('Qual mês você nasceu? ')
ano=input('Qual ano você nasceu? ')
print('Bem vindo '+nome+'!'),print('Você nasceu no dia '+dia+' de '+mês+' de '+ano)
confirmação=input('Correto? ')
if (confirmação == 'Sim' or confirmação == 'sim'):
    print('Obrigado pela resposta!')
else:
    correção=input('Você poderia nos dizer a resposta correta, por favor? ')
    print(correção+', obrigado pela colaborção. Desculpe-nos pelo erro.')

print (':D')
 



