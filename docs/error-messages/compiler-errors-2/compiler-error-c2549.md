---
title: Errore del compilatore C2549
ms.date: 11/04/2016
f1_keywords:
- C2549
helpviewer_keywords:
- C2549
ms.assetid: 29310094-54a3-4605-bc6d-a312a68daf5d
ms.openlocfilehash: a9bea94a7dbb47e8961ea090af5aaa3f8e54d545
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74759464"
---
# <a name="compiler-error-c2549"></a>Errore del compilatore C2549

la conversione definita dall'utente non può specificare un tipo restituito

L'esempio seguente genera l'C2549:

```cpp
// C2549.cpp
// compile with: /c
class X {
public:
   int operator int() { return value; }   // C2549

   // try the following line instead
   // operator int() { return value; }
private:
   int value;
};
```
