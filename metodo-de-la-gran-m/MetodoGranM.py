from math import floor, ceil
from fractions import Fraction
from typing import List
import flet as ft
from flet import View, Page, AppBar, Row, Column, ElevatedButton, IconButton, TextField, Text, Image# <------ ElevatedButton - ?¿
from flet import RouteChangeEvent, ViewPopEvent, CrossAxisAlignment, MainAxisAlignment

#////////////// 1 ///////////////
# Valor float que quieres convertir a fracción
valor_float = 0.666666667

# Convertir el valor float a fracción
fraccion = Fraction(valor_float)

# Imprimir la fracción
print(f"El valor float {valor_float} en fracción es: {fraccion}")

#////////////// 2 ///////////////
class Matriz:
    def _init_(self, filas=0, columnas=0):
        self.filas = filas
        self.columnas = columnas
        self.metodo = 0
        self.MaximizarMinimizar = 0  # Maximizar: 1, Minimizar: 2
        self.matrizNum = []
        self.matrizLetras = []

    def getMaximizarMinimizar(self):
        return self.MaximizarMinimizar

    def setMaximizarMinimizar(self, maximizarMinimizar):
        self.MaximizarMinimizar = maximizarMinimizar

    def getMetodo(self):
        return self.metodo

    def setMetodo(self, metodo):
        self.metodo = metodo

    def getFilas(self):
        return self.filas

    def setFilas(self, filas):
        self.filas = filas

    def getColumnas(self):
        return self.columnas

    def setColumnas(self, columnas):
        self.columnas = columnas

    def getValorMatrizNum(self, fila, columna):
        return self.matrizNum[fila][columna]

    def setValorMatrizNum(self, fila, columna, valor):
        self.matrizNum[fila][columna] = valor

    def agregarFilaMatrizNum(self, fila):
        self.matrizNum.append(fila)

    def getSizeMatrizNum(self):
        return len(self.matrizNum)

    def getValorMatrizLetras(self, fila, columna):
        return self.matrizLetras[fila][columna]

    def setValorMatrizLetras(self, fila, columna, valor):
        self.matrizLetras[fila][columna] = valor

    def agregarFilaMatrizLetras(self, fila):
        self.matrizLetras.append(fila)

    def getSizeMatrizLetras(self):
        return len(self.matrizLetras)

    def imprimirMatrizNumeros(self):
        for fila in self.matrizNum:
            print(" ".join(str(elemento) for elemento in fila))

    def imprimirMatrizString(self):
        for fila in self.matrizLetras:
            print(" ".join(str(elemento) for elemento in fila))

    def getColumnasFilaMatrizLetras(self, i):
        return len(self.matrizLetras[i])
