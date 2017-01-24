---
title: "or_eq | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apilocation: 
  - "msvcrt.dll"
  - "msvcr80.dll"
  - "msvcr90.dll"
  - "msvcr100.dll"
  - "msvcr100_clr0400.dll"
  - "msvcr110.dll"
  - "msvcr110_clr0400.dll"
  - "msvcr120.dll"
  - "msvcr120_clr0400.dll"
  - "ucrtbase.dll"
apitype: "DLLExport"
f1_keywords: 
  - "std::or_eq"
  - "or_eq"
  - "std.or_eq"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "or_eq (funzione)"
ms.assetid: 1eb92464-ed58-40d8-a30e-f0a6aa2f4318
caps.latest.revision: 12
caps.handback.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# or_eq
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Alternativa all'operatore &#124;\=.  
  
## Sintassi  
  
```  
  
#define or_eq |=  
  
```  
  
## Note  
 La macro restituisce l'operatore &#124;\=.  
  
## Esempio  
  
```  
// iso646_oreq.cpp  
// compile with: /EHsc  
#include <iostream>  
#include <iso646.h>  
  
int main( )  
{  
   using namespace std;  
   int a = 3, b = 2, result;  
  
   result= a |= b;  
   cout << result << endl;  
  
   result= a or_eq b;  
   cout << result << endl;  
}  
```  
  
  **3**  
**3**   
## Requisiti  
 **Intestazione:** \<iso646.h\>