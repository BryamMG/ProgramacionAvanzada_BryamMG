# PROGRAMA. Implementación de Perceptrón

## Descripción de la actividad
Este proyecto consiste en la implementación de un **Perceptrón** en Python para clasificar solicitudes de préstamo en dos categorías: **Aprobado (1)** o **Rechazado (0)**. El perceptrón se entrena con un conjunto de datos históricos que incluye variables como el puntaje de crédito, los ingresos mensuales, el monto solicitado y la relación deuda/ingresos.

## Objetivo
- Implementar un perceptrón en Python utilizando el algoritmo de aprendizaje supervisado.
- Entrenar al perceptrón con datos financieros para clasificar solicitudes de préstamo.
- Evaluar el rendimiento del perceptrón y ajustar los parámetros para mejorar la precisión.
- Documentar y presentar los resultados de manera clara utilizando Jupyter Notebook.

## Problema a resolver
Una institución financiera desea automatizar la clasificación de solicitudes de préstamo, utilizando un perceptrón que evalúe cuatro factores clave para tomar decisiones:
* Puntaje de crédito: Valor numérico (por ejemplo, entre 300 y 850).
* Ingresos mensuales: Expresado en miles de pesos.
* Monto del préstamo solicitado: Expresado en miles de pesos.
* Relación deuda/ingresos: Valor decimal (por ejemplo, 0.2, 0.5, etc.).
* La institución proporciona un conjunto de datos históricos con ejemplos de solicitudes aprobadas y rechazadas. El perceptrón debe aprender a clasificar correctamente cada solicitud.* Implementar los algoritmos de ordenamiento Burbuja y Quicksort en Python.

## Organización del Repositorio

El repositorio está estructurado de la siguiente manera:

📂 Evaluacion-de-Metodos-de-Ordenamiento
* 📂 notebook Jupyter   # Contiene el archivo Jupyter Notebook con la implementación y análisis
* 📂 Reporte.pdf   # Contiene el informe final en PDF con los resultados y conclusiones
* README.md      # Descripción general del proyecto, instrucciones y objetivos

## Instrucciones para Ejecutar el Código en Jupyter Notebook

### Opción 1: Google Colab

Si no deseas instalar nada en tu computadora, puedes ejecutar el código en **Google Colab** subiendo el archivo `.ipynb` en la plataforma.

### Opción 2: Jupyter Notebook en Local

#### Instalación de Jupyter Notebook

Si tienes **Anaconda** instalado, simplemente escribe "Jupyter" en el buscador y abre el programa. Si no tienes Anaconda, puedes instalar Jupyter Notebook ejecutando:

*pip install notebook

2. Ejecutar Jupyter Notebook
Abre Jupyter Notebook desde la terminal con:

* jupyter notebook

Luego, navega hasta la carpeta notebooks y abre el archivo correspondiente.

3. Correr el Código
Ejecuta las celdas del Notebook para visualizar la implementación, comparar los tiempos de ejecución y analizar los resultados.

## Descripción del Código

El perceptrón implementado en este proyecto utiliza los siguientes pasos:

1. **Normalización de Datos**: Los datos de entrada son normalizados para que todas las características estén en la misma escala, mejorando la eficiencia del entrenamiento.
   
2. **Entrenamiento del Perceptrón**: El perceptrón se entrena utilizando el algoritmo de aprendizaje supervisado, donde se ajustan los pesos y el sesgo (bias) en función de los errores cometidos durante el entrenamiento.

3. **Evaluación del Modelo**: El modelo es evaluado con nuevos datos para predecir si una solicitud de préstamo será aprobada o rechazada.

4. **Parámetros del Perceptrón**:
   - **Tasa de aprendizaje**: Controla el tamaño de los ajustes realizados durante el entrenamiento.
   - **Número de épocas**: Especifica cuántas veces se ajustarán los pesos a través de todo el conjunto de datos.

## Resultados

El rendimiento del perceptrón se evalúa según el número de aciertos y errores durante el proceso de entrenamiento. Al final, el modelo es capaz de clasificar nuevas solicitudes de préstamo y predecir si serán aprobadas o rechazadas con base en las variables financieras proporcionadas.

## Requisitos

El código es compatible con Python 3.x. Las bibliotecas necesarias son:

- `numpy`

Puedes instalar las dependencias con:

* pip install numpy
