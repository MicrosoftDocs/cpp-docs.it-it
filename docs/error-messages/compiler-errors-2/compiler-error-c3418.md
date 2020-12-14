---
description: 'Altre informazioni su: errore del compilatore C3418'
title: Errore del compilatore C3418
ms.date: 11/04/2016
f1_keywords:
- C3418
helpviewer_keywords:
- C3418
ms.assetid: 54042c04-3c45-41c1-bad7-90f9ee05a21b
ms.openlocfilehash: 38082b7fe9ffa0ebcc7b4857e77395664a9f0c42
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97316232"
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
