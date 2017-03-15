---
title: "Errore del compilatore C3008 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C3008"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3008"
ms.assetid: 04d93201-28e5-4be0-945c-aad616376f4b
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# Errore del compilatore C3008
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'arg': nell'argomento manca il carattere '\)' di chiusura nella direttiva 'directive' OpenMP  
  
 Una direttiva OpenMP che accetta un argomento non contiene una parentesi di chiusura.  
  
 L'esempio seguente genera l'errore C3008:  
  
```  
// C3008.c // compile with: /openmp int main() { int x, y, z; #pragma omp parallel shared(x   // C3008 // Try the following line instead: #pragma omp parallel shared(x) { } }  
```