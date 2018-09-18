---
title: Errore del compilatore C2786 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2786
dev_langs:
- C++
helpviewer_keywords:
- C2786
ms.assetid: 6676d8c0-86dd-4a39-bdda-b75a35f4d137
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 027c41ad1665e0002855f07fe82293bfbee6d4e7
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46031106"
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