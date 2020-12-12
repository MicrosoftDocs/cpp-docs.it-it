---
description: 'Altre informazioni su: errore del compilatore C3484'
title: Errore del compilatore C3484
ms.date: 11/04/2016
f1_keywords:
- C3484
helpviewer_keywords:
- C3484
ms.assetid: 2fe847fa-f6ee-4978-bc1d-b6dc6ae906ac
ms.openlocfilehash: 6d3e72ef89ad33333c840b549cfc5c7c40495130
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97315686"
---
# <a name="compiler-error-c3484"></a>Errore del compilatore C3484

previsto '->' prima del tipo restituito

È necessario fornire `->` prima del tipo restituito di un'espressione lambda.

### <a name="to-correct-this-error"></a>Per correggere l'errore

- Fornire `->` prima del tipo restituito.

## <a name="examples"></a>Esempio

L'esempio seguente genera l'errore C3484:

```cpp
// C3484a.cpp

int main()
{
   return []() . int { return 42; }(); // C3484
}
```

L'esempio seguente consente di risolvere l'errore C3484 fornendo `->` prima del tipo restituito dell'espressione lambda:

```cpp
// C3484b.cpp

int main()
{
   return []() -> int { return 42; }();
}
```

## <a name="see-also"></a>Vedi anche

[Espressioni lambda](../../cpp/lambda-expressions-in-cpp.md)
