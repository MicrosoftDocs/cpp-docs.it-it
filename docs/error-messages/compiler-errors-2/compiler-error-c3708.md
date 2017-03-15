---
title: "Errore del compilatore C3708 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C3708"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3708"
ms.assetid: 45e71564-9c7f-437f-98d8-a735ce162ed0
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Errore del compilatore C3708
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'interfaccia': utilizzo di 'parola chiave' non corretto. Utilizzare su un membro di un'origine eventi compatibile  
  
 Per dichiarare un'interfaccia come evento, è necessario che la dichiarazione dell'evento si trovi in un'origine eventi.  
  
 Il seguente codice di esempio genera l'errore C3708:  
  
```  
// C3708.cpp  
// compile with: /c  
#define _ATL_ATTRIBUTES 1  
#include "atlbase.h"  
#include "atlcom.h"  
  
[ module(name="MyLibrary")];  
  
[ object, uuid("00000000-0000-0000-0000-000000000001") ]  
__interface I {  
   HRESULT func();  
};  
  
[ object, uuid("00000000-0000-0000-0000-000000000002") ]  
__interface II {  
   HRESULT func();  
};  
  
__event __interface I;   // C3708  
  
// put the event in an event source  
[ coclass, event_source(com), uuid("00000000-0000-0000-0000-000000000003") ]  
struct E : II {  
   __event __interface II;  
};  
```