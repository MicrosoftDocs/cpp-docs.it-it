---
description: 'Altre informazioni su: errore del compilatore C3707'
title: Errore del compilatore C3707
ms.date: 11/04/2016
f1_keywords:
- C3707
helpviewer_keywords:
- C3707
ms.assetid: ac63a5dd-7a4b-48d2-9f2a-be9cb090134c
ms.openlocfilehash: 77a1193eae9b9d0158065978438b5af1d2176d12
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97241846"
---
# <a name="compiler-error-c3707"></a>Errore del compilatore C3707

' Function ': il metodo di interfaccia dispatch deve avere un DISPID

Se si usa un `dispinterface` metodo, è necessario assegnarlo a `dispid` . Per correggere l'errore, assegnare un `dispid` al `dispinterface` metodo, ad esempio rimuovendo il commento dall'attributo nel `id` metodo nell'esempio riportato di seguito. Per ulteriori informazioni, vedere l' [interfaccia dispatch](../../windows/attributes/dispinterface.md) e l' [ID](../../windows/attributes/id.md)degli attributi.

L'esempio seguente genera l'C3707:

```cpp
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
