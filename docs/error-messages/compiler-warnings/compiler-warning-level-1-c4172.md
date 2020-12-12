---
description: 'Altre informazioni su: avviso del compilatore (livello 1) C4172'
title: Avviso del compilatore (livello 1) C4172
ms.date: 11/04/2016
f1_keywords:
- C4172
helpviewer_keywords:
- C4172
ms.assetid: a8d2bf65-d8b1-4fe3-8340-a223d7e7fde6
ms.openlocfilehash: 7bcfe460150e543c1e3fb6a93ed6656619b5cb13
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97266936"
---
# <a name="compiler-warning-level-1-c4172"></a>Avviso del compilatore (livello 1) C4172

restituzione dell'indirizzo della variabile locale o temporanea

Una funzione restituisce l'indirizzo di una variabile locale o di un oggetto temporaneo. Le variabili locali e gli oggetti temporanei vengono eliminati quando una funzione restituisce, quindi l'indirizzo restituito non è valido.

Riprogettare la funzione in modo che non restituisca l'indirizzo di un oggetto locale.

L'esempio seguente genera l'C4172:

```cpp
// C4172.cpp
// compile with: /W1 /LD
float f = 10;

const double& bar() {
// try the following line instead
// const float& bar() {
   return f;   // C4172
}
```
