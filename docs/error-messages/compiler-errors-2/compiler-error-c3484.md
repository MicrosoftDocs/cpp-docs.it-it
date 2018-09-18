---
title: Errore del compilatore C3484 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3484
dev_langs:
- C++
helpviewer_keywords:
- C3484
ms.assetid: 2fe847fa-f6ee-4978-bc1d-b6dc6ae906ac
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 19a79574f85d05c6b1ac32416509ba1f8c05e26b
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46019186"
---
# <a name="compiler-error-c3484"></a>Errore del compilatore C3484

previsto '->' prima del tipo restituito

È necessario fornire `->` prima del tipo restituito di un'espressione lambda.

### <a name="to-correct-this-error"></a>Per correggere l'errore

- Fornire `->` prima del tipo restituito.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3484:

```
// C3484a.cpp

int main()
{
   return []() . int { return 42; }(); // C3484
}
```

## <a name="example"></a>Esempio

L'esempio seguente consente di risolvere l'errore C3484 fornendo `->` prima del tipo restituito dell'espressione lambda:

```
// C3484b.cpp

int main()
{
   return []() -> int { return 42; }();
}
```

## <a name="see-also"></a>Vedere anche

[Espressioni lambda](../../cpp/lambda-expressions-in-cpp.md)