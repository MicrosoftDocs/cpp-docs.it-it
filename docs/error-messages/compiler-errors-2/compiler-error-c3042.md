---
title: "Errore del compilatore C3042 | Microsoft Docs"
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
  - "C3042"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3042"
ms.assetid: bf73f61e-5bd2-40a8-9b06-6244e6a15a41
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C3042
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

le clausole 'copyprivate' e 'nowait' non possono apparire contemporaneamente nella direttiva 'directive' OpenMP  
  
 Le clausole [copyprivate](../../parallel/openmp/reference/copyprivate.md) e [nowait](../../parallel/openmp/reference/nowait.md) si escludono a vicenda nella direttiva specificata. Per correggere questo errore, rimuovere una o entrambe le clausole `copyprivate` e `nowait`.  
  
 L'esempio seguente genera l'errore C3042:  
  
```  
// C3042.cpp // compile with: /openmp /c #include <stdio.h> #include "omp.h" double d; int main() { #pragma omp parallel private(d) { #pragma omp single copyprivate(d) nowait   // C3042 { } } }  
```