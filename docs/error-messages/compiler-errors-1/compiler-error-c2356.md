---
title: Errore del compilatore C2356
ms.date: 11/04/2016
f1_keywords:
- C2356
helpviewer_keywords:
- C2356
ms.assetid: 84d5a816-9a61-4d45-9978-38e485bbf767
ms.openlocfilehash: 0166cce6011017b8a18821666083f7c47f58b7a9
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50508109"
---
# <a name="compiler-error-c2356"></a>Errore del compilatore C2356

il segmento di inizializzazione non deve essere modificato durante l'unità di conversione

Possibili cause:

- `#pragma init_seg` preceduto dal codice di inizializzazione di segmento

- `#pragma init_seg` preceduto da un altro `#pragma init_seg`

Per risolvere, spostare il codice di inizializzazione segmento all'inizio del modulo. Se è necessario inizializzare più aree, spostarli per separare i moduli.

L'esempio seguente genera l'errore C2356:

```
// C2356.cpp
#pragma warning(disable : 4075)

int __cdecl myexit(void (__cdecl *)());
int __cdecl myexit2(void (__cdecl *)());

#pragma init_seg(".mine$m",myexit)
#pragma init_seg(".mine$m",myexit2)   // C2356
```