---
description: 'Altre informazioni su: errore del compilatore C3485'
title: Errore del compilatore C3485
ms.date: 11/04/2016
f1_keywords:
- C3485
helpviewer_keywords:
- C3485
ms.assetid: d67536f9-67a1-4ad9-9a94-d8bbbca3d0dc
ms.openlocfilehash: 0b11eb4487a9b6deb611852dd11a8a1963dd961e
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97168384"
---
# <a name="compiler-error-c3485"></a>Errore del compilatore C3485

una definizione di espressione lambda non può contenere qualificatori di tipo const o volatile

Non è possibile usare **`const`** un **`volatile`** qualificatore o come parte della definizione di un'espressione lambda.

### <a name="to-correct-this-error"></a>Per correggere l'errore

- Rimuovere il **`const`** **`volatile`** qualificatore o dalla definizione dell'espressione lambda.

## <a name="example"></a>Esempio

L'esempio seguente genera C3485 perché usa il **`const`** qualificatore come parte della definizione di un'espressione lambda:

```cpp
// C3485.cpp

int main()
{
   auto x = []() const mutable {}; // C3485
}
```

## <a name="see-also"></a>Vedi anche

[Espressioni lambda](../../cpp/lambda-expressions-in-cpp.md)
