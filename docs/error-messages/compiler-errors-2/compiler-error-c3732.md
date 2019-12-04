---
title: Errore del compilatore C3732
ms.date: 11/04/2016
f1_keywords:
- C3732
helpviewer_keywords:
- C3732
ms.assetid: 2d55a7e1-9c39-4379-a093-2f7beb27e2ca
ms.openlocfilehash: 30ade41ae463923cc5cc9911469e587decacbc64
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74752925"
---
# <a name="compiler-error-c3732"></a>Errore del compilatore C3732

' Interface ': un'interfaccia personalizzata che genera eventi COM non può ereditare da IDispatch

Un'interfaccia che supporta gli eventi COM non può ereditare da `IDispatch`. Per ulteriori informazioni, vedere [gestione degli eventi in com](../../cpp/event-handling-in-com.md).

L'errore seguente genera C3732:

```cpp
// C3732.cpp
#define _ATL_ATTRIBUTES 1
#include "atlbase.h"
#include "atlcom.h"

[module(name="test")];

// to resolve this C3732, use dual instead of object
// or inherit from IUnknown
[ object ]
__interface I : IDispatch
{
};

[ event_source(com), coclass ]
struct A
{
   __event __interface I;   // C3732
};

int main()
{
}
```
