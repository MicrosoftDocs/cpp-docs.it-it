---
title: Errore del compilatore C3701
ms.date: 11/04/2016
f1_keywords:
- C3701
helpviewer_keywords:
- C3701
ms.assetid: a7faaa87-d2f5-4d6a-9a2f-5cab2d24a648
ms.openlocfilehash: c15cd9ce841d79787b3be9829c76038803b54d4d
ms.sourcegitcommit: a1676bf6caae05ecd698f26ed80c08828722b237
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/29/2020
ms.locfileid: "91508062"
---
# <a name="compiler-error-c3701"></a>Errore del compilatore C3701

' Function ': event_source non ha eventi

Si è provato a usare [event_source](../../windows/attributes/event-source.md) in una classe senza metodi di evento. Per correggere l'errore, aggiungere uno o più eventi alla classe.

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
