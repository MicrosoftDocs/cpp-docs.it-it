---
title: "private (OpenMP) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "private"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "private OpenMP clause"
ms.assetid: 772904a2-1345-4562-90e6-eb4dc85aea1a
caps.latest.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 12
---
# private (OpenMP)
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

Specifica che ogni thread deve disporre di una propria istanza di una variabile.  
  
## Sintassi  
  
```  
private(var)  
```  
  
## Note  
 dove:  
  
 `var`  
 La variabile per disporre istanze in ogni thread.  
  
## Note  
 **privato** si applica alle direttive seguenti:  
  
-   [for](../../../parallel/openmp/reference/for-openmp.md)  
  
-   [parallel](../../../parallel/openmp/reference/parallel.md)  
  
-   [sections](../../../parallel/openmp/reference/sections-openmp.md)  
  
-   [single](../../../parallel/openmp/reference/single.md)  
  
 Per ulteriori informazioni, vedere [2.7.2.1 private](../../../parallel/openmp/2-7-2-1-private.md).  
  
## Esempio  
  
```  
// openmp_private.c  
// compile with: /openmp  
#include <windows.h>  
#include <assert.h>  
#include <stdio.h>  
#include <omp.h>  
  
#define NUM_THREADS 4  
#define SLEEP_THREAD 1  
#define NUM_LOOPS 2  
  
enum Types {  
   ThreadPrivate,  
   Private,  
   FirstPrivate,  
   LastPrivate,  
   Shared,  
   MAX_TYPES  
};  
  
int nSave[NUM_THREADS][MAX_TYPES][NUM_LOOPS] = {{0}};  
int nThreadPrivate;  
  
#pragma omp threadprivate(nThreadPrivate)  
#pragma warning(disable:4700)  
  
int main() {  
   int nPrivate = NUM_THREADS;  
   int nFirstPrivate = NUM_THREADS;  
   int nLastPrivate = NUM_THREADS;  
   int nShared = NUM_THREADS;  
   int nRet = 0;  
   int i;  
   int j;  
   int nLoop = 0;  
  
   nThreadPrivate = NUM_THREADS;  
   printf_s("These are the variables before entry "  
           "into the parallel region.\n");  
   printf_s("nThreadPrivate = %d\n", nThreadPrivate);  
   printf_s("      nPrivate = %d\n", nPrivate);  
   printf_s(" nFirstPrivate = %d\n", nFirstPrivate);  
   printf_s("  nLastPrivate = %d\n", nLastPrivate);  
   printf_s("       nShared = %d\n\n", nShared);  
   omp_set_num_threads(NUM_THREADS);  
  
   #pragma omp parallel copyin(nThreadPrivate) private(nPrivate) shared(nShared) firstprivate(nFirstPrivate)  
   {  
      #pragma omp for schedule(static) lastprivate(nLastPrivate)  
      for (i = 0 ; i < NUM_THREADS ; ++i) {  
         for (j = 0 ; j < NUM_LOOPS ; ++j) {  
            int nThread = omp_get_thread_num();  
            assert(nThread < NUM_THREADS);  
  
            if (nThread == SLEEP_THREAD)  
               Sleep(100);  
            nSave[nThread][ThreadPrivate][j] = nThreadPrivate;  
            nSave[nThread][Private][j] = nPrivate;  
            nSave[nThread][Shared][j] = nShared;  
            nSave[nThread][FirstPrivate][j] = nFirstPrivate;  
            nSave[nThread][LastPrivate][j] = nLastPrivate;  
            nThreadPrivate = nThread;  
            nPrivate = nThread;  
            nShared = nThread;  
            nLastPrivate = nThread;  
            --nFirstPrivate;  
         }  
      }  
   }  
  
   for (i = 0 ; i < NUM_LOOPS ; ++i) {  
      for (j = 0 ; j < NUM_THREADS ; ++j) {  
         printf_s("These are the variables at entry of "  
                  "loop %d of thread %d.\n", i + 1, j);  
         printf_s("nThreadPrivate = %d\n",  
                  nSave[j][ThreadPrivate][i]);  
         printf_s("      nPrivate = %d\n",  
                  nSave[j][Private][i]);  
         printf_s(" nFirstPrivate = %d\n",  
                  nSave[j][FirstPrivate][i]);  
         printf_s("  nLastPrivate = %d\n",  
                  nSave[j][LastPrivate][i]);  
         printf_s("       nShared = %d\n\n",  
                  nSave[j][Shared][i]);  
      }  
   }  
  
   printf_s("These are the variables after exit from "  
            "the parallel region.\n");  
   printf_s("nThreadPrivate = %d (The last value in the "  
            "master thread)\n", nThreadPrivate);  
   printf_s("      nPrivate = %d (The value prior to "  
            "entering parallel region)\n", nPrivate);  
   printf_s(" nFirstPrivate = %d (The value prior to "  
            "entering parallel region)\n", nFirstPrivate);  
   printf_s("  nLastPrivate = %d (The value from the "  
            "last iteration of the loop)\n", nLastPrivate);  
   printf_s("       nShared = %d (The value assigned, "  
            "from the delayed thread, %d)\n\n",  
            nShared, SLEEP_THREAD);  
}  
```  
  
  **Si tratta delle variabili prima della voce nell'area parallela.  nThreadPrivate \= 4**  
 **nPrivate \= 4**  
 **nFirstPrivate \= 4**  
 **nLastPrivate \= 4**  
 **\= 4 nShared**  
