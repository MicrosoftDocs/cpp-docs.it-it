---
title: 2.4.2 costrutto sections | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: e9e6e3ea-7fc9-4925-8f68-92b8a5bb1e76
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 20b24c5b7d2458294da6280acb2ba7e8be5961fb
ms.sourcegitcommit: 7019081488f68abdd5b2935a3b36e2a5e8c571f8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
---
# <a name="242-sections-construct"></a>2.4.2 Costrutto sections
Il **sezioni** direttiva identifica un costrutto di condivisione del lavoro noniterative che specifica un set di costrutti che devono essere suddivisi tra i thread in un team. Ogni sezione viene eseguita una sola volta da un thread del team. La sintassi del **sezioni** direttiva è come segue:  
  
```  
#pragma omp sections [clause[[,] clause] ...] new-line  
   {  
   [#pragma omp section new-line]  
      structured-block  
   [#pragma omp section new-linestructured-block ]  
...  
}  
```  
  
 La clausola è uno dei valori seguenti:  
  
 **private (** *variabile-list* **)**  
  
 **firstprivate (** *variabile-list* **)**  
  
 **lastprivate(** *variable-list* **)**  
  
 **riduzione (** *operatore* **:***elenco variabili* **)**   
  
 **nowait**  
  
 Ogni sezione è preceduto da un **sezione** direttiva, anche se il **sezione** direttiva è facoltativa per la prima sezione. Il **sezione** direttive devono trovarsi all'interno di extent lessicale del **sezioni** direttiva. È una barriera implicita alla fine di un **sezioni** creare, a meno che un **nowait** specificato.  
  
 Restrizioni per il **sezioni** direttiva sono i seguenti:  
  
-   Oggetto **sezione** direttiva non deve trovarsi all'esterno di extent lessicale del **sezioni** direttiva.  
  
-   Una sola **nowait** clausola può essere incluso in un **sezioni** direttiva.  
  
## <a name="cross-references"></a>Riferimenti:  
  
-   **private**, **firstprivate**, **lastprivate**, e **riduzione** clausole, vedere [sezione 2.7.2](../../parallel/openmp/2-7-2-data-sharing-attribute-clauses.md) nella pagina 25.