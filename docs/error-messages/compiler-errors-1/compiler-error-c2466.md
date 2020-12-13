---
description: 'Altre informazioni su: errore del compilatore C2466'
title: Errore del compilatore C2466
ms.date: 11/04/2016
f1_keywords:
- C2466
helpviewer_keywords:
- C2466
ms.assetid: 75b251d1-7d0b-4a86-afca-26adedf74486
ms.openlocfilehash: 68ff57de2c0287f24ac84466ac8053bf73f88a95
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97333827"
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
