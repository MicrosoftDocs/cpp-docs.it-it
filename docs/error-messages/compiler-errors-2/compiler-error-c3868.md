---
title: Errore del compilatore C3868
ms.date: 11/04/2016
f1_keywords:
- C3868
helpviewer_keywords:
- C3868
ms.assetid: f0e45c2a-2149-4885-a03b-0d230069f03a
ms.openlocfilehash: cea8ee926bb5c1bc7482e53ed48a310c870774d1
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74761470"
---
# <a name="compiler-error-c3868"></a>Errore del compilatore C3868

' type ': i vincoli sul parametro generico ' parameter ' differiscono da quelli della dichiarazione

Più dichiarazioni devono avere gli stessi vincoli generici.  Per altre informazioni, vedere [Generics](../../extensions/generics-cpp-component-extensions.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'C3868.

```cpp
// C3868.cpp
// compile with: /clr /c
interface struct I1;

generic <typename T> ref struct MyStruct;
generic <typename U> where U : I1 ref struct MyStruct;   // C3868

// OK
generic <typename T> ref struct MyStruct2;
generic <typename U> ref struct MyStruct2;

generic <typename T> where T : I1 ref struct MyStruct3;
generic <typename U> where U : I1 ref struct MyStruct3;
```
