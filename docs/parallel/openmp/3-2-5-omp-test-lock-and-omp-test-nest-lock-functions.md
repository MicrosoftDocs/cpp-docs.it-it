---
title: 3.2.5 funzioni omp_test_lock e omp_test_nest_lock funzioni | Documenti Microsoft
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
ms.assetid: 36818945-c22c-4c24-b754-4e73eba6f3f8
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 8fcdacdbb38a9bb27e35ada74aa2139be10c6797
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="325-omptestlock-and-omptestnestlock-functions"></a>3.2.5 Funzioni omp_test_lock e omp_test_nest_lock
Queste funzioni tentano di impostare un blocco, ma non bloccano l'esecuzione del thread. Il formato è il seguente:  
  
```  
#include <omp.h>  
int omp_test_lock(omp_lock_t *lock);  
int omp_test_nest_lock(omp_nest_lock_t *lock);  
```  
  
 L'argomento deve puntare a una variabile del blocco inizializzato. Queste funzioni tentano di impostare un blocco in modo analogo `omp_set_lock` e `omp_set_nest_lock`, ad eccezione del fatto che non bloccano l'esecuzione del thread.  
  
 Per un semplice blocco, il `omp_test_lock` funzione restituisce un valore diverso da zero se il blocco è impostato correttamente; in caso contrario, restituisce zero.  
  
 Per un blocco annidabile, il `omp_test_nest_lock` funzione restituisce il nuovo numero di nidificazione se il blocco è stato impostato correttamente; in caso contrario, restituisce zero.