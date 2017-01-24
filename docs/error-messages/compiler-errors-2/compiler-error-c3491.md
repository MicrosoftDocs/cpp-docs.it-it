---
title: "Errore del compilatore C3491 | Microsoft Docs"
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
  - "C3491"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3491"
ms.assetid: 7f0e71b2-46a0-4d25-bd09-6158a280f509
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C3491
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'var': impossibile modificare un'acquisizione per valore in un'espressione lambda non modificabile  
  
 Un'espressione lambda non modificabile non può modificare il valore di una variabile che viene acquisita per valore.  
  
### Per correggere l'errore  
  
-   Dichiarare l'espressione lambda con la parola chiave `mutable` oppure  
  
-   Passare la variabile mediante riferimento all'elenco di acquisizione dell'espressione lambda.  
  
## Esempio  
 L'esempio seguente genera l'errore C3491 perché il corpo di un'espressione lambda non modificabile modifica la variabile di acquisizione `m`:  
  
```  
// C3491a.cpp int main() { int m = 55; [m](int n) { m = n; }(99); // C3491 }  
```  
  
## Esempio  
 L'esempio seguente risolve l'errore C3491 dichiarando l'espressione lambda con la parola chiave `mutable`:  
  
```  
// C3491b.cpp int main() { int m = 55; [m](int n) mutable { m = n; }(99); }  
```  
  
## Vedere anche  
 [Espressioni lambda](../../cpp/lambda-expressions-in-cpp.md)