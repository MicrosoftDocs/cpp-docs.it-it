---
title: "Definizione di una regola | Microsoft Docs"
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
  - "definizione di regole di inferenza"
  - "NMAKE (programma), regole di inferenza"
ms.assetid: 071cd092-3f2e-4065-b0fb-36a9d393cfa8
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Definizione di una regola
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

*fromext* rappresenta l'estensione di un file dipendente e *toext* quella di un file di destinazione.  
  
```  
.fromext.toext:  
   commands  
```  
  
## Note  
 Per le estensioni non viene rilevata la distinzione tra maiuscole e minuscole.  Per rappresentare *fromext* e *toext* possono essere richiamate le macro che vengono espanse durante la pre\-elaborazione.  Il punto \(.\) che precede *fromext* deve trovarsi all'inizio della riga.  I due punti \(:\) sono preceduti da zero o più spazi o tabulazioni.  Possono essere seguiti solo da spazi o tabulazioni, da un punto e virgola \(;\) per specificare un comando, da un simbolo di cancelletto \(\#\) per specificare un commento oppure da un carattere di nuova riga.  Non è consentito l'uso di altri spazi.  I comandi vengono specificati come nei blocchi di descrizione.  
  
## Scegliere l'argomento su cui visualizzare maggiori informazioni  
 [Percorsi di ricerca nelle regole](../build/search-paths-in-rules.md)  
  
## Vedere anche  
 [Regole di inferenza](../build/inference-rules.md)