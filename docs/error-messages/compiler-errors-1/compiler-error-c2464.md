---
description: 'Altre informazioni su: errore del compilatore C2464'
title: Errore del compilatore C2464
ms.date: 11/04/2016
f1_keywords:
- C2464
helpviewer_keywords:
- C2464
ms.assetid: ace953d6-b414-49ee-bfef-90578a8da00c
ms.openlocfilehash: 2e30166529616809478927dbfe6ff1f1efb3002a
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97341841"
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
