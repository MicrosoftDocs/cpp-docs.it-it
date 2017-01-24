---
title: "Errore del compilatore C3011 | Microsoft Docs"
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
  - "C3011"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3011"
ms.assetid: 24c3a917-ebff-4deb-9155-23adf6468531
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C3011
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

assembly inline non consentito direttamente in un'area parallela  
  
 Un'area parallela `omp` non può contenere istruzioni di assembly inline.  
  
 L'esempio seguente genera l'errore C3011:  
  
```  
// C3011.cpp // compile with: /openmp // processor: /x86 int main() { int   n = 0; #pragma omp parallel { _asm mov eax, n   // Delete this line to resolve this error. }   // C3011 }  
```