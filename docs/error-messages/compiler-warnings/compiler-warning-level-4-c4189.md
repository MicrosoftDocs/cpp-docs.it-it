---
title: Avviso del compilatore (livello 4) C4189
ms.date: 11/04/2016
f1_keywords:
- C4189
helpviewer_keywords:
- C4189
ms.assetid: 7ad9242c-228e-4054-8244-5e914b618ef3
ms.openlocfilehash: 6463379529897598d560d6bcc22bd3a278a66477
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50447252"
---
# <a name="compiler-warning-level-4-c4189"></a>Avviso del compilatore (livello 4) C4189

'identifier': variabile locale inizializzata ma senza riferimenti

Una variabile è stata dichiarata e inizializzata, ma non usata.

L'esempio seguente genera l'errore C4189:

```
// C4189.cpp
// compile with: /W4
int main() {
   int a = 1;   // C4189, remove declaration to resolve
}
```