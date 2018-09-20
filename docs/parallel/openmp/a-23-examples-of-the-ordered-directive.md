---
title: A.23 esempi della direttiva ordered | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: f8fa761b-7fc5-4447-95f9-8571e9ca31bf
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: ec609a77e9bdc7cbdbb0822dfde0a88110ce0244
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46405970"
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