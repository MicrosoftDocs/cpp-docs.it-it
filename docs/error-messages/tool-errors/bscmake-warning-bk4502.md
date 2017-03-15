---
title: "Avviso BK4502 di BSCMAKE | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "BK4502"
  - "BK1513"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "BK1513"
  - "BK4502"
ms.assetid: ee412ec8-df03-4cdb-91ee-5d609ded8691
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Avviso BK4502 di BSCMAKE
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

file SBR "nomefile" non presente in "nomefile"  
  
 Un file SBR di lunghezza zero che non faceva parte del file BSC originale è stato specificato nel corso di un aggiornamento.  
  
### Possibili cause  
  
1.  È stato specificato un nome file errato.  
  
2.  Il file è stato eliminato. \(Risultati dell'errore [BK1513](../../error-messages/tool-errors/bscmake-error-bk1513.md)\).  
  
3.  Il file è danneggiato e BSCMAKE deve eseguire una compilazione completa.