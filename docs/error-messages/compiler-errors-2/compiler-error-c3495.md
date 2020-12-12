---
description: 'Altre informazioni su: errore del compilatore C3495'
title: Errore del compilatore C3495
ms.date: 11/04/2016
f1_keywords:
- C3495
helpviewer_keywords:
- C3495
ms.assetid: 1fd40cb8-8373-403d-b8a8-f08424a50807
ms.openlocfilehash: 3c04c80182dad32b539e09224fd9e303b3325578
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97113168"
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

## <a name="see-also"></a>Vedi anche

[Espressioni lambda](../../cpp/lambda-expressions-in-cpp.md)
