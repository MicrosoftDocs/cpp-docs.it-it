---
title: "Errore irreversibile C1002 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C1002"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C1002"
ms.assetid: bd6d274a-c7b4-43af-8bf2-23c5e442aa22
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# Errore irreversibile C1002
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Il compilatore ha esaurito lo spazio dell'heap durante la fase 2  
  
 Nel compilatore è stato esaurito lo spazio di memoria dinamica durante la seconda fase, probabilmente a causa di un programma con troppi simboli o espressioni complesse.  
  
### Per correggere valutando le seguenti possibili soluzioni  
  
1.  Suddividere il file di origine in più file di dimensioni inferiori.  
  
2.  Suddividere le espressioni in sottoespressioni più piccole.  
  
3.  Rimuovere altri programmi o driver che utilizzano memoria.