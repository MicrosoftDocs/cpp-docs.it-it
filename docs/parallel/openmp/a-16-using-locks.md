---
title: A.16 utilizzo di blocchi | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: 873bf32b-6cfe-4ce1-b994-bef80b50f399
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 2bb901ab311221f1375bb5f3bfe7f996981e97a6
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46432750"
---
# <a name="a16---using-locks"></a>A.16   Utilizzo di blocchi

Nell'esempio seguente (per [sezione 3.2](../../parallel/openmp/3-2-lock-functions.md) nella pagina 41) si noti che l'argomento alle funzioni di blocco debba avere tipo `omp_lock_t`, e che non è necessario lo scaricamento.  Le funzioni di blocco causano il thread sia inattivo durante l'attesa della voce per la prima sezione critica, ma di eseguire altre attività durante l'attesa di ingresso al secondo.  Il `omp_set_lock` blocchi di funzione, ma il `omp_test_lock` funzione non le utilizza, consentendo il lavoro in Skip da eseguire.

## <a name="example"></a>Esempio

### <a name="code"></a>Codice

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