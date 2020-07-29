---
title: Errore del compilatore C3495
ms.date: 11/04/2016
f1_keywords:
- C3495
helpviewer_keywords:
- C3495
ms.assetid: 1fd40cb8-8373-403d-b8a8-f08424a50807
ms.openlocfilehash: a67d4d859e3a9dd2241f14a476492df0fd3e6b8d
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87223421"
---
# <a name="compiler-error-c3495"></a>Errore del compilatore C3495

'var': la durata dell'archiviazione di un'acquisizione di espressioni lambda deve essere automatica

Non è possibile acquisire una variabile che non ha una durata di archiviazione automatica, ad esempio una variabile contrassegnata come **`static`** o **`extern`** .

### <a name="to-correct-this-error"></a>Per correggere l'errore

- Non passare una **`static`** variabile o **`extern`** all'elenco di acquisizione dell'espressione lambda.

## <a name="example"></a>Esempio

Nell'esempio seguente viene generato C3495 perché la **`static`** variabile è `n` presente nell'elenco di acquisizione di un'espressione lambda:

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
