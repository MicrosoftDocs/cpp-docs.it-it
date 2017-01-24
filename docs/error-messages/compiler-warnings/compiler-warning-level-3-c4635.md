---
title: "Avviso del compilatore (livello 3) C4635 | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C4635"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4635"
ms.assetid: b2ba90de-c093-4a76-8076-b65878467574
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 3) C4635
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

commento al documento XML di destinazione: XML in formato non valido: motivo  
  
 Il compilatore ha rilevato alcuni problemi con i tag XML.  Correggere il problema e ricompilare  
  
 L'esempio seguente genera l'errore C4635:  
  
```  
// C4635.cpp // compile with: /doc /clr /W3 /c /// <summary> /// The contents of the folder have changed. /// <summary/>   // C4635 // try the following line instead // /// </summary> public ref class Test {};  
```  
  
 L'output relativo a questo esempio è: **Il tag finale 'member' non corrisponde al tag iniziale 'summary'**.  
  
 Il problema in questo esempio è che il tag di fine per \<riepilogo\> non è sufficiente e il compilatore non lo riconosce come il tag di fine \<riepilogo\>.  Il tag \<membro\> viene incorporato nel file xdc dal compilatore in tutte le compilazioni \/doc.  Il problema, in questo caso, dipende dal fatto che il tag di fine \<\/membro\> non corrisponde al precedente tag di inizio elaborato dal compilatore \(\<riepilogo\>\).