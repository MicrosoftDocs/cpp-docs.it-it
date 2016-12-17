---
title: "Avviso del compilatore (livello 1) C4174 | Microsoft Docs"
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
  - "C4174"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4174"
ms.assetid: 63301e51-24bc-43c4-bb11-252f7d513e9e
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 1) C4174
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'name': non disponibile come componente \#pragma  
  
## Esempio  
  
```  
// C4174.cpp // compile with: /W1 #pragma component(info)  // C4174; unknown #pragma component(browser, off)  // turn off browse info int main() { }  
```