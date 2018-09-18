---
title: Errore del compilatore C2356 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2356
dev_langs:
- C++
helpviewer_keywords:
- C2356
ms.assetid: 84d5a816-9a61-4d45-9978-38e485bbf767
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 8dfad1703b36e1cd995207d35b99b323c883f828
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46065413"
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