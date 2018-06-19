---
title: Associazione A.20 delle direttive barriera | Documenti Microsoft
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
ms.openlocfilehash: b1123ab0b4d406a613176dfcd50f459d089e45d9
ms.sourcegitcommit: 7019081488f68abdd5b2935a3b36e2a5e8c571f8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
ms.locfileid: "33691410"
---
# <a name="a20---binding-of-barrier-directives"></a>A.20   Associazione di direttive barrier
L'associazione di direttive regole di chiamata per un **barriera** direttiva da associare di inclusione più vicina `parallel` direttiva. Per ulteriori informazioni sull'associazione di direttive, vedere [sezione 2.8](../../parallel/openmp/2-8-directive-binding.md) nella pagina 32.  
  
 Nell'esempio seguente, la chiamata da *principale* a *sub2* è conforme in quanto il **barriera** (in *sub3*) associa all'area parallela in *sub2*. La chiamata da *principale* a *sub1* è conforme in quanto il **barriera** associa all'area parallela nella subroutine *sub2*.  La chiamata da *principale* a *sub3* è conforme in quanto il **barriera** non viene associato a un'area parallela e viene ignorato. Si noti inoltre che il **barriera** Sincronizza solo al team di thread in tale area che lo contiene e non tutti i thread creati in *sub1*.  
  
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