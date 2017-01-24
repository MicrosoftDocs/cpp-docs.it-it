---
title: "Limiti del compilatore | Microsoft Docs"
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
  - "compilatore cl.exe, limiti per i costrutti di linguaggio"
ms.assetid: f1fa59c6-55b4-414b-80c5-3df72952160d
caps.latest.revision: 9
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Limiti del compilatore
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Nello standard C\+\+ sono consigliati i limiti per vari costrutti di linguaggio.  Di seguito sono elencati i casi in cui il compilatore di Visual C\+\+ non implementa i limiti consigliati.  Il primo numero rappresenta il limite stabilito nello standard ISO C\+\+ 11 \(INCITS\/ISO\/IEC 14882\-2011\[2012\], allegato B\) e il secondo numero rappresenta il limite implementato da Visual C\+\+:  
  
-   Livelli di annidamento di istruzioni composte, strutture di controllo di iterazione e strutture di controllo di selezione \[C\+\+ standard: 256\] \(compilatore Visual C\+\+: dipende dalla combinazione di istruzioni annidate, ma in generale tra 100 e 110\).  
  
-   Parametri in una definizione macro \[C\+\+ standard: 256\] \(compilatore Visual C\+\+: 127\).  
  
-   Argomenti in una chiamata di macro \[C\+\+ standard: 256\] \(compilatore Visual C\+\+: 127\).  
  
-   Caratteri in un valore letterale stringa di caratteri o in un valore letterale stringa a caratteri "wide" \(dopo concatenazione\) \[C\+\+ standard: 65536\] \(compilatore Visual C\+\+: 65535 caratteri a un byte, incluso il terminatore `null`, e 32767 caratteri DBCS, incluso il terminatore `null`\).  
  
-   Livelli di classe annidata, struttura o definizioni di unione in un singolo `struct-declaration-list` \[C\+\+ standard: 256\] \(compilatore Visual C\+\+: 16\).  
  
-   Inizializzatori di membro in una definizione del costruttore \[C\+\+ standard: 6144\] \(compilatore Visual C\+\+: almeno 6144\).  
  
-   Le qualificazioni dell'ambito di un identificatore \[C\+\+ standard: 256\] \(compilatore Visual C\+\+: 127\).  
  
-   Specifiche `extern` annidate \[C\+\+ standard: 1024\] \(compilatore Visual C\+\+: 9 \(senza contare la specifica `extern` interna nell'ambito globale, o 10, se si tiene conto della specifica `extern` implicita nell'ambito globale\).  
  
-   Argomenti di modello in una dichiarazione di modello \[C\+\+ standard: 1024\] \(compilatore Visual C\+\+: 2046\).  
  
## Vedere anche  
 [Comportamento non standard](../cpp/nonstandard-behavior.md)