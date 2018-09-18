---
title: Errore del compilatore C2081 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2081
dev_langs:
- C++
helpviewer_keywords:
- C2081
ms.assetid: 7db9892d-364d-4178-a49d-f8398ece09a0
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 48f2cdecaea38beed14735bb3f94c8422a28c747
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46030456"
---
# <a name="compiler-error-c2081"></a>Errore del compilatore C2081

'identifier': nome parametro formale non valido nell'elenco

L'identificatore ha causato un errore di sintassi.

Questo errore può essere causato usando lo stile precedente per l'elenco di parametri formali. È necessario specificare il tipo dei parametri formali nell'elenco di parametri formali.

L'esempio seguente genera l'errore C2081:

```
// C2081.c
void func( int i, j ) {}  // C2081, no type specified for j
```

Possibile soluzione:

```
// C2081b.c
// compile with: /c
void func( int i, int j ) {}
```