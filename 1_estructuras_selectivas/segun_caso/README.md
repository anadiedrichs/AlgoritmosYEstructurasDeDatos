# CONTENIDO 3

## EJERCICIOS OPTATIVOS

### EJERCICIO 7

Se sabe que en un restaurante en cada una de sus ventas cobradas con tarjeta de crédito se cobra un recargo: MasterCard(10%), American Express(8%), Visa(4%). 

Pago contado o con otras tarjetas no tienen recargo. 

Considerar también que los días lunes o miércoles se hace un 5% de descuento, siempre y cuando sean más de 2 comensales. 

Informar el total a cobrarle al cliente.

### SEUDOCÓDIGO

```
PROGRAMA pagosTarjeta
VAR
contadoTarjeta, ventas : REAL
cantCliente, metodoPago, dia :ENTERO
CONST masterCard = 1.10
CONST americaExpress = 1.08
CONST visa = 1.04
CONST descuento = 0.05

INICIO

ESCRIBIR("Ingrese el metodo de pago 
	0: Master Card
	1: American Express
	2: Visa
	3: Debito, Efectivo u otro");
LEER(metodoPago);
ESCRIBIR("Cuantos comensales ingresaran?");
LEER(cantCliente);
ESCRIBIR("Para que dia lo quiere?:
	0: Lunes
	1: Martes
	2: Miercoles
	3: Jueves
	4: Viernes
	5: Sabado
	6: Domingo");
LEER(dia);
ESCRIBIR("Cual es el precio de la venta?");
LEER(ventas);
// actualizamos el valor de ventas agregando un recargo SEGUN el tipo de tarjeta de crédito
// metodoPago es una variable selectora. DEBE SER entera o CARACTER
SEGUN CASO metodoPago HACER
	0: ventas = ventas * masterCard
	1: ventas = ventas * americaExpress
	2: ventas = ventas * visa	

FIN SEGUN

SI cantCliente > 2 ENTONCES

	SEGUN CASO dia HACER
// ingresa 0 por lunes o 2 por miércoles, aplica descuento
		0,2: ventas= ventas - ventas*descuento
	FIN SEGUN

FIN SI

FINPROGRAMA
```
### CODIGO EN C++

[en el archivo EJERCICIO-7-TARJETA.cpp](EJERCICIO-7-TARJETA.cpp)
