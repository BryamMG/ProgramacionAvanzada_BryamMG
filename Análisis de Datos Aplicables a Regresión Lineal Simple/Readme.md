# Predicción del **Performance Index** con Regresión Lineal  

## Descripción  
Este proyecto implementa **Regresión Lineal Simple** en Python para predecir el **Performance Index** de los estudiantes en función de variables como **horas de estudio, calificaciones previas y hábitos de preparación**. Utilizando un conjunto de datos con información académica, el modelo identificará la relación entre estas variables y el rendimiento estudiantil.  

## Objetivos  
- Implementar el modelo de **Regresión Lineal Simple** para predecir el rendimiento académico.  
- Analizar la relación entre variables como **horas de estudio** y el **Performance Index**.  
- Evaluar el rendimiento del modelo y su capacidad predictiva.  
- Presentar los resultados de manera clara utilizando **Jupyter Notebook**.  

## Problema a Resolver  
Los estudiantes buscan estrategias efectivas para mejorar su desempeño académico. Para ello, se analizan variables clave como:  

- **Horas de estudio**: Determinar su impacto en el rendimiento final.  
- **Calificaciones previas**: Evaluar si el desempeño pasado influye en futuras evaluaciones.  
- **Actividades extracurriculares**: Explorar si afectan positiva o negativamente el rendimiento.  
- **Horas de sueño**: Identificar su relación con la productividad académica.  
- **Práctica de exámenes simulados**: Medir su efectividad como técnica de estudio.  

## Organización del Repositorio  

```
📂 Prediccion-Performance-Index  
├── 📂 notebook Jupyter   # Implementación y análisis en Jupyter Notebook  
├── 📂 Reporte.pdf        # Informe final con resultados y conclusiones  
└── README.md            # Descripción del proyecto, instrucciones y objetivos  
```

## Instrucciones para Ejecutar el Código  

### Opción 1: Google Colab  
Puedes ejecutar el código en **Google Colab** subiendo el archivo `.ipynb`.  

### Opción 2: Jupyter Notebook en Local  
#### Instalación de Jupyter Notebook  
Si tienes **Anaconda**, busca "Jupyter" y ábrelo. Si no, instala Jupyter con:  
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
El modelo de **Regresión Lineal Simple** sigue los siguientes pasos:  

1. **Preprocesamiento de Datos**:  
   - Conversión de variables categóricas (Ejemplo: `Yes/No` a `1/0`).  
   - Análisis exploratorio de datos y detección de valores atípicos.  
2. **Selección de Variable Independiente**:  
   - Se elige una única variable para predecir el **Performance Index**.  
   - Se evalúa la correlación entre las variables.  
3. **Entrenamiento del Modelo**:  
   - Ajuste del modelo de regresión lineal.  
   - Obtención de la ecuación de la recta de regresión (**\( y = mx + b \)**).  
4. **Evaluación del Modelo**:  
   - Análisis de los resultados para evaluar el modelo.  

## Resultados  
El modelo de regresión lineal permitirá identificar qué factores tienen mayor impacto en el **Performance Index** y predecir el rendimiento con base en ellos. Esto ayudará a optimizar estrategias de estudio para mejorar los resultados académicos.  

## Requisitos  
El código es compatible con **Python 3.x** y requiere las siguientes bibliotecas:  
```bash
pip install numpy pandas scikit-learn matplotlib seaborn
```

---
**Autores:** [Bryam MG]  
**Fecha:** [09/03/2024]  


