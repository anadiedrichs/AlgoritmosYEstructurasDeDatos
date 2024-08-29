# Introducción
## Estructuras secuenciales

### Primer ejemplo

Construir un programa calculadora, que reciba dos numeros y muestre el resultado de la suma, resta, multiplicación y división entre esos números.

#### SEUDOCODIGO 

```
PROGRAMA Dos_numeros
VAR num1, num2, suma, resta, multi: Entero
VAR div: Real
INICIO
        ESCRIBIR (“Ingrese el primer número”)
        LEER (num1)
        ESCRIBIR (“Ingrese el segundo número”)
        LEER (num2)
        // se realizarán las 4 operaciones aritméticas
        suma = num1 + num2
        resta =  num1 – num2
        multi = num1 * num2
        div = num1/num2
        ESCRIBIR (“La suma es:”, suma)
        ESCRIBIR (“La resta es:”, resta)
        ESCRIBIR (“El producto es:”, multi)
        ESCRIBIR (“La división es:”, div)
FIN PROGRAMA

```

#### CODIGO EN C++

[En el archivo ejemplo1.cpp)[ejemplo1.cpp]

#### Actividades

* Pruebe el código fuente anterior.
* Modifique para permitir guardar y mostrar dividiones con números reales.
* Ejecute en modo DEBUG para observar el funcionamiento del IDE.
