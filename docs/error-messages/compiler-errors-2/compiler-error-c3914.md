---
description: 'Altre informazioni su: errore del compilatore C3914'
title: Errore del compilatore C3914
ms.date: 11/04/2016
f1_keywords:
- C3914
helpviewer_keywords:
- C3914
ms.assetid: 8f3190e6-ee50-4916-9ecc-3b8748b2e1e7
ms.openlocfilehash: 7f5291e09d7f3f794d7d1bec90f0a753d7dfe38f
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97143962"
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
