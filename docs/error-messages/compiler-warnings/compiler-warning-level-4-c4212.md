---
title: Avviso del compilatore (livello 4) C4212
ms.date: 11/04/2016
f1_keywords:
- C4212
helpviewer_keywords:
- C4212
ms.assetid: df781ea1-182d-4f9f-9a31-55b6ce80c711
ms.openlocfilehash: 8eca942de1d2f78f5e42d4aac7e2441789a01862
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50598900"
---
# <a name="compiler-warning-level-4-c4212"></a>Avviso del compilatore (livello 4) C4212

utilizzata estensione non standard: dichiarazione di funzione usato con puntini di sospensione

Il prototipo di funzione ha un numero variabile di argomenti. Non è la definizione di funzione.

L'esempio seguente genera l'errore C4212:

```
// C4212.c
// compile with: /W4 /Ze /c
void f(int , ...);
void f(int i, int j) {}
```