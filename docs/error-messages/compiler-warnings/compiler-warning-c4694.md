---
title: Avviso del compilatore C4694
ms.date: 10/25/2017
f1_keywords:
- C4694
helpviewer_keywords:
- C4694
ms.assetid: 5ca122bb-34f3-43ee-a21f-95802cd515f7
ms.openlocfilehash: 6164fd2e19e35233ba67feb84d117f1e4e01f20d
ms.sourcegitcommit: 5cecccba0a96c1b4ccea1f7a1cfd91f259cc5bde
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/01/2019
ms.locfileid: "58770356"
---
# <a name="compiler-warning-c4694"></a>Avviso del compilatore C4694

> «*classe*': una classe astratta sealed non può avere una classe di base*base_class*»

Una classe astratta e sealed non può ereditare da un tipo riferimento; una classe sealed e astratta non può implementare le funzioni della classe base e non può essere usata come una classe base.

Per altre informazioni, vedere [astratto](../../extensions/abstract-cpp-component-extensions.md), [sealed](../../extensions/sealed-cpp-component-extensions.md), e [classi e struct](../../extensions/classes-and-structs-cpp-component-extensions.md).

Questo avviso viene promossa automaticamente a un errore. Se si vuole modificare questo comportamento, usare [#pragma avviso](../../preprocessor/warning.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C4694.

```cpp
// C4694.cpp
// compile with: /c /clr
ref struct A {};
ref struct B sealed abstract : A {};   // C4694
```