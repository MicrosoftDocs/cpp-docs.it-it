---
title: "/Zc:trigraphs (sostituzione trigrammi) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/Zc"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/Zc (opzioni del compilatore) (C++)"
  - "Conformità (opzioni del compilatore)"
  - "Zc (opzioni del compilatore) (C++)"
  - "-Zc (opzioni del compilatore) (C++)"
ms.assetid: e3d6058f-400d-4966-a3aa-800cfdf69cbf
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# /Zc:trigraphs (sostituzione trigrammi)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Quando viene specificato **\/Zc:trigraphs**, il compilatore sostituisce una sequenza di caratteri trigrammi con un carattere di punteggiatura corrispondente.  Per disattivare la sostituzione del trigramma, specificare **\/Zc:trigraphs\-**.  Per impostazione predefinita, l'opzione **\/Zc:trigraphs** è disattivata.  
  
## Sintassi  
  
```  
/Zc:trigraphs[-]  
```  
  
## Note  
 Un trigramma è costituito da due punti interrogativi consecutivi \("??"\) seguiti da un terzo carattere univoco.  Il compilatore ad esempio sostituisce il trigramma "??\=" utilizzando il carattere '\#'.  Utilizzare i trigrammi in file di origine C che utilizzano un set di caratteri che non contiene rappresentazioni grafiche adeguate per alcuni caratteri di punteggiatura.  
  
 Per un elenco dei trigrammi C\/C\+\+ e un esempio che mostra come utilizzare i trigrammi, vedere [Trigrammi](../../c-language/trigraphs.md).  
  
## Vedere anche  
 [\/Zc \(Conformità\)](../../build/reference/zc-conformance.md)   
 [Trigrammi](../../c-language/trigraphs.md)