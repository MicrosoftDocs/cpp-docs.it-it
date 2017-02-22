---
title: "Errore del compilatore C3706 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C3706"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3706"
ms.assetid: d20a33eb-d625-46c5-ac87-32075a590d07
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 9
---
# Errore del compilatore C3706
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'funzione': solo un'interfaccia COM può generare eventi COM  
  
 L'interfaccia eventi utilizzata per generare eventi COM deve essere un'interfaccia COM.  In questo caso è necessario che l'interfaccia venga definita utilizzando un attributo di Visual C\+\+ o venga importata mediante [\#import](../../preprocessor/hash-import-directive-cpp.md) da una libreria dei tipi con l'attributo embedded\_idl di \#import.  
  
 Tenere presente che le righe `#include` dei file di intestazione ATL indicate nell'esempio seguente sono necessarie per l'utilizzo degli eventi COM.  Per correggere questo errore, impostare come COM l'interfaccia `IEvents`, che genera gli eventi, applicando uno dei seguenti attributi alla definizione dell'interfaccia: [object](../../windows/object-cpp.md), [dual](../../windows/dual.md) o [dispinterface](../../windows/dispinterface.md).  
  
 Se un'interfaccia proviene da un file di intestazione generato da MIDL, il compilatore non la riconoscerà come interfaccia COM.  
  
 Il seguente codice di esempio genera l'errore C3706:  
  
```  
// C3706.cpp  
// compile with: /c  
// C3706 expected  
#define _ATL_ATTRIBUTES 1  
#include <atlbase.h>  
#include <atlcom.h>  
#include <atlctl.h>  
  
[module(dll, name="idid", uuid="12341234-1234-1234-1234-123412341234")];  
  
// Uncomment the following line to resolve.  
// [object, uuid="12341234-1234-1234-1234-123412341237"]  
__interface IEvents : IUnknown {  
   HRESULT event1(/*[in]*/ int i);   // uncomment [in]  
};  
  
[dual, uuid="12341234-1234-1234-1234-123412341235"]  
__interface IBase {  
   HRESULT fireEvents();  
};  
  
[coclass, event_source(com), uuid="12341234-1234-1234-1234-123412341236"]  
class CEventSrc : public IBase {  
   public:  
   __event __interface IEvents;  
  
   HRESULT fireEvents() {  
      HRESULT hr = IEvents_event1(123);  
      return hr;  
   }  
};  
```