class RellenarMatriz:
    def __init__(self):
        self.matriz = Matriz()
        self.variables = None
        self.restricciones = None

    def setVariables(self, cantidadVariables):
        self.variables = cantidadVariables

    def serRestricciones(self, cantidadRestricciones):
        self.restricciones = cantidadRestricciones

    def getVariables(self):
        return self.variables

    def getRestricciones(self):
        return self.restricciones

        MaxMin = MaxMin.value
        self.matriz.setMaximizarMinimizar(MaxMin)

        for i in range(restricciones):
            print(f"Para la Restricción {i + 1} ingrese:")
            fila = []
            for j in range(variables):
                valoraux = float(input(f"Ingrese el valor de x{j + 1}: "))
                fila.append(valoraux)
            signo = int(input("Ingrese 1 si es Menor que, 2 si es igual, 3 si es Mayor que: "))
            matrizSignos.append(signo)
            resultado = float(input("Ingrese el resultado: "))
            fila.append(resultado)
            matrizaux.append(fila)

        z = []
        for i in range(variables):
            aux = float(input(f"Ingrese el valor de x{i + 1} en Z: "))
            z.append(aux)

        metodo = 1  # 1 Simplex normal; 2 M

        for i in range(restricciones):
            if matrizSignos[i] != 1:
                metodo = 2

        iguales = 0
        mayoresQue = 0
        reestriccionesAux = restricciones
        contador = 1
        auxiliarSigno = []
        for signo in matrizSignos:
            if signo == 2:
                iguales += 1
                reestriccionesAux -= 1
                auxiliarSigno.append(contador)
                contador += 1
            elif signo == 3:
                mayoresQue += 1
                auxiliarSigno.append(contador)
                contador += 1
            else:
                auxiliarSigno.append(0)

        if metodo == 1:
            self.matriz.setFilas(restricciones + 1)
            self.matriz.setColumnas(restricciones + variables + 1)
            self.matriz.setMetodo(1)
            for i in range(restricciones + 1):
                fila = []
                for j in range(variables + restricciones + 1):
                    if i == 0:
                        if j < variables:
                            fila.append(-z[j])
                        elif j == variables + i:
                            fila.append(0.0)
                        else:
                            fila.append(0.0)
                    else:
                        if j < variables:
                            fila.append(matrizaux[i - 1][j])
                        elif j == variables + i - 1:
                            fila.append(1.0)
                        elif j == variables + restricciones:
                            fila.append(matrizaux[i - 1][variables])
                        else:
                            fila.append(0.0)
                self.matriz.agregarFilaMatrizNum(fila)
        else:
            self.matriz.setMetodo(2)
            self.matriz.setFilas(restricciones + 1)
            self.matriz.setColumnas(variables + reestriccionesAux + iguales + mayoresQue + 1)
            for i in range(restricciones + 1):
                fila = []
                for j in range(variables + reestriccionesAux + iguales + mayoresQue + 1):
                    if i == 0:
                        if j < variables:
                            fila.append(-z[j])
                        elif j < variables + reestriccionesAux:
                            fila.append(0.0)
                        elif j < variables + reestriccionesAux + iguales + mayoresQue:
                            if self.matriz.getMaximizarMinimizar() == 1:
                                fila.append(10000.0)
                            elif self.matriz.getMaximizarMinimizar() == 2:
                                fila.append(-10000.0)
                        else:
                            fila.append(0.0)
                    else:
                        if j < variables:
                            fila.append(matrizaux[i - 1][j])
                        elif j < variables + reestriccionesAux:
                            if matrizSignos[i - 1] == 1 or matrizSignos[i - 1] == 2:
                                if j == variables + i - 1:
                                    fila.append(1.0)
                                else:
                                    fila.append(0.0)
                            elif matrizSignos[i - 1] == 3:
                                if j == variables + i - 1:
                                    fila.append(-1.0)
                                else:
                                    fila.append(0.0)
                            elif matrizSignos[i - 1] == 2:
                                if j == variables + reestriccionesAux + iguales:
                                    fila.append(1.0)
                            else:
                                fila.append(0.0)
                        elif j == variables + reestriccionesAux + iguales + mayoresQue:
                            fila.append(matrizaux[i - 1][variables])
                        elif matrizSignos[i - 1] == 3 and j == variables + reestriccionesAux:
                            fila.append(1.0)
                        elif matrizSignos[i - 1] == 2 and j == variables + reestriccionesAux + auxiliarSigno[i - 1] - 1:
                            fila.append(1.0)
                        else:
                            fila.append(0.0)
                self.matriz.agregarFilaMatrizNum(fila)

        if metodo == 1:
            for i in range(2):
                fila = []
                for j in range(variables + restricciones + 1):
                    if i == 0:
                        if j < variables:
                            variable = f"X{j + 1}"
                            fila.append(variable)
                        elif j < variables + restricciones:
                            variable = f"S{j - variables + 1}"
                            fila.append(variable)
                        else:
                            fila.append("R")
                    elif i == 1:
                        if j == 0:
                            fila.append("Z")
                        elif j <= restricciones:
                            variable = f"S{j}"
                            fila.append(variable)
                self.matriz.agregarFilaMatrizLetras(fila)
        else:
            reestriccionNormal = 1
            artificial = 1
            for i in range(2):
                fila = []
                for j in range(variables + reestriccionesAux + iguales + mayoresQue + 1):
                    if i == 0:
                        if j < variables:
                            variable = f"X{j + 1}"
                            fila.append(variable)
                        elif j < variables + reestriccionesAux:
                            variable = f"S{j - variables + 1}"
                            fila.append(variable)
                        elif j < variables + reestriccionesAux + iguales + mayoresQue:
                            variable = f"A{j - variables - reestriccionesAux + 1}"
                            fila.append(variable)
                        else:
                            fila.append("R")
                    elif i == 1:
                        if j == 0:
                            fila.append("Z")
                        elif j <= restricciones and matrizSignos[j - 1] == 1:
                            variable = f"S{reestriccionNormal}"
                            reestriccionNormal += 1
                            fila.append(variable)
                        elif j <= restricciones and (matrizSignos[j - 1] == 2 or matrizSignos[j - 1] == 3):
                            variable = f"A{artificial}"
                            artificial += 1
                            fila.append(variable)
                self.matriz.agregarFilaMatrizLetras(fila)

        return self.matriz
    def setVariables(self, value):
        self.variables = value
    def getVariables(self):
        return self.variables
    def setRestricciones(self, value):
        self.restricciones = value
    def getRestricciones(self):
        return self.restricciones

