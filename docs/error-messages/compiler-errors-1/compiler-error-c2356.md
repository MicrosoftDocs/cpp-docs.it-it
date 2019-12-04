---
title: Errore del compilatore C2356
ms.date: 11/04/2016
f1_keywords:
- C2356
helpviewer_keywords:
- C2356
ms.assetid: 84d5a816-9a61-4d45-9978-38e485bbf767
ms.openlocfilehash: e306c5a8f9175bc3c7902b20263aa2e451944182
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74759932"
---
# <a name="compiler-error-c2356"></a>Errore del compilatore C2356

il segmento di inizializzazione non deve cambiare durante l'unità di conversione

Cause possibili:

- `#pragma init_seg` preceduto dal codice di inizializzazione del segmento

- `#pragma init_seg` preceduto da un'altra `#pragma init_seg`

Per risolvere il codice, spostare il codice di inizializzazione del segmento all'inizio del modulo. Se è necessario inizializzare più aree, spostarle in moduli distinti.

L'esempio seguente genera l'C2356:

```cpp
// C2356.cpp
#pragma warning(disable : 4075)

int __cdecl myexit(void (__cdecl *)());
int __cdecl myexit2(void (__cdecl *)());

#pragma init_seg(".mine$m",myexit)
#pragma init_seg(".mine$m",myexit2)   // C2356
```
