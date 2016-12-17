---
title: "Conflitti con il compilatore x86 | Microsoft Docs"
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
ms.assetid: 8e47f0d3-afe0-42d9-9efa-de239ddd3a05
caps.latest.revision: 9
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Conflitti con il compilatore x86
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

I tipi di dati maggiori di 4 byte non sono allineati automaticamente sullo stack quando si utilizza il compilatore x86 per compilare un'applicazione.  Poiché l'architettura per il compilatore x86 è uno stack allineato a 4 byte, qualsiasi cosa più grande di 4 byte, ad esempio, un Integer a 64 bit, non può essere allineato automaticamente a un indirizzo a 8 byte.  
  
 L'utilizzo di dati non allineati ha due implicazioni.  
  
-   È possibile che sia necessario più tempo per accedere ai percorsi non allineati rispetto ai percorsi allineati.  
  
-   Impossibile utilizzare percorsi non allineati nelle operazioni interlock.  
  
 Se si richiede un allineamento più rigido, utilizzare `__declspec(align(N)) on your variable declarations`.  In questo modo, il compilatore allinea dinamicamente lo stack per soddisfare le specifiche.  Tuttavia, la regolazione dinamica in fase di esecuzione dello stack può provocare un'esecuzione più lenta dell'applicazione.  
  
## Vedere anche  
 [Tipi e archiviazione](../build/types-and-storage.md)   
 [align](../cpp/align-cpp.md)