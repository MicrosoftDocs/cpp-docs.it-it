---
title: Compilatore avviso (livello 1) C4486 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4486
dev_langs:
- C++
helpviewer_keywords:
- C4486
ms.assetid: 2c0c59e3-d025-4d97-8da2-fa27df1402fc
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: c86f821855a0686b66c93db22ca6e200064142d1
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46047070"
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