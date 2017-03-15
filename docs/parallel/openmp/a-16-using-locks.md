---
title: "A.16   Using Locks | Microsoft Docs"
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
ms.assetid: 873bf32b-6cfe-4ce1-b994-bef80b50f399
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# A.16   Using Locks
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Nell'esempio seguente, ad [parte 3,2](../../parallel/openmp/3-2-lock-functions.md) nella pagina 41\) si noti che l'argomento alle funzioni di blocco deve avere il tipo`omp_lock_t`e tale evitando di arrossirla.  Le funzioni di blocco determinano i thread per essere inattivi in attesa la voce nella prima sezione critica, ma per eseguire altre attività in attesa la voce al secondo.  `omp_set_lock` blocchi funzionali, ma  `omp_test_lock` la funzione contrario, consentendo il lavoro nel passaggio \(\) da eseguire.  
  
## Esempio  
  
### Codice  
  
```  
// omp_using_locks.c  
// compile with: /openmp /c  
#include <stdio.h>  
#include <omp.h>  
  
void work(int);  
void skip(int);  
  
int main() {  
   omp_lock_t lck;  
   int id;  
  
   omp_init_lock(&lck);  
   #pragma omp parallel shared(lck) private(id)  
   {  
      id = omp_get_thread_num();  
  
      omp_set_lock(&lck);  
      printf_s("My thread id is %d.\n", id);  
  
      // only one thread at a time can execute this printf  
      omp_unset_lock(&lck);  
  
      while (! omp_test_lock(&lck)) {  
         skip(id);   // we do not yet have the lock,  
                     // so we must do something else   
      }  
      work(id);     // we now have the lock  
                    // and can do the work   
      omp_unset_lock(&lck);  
   }  
   omp_destroy_lock(&lck);  
}  
```