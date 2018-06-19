---
title: Esempi A.25 di copyprivate dati attributo clausola | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: 7b1cb6a5-5691-4b95-b3ac-d7543ede6405
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: c92d9ce6f22c2d53a2e65d7b67c22e4f080f162c
ms.sourcegitcommit: 7019081488f68abdd5b2935a3b36e2a5e8c571f8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
ms.locfileid: "33691690"
---
# <a name="a25---examples-of-the-copyprivate-data-attribute-clause"></a>A.25   Esempi della clausola di attributi di dati copyprivate
**Esempio 1:** il `copyprivate` clausola ([sezione 2.7.2.8](../../parallel/openmp/2-7-2-8-copyprivate.md) nella pagina 32) può essere usato per trasmettere i valori acquisiti da un thread singolo direttamente a tutte le istanze delle variabili private in altri thread.  
  
```  
float x, y;  
#pragma omp threadprivate(x, y)  
  
void init( )   
{  
    float a;  
    float b;  
  
    #pragma omp single copyprivate(a,b,x,y)  
    {  
        get_values(a,b,x,y);  
    }  
  
    use_values(a, b, x, y);  
}  
```  
  
 Se routine *init* viene chiamato da un'area seriale, il comportamento non è interessato dalla presenza delle direttive. Dopo la chiamata al *get_values* routine è stata eseguita da un thread, nessun thread lascia il costrutto fino a quando gli oggetti privati designati da *un*, *b*, *x*, e *y* diventano definiti in tutti i thread con i valori letti.  
  
 **Esempio 2:** contrariamente all'esempio precedente, si supponga che la lettura deve essere eseguita da un thread specifico, ad esempio, il thread principale. In questo caso, il `copyprivate` clausola non può essere utilizzata per eseguire direttamente la trasmissione, ma può essere utilizzato per fornire accesso a un oggetto temporaneo condiviso.  
  
```  
float read_next( )   
{  
    float * tmp;  
    float return_val;  
  
    #pragma omp single copyprivate(tmp)  
    {  
        tmp = (float *) malloc(sizeof(float));  
    }  
  
    #pragma omp master  
    {  
        get_float( tmp );  
    }  
  
    #pragma omp barrier  
    return_val = *tmp;  
    #pragma omp barrier  
  
    #pragma omp single  
    {  
       free(tmp);  
    }  
  
    return return_val;  
}  
```  
  
 **Esempio 3:** si supponga che il numero di oggetti di blocco richiesti in un'area parallela non può essere determinato con facilità prima di immetterlo. Il `copyprivate` clausola può essere utilizzata per fornire l'accesso agli oggetti di blocco condiviso che vengono allocati all'interno di tale area parallela.  
  
```  
#include <omp.h>  
  
omp_lock_t *new_lock()  
{  
    omp_lock_t *lock_ptr;  
  
    #pragma omp single copyprivate(lock_ptr)  
    {  
        lock_ptr = (omp_lock_t *) malloc(sizeof(omp_lock_t));  
        omp_init_lock( lock_ptr );  
    }  
  
    return lock_ptr;  
}  
```