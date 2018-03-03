---
title: 2.4.2 costrutto sections | Documenti Microsoft
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
ms.assetid: e9e6e3ea-7fc9-4925-8f68-92b8a5bb1e76
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 6e5b755e95e9bbbb78d6ab13cd09732f9c9aee3d
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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
  
 **private (** *elenco variabili* **)**  
  
 **firstprivate (** *elenco variabili* **)**  
  
 **lastprivate (** *elenco variabili* **)**  
  
 **riduzione (** *operatore* **:***elenco variabili* **)**   
  
 **nowait**  
  
 Ogni sezione è preceduto da un **sezione** direttiva, anche se il **sezione** direttiva è facoltativa per la prima sezione. Il **sezione** direttive devono trovarsi all'interno di extent lessicale del **sezioni** direttiva. È una barriera implicita alla fine di un **sezioni** creare, a meno che un **nowait** specificato.  
  
 Restrizioni per il **sezioni** direttiva sono i seguenti:  
  
-   Oggetto **sezione** direttiva non deve trovarsi all'esterno di extent lessicale del **sezioni** direttiva.  
  
-   Una sola **nowait** clausola può essere incluso in un **sezioni** direttiva.  
  
## <a name="cross-references"></a>Riferimenti:  
  
-   **privato**, **firstprivate**, **lastprivate**, e **riduzione** clausole, vedere [sezione 2.7.2](../../parallel/openmp/2-7-2-data-sharing-attribute-clauses.md) nella pagina 25.