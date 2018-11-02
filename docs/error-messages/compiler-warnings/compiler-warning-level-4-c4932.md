---
title: Avviso del compilatore (livello 4) C4932
ms.date: 11/04/2016
f1_keywords:
- C4932
helpviewer_keywords:
- C4932
ms.assetid: 0b8d88cc-21f6-45cb-a9f5-1795b7db0dfa
ms.openlocfilehash: afeb27562c995bea38e9858c7ba3b279a98655cf
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50515024"
---
# <a name="compiler-warning-level-4-c4932"></a>Avviso del compilatore (livello 4) C4932

__identifier(Identifier) e \__identifier(identifier) non sono distinguibili

Il compilatore non riesce a distinguere tra **_finally** e `__finally` o `__try` e **_try** come parametro passato a [__identifier](../../windows/identifier-cpp-cli.md). Non provare a usarli entrambi come identificatori nello stesso programma, perché verrebbe generato l'errore [C2374](../../error-messages/compiler-errors-1/compiler-error-c2374.md) .

L'esempio seguente genera l'errore C4932:

```
// C4932.cpp
// compile with: /clr /W4 /WX
int main() {
   int __identifier(_finally) = 245;   // C4932
   int __identifier(__finally) = 25;   // C4932
}
```