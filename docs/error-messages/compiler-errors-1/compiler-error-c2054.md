---
title: Errore del compilatore C2054 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2054
dev_langs:
- C++
helpviewer_keywords:
- C2054
ms.assetid: 37f7c612-0d7d-4728-9e67-ac4160555f48
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 5fc936bf6c42144a55bc6d84a8434959383e7e9f
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46071432"
---
# <a name="compiler-error-c2054"></a>Errore del compilatore C2054

previsto ' (' seguire 'identifier'

L'identificatore della funzione viene utilizzata in un contesto che richiede le parentesi.

Questo errore può essere causato da un segno di uguale (=) in un'inizializzazione complessa l'omissione.

L'esempio seguente genera l'errore C2054:

```
// C2054.c
int array1[] { 1, 2, 3 };   // C2054, missing =
```

Possibile soluzione:

```
// C2054b.c
int main() {
   int array2[] = { 1, 2, 3 };
}
```