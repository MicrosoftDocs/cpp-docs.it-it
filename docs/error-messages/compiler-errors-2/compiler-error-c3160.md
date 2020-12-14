---
description: 'Altre informazioni su: errore del compilatore C3160'
title: Errore del compilatore C3160
ms.date: 11/04/2016
f1_keywords:
- C3160
helpviewer_keywords:
- C3160
ms.assetid: a250c433-8adf-43b9-8dee-c3794e09b0a5
ms.openlocfilehash: 863670f30a6a911977ead0d541dcba825e4f124a
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97242327"
---
# <a name="compiler-error-c3160"></a>Errore del compilatore C3160

'pointer': un membro dati di una classe gestita o WinRT non può avere questo tipo

I puntatori interni di Garbage Collection possono puntare all'interno di una classe gestita o WinRT. Poiché sono più lenti dei puntatori a un intero oggetto e richiedono una speciale gestione con il Garbage Collector, non è possibile dichiarare puntatori gestiti interni come membri di una classe.

L'esempio seguente genera l'errore C3160:

```cpp
// C3160.cpp
// compile with: /clr
ref struct A {
   // cannot create interior pointers inside a class
   interior_ptr<int> pg;   // C3160
   int g;   // OK
   int* pg2;   // OK
};

int main() {
   interior_ptr<int> pg2;   // OK
}
```
