---
title: Avviso del compilatore (livello 4) C4932
ms.date: 11/04/2016
f1_keywords:
- C4932
helpviewer_keywords:
- C4932
ms.assetid: 0b8d88cc-21f6-45cb-a9f5-1795b7db0dfa
ms.openlocfilehash: cd37ee67545918991b286d16d0fe27b47414b3c3
ms.sourcegitcommit: 5cecccba0a96c1b4ccea1f7a1cfd91f259cc5bde
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/01/2019
ms.locfileid: "58769823"
---
# <a name="compiler-warning-level-4-c4932"></a>Avviso del compilatore (livello 4) C4932

__identifier(Identifier) e \__identifier(identifier) non sono distinguibili

Il compilatore non riesce a distinguere tra **_finally** e `__finally` o `__try` e **_try** come parametro passato a [__identifier](../../extensions/identifier-cpp-cli.md). Non provare a usarli entrambi come identificatori nello stesso programma, perché verrebbe generato l'errore [C2374](../../error-messages/compiler-errors-1/compiler-error-c2374.md) .

L'esempio seguente genera l'errore C4932:

```
// C4932.cpp
// compile with: /clr /W4 /WX
int main() {
   int __identifier(_finally) = 245;   // C4932
   int __identifier(__finally) = 25;   // C4932
}
```