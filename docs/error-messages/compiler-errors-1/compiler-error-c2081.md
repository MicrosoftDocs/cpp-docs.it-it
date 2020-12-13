---
description: 'Altre informazioni su: errore del compilatore C2081'
title: Errore del compilatore C2081
ms.date: 11/04/2016
f1_keywords:
- C2081
helpviewer_keywords:
- C2081
ms.assetid: 7db9892d-364d-4178-a49d-f8398ece09a0
ms.openlocfilehash: e6f75d6d478d9523d36a9671457cf2a5618e4f21
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97151177"
---
# <a name="compiler-error-c2081"></a>Errore del compilatore C2081

' Identifier ': nome non valido nell'elenco di parametri formali

L'identificatore ha causato un errore di sintassi.

Questo errore può essere causato dall'uso dello stile precedente per l'elenco di parametri formali. È necessario specificare il tipo di parametri formali nell'elenco di parametri formali.

L'esempio seguente genera l'C2081:

```c
// C2081.c
void func( int i, j ) {}  // C2081, no type specified for j
```

Possibile soluzione:

```c
// C2081b.c
// compile with: /c
void func( int i, int j ) {}
```
