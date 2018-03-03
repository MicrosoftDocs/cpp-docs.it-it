---
title: Avviso del compilatore C4694 | Documenti Microsoft
ms.date: 10/25/2017
ms.technology:
- cpp-tools
ms.topic: article
f1_keywords:
- C4694
dev_langs:
- C++
helpviewer_keywords:
- C4694
ms.assetid: 5ca122bb-34f3-43ee-a21f-95802cd515f7
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 3f635aad0039812b50bd48a36f307ab5f60cba10
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-warning-c4694"></a>Avviso del compilatore C4694

> '*classe*': una classe astratta sealed non può avere una classe base*base_class*'

Una classe astratta e sealed non può ereditare da un tipo riferimento; una classe sealed e astratta non può implementare le funzioni della classe base e non può essere usata come una classe base.

Per ulteriori informazioni, vedere [astratta](../../windows/abstract-cpp-component-extensions.md), [sealed](../../windows/sealed-cpp-component-extensions.md), e [classi e struct](../../windows/classes-and-structs-cpp-component-extensions.md).

Questo avviso viene promossa automaticamente a un errore. Se si desidera modificare questo comportamento, utilizzare [#pragma avviso](../../preprocessor/warning.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C4694.

```cpp
// C4694.cpp
// compile with: /c /clr
ref struct A {};
ref struct B sealed abstract : A {};   // C4694
```