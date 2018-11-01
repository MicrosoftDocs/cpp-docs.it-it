---
title: A.20   Associazione di direttive barrier
ms.date: 11/04/2016
ms.assetid: a3fdcc26-6873-429b-998e-de451401483b
ms.openlocfilehash: cf6f20a8539c47ca529af93e65f3a5fe244228d8
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50652946"
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