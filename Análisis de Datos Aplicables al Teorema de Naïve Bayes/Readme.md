# Predicción de Pérdida de Clientes Bancarios con Naïve Bayes

## Descripción
Este proyecto implementa el algoritmo **Naïve Bayes** en Python para predecir la pérdida de clientes en una institución bancaria. Utilizando un conjunto de datos con información financiera y demográfica, el modelo clasificará a los clientes en **propensos a desertar (1)** o **permanecer (0)**.

## Objetivos
- Implementar el algoritmo **Naïve Bayes** para clasificación.
- Entrenar el modelo con datos históricos de clientes bancarios.
- Evaluar el rendimiento del modelo y ajustar sus parámetros para mejorar la precisión.
- Presentar los resultados de manera clara utilizando **Jupyter Notebook**.

## Problema a Resolver
Las instituciones bancarias buscan reducir la pérdida de clientes mediante la identificación temprana de aquellos con mayor probabilidad de desertar. Para ello, se analizan variables como:

- **Puntaje de crédito**: Indica la solvencia del cliente.
- **Edad**: Grupos etarios pueden tener diferentes tasas de deserción.
- **Saldo y salario estimado**: Factores clave en la estabilidad financiera del cliente.
- **Ubicación geográfica y género**: Pueden influir en la lealtad del cliente.
- **Tiempo de permanencia en el banco**: Clientes con mayor antigüedad pueden ser menos propensos a abandonar.

## Organización del Repositorio

```
📂 Prediccion-Perdida-Clientes-Bancarios
├── 📂 notebook Jupyter   # Implementación y análisis en Jupyter Notebook
├── 📂 Reporte.pdf        # Informe final en PDF con resultados y conclusiones
└── README.md            # Descripción del proyecto, instrucciones y objetivos
```

## Instrucciones para Ejecutar el Código

### Opción 1: Google Colab
Si no deseas instalar nada en tu computadora, puedes ejecutar el código en **Google Colab** subiendo el archivo `.ipynb`.

### Opción 2: Jupyter Notebook en Local
#### Instalación de Jupyter Notebook
Si tienes **Anaconda**, simplemente busca "Jupyter" y ábrelo. Si no, instala Jupyter con:
```bash
pip install notebook
```

#### Ejecutar Jupyter Notebook
Abre Jupyter desde la terminal con:
```bash
jupyter notebook
```
Luego, navega hasta la carpeta del proyecto y abre el archivo correspondiente.

#### Correr el Código
Ejecuta las celdas del Notebook para visualizar la implementación y analizar los resultados.

## Descripción del Código
El modelo **Naïve Bayes** implementado sigue los siguientes pasos:

1. **Preprocesamiento de Datos**: 
   - Normalización y codificación de variables categóricas.
   - División del conjunto de datos en entrenamiento y prueba.
2. **Entrenamiento del Modelo**: Se entrena un clasificador Naïve Bayes con los datos preprocesados.
3. **Evaluación del Modelo**: Se calculan métricas como **precisión, recall y matriz de confusión**.
4. **Ajuste de Parámetros**: Se prueban distintas variantes de Naïve Bayes (Gaussiano, Multinomial, Bernoulli) para mejorar el rendimiento.

## Resultados
El rendimiento del modelo se evalúa con base en la precisión de sus predicciones y su capacidad para identificar clientes en riesgo de desertar. Esto permite generar estrategias de retención más efectivas.

## Requisitos
El código es compatible con **Python 3.x** y requiere las siguientes bibliotecas:
```bash
pip install numpy pandas scikit-learn matplotlib seaborn
```

---
**Autores:** Bryam MG
**Fecha:** 01/03/2025
