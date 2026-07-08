# CPDAS-RFSoC

Diseño de sistema de procesamiento de señales acústicas distribuidas en RFSoC.

## Estructura del Proyecto

```
CPDAS-RFSoC/
├── Documentos/          # Documentación y memoria
├── Matlab/              # Scripts y análisis en MATLAB
├── Vivado_chip_design/  # Integración en RFSoC (FFT/DMA/DAC-ADC)
│   ├── create_project.tcl
│   ├── hw/              # Hardware: TCL, BD, constraints
│   └── sw/core_app/src/ # Código fuente C para ARM
├── Vivado_dataproc_design/  # Diseño de la parte de procesamiento y flujo de datos PS<->PL (FFT/DMA)
│   ├── create_project.tcl
│   ├── hw/              # Hardware: TCL, BD, constraints
│   └── sw/dma_fft/src/  # Código fuente C para ARM
└── README.md
```

## Requisitos

### Software
- **Vivado Design Suite** 2024.1 o superior
- **Vitis Unified Software Platform** 2024.1 o superior
- **MATLAB** R2023b o superior (opcional, para análisis)

### Librerías Externas

#### Ne10 Library (Neon Engine)
Estas librerías **NO** están incluidas en el repo. Debes descargarlas manualmente:

1. **Para Vivado_chip_design** (ARM64 - aarch64):
   - Descargar: [Ne10 GitHub](https://github.com/projectNe10/Ne10)
   - Compilar para aarch64 o descargar precompiladas
   - Colocar en: `Vivado_chip_design/Ne10-standalone-lib-aarch64/`

2. **Para Vivado_dataproc_design** (ARM32):
   - Descargar: [Ne10 GitHub](https://github.com/projectNe10/Ne10)
   - Compilar para ARM 32-bit o descargar precompiladas
   - Colocar en: `Vivado_dataproc_design/Ne10-standalone-lib-arm32/`

**Estructura esperada después de descargar:**
```
Ne10-standalone-lib-aarch64/
├── include/
│   ├── NE10.h
│   └── ...
└── lib/
    ├── libNE10.a
    └── ...
```

## Cómo Usar

### 1. Clonar el Repositorio
```bash
git clone https://github.com/AlexLDP01/CPDAS-RFSoC.git
cd CPDAS-RFSoC
```

### 2. Generar Proyectos en Vivado

**Chip Design (ADC/DAC):**
```bash
cd Vivado_chip_design
vivado -mode batch -source create_project.tcl
```

**Dataproc Design (FFT/DMA):**
```bash
cd Vivado_dataproc_design
vivado -mode batch -source create_project.tcl
```

### 3. Descargar e Instalar Ne10 Libraries
- Sigue las instrucciones en [Ne10 Repository](https://github.com/projectNe10/Ne10)
- Coloca las librerías compiladas en las ubicaciones indicadas arriba

### 4. Crear Plataformas en Vitis
- Genera los `.xsa` desde Vivado (Export Hardware)
- Crea plataformas en Vitis apuntando a esos `.xsa`
- Enlaza las librerías Ne10 en las propiedades del proyecto

### 5. Compilar Aplicaciones
```bash
# En Vitis o desde terminal:
vitis -workspace ./ws
```

## Contenido de Carpetas

### `Documentos/`
- Contexto del TFM
- Memoria LaTeX del proyecto
- Documentación general

### `Matlab/`
- Scripts de análisis
- Pruebas de algoritmos FFT
- Herramientas de verificación

### `Vivado_chip_design/`
- **hw/ADC_DAC.srcs/**: Proyecto de hardware para interfaz ADC/DAC
- **sw/core_app/src/**: Aplicación C para configuración y control
  - Incluye: configuración de RFDC, DMA, Si5381A (PLL)

### `Vivado_dataproc_design/`
- **hw/TFM_DP_part.srcs/**: Proyecto de hardware para procesamiento
- **sw/dma_fft/src/**: Aplicación C para DMA y FFT
  - Utiliza Ne10 para cálculos optimizados

## Archivos Generados (No Versionados)

El repositorio **NO incluye**:
- Proyectos compilados (`.xpr`, `.cache/`, `.runs/`, etc.)
- Binarios y artefactos de compilación (`.elf`, `.bit`, `.bin`)
- Archivos de workspace de Vitis (`.metadata/`, `Debug/`, `Release/`)
- Librerías externas grandes (Ne10 precompiladas)

Estos se regeneran al ejecutar los scripts TCL y compilar en Vitis.

## Flujo de Desarrollo

1. Modificar diseño → Regenerar en Vivado
2. Exportar hardware (`.xsa`)
3. Actualizar plataforma en Vitis
4. Modificar código fuente C en `sw/*/src/`
5. Compilar en Vitis
6. Depurar en hardware RFSoC
