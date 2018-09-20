---
title: A.20 associazione di direttive barrier | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: a3fdcc26-6873-429b-998e-de451401483b
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 628920caa6a122230f42394cc757e3abdb1874cd
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46381309"
---
# <a name="a20---binding-of-barrier-directives"></a>A.20   Associazione di direttive barrier

L'associazione di direttive le regole di chiamata per un **barriera** direttiva a cui associarsi di inclusione più vicina `parallel` direttiva. Per ulteriori informazioni sull'associazione di direttive, vedere [2.8 sezione](../../parallel/openmp/2-8-directive-binding.md) nella pagina 32.

Nell'esempio seguente, la chiamata da *principale* al *sub2* è conforme perché il **barriera** (in *sub3*) associa all'area parallela nelle *sub2*. La chiamata da *principale* al *sub1* è conforme perché il **barriera** associa all'area parallela nella subroutine *sub2*.  La chiamata da *principale* al *sub3* è conforme perché il **barriera** non viene associato a un'area parallela e viene ignorato. Si noti anche che il **barriera** Sincronizza solo il team di thread in tale area contenitore e non tutti i thread creati nelle *sub1*.

```
int main()
{
    sub1(2);
    sub2(2);
    sub3(2);
}

void sub1(int n)
{
    int i;
    #pragma omp parallel private(i) shared(n)
    {
        #pragma omp for
        for (i=0; i<n; i++)
            sub2(i);
    }
}

void sub2(int k)
{
     #pragma omp parallel shared(k)
     sub3(k);
}

void sub3(int n)
{
    work(n);
    #pragma omp barrier
    work(n);
}
```