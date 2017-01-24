---
title: "Utilizzo della gestione strutturata delle eccezioni con C++ | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "gestione delle eccezioni di C++, mista con SEH"
  - "gestione eccezioni strutturata, gestione delle eccezioni di C++"
ms.assetid: ec34b528-8c26-4429-b24a-6a68553aaa91
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Utilizzo della gestione strutturata delle eccezioni con C++
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La gestione delle eccezioni strutturata descritta in questi articoli funziona con file di origine in C\+\+ e in C.  Tuttavia, non è progettata specificatamente per C\+\+ e non è consigliabile l'utilizzo.  È possibile garantire maggiore portabilità del codice tramite la gestione delle eccezioni C\+\+.  Inoltre, il meccanismo di gestione delle eccezioni C\+\+ è più flessibile, in quanto può gestire eccezioni di qualsiasi tipo.  
  
 Microsoft C\+\+ adesso supporta il modello di gestione delle eccezioni C\+\+, basato sullo standard ANSI C\+\+.  Questo meccanismo gestisce automaticamente l'eliminazione di oggetti locali durante lo svuotamento dello stack.  Se si scrive un codice C\+\+ a tolleranza d'errore e si desidera implementare la gestione delle eccezioni, si consiglia vivamente di utilizzare la gestione delle eccezioni C\+\+, anziché la gestione delle eccezioni strutturata. Si noti che mentre il compilatore C\+\+ supporta i costrutti di gestione delle eccezioni strutturata come descritto in questi articoli, il compilatore C standard non supporta la sintassi di gestione delle eccezioni C\+\+. Per informazioni dettagliate sulla gestione delle eccezioni C\+\+, vedere [Gestione eccezioni C\+\+](../cpp/cpp-exception-handling.md) e il *Manuale di rifermento C\+\+ annotato* di Margaret Ellis e Bjarne Stroustrup.  
  
## Vedere anche  
 [Gestione strutturata delle eccezioni](../cpp/structured-exception-handling-c-cpp.md)