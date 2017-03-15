---
title: "3.2 Lock Functions | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
ms.assetid: 0ec855c6-55a9-49d7-bee4-5edae6e86a1b
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# 3.2 Lock Functions
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Le funzioni descritte in questa sezione modificano i blocchi utilizzati per la sincronizzazione.  
  
 Per le seguenti funzioni, la variabile di blocco deve avere il tipo **omp\_lock\_t**.  Questa variabile deve essere eseguito solo con queste funzioni.  Tutte le funzioni di blocco richiedono un argomento con un puntatore **omp\_lock\_t** tipo.  
  
-   `omp_init_lock` la funzione inizializza un blocco semplice.  
  
-   `omp_destroy_lock` la funzione consente di rimuovere un blocco semplice.  
  
-   `omp_set_lock` resta in attesa di funzione fino a un blocco semplice è disponibile.  
  
-   `omp_unset_lock` la funzione libera un blocco semplice.  
  
-   `omp_test_lock` analisi funzionali un blocco semplice.  
  
 Per le seguenti funzioni, la variabile di blocco deve avere il tipo **omp\_nest\_lock\_t**.  Questa variabile deve essere eseguito solo con queste funzioni.  Tutte le funzioni di blocco nidificabili richiedono un argomento con un puntatore **omp\_nest\_lock\_t** tipo.  
  
-   `omp_init_nest_lock` la funzione inizializza un blocco nidificabile.  
  
-   `omp_destroy_nest_lock` la funzione consente di rimuovere un blocco nidificabile.  
  
-   `omp_set_nest_lock` resta in attesa di funzione fino a un blocco nidificabile è disponibile.  
  
-   `omp_unset_nest_lock` la funzione libera un blocco nidificabile.  
  
-   `omp_test_nest_lock` analisi funzionali un blocco nidificabile.  
  
 Le funzioni di blocco di OpenMP accedono alla variabile di blocco in modo tale che sempre letti e aggiornare il valore più recente della variabile del blocco.  Di conseguenza, non è necessario che un programma di OpenMP include esplicito **arrossir** direttive per garantire che il valore della variabile del blocco è coerente tra i thread diversi.  \(È possibile che si verifichi un necessarie **arrossir** direttive per rendere i valori di altre variabili coerenti.\)