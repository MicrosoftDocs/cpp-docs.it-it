---
title: L'utilizzo dei blocchi Annidabile A.17 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: 8ef386ed-ddc4-4d40-80aa-cc39f0fb5e4b
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 9cbf11af9704a6f868502f66dba5c6448d66abfa
ms.sourcegitcommit: 7019081488f68abdd5b2935a3b36e2a5e8c571f8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
ms.locfileid: "33689909"
---
# <a name="a17---using-nestable-locks"></a>A.17   Utilizzo di blocchi annidabili
Nell'esempio seguente (per [sezione 3.2](../../parallel/openmp/3-2-lock-functions.md) nella pagina 41) viene illustrato come un blocco annidabile può essere usato per sincronizzare gli aggiornamenti per un'intera struttura e per uno dei relativi membri.  
  
```  
#include <omp.h>  
typedef struct {int a,b; omp_nest_lock_t lck;} pair;  
  
void incr_a(pair *p, int a)  
{  
    // Called only from incr_pair, no need to lock.  
    p->a += a;  
}  
  
void incr_b(pair *p, int b)  
{  
    // Called both from incr_pair and elsewhere,  
    // so need a nestable lock.  
  
    omp_set_nest_lock(&p->lck);  
    p->b += b;  
    omp_unset_nest_lock(&p->lck);  
}  
  
void incr_pair(pair *p, int a, int b)  
{  
    omp_set_nest_lock(&p->lck);  
    incr_a(p, a);  
    incr_b(p, b);  
    omp_unset_nest_lock(&p->lck);  
}  
  
void f(pair *p)  
{  
    extern int work1(), work2(), work3();  
    #pragma omp parallel sections  
    {  
        #pragma omp section  
            incr_pair(p, work1(), work2());  
        #pragma omp section  
            incr_b(p, work3());  
    }  
}  
```