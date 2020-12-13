---
description: 'Altre informazioni su: errore del compilatore C2614'
title: Errore del compilatore C2614
ms.date: 11/04/2016
f1_keywords:
- C2614
helpviewer_keywords:
- C2614
ms.assetid: a550c1d5-8718-4e17-a888-b2619e00fe11
ms.openlocfilehash: 5bc0958b406c11299aee9b0d88c4b7b7401370ec
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97338660"
---
# <a name="compiler-error-c2614"></a>Errore del compilatore C2614

' Class1': inizializzazione membro non valida:' Class2' non è una base o un membro

Nell'elenco di inizializzazione per una classe o una struttura possono essere presenti solo classi di base o membri.

## <a name="example"></a>Esempio

L'esempio seguente genera l'C2614.

```cpp
// C2614.cpp
// compile with: /c
struct A {
   int i;
   A( int ia ) : B( i ) {};   // C2614 B is not a member of A
};

struct A2 {
   int B;
   int i;
   A2( int ia ) : B( i ) {};   // OK
};
```
