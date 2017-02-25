---
title: "Scrittura di un gestore di terminazione | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "gestione eccezioni, gestori di terminazione"
  - "eccezioni, chiusura"
  - "gestori"
  - "gestori, chiusura"
  - "gestione eccezioni strutturata, gestori di terminazione"
  - "gestori di terminazione"
  - "gestori di terminazione, scrittura"
  - "try-catch (parola chiave) [C++], gestori di terminazione"
ms.assetid: 52aa1f8f-f8dd-44b8-be94-5e2fc88d44fb
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# Scrittura di un gestore di terminazione
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

A differenza di un gestore eccezioni, un gestore terminazioni viene eseguito sempre, indipendentemente dal fatto che il blocco di codice protetto venga terminato normalmente o meno.  L'unico obiettivo del gestore terminazioni deve essere di assicurarsi che le risorse, quali memoria, handle e file, vengano chiuse correttamente, indipendentemente da come una sezione di codice completa l'esecuzione.  
  
 I gestori terminazioni utilizzano l'istruzione try\-finally.  
  
## Scegliere l'argomento su cui visualizzare maggiori informazioni  
  
-   [Istruzione try\-finally](../cpp/try-finally-statement.md)  
  
-   [Pulizia delle risorse](../cpp/cleaning-up-resources.md)  
  
-   [Tempi delle azioni nella gestione delle eccezioni](../cpp/timing-of-exception-handling-a-summary.md)  
  
-   [Restrizioni relative ai gestori terminazioni](../cpp/restrictions-on-termination-handlers.md)  
  
## Vedere anche  
 [Gestione strutturata delle eccezioni](../cpp/structured-exception-handling-c-cpp.md)