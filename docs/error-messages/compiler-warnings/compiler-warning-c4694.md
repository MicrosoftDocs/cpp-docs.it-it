---
title: Avviso del compilatore C4694
ms.date: 10/25/2017
f1_keywords:
- C4694
helpviewer_keywords:
- C4694
ms.assetid: 5ca122bb-34f3-43ee-a21f-95802cd515f7
ms.openlocfilehash: 6eaaa4c1f16e2ac2c5029511430a145fd9b943e2
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50428340"
---
# <a name="compiler-warning-c4694"></a>Avviso del compilatore C4694

> «*classe*': una classe astratta sealed non può avere una classe di base*base_class*»

Una classe astratta e sealed non può ereditare da un tipo riferimento; una classe sealed e astratta non può implementare le funzioni della classe base e non può essere usata come una classe base.

Per altre informazioni, vedere [astratto](../../windows/abstract-cpp-component-extensions.md), [sealed](../../windows/sealed-cpp-component-extensions.md), e [classi e struct](../../windows/classes-and-structs-cpp-component-extensions.md).

Questo avviso viene promossa automaticamente a un errore. Se si vuole modificare questo comportamento, usare [#pragma avviso](../../preprocessor/warning.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C4694.

```cpp
// C4694.cpp
// compile with: /c /clr
ref struct A {};
ref struct B sealed abstract : A {};   // C4694
```