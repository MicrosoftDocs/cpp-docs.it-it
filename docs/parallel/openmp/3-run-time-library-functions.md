---
title: "3. Funzioni della libreria run-time | Microsoft Docs"
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
ms.assetid: b226e512-6822-4cbe-a2ca-74cc2bb7e880
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# 3. Funzioni della libreria run-time
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

In questa sezione vengono descritte le funzioni di libreria di runtime OpenMP C e C++. L'intestazione **\< omp.h >** dichiara due tipi, diverse funzioni che consentono di controllare l'ambiente di esecuzione parallela di query e bloccare le funzioni che possono essere utilizzate per sincronizzare l'accesso ai dati.  
  
 Il tipo di **omp_lock_t** è in grado di rappresentare un blocco è disponibile un tipo di oggetto o che un thread proprietario di un blocco. Questi blocchi vengono dette *blocchi semplici*.  
  
 Il tipo di **omp_nest_lock_t** è un tipo di oggetto in grado di rappresentare che è disponibile un blocco o l'identità del thread che possiede il blocco e un *nidificazione conteggio* (descritta di seguito). Questi blocchi vengono dette *blocchi annidabili*.  
  
 Le funzioni della libreria sono funzioni esterne con il collegamento "C".  
  
 Le descrizioni in questo capitolo sono divisi negli argomenti seguenti:  
  
-   Esecuzione di funzioni di ambiente (vedere [sezione 3.1](../../parallel/openmp/3-1-execution-environment-functions.md) nella pagina 35).  
  
-   Blocco di funzioni (vedere [sezione 3.2](../../parallel/openmp/3-2-lock-functions.md) nella pagina 41).