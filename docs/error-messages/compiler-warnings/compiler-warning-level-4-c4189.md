---
title: Avviso del compilatore (livello 4) C4189
ms.date: 11/04/2016
f1_keywords:
- C4189
helpviewer_keywords:
- C4189
ms.assetid: 7ad9242c-228e-4054-8244-5e914b618ef3
ms.openlocfilehash: 2cb3bfae2156d647790f245bf76ecb93f76a7d15
ms.sourcegitcommit: 3ee06ec53153cf21910fc8cfef78a4f25f9633f3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/26/2019
ms.locfileid: "74541183"
---
# <a name="compiler-warning-level-4-c4189"></a>Avviso del compilatore (livello 4) C4189

'identifier': variabile locale inizializzata ma senza riferimenti

Una variabile è stata dichiarata e inizializzata, ma non usata.

L'esempio seguente genera l'errore C4189:

```cpp
// C4189.cpp
// compile with: /W4
int main() {
   int a = 1;   // C4189, remove declaration to resolve
}
```