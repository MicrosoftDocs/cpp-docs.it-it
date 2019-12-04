---
title: Errore del compilatore C2464
ms.date: 11/04/2016
f1_keywords:
- C2464
helpviewer_keywords:
- C2464
ms.assetid: ace953d6-b414-49ee-bfef-90578a8da00c
ms.openlocfilehash: e4952f4702d871ecf1c818b1fc7394e54a1a295f
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74743887"
---
# <a name="compiler-error-c2464"></a>Errore del compilatore C2464

' Identifier ': non è possibile usare ' New ' per allocare un riferimento

Identificatore di riferimento allocato con l'operatore `new`. I riferimenti non sono oggetti memoria, quindi `new` non possono restituire un puntatore. Usare la sintassi di dichiarazione delle variabili standard per dichiarare un riferimento.

L'esempio seguente genera l'C2464:

```cpp
// C2464.cpp
int main() {
   new ( int& ir );   // C2464
}
```
