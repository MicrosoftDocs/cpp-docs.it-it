---
title: "true (C++) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "true_cpp"
  - "true"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "true (parola chiave) [C++]"
ms.assetid: 96be2a70-51c3-4250-9752-874d25a5a11e
caps.latest.revision: 12
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# true (C++)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

## Sintassi  
  
```  
  
        bool-identifier = true ;  
bool-expression logical-operator true ;  
```  
  
## Note  
 Questa parola chiave è uno dei due valori di una variabile di tipo [bool](../cpp/bool-cpp.md) o di un'espressione condizionale \(un'espressione condizionale è ora un'espressione booleana true\).  Se `i` è di tipo `bool`, l'istruzione `i = true;` assegnare **true** a `i`.  
  
## Esempio  
  
```  
// bool_true.cpp  
#include <stdio.h>  
int main()  
{  
    bool bb = true;  
    printf_s("%d\n", bb);  
    bb = false;  
    printf_s("%d\n", bb);  
}  
```  
  
  **1**  
**0**   
## Vedere anche  
 [Parole chiave C\+\+](../cpp/keywords-cpp.md)