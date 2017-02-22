---
title: "Scrittura di un gestore di eccezioni | Microsoft Docs"
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
  - "gestione eccezioni, gestori eccezioni"
  - "gestione eccezioni strutturata, gestori eccezioni"
ms.assetid: 71473fee-f773-4a34-bf12-82a3af79579c
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# Scrittura di un gestore di eccezioni
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

I gestori di eccezioni vengono in genere utilizzati per risolvere errori specifici.  È possibile utilizzare la sintassi relativa alla gestione delle eccezioni per filtrare le eccezioni diverse da quelle che si è in grado di gestire.  Le altre eccezioni devono essere passate ad altri gestori \(possibilmente nella libreria di runtime o nel sistema operativo\) progettati in modo da cercare tali eccezioni specifiche.  
  
 I gestori delle eccezioni utilizzano l'istruzione try\-except.  
  
## Scegliere l'argomento su cui visualizzare maggiori informazioni  
  
-   [Istruzione try\-except](../cpp/try-except-statement.md)  
  
-   [Scrittura di un filtro eccezioni](../cpp/writing-an-exception-filter.md)  
  
-   [Generazione di eccezioni software](../cpp/raising-software-exceptions.md)  
  
-   [Eccezioni hardware:](../cpp/hardware-exceptions.md)  
  
-   [Restrizioni relative ai gestori di eccezioni](../cpp/restrictions-on-exception-handlers.md)  
  
## Vedere anche  
 [Gestione strutturata delle eccezioni](../cpp/structured-exception-handling-c-cpp.md)