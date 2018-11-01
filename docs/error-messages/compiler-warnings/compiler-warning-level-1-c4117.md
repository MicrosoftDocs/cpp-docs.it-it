---
title: Avviso del compilatore (livello 1) C4117
ms.date: 11/04/2016
f1_keywords:
- C4117
helpviewer_keywords:
- C4117
ms.assetid: c45aa281-4cc1-4dfd-bd32-bd7a60ddd577
ms.openlocfilehash: 657963dd0199c1474f0cef566e5a177a16247521
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50466216"
---
# <a name="compiler-warning-level-1-c4117"></a>Avviso del compilatore (livello 1) C4117

il nome macro 'name' è riservato. 'Command' ignorato

### <a name="to-fix-by-checking-the-following-possible-causes"></a>Per risolverlo è possibile verificare le seguenti cause possibili

1. Tentativo di definire o annullare la definizione di una macro già definita.

1. Tentativo di definire o annullare la definizione dell'operatore del preprocessore **defined**.

L'esempio seguente genera l'errore C4117:

```
// C4117.cpp
// compile with: /W1
#define __FILE__ test         // C4117. __FILE__ is a predefined macro
#define ValidMacroName test   // ok

int main() {
}
```