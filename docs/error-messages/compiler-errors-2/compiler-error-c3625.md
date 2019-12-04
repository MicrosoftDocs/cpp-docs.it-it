---
title: Errore del compilatore C3625
ms.date: 11/04/2016
f1_keywords:
- C3625
helpviewer_keywords:
- C3625
ms.assetid: fdf49f21-d6b1-42f4-9eec-23b04ae8b4aa
ms.openlocfilehash: 83b6756c75f90380024a8f31df62290bed1f7738
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74761907"
---
# <a name="compiler-error-c3625"></a>Errore del compilatore C3625

'native type': un tipo nativo non può derivare da un tipo gestito o WinRT 'type'

Una classe nativa non può ereditare da una classe gestita o WinRT. Per altre informazioni, vedere [Classes and Structs](../../extensions/classes-and-structs-cpp-component-extensions.md) (Classi e struct).

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3625:

```cpp
// C3625.cpp
// compile with: /clr /c
ref class B {};
class D : public B {};   // C3625 cannot inherit from a managed class
```