#////////////// 5 ///////////////
# Supongamos que la clase Matriz está implementada en Python

class RellenarMatrizCopia:
    def _init_(self):
        self.matriz = Matriz()

    def Rellenar(self):
        matrizaux = []
        matrizSignos = []
        variables = 2
        restricciones = 3

        for i in range(restricciones):
            print(f"Para la Restricción {i + 1} ingrese:")
            fila = []
            for j in range(variables):
                valoraux = float(input(f"Ingrese el valor de x{j + 1}: "))
                fila.append(valoraux)
            signo = int(input("Ingrese 1 si es Menor que, Ingrese 2 si es igual, Ingrese 3 si es Mayor que: "))
            matrizSignos.append(signo)
            resultado = float(input("Ingresa el resultado: "))
            fila.append(resultado)
            matrizaux.append(fila)

        z = []
        for i in range(variables):
            aux = float(input(f"Ingrese el valor de x{i + 1} en Z: "))
            z.append(aux)

        metodo = 1  # 1 Simplex normal; 2 M

        for signo in matrizSignos:
            if signo != 1:
                metodo = 2

        if metodo == 1:
            for i in range(restricciones + 1):
                fila = []
                for j in range(variables + restricciones + 1):
                    if i == 0:
                        if j < variables:
                            fila.append(-z[j])
                        elif j == variables + i:
                            fila.append(0.0)
                        else:
                            fila.append(0.0)
                    else:
                        if j < variables:
                            fila.append(matrizaux[i - 1][j])
                        elif j == variables + i - 1:
                            fila.append(1.0)
                        elif j == variables + restricciones:
                            fila.append(matrizaux[i - 1][variables])
                        else:
                            fila.append(0.0)
                self.matriz.agregarFilaMatrizNum(fila)
        else:
            iguales = sum(1 for signo in matrizSignos if signo == 2)
            mayoresQue = sum(1 for signo in matrizSignos if signo == 3)
            reestriccionesAux = restricciones - iguales
            for i in range(restricciones + 1):
                fila = []
                for j in range(variables + reestriccionesAux + iguales + mayoresQue + 1):
                    if i == 0:
                        if j < variables:
                            fila.append(-z[j])
                        elif j < variables + reestriccionesAux:
                            fila.append(0.0)
                        elif j < variables + reestriccionesAux + iguales + mayoresQue:
                            fila.append(10000.0)
                        else:
                            fila.append(0.0)
                    else:
                        if j < variables:
                            fila.append(matrizaux[i - 1][j])
                        elif j < variables + reestriccionesAux:
                            if matrizSignos[i - 1] == 1 or matrizSignos[i - 1] == 2:
                                if j == variables + i - 1:
                                    fila.append(1.0)
                                else:
                                    fila.append(0.0)
                            elif matrizSignos[i - 1] == 3:
                                if j == variables + i - 1:
                                    fila.append(-1.0)
                                else:
                                    fila.append(0.0)
                            elif matrizSignos[i - 1] == 2:
                                if j == variables + reestriccionesAux + iguales:
                                    fila.append(1.0)
                            else:
                                fila.append(0.0)
                        elif matrizSignos[i - 1] != 1 and matrizSignos[i - 1] != 2 and j == variables + reestriccionesAux:
                            fila.append(1.0)  # Agregar una variable artificial
                        elif j == variables + reestriccionesAux + iguales + mayoresQue:
                            fila.append(matrizaux[i - 1][variables])
                        else:
                            fila.append(0.0)
                self.matriz.agregarFilaMatrizNum(fila)

        return self.matriz


