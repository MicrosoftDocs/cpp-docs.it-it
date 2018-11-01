---
title: Avviso del compilatore (livello 1) C4488
ms.date: 11/04/2016
f1_keywords:
- C4488
helpviewer_keywords:
- C4488
ms.assetid: 55625e46-ddb5-4c7c-99c7-cd4aa9f879bd
ms.openlocfilehash: c816c1b3f5481ccff19fd2a2377c5fc98f950fee
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50577827"
---
# <a name="compiler-warning-level-1-c4488"></a>Avviso del compilatore (livello 1) C4488

'function': richiede la parola chiave 'keyword' per implementare il metodo di interfaccia 'metodo_interfaccia'

Una classe deve implementare tutti i membri di un'interfaccia da cui eredita direttamente. Un membro implementato deve avere accessibilità pubblica e deve essere contrassegnato come virtuale.

## <a name="example"></a>Esempio

C4488 può verificarsi se un membro implementato non è pubblico. L'esempio seguente genera l'errore C4488.

```
// C4488.cpp
// compile with: /clr /c /W1 /WX
interface struct MyI {
   void f1();
};

// implemented member not public
ref class B : MyI { virtual void f1() {} };  // C4488

// OK
ref class C : MyI {
public:
   virtual void f1() {}
};
```

## <a name="example"></a>Esempio

C4488 può verificarsi se un membro implementato non viene contrassegnato come virtual. L'esempio seguente genera l'errore C4488.

```
// C4488_b.cpp
// compile with: /clr /c /W1 /WX
interface struct MyI {
   void f1();
};

ref struct B : MyI { void f1() {} };   // C4488
ref struct C : MyI { virtual void f1() {} };   // OK
```