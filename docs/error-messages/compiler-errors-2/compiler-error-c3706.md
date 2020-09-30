---
title: Errore del compilatore C3706
ms.date: 11/04/2016
f1_keywords:
- C3706
helpviewer_keywords:
- C3706
ms.assetid: d20a33eb-d625-46c5-ac87-32075a590d07
ms.openlocfilehash: 461850b2c1686343f23c77274b8fb2ca6fd9071e
ms.sourcegitcommit: a1676bf6caae05ecd698f26ed80c08828722b237
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/29/2020
ms.locfileid: "91508011"
---
# <a name="compiler-error-c3706"></a>Errore del compilatore C3706

' Function ': deve essere un'interfaccia COM per generare eventi COM

L'interfaccia evento utilizzata per generare eventi COM deve essere un'interfaccia COM. In questa situazione, l'interfaccia deve essere definita utilizzando un attributo Visual C++ o importata utilizzando [#import](../../preprocessor/hash-import-directive-cpp.md) da una libreria dei tipi con l'attributo embedded_idl di #import.

Si noti che le `#include` righe dei file di intestazione ATL mostrati nell'esempio seguente sono necessarie per l'utilizzo di eventi com. Per correggere l'errore, creare `IEvents` (l'interfaccia di eventi) un'interfaccia com applicando uno degli attributi seguenti alla definizione dell'interfaccia: [Object](../../windows/attributes/object-cpp.md), [Dual](../../windows/attributes/dual.md)o [Dispatch](../../windows/attributes/dispinterface.md).

Se un'interfaccia è da un file di intestazione generato da MIDL, il compilatore non lo riconosce come interfaccia COM.

L'esempio seguente genera l'C3706:

```cpp
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
