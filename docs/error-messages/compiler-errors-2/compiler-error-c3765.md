---
title: Errore del compilatore C3765 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3765
dev_langs:
- C++
helpviewer_keywords:
- C3765
ms.assetid: feadee7a-fcfb-402c-af2f-0e656f814a13
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: cac3930e4f5ec42587a9f557adc7a82d750b3819
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46042130"
---
# <a name="compiler-error-c3765"></a>Errore del compilatore C3765

'event': non è possibile definire un evento in una classe/struct 'type' contrassegnate come event_receiver

Se una classe è contrassegnata con il [event_receiver](../../windows/event-receiver.md) attributo, la classe non può contenere un' [event](../../cpp/event.md) dichiarazione.

L'esempio seguente genera l'errore C3765:

```
// C3765.cpp
[event_receiver(native)]
struct ER2 {
   __event void f();   // C3765
   __event void b(int);   // C3765
};
```