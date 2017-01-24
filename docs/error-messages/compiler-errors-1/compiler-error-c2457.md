---
title: "Errore del compilatore C2457 | Microsoft Docs"
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
  - "C2457"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2457"
ms.assetid: 347e169d-23ad-434f-8836-5b09b53980ff
caps.latest.revision: 10
caps.handback.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2457
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'macro': una macro predefinita non può apparire all'esterno del corpo di una funzione  
  
 Si è tentato di utilizzare una macro predefinita, come [\_\_FUNCTION\_\_](../../preprocessor/predefined-macros.md), in uno spazio globale.  
  
## Esempio  
 Il seguente codice di esempio genera l'errore C2457:  
  
```  
// C2457.cpp  
#include <stdio.h>  
  
__FUNCTION__;   // C2457, cannot be global  
  
int main()   
{  
    printf_s("\n%s",__FUNCTION__);   // OK  
}  
```