---
title: Errore del compilatore C3160 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3160
dev_langs:
- C++
helpviewer_keywords:
- C3160
ms.assetid: a250c433-8adf-43b9-8dee-c3794e09b0a5
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: bf3ecc18e1afc9b13e47ad8b20bb92f7686d0cfc
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46042273"
---
# <a name="compiler-error-c3160"></a>Errore del compilatore C3160

'pointer': un membro dati di una classe gestita o WinRT non può avere questo tipo

I puntatori interni di Garbage Collection possono puntare all'interno di una classe gestita o WinRT. Poiché sono più lenti dei puntatori a un intero oggetto e richiedono una speciale gestione con il Garbage Collector, non è possibile dichiarare puntatori gestiti interni come membri di una classe.

L'esempio seguente genera l'errore C3160:

```
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
