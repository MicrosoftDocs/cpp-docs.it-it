---
description: 'Altre informazioni su: errore del compilatore C2019'
title: Errore del compilatore C2019
ms.date: 11/04/2016
f1_keywords:
- C2019
helpviewer_keywords:
- C2019
ms.assetid: 4f37b1e1-9eca-418f-a4c3-141e8512d7b6
ms.openlocfilehash: 5b30bdb8eace513572152d0f33da5f591e21bd6e
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97283927"
---
# <a name="compiler-error-c2019"></a>Errore del compilatore C2019

prevista direttiva per il preprocessore, trovato 'character'

Il carattere è seguito da un `#` segno ma non è la prima lettera di una direttiva per il preprocessore.

L'esempio seguente genera l'C2019:

```cpp
// C2019.cpp
#!define TRUE 1   // C2019
```

Possibile soluzione:

```cpp
// C2019b.cpp
// compile with: /c
#define TRUE 1
```
