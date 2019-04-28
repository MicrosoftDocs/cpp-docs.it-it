---
title: Errore del compilatore C2784
ms.date: 11/04/2016
f1_keywords:
- C2784
helpviewer_keywords:
- C2784
ms.assetid: 3d761fe2-881c-48bd-afae-e2e714e20473
ms.openlocfilehash: 906cb5d8df9fb8ac57c5d4289d77ac662ac26a92
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62208184"
---
# <a name="compiler-error-c2784"></a>Errore del compilatore C2784

'declaration': impossibile dedurre un argomento modello per 'type' da 'type'

Il compilatore non può determinare un argomento modello dagli argomenti della funzione forniti.

L'esempio seguente genera l'errore C2784 e mostra come risolverlo:

```
// C2784.cpp
template<class T> class X {};
template<class T> void f(X<T>) {}

int main() {
   X<int> x;
   f(1);   // C2784

   // To fix it, try the following line instead
   f(x);
}
```