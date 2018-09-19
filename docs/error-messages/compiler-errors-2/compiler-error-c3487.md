---
title: Errore del compilatore C3487 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3487
dev_langs:
- C++
helpviewer_keywords:
- C3487
ms.assetid: 39bda474-4418-4a79-98bf-2b22fa92eaaa
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: acd0dad31a565b9e75741e3a66a5d48dfedec69f
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46087110"
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