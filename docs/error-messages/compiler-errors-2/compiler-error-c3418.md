---
title: Errore del compilatore C3418
ms.date: 11/04/2016
f1_keywords:
- C3418
helpviewer_keywords:
- C3418
ms.assetid: 54042c04-3c45-41c1-bad7-90f9ee05a21b
ms.openlocfilehash: 21023bfb551a1894e25cc4940892dde0f0440a0e
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80200882"
---
# <a name="compiler-error-c3418"></a>Errore del compilatore C3418

l'identificatore di accesso 'specifier' non è supportato

Un identificatore di accesso CLR è stato specificato in modo non corretto.  Per ulteriori informazioni, vedere visibilità dei tipi e visibilità dei membri in [procedura: definire e utilizzare classi e struct (C++/CLI)](../../dotnet/how-to-define-and-consume-classes-and-structs-cpp-cli.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3418.

```cpp
// C3418.cpp
// compile with: /clr /c
ref struct m {
internal public:   // C3418
   void test(){}
};

ref struct n {
internal:   // OK
   void test(){}
};
```
