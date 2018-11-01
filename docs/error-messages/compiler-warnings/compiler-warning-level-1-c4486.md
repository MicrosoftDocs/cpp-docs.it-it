---
title: Avviso del compilatore (livello 1) C4486
ms.date: 11/04/2016
f1_keywords:
- C4486
helpviewer_keywords:
- C4486
ms.assetid: 2c0c59e3-d025-4d97-8da2-fa27df1402fc
ms.openlocfilehash: b6e1fc7001908202efc2fb0ef3653153c007eac0
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50456030"
---
# <a name="compiler-warning-level-1-c4486"></a>Avviso del compilatore (livello 1) C4486

'function': un metodo virtuale privato di una classe di riferimento o una classe di valore deve essere contrassegnato 'sealed'

Poiché una funzione membro virtuale privata di una classe gestita o uno struct non può essere accessibile o sottoposto a override, deve essere contrassegnato [sealed](../../windows/sealed-cpp-component-extensions.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C4486.

```
// C4486.cpp
// compile with: /clr /c /W1
ref class B {
private:
   virtual void f() {}   // C4486
   virtual void f1() sealed {}   // OK
};
```

## <a name="example"></a>Esempio

L'esempio seguente mostra un possibile utilizzo di una funzione sealed, virtual privata.

```
// C4486_b.cpp
// compile with: /clr /c
ref class B {};

ref class D : B {};

interface class I {
   B^ mf();
};

ref class E : I {
private:
   virtual B^ g() sealed = I::mf {
      return gcnew B;
   }

public:
   virtual D^ mf() {
      return gcnew D;
   }
};
```