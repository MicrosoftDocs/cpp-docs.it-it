---
title: Errore del compilatore C3484
ms.date: 11/04/2016
f1_keywords:
- C3484
helpviewer_keywords:
- C3484
ms.assetid: 2fe847fa-f6ee-4978-bc1d-b6dc6ae906ac
ms.openlocfilehash: fd8909b664f739afa1ab1208be0984b8f410154d
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50468640"
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