---
title: "Un&#39;applicazione multithread pu&#242; accedere a una DLL MFC in diversi thread? | Microsoft Docs"
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
helpviewer_keywords: 
  - "DLL [C++], multithreading"
  - "DLL MFC [C++], multithreading"
  - "multithreading [C++], DLL"
  - "threading [MFC], DLL"
ms.assetid: e3452e62-021e-4d23-9cce-cff41eb8b46b
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Un&#39;applicazione multithread pu&#242; accedere a una DLL MFC in diversi thread?
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Le applicazioni multithread possono accedere alle DLL regolari collegate a MFC in modo dinamico e alle DLL di estensione da thread diversi.  A partire da Visual C\+\+ versione 4.2, un'applicazione può accedere alle DLL regolari collegate a MFC in modo statico da più thread creati nell'applicazione.  
  
 Nelle versioni precedenti alla 4.2, solo un thread esterno poteva connettersi a una DLL regolare collegata a MFC in modo statico.  Per ulteriori informazioni sulle restrizioni relative all'accesso alle DLL regolari collegate a MFC in modo statico da più thread nelle versioni di Visual C\+\+ precedenti alla 4.2, vedere l'articolo della Knowledge Base "Multiple Threads and MFC \_USRDLLs" \(Q122676\) \(informazioni in lingua inglese\).  
  
 Tenere presente che il termine USRDLL non è più utilizzato nella documentazione di Visual C\+\+.  Una DLL regolare collegata in modo statico a MFC possiede le stesse caratteristiche di USRDLL.  
  
## Vedere anche  
 [Domande frequenti relative alle DLL](../build/dll-frequently-asked-questions.md)