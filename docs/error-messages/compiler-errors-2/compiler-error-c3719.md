---
title: "Errore del compilatore C3719 | Microsoft Docs"
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
  - "C3719"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3719"
ms.assetid: d0d59d4e-babb-4480-9ef7-70cf1a28165c
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C3719
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'interfaccia': un'origine eventi basata su un'interfaccia può essere utilizzata solo per eventi COM  
  
 È stata dichiarata un'interfaccia in un contesto non COM.  
  
 Il seguente codice di esempio genera l'errore C3719:  
  
```  
// C3719a.cpp  
#define _ATL_ATTRIBUTES 1  
#include "atlbase.h"  
#include "atlcom.h"  
  
[module(name="MyLibrary", version="1.2", helpfile="MyHelpFile")];  
  
[object]  
__interface I {  
   HRESULT func1();  
};  
  
[event_source(native), coclass]  
struct A {  
   __event __interface I;   // C3719  
  
   // try the following line instead  
   // __event func2();  
};  
  
int main() {  
}  
```  
  
 Per correggere questo errore, applicare gli attributi [object](../../windows/object-cpp.md), [coclass](../../windows/coclass.md), [event\_source](../../windows/event-source.md) e [event\_receiver](../../windows/event-receiver.md) in modo appropriato per rendere COM le classi in cui si utilizza l'interfaccia.  Di seguito è riportato un esempio.  
  
```  
// C3719b.cpp  
#define _ATL_ATTRIBUTES 1  
#include <atlbase.h>  
#include <atlcom.h>  
  
[module(name="xx")];  
[object, uuid("00000000-0000-0000-0000-000000000001")]  
__interface I {  
   HRESULT f();  
};  
  
[coclass, event_source(com) , uuid("00000000-0000-0000-0000-000000000002")]  
struct MyStruct {  
   __event __interface I;  
};  
  
[event_receiver(com)]  
struct MyStruct2 {  
   void f() {  
   }  
   MyStruct2(I* pB) {  
      __hook(&I::f, pB, &MyStruct2::f);  
   }  
};  
  
int main()  
{  
}  
```