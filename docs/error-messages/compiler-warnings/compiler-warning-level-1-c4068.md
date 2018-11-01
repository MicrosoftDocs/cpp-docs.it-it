---
title: Avviso del compilatore (livello 1) C4068
ms.date: 11/04/2016
f1_keywords:
- C4068
helpviewer_keywords:
- C4068
ms.assetid: 96a7397a-4eab-44ab-b3bb-36747503f7e5
ms.openlocfilehash: 1e0cb7229733e15afd87548a1b18b3f58a64c239
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50565074"
---
# <a name="compiler-warning-level-1-c4068"></a>Avviso del compilatore (livello 1) C4068

pragma sconosciuto

Il compilatore ha ignorato un [pragma](../../preprocessor/pragma-directives-and-the-pragma-keyword.md)non riconosciuto. Verificare che il **pragma** sia consentito dal compilatore in uso. L'esempio seguente genera l'errore C4068:

```
// C4068.cpp
// compile with: /W1
#pragma NotAValidPragmaName   // C4068, use valid name to resolve
int main()
{
}
```