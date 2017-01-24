---
title: "Errore del compilatore C3032 | Microsoft Docs"
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
  - "C3032"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3032"
ms.assetid: 6a92bd8e-319f-4a99-aef4-a9021f6f9928
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C3032
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'var': la variabile nella clausola 'clause' non può avere il tipo incompleto 'type'  
  
 I tipi passati a determinate clausole devono essere completamente visibili al compilatore.  
  
 L'esempio seguente genera l'errore C3032:  
  
```  
// C3032.cpp // compile with: /openmp /link vcomps.lib #include "omp.h" struct Incomplete; extern struct Incomplete inc; int main() { int i = 9; #pragma omp parallel private(inc)   // C3032 ; #pragma omp parallel private(i)     // OK ; }  
```