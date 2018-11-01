---
title: Errore del compilatore C2179
ms.date: 11/04/2016
f1_keywords:
- C2179
helpviewer_keywords:
- C2179
ms.assetid: f929bfc6-3964-4e54-87d6-7529b9b6c0b9
ms.openlocfilehash: 4a8abd8d862d4d6b08b1d0efd1d47d0413b60a81
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50566166"
---
# <a name="compiler-error-c2179"></a>Errore del compilatore C2179

'type': un argomento di attributo non è possibile usare i parametri di tipo

Un parametro di tipo generico viene risolto in fase di esecuzione. Tuttavia, un parametro di attributo deve essere risolto in fase di compilazione. Pertanto, è possibile utilizzare un parametro di tipo generico come argomento a un attributo.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C2179.

```
// C2179.cpp
// compile with: /clr
using namespace System;

public ref struct Attr : Attribute {
   Attr(Type ^ a) {
      x = a;
   }

   Type ^ x;
};

ref struct G {};

generic<typename T>
public ref class Z {
public:
   Type ^ d;
   [Attr(T::typeid)]   // C2179
   // try the following line instead
   // [Attr(G::typeid)]
   T t;
};
```