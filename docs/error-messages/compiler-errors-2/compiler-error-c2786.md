---
title: Errore del compilatore C2786
ms.date: 11/04/2016
f1_keywords:
- C2786
helpviewer_keywords:
- C2786
ms.assetid: 6676d8c0-86dd-4a39-bdda-b75a35f4d137
ms.openlocfilehash: b03155ad1a209ae59327dd31d432f5623f380ac9
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50511423"
---
# <a name="compiler-error-c2786"></a>Errore del compilatore C2786

'type': operando non valido per uuidof

Il [uuidof](../../cpp/uuidof-operator.md) operatore accetta un tipo definito dall'utente con un GUID collegato o un oggetto di un tipo definito dall'utente.  Possibili cause:

1. L'argomento non è un tipo definito dall'utente.

1. `__uuidof` non è possibile estrarre il GUID dall'argomento.

L'esempio seguente genera l'errore C2786:

```
// C2786.cpp
struct __declspec(uuid("00000000-0000-0000-0000-000000000000")) A {};

int main() {
   __uuidof(int);   // C2786
   __uuidof(int *);   // C2786
   __uuidof(A **);   // C2786

   // no error
   __uuidof(A);
   __uuidof(A *);
   __uuidof(A &);
   __uuidof(A[]);

   int i;
   int *pi;
   A **ppa;

   __uuidof(i);      // C2786
   __uuidof(pi);     // C2786
   __uuidof(ppa);    // C2786
}
```