---
description: 'Altre informazioni su: errore del compilatore C2498'
title: Errore del compilatore C2498
ms.date: 11/04/2016
f1_keywords:
- C2498
helpviewer_keywords:
- C2498
ms.assetid: 0839f12c-aaa4-4a02-bb33-7f072715dd14
ms.openlocfilehash: e7cbb811cdaeea703d0f1da1c0f2012ebe8210fa
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97335092"
---
# <a name="compiler-error-c2498"></a>Errore del compilatore C2498

' Function ':' novtable ' può essere applicato solo a definizioni o dichiarazioni di classe

Questo errore può essere causato dall'uso di `__declspec(novtable)` con una funzione.

## <a name="example"></a>Esempio

L'esempio seguente genera l'C2498:

```cpp
// C2498.cpp
// compile with: /c
void __declspec(novtable) f() {}   // C2498
class __declspec(novtable) A {};   // OK
```
