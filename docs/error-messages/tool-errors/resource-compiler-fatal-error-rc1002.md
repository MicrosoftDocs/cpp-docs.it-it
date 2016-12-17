---
title: "Errore irreversibile del compilatore di risorse RC1002 | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "RC1002"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "RC1002"
ms.assetid: b43dfece-0dc3-4d0b-9d8f-509699b9ae80
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore irreversibile del compilatore di risorse RC1002
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

spazio dell'heap insufficiente  
  
### Per correggere valutando le seguenti possibili soluzioni  
  
1.  Aumentare lo spazio disponibile per il file di scambio di Windows.  Per ulteriori informazioni sulle modalità di aumento dello spazio per il file di scambio, vedere gli argomenti relativi alla memoria virtuale nella Guida di Windows.  
  
2.  Dividere il file corrente in più file e compilare questi ultimi separatamente.  
  
3.  Rimuovere altri programmi o driver in esecuzione nel sistema.