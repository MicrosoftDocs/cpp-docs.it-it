---
title: "Errore irreversibile U1051 di NMAKE  | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "U1051"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "U1051"
ms.assetid: fede5cd5-dac3-47b7-b86d-e1acfb78699f
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# Errore irreversibile U1051 di NMAKE 
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

memoria insufficiente  
  
 La memoria a disposizione di NMAKE, compresa la memoria virtuale, è stata esaurita da un makefile troppo grande o complesso.  
  
### Per correggere valutando le seguenti possibili soluzioni  
  
1.  Liberare spazio su disco.  
  
2.  Aumentare la dimensione del file di paging di Windows NT o del file di scambio di Windows.  
  
3.  Se si utilizza solo una parte del makefile, dividerlo in più file o utilizzare le direttive per il preprocessore **\!IF** per limitare la quantità di dati da far elaborare a NMAKE.  Le direttive **\!IF** comprendono **\!IF**, `!IFDEF`, **\!IFNDEF**, **\!ELSE IF**, **\!ELSE** `IFDEF` e **\!ELSE** `IFNDEF`.