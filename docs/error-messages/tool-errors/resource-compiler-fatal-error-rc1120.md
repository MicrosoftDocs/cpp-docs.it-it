---
title: "Errore irreversibile del compilatore di risorse RC1120 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "RC1120"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "RC1120"
ms.assetid: 4e462931-e42e-42e3-8bfc-847677194286
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# Errore irreversibile del compilatore di risorse RC1120
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Memoria insufficiente; necessari numero byte.  
  
 Lo spazio disponibile nello heap del compilatore di risorse è esaurito.  La causa più frequente è la presenza di troppi simboli.  
  
### Per correggere valutando le seguenti possibili soluzioni  
  
1.  Aumentare lo spazio disponibile per il file di scambio di Windows.  Per ulteriori informazioni sulle modalità di aumento dello spazio per il file di scambio, vedere gli argomenti relativi alla memoria virtuale nella Guida di Windows.  
  
2.  Eliminare i file di inclusione non necessari, in particolare `#define` e prototipi di funzione non richiesti.  
  
3.  Dividere il file corrente in due o più file e compilare questi ultimi separatamente.  
  
4.  Eliminare altri programmi o driver in esecuzione nel sistema che potrebbero utilizzare molta memoria.