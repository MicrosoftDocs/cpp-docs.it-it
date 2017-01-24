---
title: "Avviso del compilatore (livello 1) C4185 | Microsoft Docs"
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
  - "C4185"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4185"
ms.assetid: 37e7063a-35b1-4e05-ae31-e811dced02b9
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 1) C4185
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

l'attributo \#import sconosciuto 'attribute' verrà ignorato  
  
 L'attributo non è un attributo valido di `#import`. Ignorato.  
  
## Esempio  
  
```  
// C4185.cpp // compile with: /W1 /c #import "stdole2.tlb" no_such_attribute   // C4185  
```