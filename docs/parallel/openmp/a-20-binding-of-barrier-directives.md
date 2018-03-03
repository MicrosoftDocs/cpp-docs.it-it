---
title: Associazione A.20 delle direttive barriera | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
ms.assetid: a3fdcc26-6873-429b-998e-de451401483b
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 5b8cc2799f0aea9e75b3aad44d3cfa9e3f5e7de4
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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