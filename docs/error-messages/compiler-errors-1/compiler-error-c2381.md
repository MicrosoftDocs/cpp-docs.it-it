---
title: Errore del compilatore C2381
ms.date: 11/04/2016
f1_keywords:
- C2381
helpviewer_keywords:
- C2381
ms.assetid: cc765f67-64ac-406f-93ef-ae7d548d58d7
ms.openlocfilehash: b29f7dac6c6d71e12eb0f003cdfc151dd2c349a7
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50663189"
---
# <a name="compiler-error-c2381"></a>Errore del compilatore C2381

'function': ridefinizione. __declspec(noreturn) differisce

Una funzione è stata dichiarata e definita, ma la definizione utilizzata la [noreturn](../../cpp/noreturn.md) `__declspec` modificatore. L'uso di `noreturn` costituisce una ridefinizione della funzione; devono concordare sull'uso di dichiarazione e nella definizione `noreturn`.

L'esempio seguente genera l'errore C2381:

```
// C2381.cpp
// compile with: /c
void f1();
void __declspec(noreturn) f1() {}   // C2381
void __declspec(noreturn) f2() {}   // OK
```