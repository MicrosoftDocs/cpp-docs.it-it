---
title: Errore del compilatore C3914
ms.date: 11/04/2016
f1_keywords:
- C3914
helpviewer_keywords:
- C3914
ms.assetid: 8f3190e6-ee50-4916-9ecc-3b8748b2e1e7
ms.openlocfilehash: 6f7da67871b5e6b9d7da9a9aa4eebeb761f8cc50
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74737998"
---
# <a name="compiler-error-c3914"></a>Errore del compilatore C3914

una proprietà predefinita non può essere statica

Una proprietà predefinita è stata dichiarata in modo non corretto.  Per altre informazioni, vedere [procedura: usare le proprietà in C++/CLI](../../dotnet/how-to-use-properties-in-cpp-cli.md).

## <a name="example"></a>Esempio

L'esempio seguente genera C3914 e Mostra come risolverlo.

```cpp
// C3914.cpp
// compile with: /clr /c
ref struct X {
   static property int default[int] {   // C3914
   // try the following line instead
   // property int default[int] {
      int get(int) { return 0; }
      void set(int, int) {}
   }
};
```
