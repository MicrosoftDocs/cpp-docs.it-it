---
title: 3.2.1 funzioni omp_init_lock e omp_init_nest_lock funzioni | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
ms.assetid: 098a2721-b16a-484f-bc83-4b8e281e382c
caps.latest.revision: "6"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 3802822465d6527e4c98a0be6a8c274d767b0f52
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="321-ompinitlock-and-ompinitnestlock-functions"></a>3.2.1 Funzioni omp_init_lock e omp_init_nest_lock
Queste funzioni consentono solo di inizializzazione di un blocco. Ogni funzione inizializza il blocco associato al parametro *blocco* per l'utilizzo nelle chiamate successive. Il formato è il seguente:  
  
```  
#include <omp.h>  
void omp_init_lock(omp_lock_t *lock);  
void omp_init_nest_lock(omp_nest_lock_t *lock);  
```  
  
 Lo stato iniziale è sbloccato (vale a dire, nessun thread proprietario del blocco). Per un blocco annidabile, il numero iniziale di nidificazione è zero. Non è conforme per chiamare una qualsiasi di queste routine con una variabile di blocco che è già stato inizializzato.