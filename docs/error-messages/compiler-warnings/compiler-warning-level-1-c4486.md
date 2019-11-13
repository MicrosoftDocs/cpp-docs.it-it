---
title: Avviso del compilatore (livello 1) C4486
ms.date: 11/04/2016
f1_keywords:
- C4486
helpviewer_keywords:
- C4486
ms.assetid: 2c0c59e3-d025-4d97-8da2-fa27df1402fc
ms.openlocfilehash: 4c92c23af4aeb6a18c812517cfef9fa00d15dfcb
ms.sourcegitcommit: e5192a25c084eda9eabfa37626f3274507e026b3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/12/2019
ms.locfileid: "73965399"
---
# <a name="compiler-warning-level-1-c4486"></a>Avviso del compilatore (livello 1) C4486

' Function ': un metodo virtuale privato di una classe di riferimento o di una classe di valori deve essere contrassegnato come ' sealed '

Poiché una funzione membro virtuale privata di una classe o di uno struct gestito non è accessibile o sottoposta a override, deve essere contrassegnata come [sealed](../../extensions/sealed-cpp-component-extensions.md).

## <a name="example"></a>Esempio

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

## <a name="example"></a>Esempio

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