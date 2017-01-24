---
title: "Errore del compilatore C2148 | Microsoft Docs"
ms.custom: ""
ms.date: "11/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2148"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2148"
ms.assetid: e510c2c9-7b57-4ce8-be03-ba363e2cc5d9
caps.latest.revision: 12
caps.handback.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2148
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

la dimensione complessiva della matrice non deve superare 0x7fffffff byte  
  
 Una matrice supera il limite.  Ridurre la dimensione della matrice.  
  
## Esempio  
 Il seguente codice di esempio genera l'errore C2148:  
  
```  
// C2148.cpp  
#include <stdio.h>  
#include <stdlib.h>  
  
int main( ) {  
   char MyArray[0x7ffffffff];   // C2148  
   char * MyArray2 = (char *)malloc(0x7fffffff);  
  
   if (MyArray2)  
      printf_s("It worked!");  
   else  
      printf_s("It didn't work.");  
}  
```