---
description: 'Altre informazioni su: avviso del compilatore C4484'
title: Avviso del compilatore C4484
ms.date: 11/04/2016
f1_keywords:
- C4484
helpviewer_keywords:
- C4484
ms.assetid: 3d30e5b3-2297-45b7-a37a-1360056fdd0e
ms.openlocfilehash: 43228cabc8dfd728ea104f6c3b57d863ec9e5e5a
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97180734"
---
# <a name="compiler-warning-c4484"></a>Avviso del compilatore C4484

' override_function ': corrisponde al metodo della classe di riferimento di base ' base_class_function ', ma non è contrassegnato ' Virtual ',' New ' o ' override '; si presuppone ' New ' (e non ' Virtual ')

Quando si compila con **/CLR**, il compilatore non esegue l'override implicito di una funzione della classe base, il che significa che la funzione otterrà un nuovo slot in vtable. Per risolvere il errore, specificare in modo esplicito se una funzione è un override.

Per altre informazioni, vedere:

- [/CLR (compilazione Common Language Runtime)](../../build/reference/clr-common-language-runtime-compilation.md)

- [override](../../extensions/override-cpp-component-extensions.md)

- [new (nuovo slot in vtable)](../../extensions/new-new-slot-in-vtable-cpp-component-extensions.md)

C4484 viene sempre emesso come un errore. Usare il pragma [warning](../../preprocessor/warning.md) per disattivare C4484.

## <a name="example"></a>Esempio

L'esempio seguente genera l'C4484.

```cpp
// C4484.cpp
// compile with: /clr
ref struct A {
   virtual void Test() {}
};

ref struct B : A {
   void Test() {}   // C4484
};

// OK
ref struct C {
   virtual void Test() {}
   virtual void Test2() {}
};

ref struct D : C {
   virtual void Test() new {}
   virtual void Test2() override {}
};
```
