# UAV_dynamics_control
En este repositorio se encuentran diversos controladores, como dinámica para UAV. Están los modelos completos (Hexa)
y los modelos simples

Todos están en la versión Matlab2023a

### 6DoF simulations

Los archivos con _6DOF\_ indican que se modela la dinámica de un multicóptero en los 6 grados de libertad, seguido del control que se usa.

### Hexa_tilted

Estos archivos muestran la simulación de un hexa-rotor con motores inclinados, lo cual permite ejercer fuerzas en los 6 DoF, haciendo la plataforma totalmente actuada

### Velocidad y aceleración deseada

Por el momento se está implementando un integrador de segundo orden para determinar la velocidad y aceleración angular deseada del sistema
