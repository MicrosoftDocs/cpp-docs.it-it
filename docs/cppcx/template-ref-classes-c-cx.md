---
title: "Classi di riferimento del modello (C++/CX) | Microsoft Docs"
ms.custom: ""
ms.date: "01/22/2017"
ms.prod: "windows-client-threshold"
ms.technology: ""
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "article"
ms.assetid: a24d5f45-8dbb-4540-958f-c76c90d8ed93
caps.latest.revision: 15
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
caps.handback.revision: 15
---
# Classi di riferimento del modello (C++/CX)
I modelli C\+\+ non vengono pubblicati nei metadati e pertanto non dispongono di accessibilità pubblica o protetta nel programma. Puoi, tuttavia, utilizzare i modelli C\+\+ standard internamente nel programma. Inoltre, puoi definire una classe privata di riferimento privata come modello e dichiarare una classe di riferimento del modello specializzata in modo esplicito come membro privato in una classe di riferimento pubblica.  
  
## Creazione di modelli di classe di riferimento  
 Di seguito viene illustrato come dichiarare una classe di riferimento privata come modello, come dichiarare un modello C\+\+ standard e come dichiararli entrambi come membri in una classe di riferimento pubblica. Il modello C\+\+ standard può essere specializzato mediante un tipo [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)], in questo caso Platform::String^.  
  
 [!code-cpp[cx_templates#01](../snippets/cpp/VS_Snippets_Misc/cx_templates/cpp/class1.h#01)]  
  
## Vedere anche  
 [Sistema di tipi \(C\+\+\/CX\)](../cppcx/type-system-c-cx.md)   
 [Riferimenti al linguaggio Visual C\+\+](../cppcx/visual-c-language-reference-c-cx.md)   
 [Riferimenti a spazi dei nomi](../cppcx/namespaces-reference-c-cx.md)