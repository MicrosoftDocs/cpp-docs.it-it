---
title: "Dipendenti dedotti e regole | Microsoft Docs"
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
  - "dipendenti, dedotti"
  - "dipendenti dedotti in NMAKE"
  - "regole dedotte in NMAKE"
  - "regole, dedotti"
ms.assetid: 9381e74a-53d9-445c-836d-0ff7ef6112d9
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Dipendenti dedotti e regole
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Se una regola di inferenza è applicabile, si presuppone l'esistenza di un dipendente dedotto per una destinazione.  Una regola viene applicata se:  
  
-   *toext* corrisponde all'estensione della destinazione.  
  
-   *fromext* corrisponde all'estensione di un file che ha lo stesso nome di base della destinazione e si trova nella directory corrente o in quella specificata.  
  
-   *fromext* è presente in [.SUFFIXES](../build/dot-directives.md) e nessun altro *fromext* in una regola corrispondente ha una priorità **.SUFFIXES** più alta.  
  
-   Nessun dipendente esplicito ha una priorità **.SUFFIXES** più alta.  
  
 I dipendenti dedotti possono causare effetti collaterali imprevisti.  Se nel blocco di descrizione della destinazione sono contenuti dei comandi, NMAKE esegue questi anziché quelli della regola.  
  
## Vedere anche  
 [Regole di inferenza](../build/inference-rules.md)