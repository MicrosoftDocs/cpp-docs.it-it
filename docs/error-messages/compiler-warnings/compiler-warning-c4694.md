---
title: Avviso del compilatore C4694
ms.date: 10/25/2017
f1_keywords:
- C4694
helpviewer_keywords:
- C4694
ms.assetid: 5ca122bb-34f3-43ee-a21f-95802cd515f7
ms.openlocfilehash: daf5423588d08260239c3cff5a68532a358d07b2
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80165119"
---
# <a name="compiler-warning-c4694"></a>Avviso del compilatore C4694

> '*Class*': una classe astratta sealed non può avere una classe base '*BASE_CLASS*'

Una classe astratta e sealed non può ereditare da un tipo riferimento; una classe sealed e astratta non può implementare le funzioni della classe base e non può essere usata come una classe base.

Per altre informazioni, vedere [abstract](../../extensions/abstract-cpp-component-extensions.md), [sealed](../../extensions/sealed-cpp-component-extensions.md), [classi e struct](../../extensions/classes-and-structs-cpp-component-extensions.md).

Questo avviso viene promosso automaticamente a un errore. Se si desidera modificare questo comportamento, utilizzare [#pragma avviso](../../preprocessor/warning.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C4694.

```cpp
// C4694.cpp
// compile with: /c /clr
ref struct A {};
ref struct B sealed abstract : A {};   // C4694
```
