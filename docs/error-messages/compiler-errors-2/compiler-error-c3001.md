---
title: "Errore del compilatore C3001 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C3001"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3001"
ms.assetid: d0e03478-1b44-47e5-8f5b-70415fa1f8bc
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Errore del compilatore C3001
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'error\_text': previsto un nome di direttiva OpenMP  
  
 Il pragma `omp` deve essere seguito da una direttiva.  
  
 L'esempio seguente genera l'errore C3001:  
  
```  
// C3001.c // compile with: /openmp int main() { #pragma omp   // C3001 missing token }  
```