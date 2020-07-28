---
title: Errore del compilatore C2271
ms.date: 11/04/2016
f1_keywords:
- C2271
helpviewer_keywords:
- C2271
ms.assetid: ea47bf57-f55d-4171-8e98-95a71d62820e
ms.openlocfilehash: 8972b055020e5b28e8e33cd37ec964069ecc7dc6
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87220405"
---
# <a name="compiler-error-c2271"></a>Errore del compilatore C2271

' operator ': New/Delete non può contenere modificatori di elenco formali

L'operatore ( **`new`** o **`delete`** ) viene dichiarato con un identificatore del modello di memoria.

L'esempio seguente genera l'C2271:

```cpp
// C2271.cpp
// compile with: /c
void* operator new(size_t) const {   // C2271
// try the following line instead
// void* operator new(size_t) {
   return 0;
}

struct X {
   static void* operator new(size_t) const;   // C2271
   // try the following line instead
   // void * X::operator new(size_t) const;   // static member operator new
};
```
