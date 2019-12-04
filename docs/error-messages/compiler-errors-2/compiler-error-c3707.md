---
title: Errore del compilatore C3707
ms.date: 11/04/2016
f1_keywords:
- C3707
helpviewer_keywords:
- C3707
ms.assetid: ac63a5dd-7a4b-48d2-9f2a-be9cb090134c
ms.openlocfilehash: 6faf035c0f4f68b10b187c56bea4cafc776998cf
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74757956"
---
# <a name="compiler-error-c3707"></a>Errore del compilatore C3707

' Function ': il metodo di interfaccia dispatch deve avere un DISPID

Se si usa un metodo di `dispinterface`, è necessario assegnargli una `dispid`. Per correggere l'errore, assegnare un `dispid` al metodo `dispinterface`, ad esempio rimuovendo il commento dall'attributo `id` nel metodo nell'esempio riportato di seguito. Per ulteriori informazioni, vedere l' [interfaccia dispatch](../../windows/dispinterface.md) e l' [ID](../../windows/id.md)degli attributi.

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
