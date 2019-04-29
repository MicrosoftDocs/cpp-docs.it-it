---
title: Errore del compilatore C3498
ms.date: 11/04/2016
f1_keywords:
- C3498
helpviewer_keywords:
- C3498
ms.assetid: 0a5a7817-0872-4119-83bf-980a19113374
ms.openlocfilehash: 463e210e5a1ac5eb6d197062ed8921f9bbae4ad2
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62381007"
---
# <a name="compiler-error-c3498"></a>Errore del compilatore C3498

'var': non è possibile acquisire una variabile che dispone di un oggetto gestito o WinRTtype

Non è possibile acquisire una variabile con un tipo gestito o un tipo Windows Runtime in un'espressione lambda.

### <a name="to-correct-this-error"></a>Per correggere l'errore

- Passare la variabile gestita o Windows Runtime all'elenco di parametri dell'espressione lambda.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3498 perché una variabile con un tipo gestito viene visualizzata nell'elenco di acquisizione di un'espressione lambda:

```
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

## <a name="example"></a>Esempio

L'esempio seguente risolve l'errore C3498 passando la variabile gestita `s` all'elenco di parametri dell'espressione lambda:

```
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

## <a name="see-also"></a>Vedere anche

[Espressioni lambda](../../cpp/lambda-expressions-in-cpp.md)