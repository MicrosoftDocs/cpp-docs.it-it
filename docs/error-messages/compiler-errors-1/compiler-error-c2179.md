---
title: Errore del compilatore C2179
ms.date: 11/04/2016
f1_keywords:
- C2179
helpviewer_keywords:
- C2179
ms.assetid: f929bfc6-3964-4e54-87d6-7529b9b6c0b9
ms.openlocfilehash: 5b9b5382ab934f8d870e58189a447775a1e9a415
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74737166"
---
# <a name="compiler-error-c2179"></a>Errore del compilatore C2179

' type ': un argomento di attributo non può usare parametri di tipo

Un parametro di tipo generico viene risolto in fase di esecuzione. Tuttavia, un parametro dell'attributo deve essere risolto in fase di compilazione. Non è quindi possibile usare un parametro di tipo generico come argomento di un attributo.

## <a name="example"></a>Esempio

L'esempio seguente genera l'c2179.

```cpp
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
