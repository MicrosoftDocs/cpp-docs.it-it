---
title: Avviso del compilatore (livello 1) C4167
ms.date: 11/04/2016
f1_keywords:
- C4167
helpviewer_keywords:
- C4167
ms.assetid: 74a420bd-9371-4167-b1ee-74dd8680f97b
ms.openlocfilehash: 8155fabacef4c9c9acc97b315f7267c23d032f12
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62391712"
---
# <a name="compiler-warning-level-1-c4167"></a>Avviso del compilatore (livello 1) C4167

funzione: disponibile solo come funzione intrinseca

**#pragma function** prova a forzare nel compilatore l'uso di una chiamata convenzionale a una funzione che deve essere usata nel formato intrinseco, pertanto la direttiva pragma viene ignorata.

Per evitare la visualizzazione dell'avviso, rimuovere **#pragma function**.

## <a name="example"></a>Esempio

```
// C4167.cpp
// compile with: /W1
#include <malloc.h>
#pragma function(_alloca )   // C4167: _alloca() is intrinsic only
int main(){}
```