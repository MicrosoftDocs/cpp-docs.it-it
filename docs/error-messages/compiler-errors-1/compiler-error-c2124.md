---
title: "Errore del compilatore C2124 | Microsoft Docs"
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
  - "C2124"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2124"
ms.assetid: 93392aaa-5582-4d68-8cc5-bd9c62a0ae7e
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2124
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

divisione o mod per 0  
  
 Un'espressione costante ha un denominatore pari a zero. Per risolvere l'errore, non dividere per zero.  
  
 L'esempio seguente genera l'errore C2124:  
  
```  
// C2124.cpp int main() { int i = 1 / 0;   // C2124  do not divide by zero int i2 = 12 / 2;   // OK }  
```