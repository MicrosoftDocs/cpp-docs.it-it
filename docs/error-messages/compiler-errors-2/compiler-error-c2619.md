---
title: Errore del compilatore C2619
ms.date: 11/04/2016
f1_keywords:
- C2619
helpviewer_keywords:
- C2619
ms.assetid: c826f8ab-d66a-4b79-a0b2-93b0af8c41ac
ms.openlocfilehash: 3ca5ea4612091f1e3eee8fead2b1eaebb264b696
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74754771"
---
# <a name="compiler-error-c2619"></a>Errore del compilatore C2619

'identifier': membro dati statico non consentito in una struct o unione anonima

Un membro di una struct o unione anonima è dichiarato come `static`.

L'esempio seguente genera l'errore C2619 e illustra come risolverlo rimuovendo la parola chiave static.

```cpp
// C2619.cpp
int main() {
   union { static int j; };  // C2619
   union { int j; };  // OK
}
```
