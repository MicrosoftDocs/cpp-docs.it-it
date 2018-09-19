---
title: Errore del compilatore C3706 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3706
dev_langs:
- C++
helpviewer_keywords:
- C3706
ms.assetid: d20a33eb-d625-46c5-ac87-32075a590d07
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: bbebf5752a9ed42ea4af8d3a13e45c78fc1753ec
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46110510"
---
# <a name="compiler-error-c3706"></a>Errore del compilatore C3706

'function': deve essere un'interfaccia COM può generare eventi COM

L'interfaccia di eventi che consente di generare eventi COM deve essere un'interfaccia COM. In questo caso, l'interfaccia deve essere definito utilizzando un attributo di Visual C++ o importati utilizzando [#import](../../preprocessor/hash-import-directive-cpp.md) da una libreria dei tipi con l'attributo embedded_idl del #import.

Si noti che il `#include` righe del file di intestazione ATL illustrati nell'esempio riportato di seguito sono necessarie per l'uso di eventi COM. Per correggere questo errore, apportare `IEvents` (l'interfaccia di gestione degli eventi) un'interfaccia COM applicando uno dei seguenti attributi per la definizione dell'interfaccia: [oggetto](../../windows/object-cpp.md), [doppio](../../windows/dual.md), o [ interfaccia dispatch](../../windows/dispinterface.md).

Se un'interfaccia proviene da un file di intestazione generato da MIDL, compilatore verrà non riconosciuto come un'interfaccia COM.

L'esempio seguente genera l'errore C3706:

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