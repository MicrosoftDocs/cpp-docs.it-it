---
description: 'Altre informazioni su: errore del compilatore c2179'
title: Errore del compilatore C2179
ms.date: 11/04/2016
f1_keywords:
- C2179
helpviewer_keywords:
- C2179
ms.assetid: f929bfc6-3964-4e54-87d6-7529b9b6c0b9
ms.openlocfilehash: 17ddc839161f36efc668bb52504e2434ec82f995
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97335229"
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
