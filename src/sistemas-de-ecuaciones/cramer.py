import os

#--------Funcion para resolver sistemas de ecuaciones 2x2---------
def solucion_sistema_2x2(x1,x2,y1,y2,resultado_primera_ecuacion,resultado_segunda_ecuacion):
    x,y = False, False
    delta = (x1 * y2) - (x2 * y1)
    if delta != 0:
        x = ( resultado_primera_ecuacion * y2 - resultado_segunda_ecuacion * y1 ) / delta
        y = ( x1 * resultado_segunda_ecuacion - x2 * resultado_primera_ecuacion ) / delta
    else: 
        print("El sistema no tiene una solucion unica...")
    return x, y

#--------Funcion para resolver sistemas de ecuaciones 3x3---------
def solucion_sistema_3x3(x1,x2,x3,y1,y2,y3,resultado_primera_ecuacion,resultado_segunda_ecuacion,c3,z1,z2,z3):
    x,y,z = False, False, False
    positivo = 0; negativo = 0
    positivo = (x1 * y2 * c3) + (y1 * resultado_segunda_ecuacion * x3) + (resultado_primera_ecuacion * x2 * y3)
    negativo = (-1 * x3 * y2 * resultado_primera_ecuacion) + (-1 * y3 * resultado_segunda_ecuacion * x1) + (-1 * c3 * x2 * y1)
    delta = positivo + negativo
    if delta != 0:
        positivo = (z1 * y2 * c3) + (y1 * resultado_segunda_ecuacion * z3) + (resultado_primera_ecuacion * z2 * y3)
        negativo = (-1 * z3 * y2 * resultado_primera_ecuacion) + (-1 * y3 * resultado_segunda_ecuacion * z1) + (-1 * c3 * z2 * y1)
        x = (positivo + negativo) / delta
        positivo = (x1 * z2 * c3) + (z1 * resultado_segunda_ecuacion * x3) + (resultado_primera_ecuacion * x2 * z3)
        negativo = (-1 * x3 * z2 * resultado_primera_ecuacion) + (-1 * z3 * resultado_segunda_ecuacion * x1) + (-1 * c3 * x2 * z1)
        y = (positivo + negativo) / delta
        positivo = (x1 * y2 * z3) + (y1 * z2 * x3) + (z1 * x2 * y3)
        negativo = (-1 * x3 * y2 * z1) + (-1 * y3 * z2 * x1) + (-1 * z3 * x2 * y1)
        z = (positivo + negativo) / delta
    else: 
        print("Delta es igual a 0, el sistema no tiene una solucion unica...")
    return x,y,z

#-----------------------------------MENU---------------------------------------------------
def main():
    try:
        opcion = 0
        while opcion != 3:
            os.system('cls')
            print("1.- Sistema 2x2\n2.-Sistema 3x3\n3.-Salir")
            opcion = int(input("Elige una opcion: "))
            if opcion == 1:
                print("Sistema de 2 ecuaciones lineales con 2 incongnitas")
                print("Estructura:\nx1x + y1y = resultado_primera_ecuacion\nx2x + y2y = resultado_segunda_ecuacion\n\nIngesa los datos:")
                x1 = int(input("x1 = "))
                y1 = int(input("y1 = "))
                resultado_primera_ecuacion = int(input("resultado_primera_ecuacion = "))
                x2 = int(input("x2 = "))
                y2 = int(input("y2 = "))
                resultado_segunda_ecuacion = int(input("resultado_segunda_ecuacion = "))
                x,y = solucion_sistema_2x2(x1,x2,y1,y2,resultado_primera_ecuacion,resultado_segunda_ecuacion)
                if x: print("\nSolucion: \nx = ",x,"\ny = ",y)
            elif opcion == 2:
                print("\nSistema de 3 ecuaciones lineales con 3 incongnitas")
                print("Estructura:\nx1x + y1y + resultado_primera_ecuacionz = z1\nx2x + y2y + resultado_segunda_ecuacionz = z2\nx3x + y3y + c3z = z3\n")
                x1 = float(input("Ecuacion 1:\nx1 = "))
                y1 = float(input("y1 = "))
                resultado_primera_ecuacion = float(input("resultado_primera_ecuacion = "))
                z1 = float(input("z1 = "))
                x2 = float(input("Ecuacion 2:\nx2 = "))
                y2 = float(input("y2 = "))
                resultado_segunda_ecuacion = float(input("resultado_segunda_ecuacion = "))
                z2 = float(input("z2 = "))
                x3 = float(input("Ecuacion 3:\nx3 = "))
                y3 = float(input("y3 = "))
                c3 = float(input("c3 = "))
                z3 = float(input("z3 = "))
                x,y,z = solucion_sistema_3x3(x1,x2,x3,y1,y2,y3,resultado_primera_ecuacion,resultado_segunda_ecuacion,c3,z1,z2,z3)
                if x: print("\nSolucion: \nx = ",x,"\ny = ",y,"\nz = ",z)
            os.system('pause')
    except:
        print("Solo Funciona con numeros reales... Intenta denuevo")
        main()
main()