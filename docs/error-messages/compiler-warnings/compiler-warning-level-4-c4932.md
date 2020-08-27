---
title: Avviso del compilatore (livello 4) C4932
description: Descrive C4932 di avviso del compilatore Microsoft C/C++.
ms.date: 08/25/2020
f1_keywords:
- C4932
helpviewer_keywords:
- C4932
ms.assetid: 0b8d88cc-21f6-45cb-a9f5-1795b7db0dfa
ms.openlocfilehash: ece2ae14fd8e1198a97f5e772fcce52c47464878
ms.sourcegitcommit: efc8c32205c9d610f40597556273a64306dec15d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/26/2020
ms.locfileid: "88898295"
---
# <a name="compiler-warning-level-4-c4932"></a>Avviso del compilatore (livello 4) C4932

> `__identifier(identifier_1)` e non `__identifier(identifier_2)` sono distinguibili

Il compilatore non è in grado di distinguere tra **`_finally`** e **`__finally`** o **`__try`** e **`_try`** come parametro passato a [`__identifier`](../../extensions/identifier-cpp-cli.md) . Non provare a usarli entrambi come identificatori nello stesso programma, perché verrebbe generato l'errore [C2374](../../error-messages/compiler-errors-1/compiler-error-c2374.md) .

L'esempio seguente genera l'errore C4932:

```cpp
// C4932.cpp
// compile with: /clr /W4 /WX
int main() {
   int __identifier(_finally) = 245;   // C4932
   int __identifier(__finally) = 25;   // C4932
}
```
