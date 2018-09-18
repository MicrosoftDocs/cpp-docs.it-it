---
title: Compilatore avviso (livello 1) C4551 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4551
dev_langs:
- C++
helpviewer_keywords:
- C4551
ms.assetid: 458b59bd-e2d7-425f-9ba6-268ff200424f
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 5dc8852ccaee1d2b07fbf35e57885b863afef921
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46075566"
---
# <a name="compiler-warning-level-1-c4551"></a>Avviso del compilatore (livello 1) C4551

elenco di argomenti della funzione chiamata mancante

Una chiamata di funzione deve includere le parentesi di aperte e chiusura dopo il nome della funzione anche se la funzione non accetta parametri.

L'esempio seguente genera l'errore C4551:

```
// C4551.cpp
// compile with: /W1
void function1() {
}

int main() {
   function1;   // C4551
   function1();   // OK
}
```