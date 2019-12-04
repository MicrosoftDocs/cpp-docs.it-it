---
title: Errore del compilatore C3706
ms.date: 11/04/2016
f1_keywords:
- C3706
helpviewer_keywords:
- C3706
ms.assetid: d20a33eb-d625-46c5-ac87-32075a590d07
ms.openlocfilehash: 810ec59a814b04349913648fb49a03eb63912cd9
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74757982"
---
# <a name="compiler-error-c3706"></a>Errore del compilatore C3706

' Function ': deve essere un'interfaccia COM per generare eventi COM

L'interfaccia evento utilizzata per generare eventi COM deve essere un'interfaccia COM. In questa situazione, l'interfaccia deve essere definita utilizzando un attributo visivo C++ oppure importata utilizzando [#import](../../preprocessor/hash-import-directive-cpp.md) da una libreria dei tipi con l'attributo embedded_idl di #import.

Si noti che le righe `#include` dei file di intestazione ATL mostrati nell'esempio seguente sono necessarie per l'utilizzo di eventi COM. Per correggere l'errore, rendere `IEvents` (l'interfaccia di eventi) un'interfaccia COM applicando uno degli attributi seguenti alla definizione dell'interfaccia: [Object](../../windows/object-cpp.md), [Dual](../../windows/dual.md)o [Dispatch](../../windows/dispinterface.md).

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
