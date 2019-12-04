---
title: Errore del compilatore C3765
ms.date: 11/04/2016
f1_keywords:
- C3765
helpviewer_keywords:
- C3765
ms.assetid: feadee7a-fcfb-402c-af2f-0e656f814a13
ms.openlocfilehash: 8a12bdfaf0931fb0a94dafc289f9ae39aef61f23
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74757235"
---
# <a name="compiler-error-c3765"></a>Errore del compilatore C3765

' Event ': non è possibile definire un evento in una classe/struct ' type ' contrassegnata come event_receiver

Se una classe è contrassegnata con l'attributo [event_receiver](../../windows/event-receiver.md) , la classe non può contenere una dichiarazione di [__event](../../cpp/event.md) .

L'esempio seguente genera l'C3765:

```cpp
// C3765.cpp
[event_receiver(native)]
struct ER2 {
   __event void f();   // C3765
   __event void b(int);   // C3765
};
```
