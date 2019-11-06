---
title: Avviso del compilatore (livello 1) C4237
ms.date: 11/04/2016
f1_keywords:
- C4237
helpviewer_keywords:
- C4237
ms.assetid: f2e86c4b-80d8-460e-9429-83c5f3f5d7ca
ms.openlocfilehash: e53c4632f8bfc9764f6ab1e124582bda273d945e
ms.sourcegitcommit: 0cfc43f90a6cc8b97b24c42efcf5fb9c18762a42
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/05/2019
ms.locfileid: "73624897"
---
# <a name="compiler-warning-level-1-c4237"></a>Avviso del compilatore (livello 1) C4237

parola chiave ' keyword ' non ancora supportata, riservata per un utilizzo futuro

Una parola chiave nella C++ specifica non è implementata nel compilatore C++ Microsoft, ma la parola chiave non è disponibile come simbolo definito dall'utente.

L'esempio seguente genera l'C4237:

```cpp
// C4237.cpp
// compile with: /W1 /c
int export;   // C4237
```