---
title: Avviso del compilatore (livello 4) C4481
ms.date: 11/04/2016
f1_keywords:
- C4481
helpviewer_keywords:
- C4481
ms.assetid: 7bfd4e0c-b452-4e6c-b7c4-ac5cc93fe4ea
ms.openlocfilehash: fe96ff50f4081e3c9dbe3c7eb68da156a69c96ab
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62400760"
---
# <a name="compiler-warning-level-4-c4481"></a>Avviso del compilatore (livello 4) C4481

utilizzata estensione non standard: 'keyword' identificatore override

È stata usata una parola chiave che non è inclusa nello standard C++, ad esempio, uno degli identificatori di override funziona anche in /clr.  Per ulteriori informazioni, vedere,

- [/clr (compilazione Common Language Runtime)](../../build/reference/clr-common-language-runtime-compilation.md)

- [Identificatori di override](../../extensions/override-specifiers-cpp-component-extensions.md)

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C4481.

```
// C4481.cpp
// compile with: /W4 /c
class B {
   virtual void f(unsigned);
};

class C : B {
   void f(unsigned) override;   // C4481
   void f2(unsigned);
};
```