#////////////// 6 ///////////////
# Supongamos que la clase SimplexNormal1 también está implementada en Python

class SimplexM:
    def SimplexMm(self, matriz):
        if matriz.getMaximizarMinimizar() == 1:
            while True:
                columnaMasNegativa = None
                valorMasNegativo = 0
                
                # ELIMINAR LAS M
                artificialNoExiste = False
                artificialNumero = 0
                artificialNumero2 = 1
                # Encontrar cantidad de artificiales
                for i in range(matriz.getColumnas()):
                    formato = f"A{artificialNumero+1}"
                    if matriz.getValorMatrizLetras(0, i) == formato:
                        artificialNumero += 1
                print("Cantidad de variables artificiales:", artificialNumero)
                while artificialNumero != 0:
                    # ENCONTRAR UBICACION DE LA PRIMER ARTIFICIAL
                    filaArtificial = 0
                    columnaArtificial = 0
                    for i in range(matriz.getColumnas()):
                        if matriz.getValorMatrizNum(0, i) == 10000:
                            for j in range(matriz.getFilas()):
                                if matriz.getValorMatrizNum(j, i) == 1:
                                    filaArtificial = j
                                    columnaArtificial = i
                                    artificialNumero -= 1
                                    print("Ubicacion de la fila Artificial:", filaArtificial)
                                    break
                    print("---------------------------------")
                    print("Columnas:", matriz.getColumnas())
                    # ELIMINAR M DE Z
                    for i in range(matriz.getColumnas()):
                        valorNuevo = (-10000) * matriz.getValorMatrizNum(filaArtificial, i) + matriz.getValorMatrizNum(0, i)
                        print(f"Operacion : -M*{matriz.getValorMatrizNum(filaArtificial, i)} + {matriz.getValorMatrizNum(0, i)}")
                        matriz.setValorMatrizNum(0, i, valorNuevo)
                    artificialNumero2 += 1
                    matriz.imprimirMatrizNumeros()
                    print("")
                # LISTO, ELIMINA M CORRECTAMENTE
                # matriz.imprimirMatrizNumeros()
                print("")
                break
            SN = SimplexNormal1()
            SN.SimplexNormal(matriz)
        elif matriz.getMaximizarMinimizar() == 2:
            while True:
                columnaMasNegativa = None
                valorMasNegativo = 0
                
                # ELIMINAR LAS M
                artificialNoExiste = False
                artificialNumero = 0
                artificialNumero2 = 1
                # Encontrar cantidad de artificiales
                for i in range(matriz.getColumnas()):
                    formato = f"A{artificialNumero+1}"
                    if matriz.getValorMatrizLetras(0, i) == formato:
                        artificialNumero += 1
                print("Cantidad de variables artificiales:", artificialNumero)
                while artificialNumero != 0:
                    # ENCONTRAR UBICACION DE LA PRIMER ARTIFICIAL
                    filaArtificial = 0
                    columnaArtificial = 0
                    for i in range(matriz.getColumnas()):
                        if matriz.getValorMatrizNum(0, i) == -10000:
                            for j in range(matriz.getFilas()):
                                if matriz.getValorMatrizNum(j, i) == 1:
                                    filaArtificial = j
                                    columnaArtificial = i
                                    artificialNumero -= 1
                                    print("Ubicacion de la fila Artificial:", filaArtificial)
                                    break
                    print("---------------------------------")
                    print("Columnas:", matriz.getColumnas())
                    # ELIMINAR M DE Z
                    for i in range(matriz.getColumnas()):
                        valorNuevo = (10000) * matriz.getValorMatrizNum(filaArtificial, i) + matriz.getValorMatrizNum(0, i)
                        print(f"Operacion : M*{matriz.getValorMatrizNum(filaArtificial, i)} + {matriz.getValorMatrizNum(0, i)}")
                        matriz.setValorMatrizNum(0, i, valorNuevo)
                    artificialNumero2 += 1
                    matriz.imprimirMatrizNumeros()
                    print("")
                break
            SN = SimplexNormal1()
            SN.SimplexNormal(matriz)


