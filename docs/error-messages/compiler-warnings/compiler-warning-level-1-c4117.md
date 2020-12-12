---
description: 'Altre informazioni su: avviso del compilatore (livello 1) C4117'
title: Avviso del compilatore (livello 1) C4117
ms.date: 11/04/2016
f1_keywords:
- C4117
helpviewer_keywords:
- C4117
ms.assetid: c45aa281-4cc1-4dfd-bd32-bd7a60ddd577
ms.openlocfilehash: 2c7b80c2e1a9e155e0196c2b62857d56877857b9
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97267404"
---
# <a name="compiler-warning-level-1-c4117"></a>Avviso del compilatore (livello 1) C4117

il nome macro 'name' è riservato. 'Command' ignorato

### <a name="to-fix-by-checking-the-following-possible-causes"></a>Per risolverlo è possibile verificare le seguenti cause possibili

1. Tentativo di definire o annullare la definizione di una macro già definita.

1. Tentativo di definire o annullare la definizione dell'operatore del preprocessore **defined**.

L'esempio seguente genera l'errore C4117:

```cpp
// C4117.cpp
// compile with: /W1
#define __FILE__ test         // C4117. __FILE__ is a predefined macro
#define ValidMacroName test   // ok

int main() {
}
```
