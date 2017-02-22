---
title: "Errore del compilatore C3005 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C3005"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3005"
ms.assetid: 30bad565-e79f-4c3f-82cb-a74bd0baab8f
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# Errore del compilatore C3005
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'error\_text': rilevato token imprevisto nella direttiva 'directive' OpenMP  
  
 Una direttiva OpenMP non è stata creata nel formato corretto.  
  
 L'esempio seguente genera l'errore C3005:  
  
```  
// C3005.c // compile with: /openmp int main() { #pragma omp parallel + for   // C3005 }  
```  
  
 C3005 può verificarsi anche se si inserisce una parentesi graffa di apertura nella stessa riga del pragma.  
  
```  
// C3005b.c // compile with: /openmp int main() { #pragma omp parallel {   // C3005 put open brace on next line lbl2:; } goto lbl2; }  
```