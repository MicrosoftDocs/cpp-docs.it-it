---
title: Compilatore Warning (level 1) C4020 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4020
dev_langs:
- C++
helpviewer_keywords:
- C4020
ms.assetid: 8c4cd6be-9371-4c8c-b0ff-a5ad367bbab0
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: ef0303c1a811304cd2edaa8622208dc4bada86ef
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46046732"
---
# <a name="compiler-warning-level-1-c4020"></a>Compilatore Warning (level 1) C4020

'function': troppi parametri effettivi

Il numero di parametri effettivi in una chiamata di funzione supera il numero di parametri formali del prototipo di funzione o della definizione. Il compilatore passa i parametri aggiuntivi effettivi secondo la convenzione di chiamata della funzione.

L'esempio seguente genera l'errore C4020:

```
// C4020.c
// compile with: /W1 /c
void f(int);
int main() {
   f(1,2);   // C4020
}
```

Possibile soluzione:

```
// C4020b.c
// compile with: /c
void f(int);
int main() {
   f(1);
}
```