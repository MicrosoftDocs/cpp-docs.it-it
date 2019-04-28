---
title: Errore del compilatore C2466
ms.date: 11/04/2016
f1_keywords:
- C2466
helpviewer_keywords:
- C2466
ms.assetid: 75b251d1-7d0b-4a86-afca-26adedf74486
ms.openlocfilehash: 516f9b024947e0100a753e4e010a5b51b1fb24a1
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62230529"
---
# <a name="compiler-error-c2466"></a>Errore del compilatore C2466

non è possibile allocare una matrice di dimensione costante 0

Una matrice viene allocata o dichiarata con dimensione zero. L'espressione costante per la dimensione della matrice deve essere un numero intero maggiore di zero. Una dichiarazione di matrice con dimensione zero è valida solo per una classe, struttura o membro di unione e solo con le estensioni Microsoft ([/Ze](../../build/reference/za-ze-disable-language-extensions.md)).

L'esempio seguente genera l'errore C2466:

```
// C2466.cpp
// compile with: /c
int i[0];   // C2466
int j[1];   // OK
char *p;
```