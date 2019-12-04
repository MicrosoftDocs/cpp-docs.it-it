---
title: Errore del compilatore C2563
ms.date: 11/04/2016
f1_keywords:
- C2563
helpviewer_keywords:
- C2563
ms.assetid: 54abba68-6458-4ca5-894d-3babdb7b3552
ms.openlocfilehash: 983788f041651fcd313c0707a4a7c64cc6e33c5a
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74755538"
---
# <a name="compiler-error-c2563"></a>Errore del compilatore C2563

mancata corrispondenza nell'elenco di parametri formali

L'elenco di parametri formali di una funzione (o un puntatore a una funzione) non corrisponde a quello di un'altra funzione (o puntatore a una funzione membro). Di conseguenza, non è possibile effettuare l'assegnazione di funzioni o puntatori.

L'esempio seguente genera l'C2563:

```cpp
// C2563.cpp
void func( int );
void func( int, int );
int main() {
   void *fp();
   fp = func;   // C2563
}
```
