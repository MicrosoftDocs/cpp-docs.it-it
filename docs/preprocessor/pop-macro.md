---
title: "pop_macro | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc-pragma.pop_macro"
  - "pop_macro_CPP"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "pop_macro (pragma)"
  - "pragma, pop_macro"
ms.assetid: 3b5489d0-69ba-4c66-b572-2748af0f12bb
caps.latest.revision: 11
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# pop_macro
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Imposta il valore della macro *macro\_name* sul valore nella parte superiore dello stack per questa macro.  
  
## Sintassi  
  
```  
  
#pragma pop_macro("  
macro_name  
")  
  
```  
  
## Note  
 È necessario generare una [push\_macro](../preprocessor/push-macro.md) per *macro\_name* prima di poter eseguire una **pop\_macro**.  
  
## Esempio  
  
```  
// pragma_directives_pop_macro.cpp  
// compile with: /W1  
#include <stdio.h>  
#define X 1  
#define Y 2  
  
int main() {  
   printf("%d",X);  
   printf("\n%d",Y);  
   #define Y 3   // C4005  
   #pragma push_macro("Y")  
   #pragma push_macro("X")  
   printf("\n%d",X);  
   #define X 2   // C4005  
   printf("\n%d",X);  
   #pragma pop_macro("X")  
   printf("\n%d",X);  
   #pragma pop_macro("Y")  
   printf("\n%d",Y);  
}  
```  
  
  **1**  
**2**  
**1**  
**2**  
**1**  
**3**   
## Vedere anche  
 [Direttive pragma e parola chiave \_\_Pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)