---
title: Errore del compilatore C3485 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3485
dev_langs:
- C++
helpviewer_keywords:
- C3485
ms.assetid: d67536f9-67a1-4ad9-9a94-d8bbbca3d0dc
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: db3eee53f23aa2cdc958b63faed11ead302f4b1e
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46060746"
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