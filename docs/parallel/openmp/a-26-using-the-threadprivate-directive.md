---
title: A.26 uso della direttiva threadprivate | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: 6eda76c2-c4f1-4208-a900-e0ea98a53eca
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 93a596a4015f92e2a4d42151560171157232047b
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46447649"
---
# <a name="a26---using-the-threadprivate-directive"></a>A.26   Utilizzo della direttiva threadprivate

Gli esempi seguenti illustrano come usare il `threadprivate` (direttiva) ([sezione 2.7.1](../../parallel/openmp/2-7-1-threadprivate-directive.md) nella pagina 23) per fornire un contatore separato a ogni thread.

**Esempio 1:**

```
int counter = 0;
#pragma omp threadprivate(counter)

int sub()
{
    counter++;
    return(counter);
}
```

**Esempio 2:**

```
int sub()
{
    static int counter = 0;
    #pragma omp threadprivate(counter)
    counter++;
    return(counter);
}
```