---
title: "bitor | Microsoft Docs"
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
  - "bitor"
  - "std.bitor"
  - "std::bitor"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "bitor (funzione)"
ms.assetid: 3c0a3711-9c74-41f2-b400-2f7797da30d1
caps.latest.revision: 12
caps.handback.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# bitor
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Alternativa all'operatore &#124;.  
  
## Sintassi  
  
```  
  
#define bitor |  
  
```  
  
## Note  
 La macro restituisce l'operatore &#124;.  
  
## Esempio  
  
```  
// iso646_bitor.cpp  
// compile with: /EHsc  
#include <iostream>  
#include <iso646.h>  
  
int main( )  
{  
   using namespace std;  
   int a = 1, b = 2, result;  
  
   result = a | b;  
   cout << result << endl;  
  
   result= a bitor b;  
   cout << result << endl;  
}  
```  
  
  **3**  
**3**   
## Requisiti  
 **Intestazione:** \<iso646.h\>