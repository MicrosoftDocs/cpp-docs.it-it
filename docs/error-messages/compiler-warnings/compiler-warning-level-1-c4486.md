---
title: Avviso del compilatore (livello 1) C4486
ms.date: 11/04/2016
f1_keywords:
- C4486
helpviewer_keywords:
- C4486
ms.assetid: 2c0c59e3-d025-4d97-8da2-fa27df1402fc
ms.openlocfilehash: 893dd9241f83895d253fc8b5513f56cab272e31c
ms.sourcegitcommit: c1fd917a8c06c6504f66f66315ff352d0c046700
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/16/2020
ms.locfileid: "90684677"
---
# <a name="compiler-warning-level-1-c4486"></a>Avviso del compilatore (livello 1) C4486

' Function ': un metodo virtuale privato di una classe di riferimento o di una classe di valori deve essere contrassegnato come ' sealed '

Poiché una funzione membro virtuale privata di una classe o di uno struct gestito non è accessibile o sottoposta a override, deve essere contrassegnata come [sealed](../../extensions/sealed-cpp-component-extensions.md).

## <a name="examples"></a>Esempi

L'esempio seguente genera l'C4486.

```cpp
// C4486.cpp
// compile with: /clr /c /W1
ref class B {
private:
   virtual void f() {}   // C4486
   virtual void f1() sealed {}   // OK
};
```

Nell'esempio seguente viene illustrato un possibile utilizzo di una funzione virtuale sealed privata.

```cpp
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
