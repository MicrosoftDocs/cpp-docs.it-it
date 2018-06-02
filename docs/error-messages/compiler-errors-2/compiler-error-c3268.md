---
title: Errore del compilatore C3268 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3268
dev_langs:
- C++
helpviewer_keywords:
- C3268
ms.assetid: d74a630c-daea-4e29-9759-83efef7fb184
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: eac0c4e7c25df466ecf1e7e28bccf9ee2a2e2953
ms.sourcegitcommit: a4454b91d556a3dc43d8755cdcdeabcc9285a20e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/01/2018
ms.locfileid: "34705257"
---
# <a name="compiler-error-c3268"></a>Errore del compilatore C3268

> '*funzione*': una funzione generica o una funzione membro di una classe generica non può avere un elenco di parametri variabile

## <a name="remarks"></a>Note

Il **/clr: pure** e **/CLR: safe** opzioni del compilatore sono deprecate in Visual Studio 2015 e non supportate in Visual Studio 2017.

Vedere [Generics](../../windows/generics-cpp-component-extensions.md) per ulteriori informazioni.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3268.

```cpp
// C3268.cpp
// compile with: /clr:pure /c
generic <class ItemType>
void Test(ItemType item, ...) {}   // C3268
// try the following line instead
// void Test(ItemType item) {}

generic <class ItemType2>
ref struct MyStruct { void Test(...){} };   // C3268
// try the following line instead
// ref struct MyStruct { void Test2(){} };   // OK
```