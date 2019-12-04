---
title: Errore del compilatore C3701
ms.date: 11/04/2016
f1_keywords:
- C3701
helpviewer_keywords:
- C3701
ms.assetid: a7faaa87-d2f5-4d6a-9a2f-5cab2d24a648
ms.openlocfilehash: 6852d130b0f10282b8c22b0053760eca120252c7
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74758021"
---
# <a name="compiler-error-c3701"></a>Errore del compilatore C3701

' Function ': event_source non ha eventi

Si è provato a usare [event_source](../../windows/event-source.md) in una classe senza metodi di evento. Per correggere l'errore, aggiungere uno o più eventi alla classe.

L'esempio seguente genera l'C3701:

```cpp
// C3701.cpp
[ event_source(native) ]
class CEventSrc {
public:
   // uncomment the following line to resolve this C3701
   // __event void fireEvent(int i);
};   // C3701

int main() {
}
```
