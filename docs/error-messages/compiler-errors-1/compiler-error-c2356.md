---
description: 'Altre informazioni su: errore del compilatore C2356'
title: Errore del compilatore C2356
ms.date: 11/04/2016
f1_keywords:
- C2356
helpviewer_keywords:
- C2356
ms.assetid: 84d5a816-9a61-4d45-9978-38e485bbf767
ms.openlocfilehash: c0e2d179bb41e6cbae674d92976674ab90f05c0f
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97328329"
---
# <a name="compiler-error-c2356"></a>Errore del compilatore C2356

il segmento di inizializzazione non deve cambiare durante l'unità di conversione

Cause possibili:

- `#pragma init_seg` preceduto dal codice di inizializzazione del segmento

- `#pragma init_seg` preceduto da un altro `#pragma init_seg`

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
