---
description: 'Altre informazioni su: avviso del compilatore (livello 1) C4167'
title: Avviso del compilatore (livello 1) C4167
ms.date: 11/04/2016
f1_keywords:
- C4167
helpviewer_keywords:
- C4167
ms.assetid: 74a420bd-9371-4167-b1ee-74dd8680f97b
ms.openlocfilehash: 8d0b08ea4d97c6e85f5e07ce4844abdae7afafbd
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97266988"
---
# <a name="compiler-warning-level-1-c4167"></a>Avviso del compilatore (livello 1) C4167

funzione: disponibile solo come funzione intrinseca

**#pragma function** prova a forzare nel compilatore l'uso di una chiamata convenzionale a una funzione che deve essere usata nel formato intrinseco, pertanto la direttiva pragma viene ignorata.

Per evitare la visualizzazione dell'avviso, rimuovere **#pragma function**.

## <a name="example"></a>Esempio

```cpp
// C4167.cpp
// compile with: /W1
#include <malloc.h>
#pragma function(_alloca )   // C4167: _alloca() is intrinsic only
int main(){}
```
