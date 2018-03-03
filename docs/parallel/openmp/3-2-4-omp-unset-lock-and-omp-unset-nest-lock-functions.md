---
title: 3.2.4 funzioni omp_unset_lock e omp_unset_nest_lock funzioni | Documenti Microsoft
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
ms.assetid: 5357e43e-a7c0-41d7-b529-3f7d15da8b11
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: dc71c6c31a1d93b6e9c9cce2cd4f7830502a1a2f
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="324-ompunsetlock-and-ompunsetnestlock-functions"></a>3.2.4 Funzioni omp_unset_lock e omp_unset_nest_lock
Queste funzioni consentono di rilascio delle proprietà di un blocco. Il formato è il seguente:  
  
```  
#include <omp.h>  
void omp_unset_lock(omp_lock_t *lock);  
void omp_unset_nest_lock(omp_nest_lock_t *lock);  
```  
  
 L'argomento per ognuna di queste funzioni deve puntare a una variabile del blocco inizializzato dal thread di esecuzione della funzione di proprietà. Il comportamento è definito se il thread non proprietario del blocco.  
  
 Per un semplice blocco, il `omp_unset_lock` funzione rilascia il thread di esecuzione della funzione dal proprietario del blocco.  
  
 Per un blocco annidabile, il `omp_unset_nest_lock` funzione decrementa il conteggio di nidificazione e le versioni del thread in esecuzione la funzione di proprietà del blocco se il numero risultante è zero.