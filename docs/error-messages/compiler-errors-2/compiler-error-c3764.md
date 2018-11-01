---
title: Errore del compilatore C3764
ms.date: 11/04/2016
f1_keywords:
- C3764
helpviewer_keywords:
- C3764
ms.assetid: af5d254c-8d4a-4dda-aad9-3c5c1257c868
ms.openlocfilehash: 498aefae4dfe8fd13184b9da1685494d533575dd
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50556429"
---
# <a name="compiler-error-c3764"></a>Errore del compilatore C3764

'funzione_override': Impossibile eseguire l'override di metodo della classe base 'funzione_classe_base'

Il compilatore ha rilevato un override valido. Ad esempio, la funzione di classe di base non era `virtual`. Per altre informazioni, vedere [eseguire l'override](../../windows/override-cpp-component-extensions.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3764.

```
// C3764.cpp
// compile with: /clr /c
public ref struct A {
   void g(int);
   virtual void h(int);
};

public ref struct B : A {
   virtual void g(int) override {}   // C3764
   virtual void h(int) override {}   // OK
};
```

## <a name="example"></a>Esempio

C3764 può verificarsi anche quando un metodo della classe base è sia in modo esplicito e denominato sottoposto a override. L'esempio seguente genera l'errore C3764.

```
// C3764_b.cpp
// compile with: /clr /c
ref struct A {
   virtual void Test() {}
};

ref struct B : public A {
   virtual void Test() override {}
   virtual void Test2() = A::Test {}   // C3764
};
```