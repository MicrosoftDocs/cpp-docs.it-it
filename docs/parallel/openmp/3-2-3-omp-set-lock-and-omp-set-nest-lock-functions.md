---
title: 3.2.3 funzioni omp_set_lock e omp_set_nest_lock funzioni | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
ms.assetid: b5323879-f72e-418e-953f-3979fdda17a2
caps.latest.revision: "6"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 5f78307023091b2e9d17ca3ff8fa2d3214c458cf
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="323-ompsetlock-and-ompsetnestlock-functions"></a>3.2.3 Funzioni omp_set_lock e omp_set_nest_lock
Ognuna di queste funzioni Blocca il thread di esecuzione della funzione fino a quando non è disponibile e quindi imposta il blocco di blocco specificato. Un semplice blocco è disponibile se è sbloccato. Un blocco annidabile è disponibile se è sbloccato o se si è già di proprietà dal thread di esecuzione della funzione. Il formato è il seguente:  
  
```  
#include <omp.h>  
void omp_set_lock(omp_lock_t *lock);  
void omp_set_nest_lock(omp_nest_lock_t *lock);  
```  
  
 Per un semplice blocco, l'argomento di `omp_set_lock` funzione deve puntare a una variabile del blocco inizializzato. Proprietà del blocco viene concesso al thread di esecuzione della funzione.  
  
 Per un blocco annidabile, l'argomento di `omp_set_nest_lock` funzione deve puntare a una variabile del blocco inizializzato. Il numero di nidificazione viene incrementato e il thread viene concesso o mantiene, la proprietà del blocco.