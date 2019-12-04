---
title: Errore del compilatore C2466
ms.date: 11/04/2016
f1_keywords:
- C2466
helpviewer_keywords:
- C2466
ms.assetid: 75b251d1-7d0b-4a86-afca-26adedf74486
ms.openlocfilehash: aba4de518b9296fadc4746540e4e738c74908617
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74743822"
---
# <a name="compiler-error-c2466"></a>Errore del compilatore C2466

Impossibile allocare una matrice di dimensioni costanti 0

Una matrice viene allocata o dichiarata con dimensioni pari a zero. L'espressione costante per la dimensione della matrice deve essere un numero intero maggiore di zero. Una dichiarazione di matrice con un indice zero è valida solo per un membro di classe, struttura o Unione e solo con le estensioni Microsoft ([/ze](../../build/reference/za-ze-disable-language-extensions.md)).

L'esempio seguente genera l'C2466:

```cpp
// C2466.cpp
// compile with: /c
int i[0];   // C2466
int j[1];   // OK
char *p;
```
