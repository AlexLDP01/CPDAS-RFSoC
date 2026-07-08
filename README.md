# CPDAS-RFSoC

Repositorio para el Trabajo Fin de Máster (TFM) sobre Custom Processing Data Acquisition System (CPDAS) para RFSoC.

## Estructura del Repositorio

```
├── Documentos/              # Memoria LaTeX del TFM y documentación relacionada
├── Matlab/                  # Scripts y funciones de MATLAB
├── Vivado_chip_design/      # Proyecto Vivado - Diseño del chip principal
└── Vivado_dataproc_design/  # Proyecto Vivado - Diseño del procesador de datos
```

## Contenido

### Documentos/
Memoria LaTeX del Trabajo Fin de Máster con especificaciones, diagramas y resultados.

### Matlab/
Scripts de MATLAB para simulación, procesamiento de datos y validación.

### Vivado_chip_design/
Diseño del chip principal en Vivado, incluyendo:
- Diseño HDL (VHDL/Verilog)
- IPs personalizadas
- Bloques de diseño

### Vivado_dataproc_design/
Diseño del procesador de datos en Vivado, incluyendo:
- Lógica de procesamiento
- IPs personalizadas
- Interfaz de comunicación

## Requisitos

- **Vivado** (versión recomendada: 2024.x)
- **MATLAB** (versión recomendada: R2023b+)
- **LaTeX** (para compilar la memoria)

## Uso

1. Clona el repositorio
2. Abre los proyectos Vivado desde `Vivado_chip_design/` y `Vivado_dataproc_design/`
3. Ejecuta los scripts de MATLAB desde la carpeta `Matlab/`
4. Consulta la memoria en `Documentos/`

## Autor

Alexis López Duffau

## Licencia

Especificar si es necesario
