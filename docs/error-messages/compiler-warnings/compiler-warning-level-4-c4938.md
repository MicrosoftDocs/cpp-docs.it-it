---
title: "Avviso del compilatore (livello 4) C4938 | Microsoft Docs"
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
  - "C4938"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4938"
ms.assetid: 6acac81a-9d23-465e-b700-ed4b6e8edcd0
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 4) C4938
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'var': la variabile di riduzione a virgola mobile può causare risultati incoerenti in \/fp:strict o \#pragma fenv\_access  
  
 È consigliabile non usare [\/fp:strict](../../build/reference/fp-specify-floating-point-behavior.md) o [fenv\_access](../../preprocessor/fenv-access.md) con riduzioni a virgola mobile OpenMP perché la somma viene calcolata in un ordine diverso. I risultati possono quindi essere diversi rispetto ai risultati senza \/openmp.  
  
 L'esempio seguente genera l'errore C4938:  
  
```  
// C4938.cpp // compile with: /openmp /W4 /fp:strict /c // #pragma fenv_access(on) extern double *a; double test(int first, int last) { double sum = 0.0; #pragma omp parallel for reduction(+: sum)   // C4938 for (int i = first ; i <= last ; ++i) sum += a[i]; return sum; }  
```  
  
 Senza parallelizzazione esplicita, la somma viene calcolata come segue:  
  
```  
sum = a[first] + a[first + 1] + ... + a[last];   
```  
  
 Con la parallelizzazione esplicita \(e due thread\), la somma viene calcolata come segue:  
  
```  
sum1 = a[first] + ... a[first + last / 2]; sum2 = a[(first + last / 2) + 1] + ... a[last]; sum = sum1 + sum2;  
```