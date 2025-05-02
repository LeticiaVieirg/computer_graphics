#  Projeto de Transformações Geométricas 2D e 3D

- Uma biblioteca em C para manipulação avançada de geometria computacional

![Badge](https://img.shields.io/badge/Linguagem-C-blue)
![Badge](https://img.shields.io/badge/Licença-MIT-green)

## Visão Geral
Biblioteca modular em C que implementa operações matemáticas fundamentais para:
- Gráficos computacionais
- Desenvolvimento de jogos
- Aplicações de geometria analítica
- Sistemas de simulação 3D

### Operações Vetoriais
| Operação           | 2D | 3D | Descrição                          |
|--------------------|----|----|------------------------------------|
| Cálculo de Vetor   | ✅ | ✅ | Vetor entre dois pontos            |
| Norma              | ✅ | ✅ | Magnitude do vetor                 |
| Soma/Subtração     | ✅ | ✅ | Operações básicas entre vetores    |
| Produto Escalar    | ✅ | ✅ | Projeção entre vetores             |
| Normalização       | ✅ | ✅ | Vetor unitário                     |

### ✨ Destaques Especiais
-  Produto vetorial completo (2D e 3D)
-  Estruturas de dados otimizadas
-  Cálculos matriciais eficientes
-  Transformações geométricas básicas

### Pré-requisitos
- GCC 

### Compilação
```bash
gcc -c src/vetor.c -o vetor.o
gcc -c src/main.c -o main.o
gcc vetor.o main.o -o geometric_transformation -lm
./geometric_transformation
