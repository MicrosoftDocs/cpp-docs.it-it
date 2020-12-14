---
description: 'Altre informazioni su: avviso del compilatore (livello 1) C4488'
title: Avviso del compilatore (livello 1) C4488
ms.date: 11/04/2016
f1_keywords:
- C4488
helpviewer_keywords:
- C4488
ms.assetid: 55625e46-ddb5-4c7c-99c7-cd4aa9f879bd
ms.openlocfilehash: 60f72a76657e7661beb43441208dda3cddd26f48
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97310928"
---
# <a name="compiler-warning-level-1-c4488"></a>Avviso del compilatore (livello 1) C4488

' Function ': richiede la parola chiave ' keyword ' per implementare il metodo di interfaccia ' interface_method '

Una classe deve implementare tutti i membri di un'interfaccia da cui eredita direttamente. Un membro implementato deve avere accessibilità pubblica e deve essere contrassegnato come Virtual.

## <a name="examples"></a>Esempio

C4488 può verificarsi se un membro implementato non è pubblico. L'esempio seguente genera l'C4488.

```cpp
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

C4488 può verificarsi se un membro implementato non è contrassegnato come Virtual. L'esempio seguente genera l'C4488.

```cpp
// C4488_b.cpp
// compile with: /clr /c /W1 /WX
interface struct MyI {
   void f1();
};

ref struct B : MyI { void f1() {} };   // C4488
ref struct C : MyI { virtual void f1() {} };   // OK
```
