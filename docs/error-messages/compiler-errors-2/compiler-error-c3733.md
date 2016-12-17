---
title: "Errore del compilatore C3733 | Microsoft Docs"
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
  - "C3733"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3733"
ms.assetid: 0cc1a9fe-1400-4be3-b35a-16435cba7a5a
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C3733
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'evento': sintassi non corretta per la specifica di un evento COM. Si è omesso '\_\_interface'?  
  
 È stata utilizzata una sintassi errata per un evento COM.  Per correggere l'errore, modificare il tipo di evento o utilizzare la sintassi in conformità alle regole degli eventi COM.  
  
 Il seguente codice di esempio genera l'errore C3733:  
  
```  
#define _ATL_ATTRIBUTES 1  
#include "atlbase.h"  
#include "atlcom.h"  
  
[coclass, event_source(com), // change 'com' to 'native' to resolve  
uuid("00000000-0000-0000-0000-000000000001")]  
class A  
{  
   __event void func();   // C3733  
};  
  
int main()  
{  
}  
```