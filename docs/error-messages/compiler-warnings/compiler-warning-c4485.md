---
title: Avviso del compilatore C4485
ms.date: 11/04/2016
f1_keywords:
- C4485
helpviewer_keywords:
- C4485
ms.assetid: a6f2b437-ca93-4dcd-b9cb-df415e10df86
ms.openlocfilehash: c92f805eb2960336ed34f5da93b6c13f46bf15ac
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80165145"
---
# <a name="compiler-warning-c4485"></a>Avviso del compilatore C4485

' override_function ': corrisponde al metodo della classe di riferimento di base ' base_class_function ', ma non è contrassegnato ' New ' o ' override '; si presuppone ' New ' (è Virtual ')

Una funzione di accesso esegue l'override di, con o senza la parola chiave `virtual`, una funzione di accesso della classe base, ma l'identificatore `override` o `new` non fa parte della firma della funzione che esegue l'override. Aggiungere l'identificatore `new` o `override` per risolvere il problema.

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
