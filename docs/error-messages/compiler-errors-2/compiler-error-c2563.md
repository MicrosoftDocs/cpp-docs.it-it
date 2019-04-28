---
title: Errore del compilatore C2563
ms.date: 11/04/2016
f1_keywords:
- C2563
helpviewer_keywords:
- C2563
ms.assetid: 54abba68-6458-4ca5-894d-3babdb7b3552
ms.openlocfilehash: 04a10c82fa6aa39bcf1098d6d4aabfc2f769e7c8
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62257855"
---
# <a name="compiler-error-c2563"></a>Errore del compilatore C2563

mancata corrispondenza nell'elenco parametri formale

Elenco di parametri formali di una funzione (o un puntatore a una funzione) non corrispondono a quelli di un'altra funzione (o puntatore a una funzione membro). Di conseguenza, non può essere effettuata l'assegnazione delle funzioni o i puntatori.

L'esempio seguente genera l'errore C2563:

```
// C2563.cpp
void func( int );
void func( int, int );
int main() {
   void *fp();
   fp = func;   // C2563
}
```