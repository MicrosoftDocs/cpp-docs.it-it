---
description: 'Altre informazioni su: errore del compilatore C2530'
title: Errore del compilatore C2530
ms.date: 11/04/2016
f1_keywords:
- C2530
helpviewer_keywords:
- C2530
ms.assetid: b790a312-48df-4a6a-9e27-be2c5f32f16c
ms.openlocfilehash: 07980fb6d87b4e84bc0b253ccd317eba02fa81af
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97258109"
---
# <a name="compiler-error-c2530"></a>Errore del compilatore C2530

' Identifier ': i riferimenti devono essere inizializzati

È necessario inizializzare un riferimento quando è stato dichiarato, a meno che non sia già stato dichiarato:

- Con la parola chiave [extern](../../cpp/extern-cpp.md).

- Come membro di una classe, di una struttura o di un'Unione (e viene inizializzata nel costruttore).

- Come parametro in una dichiarazione o definizione di funzione.

- Come tipo restituito di una funzione.

L'esempio seguente genera l'C2530:

```cpp
// C2530.cpp
int main() {
   int i = 0;
   int &j;   // C2530
   int &k = i;   // OK
}
```
