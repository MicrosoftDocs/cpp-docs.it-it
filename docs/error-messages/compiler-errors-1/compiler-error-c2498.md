---
title: Errore del compilatore C2498
ms.date: 11/04/2016
f1_keywords:
- C2498
helpviewer_keywords:
- C2498
ms.assetid: 0839f12c-aaa4-4a02-bb33-7f072715dd14
ms.openlocfilehash: 1087dbb2297058f752e0a15776e4a7185e32a5c5
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62360469"
---
# <a name="compiler-error-c2498"></a>Errore del compilatore C2498

'function': 'novtable' può essere applicato solo a definizioni o dichiarazioni di classe

Questo errore può essere causato dall'utilizzo `__declspec(novtable)` con una funzione.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C2498:

```
// C2498.cpp
// compile with: /c
void __declspec(novtable) f() {}   // C2498
class __declspec(novtable) A {};   // OK
```