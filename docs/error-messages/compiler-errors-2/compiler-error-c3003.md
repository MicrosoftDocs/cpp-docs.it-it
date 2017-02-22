---
title: "Errore del compilatore C3003 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C3003"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3003"
ms.assetid: 22e74f99-bb7f-4518-ab0d-934d5d49bcc7
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# Errore del compilatore C3003
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'directive': nomi di direttiva OpenMP non consentiti dopo clausole di direttiva  
  
 Il nome della direttiva OpenMP non può seguire una clausola directive OpenMP.  
  
 L'esempio seguente genera l'errore C3003:  
  
```  
// C3003.c // compile with: /openmp int main() { int x, y, z; #pragma omp parallel shared(x, y, z) for   // C3003 }  
```