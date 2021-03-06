import colorama
from colorama import Fore, init

init()

# Calculo de datos
def calcularRes(coc, datos):
	_restos = [datos[0]]
	_sustraendos = []
	for i in range(1, len(datos)):
		_restos.append(datos[i] + (_restos[i - 1] * coc))
		_sustraendos.append(_restos[i - 1] * coc)
	return _restos, _sustraendos


base = []
sustraendos = []
restos = []

nums = [-1, 1, -2, 2, -3, 3, -4, 4, -5, 5, -6, 6, -7, 7, -8, 8, -9, 9]
cocientes = [' ']
i = 1

nterminos = int(input('\nIntroduce el numero de terminos: '))
print('\n', end='')

while nterminos > 0:
    temp = int(input(f"    Termino #{i}: "))
    base.append(temp)
    nterminos -= 1
    i = i+1
print("\nResolucion del ejercicio")
#Impresion de datos
print()
print('{:^5}|'.format(''), end='')

for i in range(0, len(base)):
	print('{:^5}'.format(base[i]), end='')
print()

while len(base) > 1:
    for num in nums:
	    restos, sustraendos = calcularRes(num, base)
	    if restos[-1] == 0:
		    cocientes[0] = num
		    break
    if cocientes[0] == ' ':
 	    cocientes[0] = 'X'


    if cocientes[0] != ' ':
	    print(Fore.CYAN, end='')
    print('{:^5}'.format(cocientes[0]) + Fore.RESET + '|', end='')
    print('{:^5}'.format(''), end='')

    for i in range(0, len(sustraendos)):
	    print('{:^5}'.format(sustraendos[i]), end='')

    print()
    print('-----'*(len(restos) + 1))
    print('{:^5}|'.format(''), end='')

    for i in range(0, len(restos)):

	    if i == len(restos) - 1:
		    if restos[-1] == 0:
			    print(Fore.GREEN, end='')
		    else:
			    print(Fore.YELLOW, end='')
	    print('{:^5}'.format(restos[i]), end='')

    if restos.pop() == 0:
        base = restos
    else:
        print(Fore.RED, end='')
        print("\nError: Imposible factorizar")
        break
    print()