#////////////// 7 ///////////////
class SimplexNormal1:
    def SimplexNormal(self, matriz):
        if matriz.getMaximizarMinimizar() == 1:
            while True:
                columnaMasNegativa = 0
                valorMasNegativo = 0
                variableQueEntra = ""

                # VERIFICAR EL VALOR MAS NEGATIVO en Z
                for j in range(matriz.getColumnas() - 1):
                    if matriz.getValorMatrizNum(0, j) < valorMasNegativo and matriz.getValorMatrizNum(0, j) < 0:
                        columnaMasNegativa = j
                        valorMasNegativo = matriz.getValorMatrizNum(0, j)
                        variableQueEntra = matriz.getValorMatrizLetras(0, columnaMasNegativa)

                if valorMasNegativo == 0:
                    break

                # Realizar la división de cada celda de la columna entre el resultado
                valorMasPequenio = float('inf')
                valorPivote = 0
                filaPivote = 0
                for j in range(1, matriz.getFilas()):
                    division = matriz.getValorMatrizNum(j, matriz.getColumnas() - 1) / matriz.getValorMatrizNum(j, columnaMasNegativa)
                    if division < valorMasPequenio and division >= 0:
                        valorMasPequenio = division
                        filaPivote = j
                        valorPivote = matriz.getValorMatrizNum(j, columnaMasNegativa)

                matriz.setValorMatrizLetras(1, filaPivote, variableQueEntra)

                # Dividir toda la fila donde está el pivote entre el pivote
                for i in range(matriz.getColumnas()):
                    nuevoValor = matriz.getValorMatrizNum(filaPivote, i) / valorPivote
                    matriz.setValorMatrizNum(filaPivote, i, nuevoValor)

                # Hacer 0 las celdas de la columna pivote
                for i in range(matriz.getFilas()):
                    if i != filaPivote:
                        auxValorMultiplica = matriz.getValorMatrizNum(i, columnaMasNegativa)
                        for j in range(matriz.getColumnas()):
                            nuevoValor = (-1 * auxValorMultiplica) * matriz.getValorMatrizNum(filaPivote, j) + matriz.getValorMatrizNum(i, j)
                            matriz.setValorMatrizNum(i, j, nuevoValor)

                # Impresión opcional para seguimiento
                matriz.imprimirMatrizNumeros()
                matriz.imprimirMatrizString()

        elif matriz.getMaximizarMinimizar() == 2:
            while True:
                columnaMasPositiva = 0
                valorMasPositivo = 0
                variableQueEntra = ""

                # VERIFICAR EL VALOR MAS POSITIVO en Z
                for j in range(matriz.getColumnas() - 1):
                    if matriz.getValorMatrizNum(0, j) > valorMasPositivo and matriz.getValorMatrizNum(0, j) > 0:
                        columnaMasPositiva = j
                        valorMasPositivo = matriz.getValorMatrizNum(0, j)
                        variableQueEntra = matriz.getValorMatrizLetras(0, columnaMasPositiva)

                if valorMasPositivo == 0:
                    break

                # Realizar la división de cada celda de la columna entre el resultado
                valorMasPequenio = float('inf')
                valorPivote = 0
                filaPivote = 0
                for j in range(1, matriz.getFilas()):
                    division = matriz.getValorMatrizNum(j, matriz.getColumnas() - 1) / matriz.getValorMatrizNum(j, columnaMasPositiva)
                    if division < valorMasPequenio and division >= 0:
                        valorMasPequenio = division
                        filaPivote = j
                        valorPivote = matriz.getValorMatrizNum(j, columnaMasPositiva)

                matriz.setValorMatrizLetras(1, filaPivote, variableQueEntra)

                # Dividir toda la fila donde está el pivote entre el pivote
                for i in range(matriz.getColumnas()):
                    nuevoValor = matriz.getValorMatrizNum(filaPivote, i) / valorPivote
                    matriz.setValorMatrizNum(filaPivote, i, nuevoValor)

                # Hacer 0 las celdas de la columna pivote
                for i in range(matriz.getFilas()):
                    if i != filaPivote:
                        auxValorMultiplica = matriz.getValorMatrizNum(i, columnaMasPositiva)
                        for j in range(matriz.getColumnas()):
                            nuevoValor = (-1 * auxValorMultiplica) * matriz.getValorMatrizNum(filaPivote, j) + matriz.getValorMatrizNum(i, j)
                            matriz.setValorMatrizNum(i, j, nuevoValor)

                # Impresión opcional para seguimiento
                matriz.imprimirMatrizNumeros()
                matriz.imprimirMatrizString()

