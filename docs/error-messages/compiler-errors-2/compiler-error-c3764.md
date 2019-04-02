---
title: Errore del compilatore C3764
ms.date: 11/04/2016
f1_keywords:
- C3764
helpviewer_keywords:
- C3764
ms.assetid: af5d254c-8d4a-4dda-aad9-3c5c1257c868
ms.openlocfilehash: 2570ee9abb148b919242de7786cd6fa91765286f
ms.sourcegitcommit: 5cecccba0a96c1b4ccea1f7a1cfd91f259cc5bde
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/01/2019
ms.locfileid: "58773580"
---
# <a name="compiler-error-c3764"></a>Errore del compilatore C3764

'funzione_override': Impossibile eseguire l'override di metodo della classe base 'funzione_classe_base'

Il compilatore ha rilevato un override valido. Ad esempio, la funzione di classe di base non era `virtual`. Per altre informazioni, vedere [eseguire l'override](../../extensions/override-cpp-component-extensions.md).

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