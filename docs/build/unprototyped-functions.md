---
title: "Funzioni senza prototipo | Microsoft Docs"
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
ms.assetid: 34200b8c-5b52-4f0d-aff8-9f70d82868ed
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Funzioni senza prototipo
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Per le funzioni senza prototipo, il chiamante passerà i valori integer come integer e i valori in virgola mobile come valori con precisione doppia.  Soltanto per i valori in virgola mobile, sia il registro integer che quello in virgola mobile conterranno il valore float se il chiamato si aspetta il valore nei registri integer.  
  
```  
func1();  
func2() {   // RCX = 2, RDX = XMM1 = 1.0, and R8 = 7  
   func1(2, 1.0, 7);  
}  
```  
  
## Vedere anche  
 [Convenzione di chiamata](../build/calling-convention.md)