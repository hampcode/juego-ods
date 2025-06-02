# 🎩 Juego de Aventura en Consola - Proyecto HAMPCODE

![C++](https://img.shields.io/badge/C%2B%2B-Visual%20C%2B%2B-blue)
![Estado](https://img.shields.io/badge/Estado-Activo-brightgreen)
![Autor](https://img.shields.io/badge/Autor-HAMP-orange)

## 🎯 Descripción del Proyecto

Este juego de aventura en consola simula el recorrido de un personaje que debe atravesar dos mapas llenos de obstáculos dinámicos (bloques móviles horizontales y verticales). El jugador se representa con un bloque gráfico (`█`) y debe llegar al área marcada como objetivo (`8`) en ambos mapas.

El entorno se construye con gráficos ASCII y se utilizan colores y movimiento para dar una experiencia visual interactiva.

---

## 🔧 Funciones por Biblioteca

### `utilidades.h`

| Función                 | Descripción                                                     |
| ----------------------- | --------------------------------------------------------------- |
| `configurar_ventana()`  | Ajusta el tamaño de la consola y oculta el cursor               |
| `mover_cursor(x, y)`    | Posiciona el cursor en la consola en la coordenada especificada |
| `establecer_color(cod)` | Cambia el color del texto según el código dado (de 0 a 8)       |

### `mapa.h`

| Función              | Descripción                                                                    |
| -------------------- | ------------------------------------------------------------------------------ |
| `dibujar_mapa(mapa)` | Recorre el arreglo 2D e imprime cada celda con un color y carácter determinado |

### `jugador.h`

| Función                     | Descripción                                                                                          |
| --------------------------- | ---------------------------------------------------------------------------------------------------- |
| `mover_jugador(x, y, mapa)` | Detecta teclas (`w`, `a`, `s`, `d`) y actualiza las coordenadas del jugador si la posición es válida |

### `bloque.h`

| Función                           | Descripción                                                                                     |
| --------------------------------- | ----------------------------------------------------------------------------------------------- |
| `mover_bloques_horizontales(...)` | Mueve bloques horizontalmente cambiando de dirección si hay un obstáculo                        |
| `mover_bloques_verticales(...)`   | Mueve bloques verticalmente, invirtiendo su dirección al llegar al límite o a una celda ocupada |

### `pantallas.h`

| Función               | Descripción                                                 |
| --------------------- | ----------------------------------------------------------- |
| `mostrar_caratula()`  | Muestra una pantalla inicial con arte ASCII                 |
| `mostrar_carga()`     | Simula una barra de carga con caracteres                    |
| `mostrar_fin_juego()` | Presenta mensaje final con arte ASCII al completar el juego |

### `juego.h`

| Función            | Descripción                                                                                           |
| ------------------ | ----------------------------------------------------------------------------------------------------- |
| `jugar_mapa(mapa)` | Ejecuta la lógica principal del juego: dibujo del jugador, movimiento y detección de llegada al final |

---
# 🔗 Dependencias entre Bibliotecas

A continuación se describen las dependencias lógicas entre módulos del proyecto. Estas relaciones explican por qué ciertas bibliotecas requieren incluir a otras.

### `juego.h`

* **Depende de:** `jugador.h`, `bloques.h`, `utilidades.h`
* **Razón:** Necesita usar las funciones de movimiento del jugador y bloques, así como control de cursor y color.

### `pantallas.h`

* **Depende de:** `utilidades.h`
* **Razón:** Utiliza funciones de color y cursor para mostrar las pantallas de carátula, carga y final.

### `mapa.h`

* **Depende de:** `utilidades.h`
* **Razón:** Usa funciones de cursor y color para dibujar los mapas celda por celda.

### `jugador.h`

* **Depende de:** `utilidades.h`
* **Razón:** Requiere mover el cursor y cambiar color al mover el jugador.

### `bloque.h`

* **Depende de:** `utilidades.h`
* **Razón:** Similar al jugador, necesita controlar visualmente el movimiento de bloques.

### `main.cpp`

* **Incluye:** todos los headers (`pantallas.h`, `mapa.h`, `juego.h`, etc.)
* **Razón:** Orquesta toda la ejecución del programa.

---

---

## 📜 Flujo de Ejecución

1. `main()`:

   * Muestra carátula inicial
   * Simula pantalla de carga
   * Inicia el primer mapa (`mapa_1`)
   * Luego el segundo mapa (`mapa_2`)
   * Finaliza con pantalla de cierre

2. `mostrar_caratula()`:

   * Limpia la consola
   * Muestra arte ASCII con mensaje inicial

3. `mostrar_carga()`:

   * Muestra barra de carga animada con efecto

4. `dibujar_mapa(mapa)`:

   * Recorre matriz 2D y dibuja cada celda según su color

5. `jugar_mapa(mapa)`:

   * Inicia posición del jugador
   * Dibuja jugador
   * Llama continuamente:

     * `mover_jugador()`
     * `mover_bloques_horizontales()`
     * `mover_bloques_verticales()`

6. `mover_jugador()`:

   * Lee teclas (`w`, `a`, `s`, `d`)
   * Valida si puede moverse y actualiza posición

7. `mover_bloques_*()`:

   * Mueve bloques si la siguiente posición es válida
   * Cambia dirección si hay obstáculos

8. `mostrar_fin_juego()`:

   * Limpia pantalla
   * Muestra mensaje de felicitación y créditos

---

## ▶️ Cómo iniciar la implementación

1. **Clonar o abrir el proyecto** en Visual Studio.
2. Verifica que `pch.h` esté activo si usas Precompiled Headers.
3. Asegúrate de usar **/clr** (C++/CLI) como tipo de compilación.
4. Ejecuta `main.cpp`.
5. Usa las teclas:

   * `W`: Arriba
   * `A`: Izquierda
   * `S`: Abajo
   * `D`: Derecha
6. Llega al objetivo (`█` de color azul oscuro `8`) para pasar al siguiente mapa.

---

## 🚀 Créditos

Desarrollado por **Henry Antonio Mendoza Puerta**
Canal: [Hampcode](https://www.youtube.com/@hampcode)

---
