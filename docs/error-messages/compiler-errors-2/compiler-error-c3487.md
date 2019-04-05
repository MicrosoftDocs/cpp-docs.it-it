---
title: Errore del compilatore C3487
ms.date: 11/04/2016
f1_keywords:
- C3487
helpviewer_keywords:
- C3487
ms.assetid: 39bda474-4418-4a79-98bf-2b22fa92eaaa
ms.openlocfilehash: 01f8a1bd74ed2b7a3150afae5b46128c6f5b0ca2
ms.sourcegitcommit: c7f90df497e6261764893f9cc04b5d1f1bf0b64b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/05/2019
ms.locfileid: "59028412"
---
# <a name="compiler-error-c3487"></a>Errore del compilatore C3487

'return type': tutte le espressioni restituite devono essere dedotte dallo stesso tipo. In precedenza era 'return type'

Un'espressione lambda deve specificare il tipo restituito a meno che non contenga una singola istruzione return. Se un'espressione lambda contiene più istruzioni return, devono avere tutte lo stesso tipo.

### <a name="to-correct-this-error"></a>Per correggere l'errore

- Specificare un tipo restituito finale per l'espressione lambda. Verificare che tutti i valori restituiti dall'espressione lambda siano dello stesso tipo o possano essere convertiti in modo implicito nel tipo restituito.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3487 perché i tipi restituiti dell'espressione lambda non corrispondono:

```
// C3487.cpp
// Compile by using: cl /c /W4 C3487.cpp

int* test(int* pi) {
   // To fix the error, uncomment the trailing return type below
   auto odd_pointer = [=]() /* -> int* */ {
      if (*pi % 2)
         return pi;
      return nullptr; // C3487 - nullptr is not an int* type
   };
   return odd_pointer();
}
```

## <a name="see-also"></a>Vedere anche

[Espressioni lambda](../../cpp/lambda-expressions-in-cpp.md)