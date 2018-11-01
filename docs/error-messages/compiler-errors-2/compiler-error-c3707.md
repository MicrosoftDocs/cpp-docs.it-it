---
title: Errore del compilatore C3707
ms.date: 11/04/2016
f1_keywords:
- C3707
helpviewer_keywords:
- C3707
ms.assetid: ac63a5dd-7a4b-48d2-9f2a-be9cb090134c
ms.openlocfilehash: 8a1525539c84ea427815a03057bb6d2f9213fec7
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50431111"
---
# <a name="compiler-error-c3707"></a>Errore del compilatore C3707

'function': il metodo di interfaccia dispatch deve avere un dispid

Se si usa un' `dispinterface` metodo, è necessario assegnargli un `dispid`. Per correggere questo errore, assegnare un `dispid` per il `dispinterface` metodo, ad esempio, rimuovendo il `id` attributo del metodo nell'esempio seguente. Per altre informazioni, vedere gli attributi [dispinterface](../../windows/dispinterface.md) e [id](../../windows/id.md).

L'esempio seguente genera l'errore C3707:

```
// C3707.cpp
#include <atlbase.h>
#include <atlcom.h>
#include <atlctl.h>

[module(name="xx")];
[dispinterface]
__interface IEvents : IDispatch
{
   HRESULT event1([in] int i);   // C3707
   // try the following line instead
   // [id(1)] HRESULT event1([in] int i);
};

int main() {
}
```