# Proyecto TC1030

Este es el repositorio, en el cual se encontrará todo lo relacionado al proyecto de la materia TC1030

Alfredo Alejandro Soto Herrera - A01711368

## Agencia vehicular

Este proyecto consiste en la creación de una aplicación que permita al dueño de un negocio de una agencia de medios de transporte, tales como; carros, motocicletas, bicicletas y cuatrimotos. La gestión de este, pudiendo añadir nuevos vehiculos y sus datos parala venta de estos.

---

### Casos en los que no funcionaría

* Que en los constructores de Carro, Moto, Cuatrimoto y Bicicleta no se pongan los parámetros estabelecidos, con los tipos de atributos correctos

* Que se intentara crear una clase hija dentro de vehiculo.h sin la función mostrar_info() y calcula_precio_venta()

---

### Corecciones Avances

Avance 1

- Faltó incluir casos en los que no funcionaría. Incluído ahora en el README

Avance 2

- Faltó incluir un archivo main.cpp

- Faltó sobreescritura de métodos. Incluí sobreescritura en vehiculo.h en las funciones mostrar_info() y calcula_precio_venta()

Avance 3

- Sin correcciones

---

### Correr programa

Probado en g++ MinGw

```
g++ vehiculo.h agencia.h main.cpp
```

y correr a.exe
