---
title: Errore del compilatore C3765
ms.date: 11/04/2016
f1_keywords:
- C3765
helpviewer_keywords:
- C3765
ms.assetid: feadee7a-fcfb-402c-af2f-0e656f814a13
ms.openlocfilehash: 5bb2dba57c680882bb4bf8e4026f5720276b47b4
ms.sourcegitcommit: a1676bf6caae05ecd698f26ed80c08828722b237
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/29/2020
ms.locfileid: "91509377"
---
# <a name="compiler-error-c3765"></a>Errore del compilatore C3765

' Event ': non è possibile definire un evento in una classe/struct ' type ' contrassegnata come event_receiver

Se una classe è contrassegnata con l'attributo [event_receiver](../../windows/attributes/event-receiver.md) , la classe non può contenere una dichiarazione di [__event](../../cpp/event.md) .

L'esempio seguente genera l'C3765:

```cpp
// C3765.cpp
[event_receiver(native)]
struct ER2 {
   __event void f();   // C3765
   __event void b(int);   // C3765
};
```
