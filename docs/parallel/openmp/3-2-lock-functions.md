---
title: 3.2 bloccare funzioni | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: 0ec855c6-55a9-49d7-bee4-5edae6e86a1b
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: cd788b0ef1c72b1f38a44ee608ce0c7760e24adc
ms.sourcegitcommit: 7019081488f68abdd5b2935a3b36e2a5e8c571f8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
ms.locfileid: "33696253"
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