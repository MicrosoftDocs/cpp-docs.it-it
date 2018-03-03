---
title: 3.2 bloccare funzioni | Documenti Microsoft
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
ms.assetid: 0ec855c6-55a9-49d7-bee4-5edae6e86a1b
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 151c809a7bd28a2e4384371f5cec3bd192eed9d1
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="32-lock-functions"></a>3.2 Funzioni lock
Le funzioni descritte in questa sezione manipolare i blocchi utilizzati per la sincronizzazione.  
  
 Per le funzioni seguenti, la variabile di blocco deve avere tipo **omp_lock_t**. Questa variabile deve essere accessibile solo tramite queste funzioni. Tutte le funzioni di blocco richiedono un argomento che dispone di un puntatore a **omp_lock_t** tipo.  
  
-   Il `omp_init_lock` funzione Inizializza un semplice blocco.  
  
-   Il `omp_destroy_lock` funzione rimuove un semplice blocco.  
  
-   Il `omp_set_lock` funzione attende fino a quando non è disponibile un semplice blocco.  
  
-   Il `omp_unset_lock` funzione rilascia un semplice blocco.  
  
-   Il `omp_test_lock` funzione verifica un semplice blocco.  
  
 Per le funzioni seguenti, la variabile di blocco deve avere tipo **omp_nest_lock_t**.  Questa variabile deve essere accessibile solo tramite queste funzioni. Tutte le funzioni di omp_nest_lock_t richiedono un argomento che dispone di un puntatore a **omp_nest_lock_t** tipo.  
  
-   Il `omp_init_nest_lock` funzione Inizializza un blocco annidabile.  
  
-   Il `omp_destroy_nest_lock` funzione rimuove un blocco annidabile.  
  
-   Il `omp_set_nest_lock` funzione attende fino a quando non è disponibile un blocco annidabile.  
  
-   Il `omp_unset_nest_lock` funzione rilascia un blocco annidabile.  
  
-   Il `omp_test_nest_lock` funzione verifica di un blocco annidabile.  
  
 Le funzioni di blocco OpenMP accedono alla variabile di blocco in modo che possano sempre leggere e aggiornare il valore della variabile di blocco più recente. Pertanto, non è necessario per includere esplicita di un programma OpenMP **scaricamento** direttive per assicurarsi che il blocco valore della variabile sia coerenza fra thread diversi. (In potrebbe essere necessario per **scaricamento** direttive per rendere i valori di altre variabili coerente.)