---
title: "Utilizzo dello stack | Microsoft Docs"
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
ms.assetid: 383f0072-0438-489f-8829-cca89582408c
caps.latest.revision: 9
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Utilizzo dello stack
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Tutta la memoria al di sopra dell'indirizzo corrente di RSP è considerata volatile. Questo significa che il sistema operativo o un debugger può sovrascrivere questa memoria durante una sessione di debug dell'utente o la gestione di un interrupt.  Di conseguenza, RSP deve essere sempre impostato prima di tentare di leggere o scrivere i valori in uno stack frame.  
  
 In questa sezione vengono illustrate l'allocazione di un'area dello stack per le variabili locali e la funzione intrinseca **alloca**.  
  
-   [Allocazione nello stack](../build/stack-allocation.md)  
  
-   [Costruzione dinamica dell'area dello stack di parametri](../build/dynamic-parameter-stack-area-construction.md)  
  
-   [Tipi di funzioni](../build/function-types.md)  
  
-   [Allineamento malloc](../build/malloc-alignment.md)  
  
-   [alloca](../build/alloca.md)  
  
## Vedere anche  
 [Convenzioni del software x64](../build/x64-software-conventions.md)