**Queste sono le variabili alla voce del ciclo 1 del thread 0.  nThreadPrivate \= 4**  
 **nPrivate \= 1310720**  
 **nFirstPrivate \= 4**  
 **nLastPrivate \= 1245104**  
 **\= 3 nShared**  
**Queste sono le variabili alla voce del ciclo 1 del thread 1.  nThreadPrivate \= 4**  
 **nPrivate \= 4488**  
 **nFirstPrivate \= 4**  
 **nLastPrivate \= 19748**  
 **\= 0 nShared**  
**Queste sono le variabili alla voce del ciclo 1 del thread 2.  nThreadPrivate \= 4**  
 **nPrivate \= \-132514848**  
 **nFirstPrivate \= 4**  
 **nLastPrivate \= \-513199792**  
 **\= 4 nShared**  
**Queste sono le variabili alla voce del ciclo 1 del thread 3.  nThreadPrivate \= 4**  
 **nPrivate \= 1206**  
 **nFirstPrivate \= 4**  
 **nLastPrivate \= 1204**  
 **\= 2 nShared**  
**Queste sono le variabili alla voce del ciclo 2 del thread 0.  nThreadPrivate \= 0**  
 **nPrivate \= 0**  
 **nFirstPrivate \= 3**  
 **nLastPrivate \= 0**  
 **\= 0 nShared**  
**Queste sono le variabili alla voce del ciclo 2 del thread 1.  nThreadPrivate \= 1**  
 **nPrivate \= 1**  
 **nFirstPrivate \= 3**  
 **nLastPrivate \= 1**  
 **\= 1 nShared**  
**Queste sono le variabili alla voce del ciclo 2 del thread 2.  nThreadPrivate \= 2**  
 **nPrivate \= 2**  
 **nFirstPrivate \= 3**  
 **nLastPrivate \= 2**  
 **\= 2 nShared**  
**Queste sono le variabili alla voce del ciclo 2 del thread 3.  nThreadPrivate \= 3**  
 **nPrivate \= 3**  
 **nFirstPrivate \= 3**  
 **nLastPrivate \= 3**  
 **\= 3 nShared**  
**Si tratta delle variabili dopo l'uscita dall'area parallela.  nThreadPrivate \= 0 \(l'ultimo valore nel thread master\)**  
 **nPrivate \= 4 \(valore prima di immettere area parallela\)**  
 **nFirstPrivate \= 4 \(valore prima di immettere area parallela\)**  
 **nLastPrivate \= 3 \(valore dall'ultima iterazione del ciclo\)**  
 **\= 1 nShared \(il valore assegnato, dal thread in ritardo, 1\)**    
## Vedere anche  
 [Clauses](../../../parallel/openmp/reference/openmp-clauses.md)