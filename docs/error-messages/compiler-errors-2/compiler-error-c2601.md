---
title: Errore del compilatore C2601
ms.date: 11/04/2016
f1_keywords:
- C2601
helpviewer_keywords:
- C2601
ms.assetid: 88275582-5f37-45d7-807d-05f06ba00965
ms.openlocfilehash: 87b5afe2133bb737a8f9c855b0652c2f50ca27ec
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74740520"
---
# <a name="compiler-error-c2601"></a>Errore del compilatore C2601

' Function ': le definizioni delle funzioni locali non sono valide

Il codice tenta di definire una funzione all'interno di una funzione.

In alternativa, è possibile che nel codice sorgente sia presente una parentesi graffa aggiuntiva prima della posizione dell'errore C2601.

L'esempio seguente genera l'C2601:

```cpp
// C2601.cpp
int main() {
   int i = 0;

   void funcname(int j) {   // C2601
      j++;
   }
}
```
