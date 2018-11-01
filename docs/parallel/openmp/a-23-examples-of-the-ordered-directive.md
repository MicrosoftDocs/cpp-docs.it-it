---
title: A.23   Esempi della direttiva ordered
ms.date: 11/04/2016
ms.assetid: f8fa761b-7fc5-4447-95f9-8571e9ca31bf
ms.openlocfilehash: 2868b771fd57613981f3c6458b48493a1b26eee4
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50472278"
---
# <a name="a23---examples-of-the-ordered-directive"></a>A.23   Esempi della direttiva ordered

È possibile avere più sezioni ordinate con un `for` specificato con il `ordered` clausola. Nel primo esempio non è conforme perché l'API specifica quanto segue:

"Un'iterazione di un ciclo con un `for` costrutto non deve eseguire lo stesso `ordered` direttiva più di una sola volta e non deve eseguire più `ordered` direttiva." (Vedere [sezione 2.6.6](../../parallel/openmp/2-6-6-ordered-construct.md) nella pagina 22)

In questo esempio non conforme, tutte le iterazioni eseguire 2 sezioni ordinate:

```
#pragma omp for ordered
for (i=0; i<n; i++)
{
    ...
    #pragma omp ordered
    { ... }
    ...
    #pragma omp ordered
    { ... }
    ...
}
```

Nel seguente esempio conforme un `for` con più di una sezione ordinata:

```
#pragma omp for ordered
for (i=0; i<n; i++)
{
    ...
    if (i <= 10)
    {
        ...
        #pragma omp ordered
        { ... }
    }
    ...
    (i > 10)
    {
        ...
        #pragma omp ordered
        { ... }
    }
    ...
}
```