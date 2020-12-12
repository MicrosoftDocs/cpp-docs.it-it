---
description: 'Altre informazioni su: errore del compilatore C2657'
title: Errore del compilatore C2657
ms.date: 11/04/2016
f1_keywords:
- C2657
helpviewer_keywords:
- C2657
ms.assetid: f7cf29a9-684a-4605-9469-ecfee9ba4b03
ms.openlocfilehash: dfec399c4b65615310263aa58db145b87c42594d
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97286072"
---
# <a name="compiler-error-c2657"></a>Errore del compilatore C2657

' Class::*' trovato all'inizio di un'istruzione. si è omesso di specificare un tipo?

La riga inizia con un identificatore puntatore a membro.

Questo errore può essere causato da un identificatore di tipo mancante nella dichiarazione di un puntatore a un membro.

L'esempio seguente genera l'C2657:

```cpp
// C2657.cpp
class C {};
int main() {
   C::* pmc1;        // C2657
   int C::* pmc2;   // OK
}
```
