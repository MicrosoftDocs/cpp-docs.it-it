---
title: Compilatore Warning (level 1) C4028
ms.date: 11/04/2016
f1_keywords:
- C4028
helpviewer_keywords:
- C4028
ms.assetid: c3e8b70b-e870-416c-a285-bba5f71dbfc6
ms.openlocfilehash: bfe54fc40b4d6927a1d75f529ec9b619f9b29226
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50490517"
---
# <a name="compiler-warning-level-1-c4028"></a>Compilatore Warning (level 1) C4028

parametro formale 'number' diverse dalla dichiarazione

Il tipo del parametro formale non concordano con il parametro corrispondente nella dichiarazione. Viene usato il tipo nella dichiarazione originale.

Questo avviso è valido solo per codice sorgente C.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C4028.

```
// C4028.c
// compile with: /W1 /Za
void f(int , ...);
void f(int i, int j) {}   // C4028

void g(int , int);
void g(int i, int j) {}   // OK

int main() {}
```