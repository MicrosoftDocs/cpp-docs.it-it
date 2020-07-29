---
title: Avviso del compilatore C4485
ms.date: 11/04/2016
f1_keywords:
- C4485
helpviewer_keywords:
- C4485
ms.assetid: a6f2b437-ca93-4dcd-b9cb-df415e10df86
ms.openlocfilehash: d730441772f021bbece9af8313229543e432b2d7
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87197293"
---
# <a name="compiler-warning-c4485"></a>Avviso del compilatore C4485

' override_function ': corrisponde al metodo della classe di riferimento di base ' base_class_function ', ma non è contrassegnato ' New ' o ' override '; si presuppone ' New ' (è Virtual ')

Una funzione di accesso esegue l'override di, con o senza la **`virtual`** parola chiave, una funzione di accesso della classe base, ma l' `override` **`new`** identificatore o non fa parte della firma della funzione che esegue l'override. Aggiungere l' **`new`** `override` identificatore o per risolvere il problema.

Per ulteriori informazioni, vedere [override](../../extensions/override-cpp-component-extensions.md) e [nuovo (nuovo slot in vtable)](../../extensions/new-new-slot-in-vtable-cpp-component-extensions.md) .

C4485 viene sempre emesso come un errore. Usare il pragma [warning](../../preprocessor/warning.md) per disattivare C4485.

## <a name="example"></a>Esempio

L'esempio seguente genera C4485

```cpp
// C4485.cpp
// compile with: /clr
delegate void Del();

ref struct A {
   virtual event Del ^E;
};

ref struct B : A {
   virtual event Del ^E;   // C4485
};

ref struct C : B {
   virtual event Del ^E {
      void raise() override {}
      void add(Del ^) override {}
      void remove(Del^) override {}
   }
};
```