#______________________________Main____________________________________
def main(page: ft.Page):
    rellenar_matriz = RellenarMatriz()

    selected_signoIgual_ref = ft.Ref[ft.Text]()
    signosigual = ["=", ">=", "<="]

    def handle_signoIgual_picker_change(e, selected_signo_ref):
        selected_signoIgual_ref.current.value = signosigual[int(e.data)]
        page.update()

    signoIgual_picker = ft.CupertinoPicker(
        selected_index=3,
        squeeze=1.2,
        use_magnifier=True,
        on_change=handle_signoIgual_picker_change,
        controls=[ft.Text(f) for f in signosigual],
    )

    selected_signoSuma_ref = ft.Ref[ft.Text]()
    signosSuma = ["+", "-"]

    def handle_signoSuma_picker_change(e, selected_signo_ref):
        selected_signoSuma_ref.current.value = signosSuma[int(e.data)]
        page.update()

    signo_picker = ft.CupertinoPicker(
        selected_index=3,
        squeeze=1.2,
        use_magnifier=True,
        on_change=handle_signoSuma_picker_change,
        controls=[ft.Text(s) for s in signosSuma],
    )

    rellenar_matriz = RellenarMatriz()

    cantidadVariables = ft.Container(
        content=ft.TextField(
            label="Cantidad de Variables", 
            width=200,
            height=50,
            border_color="green",
            value=0
        )
    )

    cantidadRestricciones = ft.Container(
        content=ft.TextField(
            label="Cantidad Restricciones",
            width=200,
            height=50,
            border_color="green",
            value=0
        )
    )

    def handle_cantidadVariables_change(e):
        cantidadVariables_value = cantidadVariables.content.value
        rellenar_matriz.setVariables(cantidadVariables_value)

    def handle_cantidadRestricciones_change(e):
        cantidadRestricciones_value = cantidadRestricciones.content.value
        rellenar_matriz.setRestricciones(cantidadRestricciones_value)

    cantidadVariables.content.on_change = handle_cantidadVariables_change
    cantidadRestricciones.content.on_change = handle_cantidadRestricciones_change

    #___________________Características de la ventana__________________
    page.theme_mode = ft.ThemeMode.SYSTEM
    page.title = "Método Simplex"
    page.window_left = 400
    page.window_top = 200
    page.window_height = 600
    page.window_width = 800
    page.window_min_height = 600
    page.window_min_width = 800
    page.window_max_height = 1200
    page.window_max_width = 1000
    page.window_opacity = 0.9
    #_______________________________Saltos de Páginas____________________________
    def route_change(e: RouteChangeEvent) -> None:
        #_______________________________Pagina Origen____________________________
        page.views.clear()
        #Home
        page.views.append(
            View(
                route='/',
                controls=[ 
                    AppBar(title=Text('Inicio'), bgcolor='green'),
                    Text(value='Método Simplex', size=35, weight=ft.FontWeight.BOLD),
                    Text(value='Héctor Adrián Paulo Vázquez', size=20),
                    Text(value="Diego Sosa Ramìrez", size=20),
                    Text(value='Ingeniería de Software & Sistemas Computacionales', size=20),
                    Text(value='Universidad La Salle Oaxaca', size=20),
                    ElevatedButton(text='Iniciar', on_click=lambda _: page.go('/formulario')),
                ],
                vertical_alignment=MainAxisAlignment.CENTER,
                horizontal_alignment=CrossAxisAlignment.CENTER,
                spacing=46
            )   
        )
        #_______________________________Pagina Formulario____________________________
        if page.route == '/formulario':
            page.views.append(
            View(
                route='/',
                controls=[ 
                    AppBar(title=Text('Datos del Ejercicio'), bgcolor='green'),
                    Text(value='Ingrese los datos requeridos', size=30),
                    cantidadVariables,
                    cantidadRestricciones,
                    Row(
                        [
                            ElevatedButton(text='Maximizar'),
                            Text("                           "),    
                            ElevatedButton(text='Minimizar'),
                        ],
                        alignment=MainAxisAlignment.CENTER
                    ),
                    ElevatedButton(text='Siguiente', on_click=lambda _: page.go('/pag3')),
                ],
                vertical_alignment=MainAxisAlignment.START,
                horizontal_alignment=CrossAxisAlignment.CENTER,
                spacing=26
                )
            )
        if page.route == '/pag3':
            page.views.append(
            View(
                route='/',
                controls=[ 
                    AppBar(title=Text('Detalles'), bgcolor='green'),
                    Text(value='Pag Detalles', size=30),
                    ElevatedButton("Calcular", on_click=lambda _: page.go('/PagSolucion'))
                ],
                vertical_alignment=MainAxisAlignment.START,
                horizontal_alignment=CrossAxisAlignment.CENTER,
                spacing=26
                )
            )
        if page.route == '/PagSolucion':
            page.views.append(
            View(
                route='/',
                controls=[ 
                    AppBar(title=Text('Solución'), bgcolor='green'),
                    ft.DataTable(
            columns=[
                ft.DataColumn(ft.Text("First name")),
                ft.DataColumn(ft.Text("Last name")),
                ft.DataColumn(ft.Text("Age"), numeric=True),
            ],
            rows=[
                ft.DataRow(
                    cells=[
                        ft.DataCell(ft.Text("John")),
                        ft.DataCell(ft.Text("Smith")),
                        ft.DataCell(ft.Text("43")),
                    ],
                ),
                ft.DataRow(
                    cells=[
                        ft.DataCell(ft.Text("Jack")),
                        ft.DataCell(ft.Text("Brown")),
                        ft.DataCell(ft.Text("19")),
                    ],
                ),
                ft.DataRow(
                    cells=[
                        ft.DataCell(ft.Text("Alice")),
                        ft.DataCell(ft.Text("Wong")),
                        ft.DataCell(ft.Text("25")),
                    ],
                ),
            ],
        ),
                ],
                vertical_alignment=MainAxisAlignment.START,
                horizontal_alignment=CrossAxisAlignment.CENTER,
                spacing=26
                )
            )
            
        page.update()

    def view_pop(e: ViewPopEvent) -> None:
        page.views.pop()
        top_view = page.views[-1]
        page.go(top_view.route)

    page.on_route_change = route_change
    page.on_view_pop = view_pop
    page.go(page.route)

if __name__ == '__main__':
    ft.app(target=main)