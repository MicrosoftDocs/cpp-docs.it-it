---
title: Errore del compilatore C2619
ms.date: 11/04/2016
f1_keywords:
- C2619
helpviewer_keywords:
- C2619
ms.assetid: c826f8ab-d66a-4b79-a0b2-93b0af8c41ac
ms.openlocfilehash: f82b315a3e7ae4bb1f6d281e1d80ddc2c7fb0dea
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50662915"
---
# <a name="compiler-error-c2619"></a>Errore del compilatore C2619

'identifier': membro dati statico non consentito in una struct o unione anonima

Un membro di una struct o unione anonima è dichiarato come `static`.

L'esempio seguente genera l'errore C2619 e illustra come risolverlo rimuovendo la parola chiave static.

```
// C2619.cpp
int main() {
   union { static int j; };  // C2619
   union { int j; };  // OK
}
```