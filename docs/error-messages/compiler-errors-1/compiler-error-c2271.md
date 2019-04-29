---
title: Errore del compilatore C2271
ms.date: 11/04/2016
f1_keywords:
- C2271
helpviewer_keywords:
- C2271
ms.assetid: ea47bf57-f55d-4171-8e98-95a71d62820e
ms.openlocfilehash: 68de819ca62e117036bb415a1708afc0ecd6028c
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62388995"
---
# <a name="compiler-error-c2271"></a>Errore del compilatore C2271

'operator': new e delete non può avere modificatori di elenchi formali

L'operatore (`new` o `delete`) viene dichiarato con un identificatore del modello di memoria.

L'esempio seguente genera l'errore C2271:

```
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