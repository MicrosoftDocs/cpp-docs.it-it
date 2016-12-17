---
title: "A.25   Examples of the copyprivate Data Attribute Clause | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
ms.assetid: 7b1cb6a5-5691-4b95-b3ac-d7543ede6405
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# A.25   Examples of the copyprivate Data Attribute Clause
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

**Esempio 1:** `copyprivate` clausola \([parte 2.7.2.8](../../parallel/openmp/2-7-2-8-copyprivate.md) nella pagina 32\) può essere utilizzato per la trasmissione per comunicare ai valori acquistati da un singolo thread direttamente a tutte le istanze di variabili private negli altri thread.  
  
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
  
 se routine *init* viene chiamato da un'area seriale, il relativo comportamento non è interessato dalla presenza delle direttive.  Dopo la chiamata a *get\_values* la routine eseguita da un thread, non foglia thread e del costrutto fino agli oggetti privati ha definito da *in*, *b*, *x*e *y* in tutti i thread sono diventate definito con i valori letti.  
  
 **Esempio 2:** A differenza dell'esempio precedente, si supponga di lettura deve essere eseguito da un thread particolare, se il thread master.  in questo caso, `copyprivate` la clausola non può essere utilizzata per fare direttamente la trasmissione, ma può essere utilizzata per consentire l'accesso a un oggetto condiviso temporaneo.  
  
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
  
 **esempio 3:** Si supponga che il numero di oggetti di blocco obbligatori in un'area parallela non può essere determinato prima immetterle.  `copyprivate` la clausola può essere utilizzata per fornire accesso agli oggetti condivisi di blocco allocati all'interno dell'area parallela.  
  
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