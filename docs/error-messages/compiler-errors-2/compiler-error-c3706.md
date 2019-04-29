---
title: Errore del compilatore C3706
ms.date: 11/04/2016
f1_keywords:
- C3706
helpviewer_keywords:
- C3706
ms.assetid: d20a33eb-d625-46c5-ac87-32075a590d07
ms.openlocfilehash: 2d474db5a4d50aed7b59e6f48fb5a3e8165f10c6
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62400292"
---
# <a name="compiler-error-c3706"></a>Errore del compilatore C3706

'function': deve essere un'interfaccia COM può generare eventi COM

L'interfaccia di eventi che consente di generare eventi COM deve essere un'interfaccia COM. In questo caso, l'interfaccia deve essere definita usando un oggetto visivo C++ attributo o importati con [#import](../../preprocessor/hash-import-directive-cpp.md) da una libreria dei tipi con l'attributo embedded_idl del #import.

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