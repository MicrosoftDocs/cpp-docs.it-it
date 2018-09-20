---
title: 3.2 funzioni di blocco | Microsoft Docs
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
ms.openlocfilehash: 97f125129d4b35586111f3d4092d457560aaebec
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46412275"
---
# <a name="32-lock-functions"></a>3.2 Funzioni lock

Le funzioni descritte in questa sezione modificano i blocchi utilizzati per la sincronizzazione.

Per le funzioni seguenti, la variabile di blocco deve avere tipo **omp_lock_t**. Questa variabile deve essere accessibile solo queste funzioni. Tutte le funzioni di blocco richiedono un argomento che dispone di un puntatore a **omp_lock_t** tipo.

- Il `omp_init_lock` funzione Inizializza un blocco semplice.

- Il `omp_destroy_lock` funzione rimuove un blocco semplice.

- Il `omp_set_lock` funzione attende fino a quando non è disponibile un blocco semplice.

- Il `omp_unset_lock` funzione rilascia un blocco semplice.

- Il `omp_test_lock` funzione verifica blocco semplice.

Per le funzioni seguenti, la variabile di blocco deve avere tipo **omp_nest_lock_t**.  Questa variabile deve essere accessibile solo queste funzioni. Tutte le funzioni di blocco annidabile richiedono un argomento che dispone di un puntatore a **omp_nest_lock_t** tipo.

- Il `omp_init_nest_lock` funzione Inizializza un blocco annidabile.

- Il `omp_destroy_nest_lock` funzione rimuove un blocco annidabile.

- Il `omp_set_nest_lock` funzione attende fino a quando un blocco annidabile è disponibile.

- Il `omp_unset_nest_lock` funzione rilascia un blocco annidabile.

- Il `omp_test_nest_lock` funzione verifica un blocco annidabile.

Le funzioni di blocco OpenMP accedono alla variabile di blocco in modo che possano sempre leggere e aggiornare il valore massimo corrente della variabile di blocco. Pertanto, non è necessaria un programma di OpenMP per includere espliciti **flush** direttive per assicurarsi che il blocco valore della variabile sia coerenza tra diversi thread. (Potrebbe esserci una necessità **flush** direttive per rendere coerente con i valori di altre variabili.)