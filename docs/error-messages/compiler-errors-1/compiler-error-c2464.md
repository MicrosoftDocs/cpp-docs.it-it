---
title: Errore del compilatore C2464
ms.date: 11/04/2016
f1_keywords:
- C2464
helpviewer_keywords:
- C2464
ms.assetid: ace953d6-b414-49ee-bfef-90578a8da00c
ms.openlocfilehash: b2d2766b11d15bdb666baa207591cc9ff279a280
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87225475"
---
# <a name="compiler-error-c2464"></a>Errore del compilatore C2464

' Identifier ': non è possibile usare ' New ' per allocare un riferimento

Identificatore di riferimento allocato con l' **`new`** operatore. I riferimenti non sono oggetti memoria, pertanto **`new`** non è possibile restituirvi un puntatore. Usare la sintassi di dichiarazione delle variabili standard per dichiarare un riferimento.

L'esempio seguente genera l'C2464:

```cpp
// C2464.cpp
int main() {
   new ( int& ir );   // C2464
}
```
