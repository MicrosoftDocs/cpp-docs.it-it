---
title: "Avviso del compilatore (livello 4) C4725 | Microsoft Docs"
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
  - "C4725"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4725"
ms.assetid: effa0335-71c3-4b3b-8618-da4b9b46a95d
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 4) C4725
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

l'istruzione potrebbe non risultare corretta per alcuni Pentium  
  
 Il codice contiene un'istruzione di assembly inline che potrebbe produrre risultati non precisi su alcuni microprocessori Pentium.  
  
 L'esempio seguente genera l'errore C4725:  
  
```  
// C4725.cpp // compile with: /W4 // processor: x86 double m32fp = 2.0003e-17; void f() { __asm { FDIV m32fp   // C4725 } } int main() { }  
```