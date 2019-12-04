---
title: Errore del compilatore C3495
ms.date: 11/04/2016
f1_keywords:
- C3495
helpviewer_keywords:
- C3495
ms.assetid: 1fd40cb8-8373-403d-b8a8-f08424a50807
ms.openlocfilehash: 1a61d4f2472ef6da8aedcf8a8ef90b70de47d8af
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74738271"
---
# <a name="compiler-error-c3495"></a>Errore del compilatore C3495

'var': la durata dell'archiviazione di un'acquisizione di espressioni lambda deve essere automatica

Non è possibile acquisire una variabile che non ha una durata di archiviazione automatica, ad esempio una variabile contrassegnata come `static` o `extern`.

### <a name="to-correct-this-error"></a>Per correggere l'errore

- Non passare una variabile `static` o `extern` all'elenco di acquisizione dell'espressione lambda.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3495 perché la variabile `static` `n` è presente nell'elenco di acquisizione di un'espressione lambda:

```cpp
// C3495.cpp

int main()
{
   static int n = 66;
   [&n]() { return n; }(); // C3495
}
```

## <a name="see-also"></a>Vedere anche

[Espressioni lambda](../../cpp/lambda-expressions-in-cpp.md)

