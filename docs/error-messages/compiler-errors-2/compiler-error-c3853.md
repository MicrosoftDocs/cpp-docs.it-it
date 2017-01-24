---
title: "Errore del compilatore C3853 | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C3853"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3853"
ms.assetid: 5b71805d-52b4-44ec-80ae-37c68d876f6a
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C3853
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'\=': non è consentito reinizializzare un riferimento o un'assegnazione mediante un riferimento a funzione  
  
 Non è possibile assegnare un riferimento tramite una funzione poiché le funzioni non sono lvalue.  
  
 Negli esempi seguenti viene generato l'errore C3853:  
  
```  
// C3853.cpp  
// compile with: /EHsc  
#include <iostream>  
int afunc(int i)  
{  
   return i;  
}  
  
typedef int (& rFunc_t)(int);  
  
int main()  
{  
   rFunc_t rf = afunc;   // OK binding a reference to function  
   rf = afunc;   // C3853, can't reassign to a ref that's an lvalue  
   int i = 99;  
   int & ri = i;  
   std::cout << i << std::endl;  
   ri = 0;   // OK, i = 88;  
   std::cout << i << std::endl;  
}  
```