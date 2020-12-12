---
description: 'Altre informazioni su: errore del compilatore C3498'
title: Errore del compilatore C3498
ms.date: 11/04/2016
f1_keywords:
- C3498
helpviewer_keywords:
- C3498
ms.assetid: 0a5a7817-0872-4119-83bf-980a19113374
ms.openlocfilehash: f4d4ccb67494eb2d2cab499c210d360415fa9779
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97113101"
---
# <a name="compiler-error-c3498"></a>Errore del compilatore C3498

' var ': Impossibile acquisire una variabile con un oggetto gestito o WinRTtype

Non è possibile acquisire una variabile con un tipo gestito o un tipo Windows Runtime in un'espressione lambda.

### <a name="to-correct-this-error"></a>Per correggere l'errore

- Passare la variabile gestita o Windows Runtime all'elenco di parametri dell'espressione lambda.

## <a name="examples"></a>Esempio

L'esempio seguente genera l'errore C3498 perché una variabile con un tipo gestito viene visualizzata nell'elenco di acquisizione di un'espressione lambda:

```cpp
// C3498a.cpp
// compile with: /clr
using namespace System;

int main()
{
   String ^ s = "Hello";
   [&s](String ^ r)
      { return String::Concat(s, r); } (", World!"); // C3498
}
```

L'esempio seguente risolve l'errore C3498 passando la variabile gestita `s` all'elenco di parametri dell'espressione lambda:

```cpp
// C3498b.cpp
// compile with: /clr
using namespace System;

int main()
{
   String ^ s = "Hello";
   [](String ^ s, String ^ r)
      { return String::Concat(s, r); } (s, ", World!");
}
```

## <a name="see-also"></a>Vedi anche

[Espressioni lambda](../../cpp/lambda-expressions-in-cpp.md)
