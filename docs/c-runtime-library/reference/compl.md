---
title: "compl | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "compl"
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
  - "std::compl"
  - "std.compl"
  - "compl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "compl (funzione)"
ms.assetid: e03f6fb5-cb8b-4afa-99c0-905f4105fb34
caps.latest.revision: 12
caps.handback.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# compl
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Alternativa all'operatore ~.  
  
## Sintassi  
  
```  
  
#define compl ~  
  
```  
  
## Note  
 La macro restituisce l'operatore ~.  
  
## Esempio  
  
```  
// iso646_compl.cpp  
// compile with: /EHsc  
#include <iostream>  
#include <iso646.h>  
  
int main( )  
{  
   using namespace std;  
   int a = 1, result;  
  
   result = ~a;  
   cout << result << endl;  
  
   result= compl(a);  
   cout << result << endl;  
}  
```  
  
  **\-2**  
**\-2**   
## Requisiti  
 **Intestazione:** \<iso646.h\>