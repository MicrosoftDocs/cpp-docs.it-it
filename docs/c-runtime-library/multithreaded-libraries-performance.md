---
title: "Prestazioni librerie multithread | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "librerie, multithreading"
  - "librerie multithread"
  - "prestazioni, multithreading"
  - "threading [C++], prestazioni"
ms.assetid: faa5d808-087c-463d-8f0d-8c478d137296
caps.latest.revision: 4
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 4
---
# Prestazioni librerie multithread
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

CRT a thread singolo non è più disponibile.  In questo argomento viene illustrato come ottenere prestazioni ottimali dalle librerie con multithreading.  
  
## Massimizzazione delle prestazioni  
 Le prestazioni delle librerie con multithreading sono state migliorate e sono vicine alle prestazioni delle librerie a thread singolo, ora eliminate.  Per i casi in cui sono richieste prestazioni elevate, esistono alcune nuove funzionalità.  
  
-   Il blocco indipendente dal flusso consente di bloccare un flusso e di utilizzare [Funzioni \_nolock](../c-runtime-library/nolock-functions.md) per accedere direttamente al flusso.  Consente utilizzo del blocco al di fuori di cicli critici.  
  
-   Le impostazioni locali di thread riducono il costo di un accesso alle impostazioni locali per gli scenari multithreading \(vedere [\_configthreadlocale](../c-runtime-library/reference/configthreadlocale.md)\).  
  
-   Le funzioni dipendenti dalle impostazioni locali \(con nomi che terminano in \_l\) accettano le impostazioni locali come parametro, rimuovendo il costo sostanziale \(ad esempio [printf, \_printf\_l, wprintf, \_wprintf\_l](../c-runtime-library/reference/printf-printf-l-wprintf-wprintf-l.md)\).  
  
-   Le ottimizzazioni per le tabelle codici comuni riducono il costo si molte operazioni brevi.  
  
-   Definendo [\_CRT\_DISABLE\_PERFCRIT\_LOCKS](../c-runtime-library/crt-disable-perfcrit-locks.md) vengono forzate tutte le operazioni di I\/O ad ammettere un modello I\/O a thread singolo e ad utilizzare i form \_nolock delle funzioni.  Questo permette di ottenere migliori prestazioni in caso di un uso elevato di operazioni I\/O a thread singolo.  
  
-   L'esposizione di handle di heap CRT consente di attivare il Windows Low Fragmentation Heap \(LFH\) per l'heap CRT, che consente di migliorare notevolmente le prestazioni negli scenari molto grandi.  
  
## Vedere anche  
 [Funzionalità libreria CRT](../c-runtime-library/crt-library-features.md)