---
title: Errore del compilatore C3485
ms.date: 11/04/2016
f1_keywords:
- C3485
helpviewer_keywords:
- C3485
ms.assetid: d67536f9-67a1-4ad9-9a94-d8bbbca3d0dc
ms.openlocfilehash: 2fcaecd6be35e2ae6822133930b48b6bbf02aafe
ms.sourcegitcommit: c7f90df497e6261764893f9cc04b5d1f1bf0b64b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/05/2019
ms.locfileid: "59027584"
---
# <a name="compiler-error-c3485"></a>Errore del compilatore C3485

una definizione di espressione lambda non può contenere qualificatori di tipo const o volatile

Non è possibile usare un qualificatore `const` o `volatile` come parte della definizione di un'espressione lambda.

### <a name="to-correct-this-error"></a>Per correggere l'errore

- Rimuovere il qualificatore `const` o `volatile` dalla definizione dell'espressione lambda.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3485 perché usa il qualificatore `const` come parte della definizione di un'espressione lambda:

```
// C3485.cpp

int main()
{
   auto x = []() const mutable {}; // C3485
}
```

## <a name="see-also"></a>Vedere anche

[Espressioni lambda](../../cpp/lambda-expressions-in-cpp.md)