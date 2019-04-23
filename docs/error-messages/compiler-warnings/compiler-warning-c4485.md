---
title: Avviso del compilatore C4485
ms.date: 11/04/2016
f1_keywords:
- C4485
helpviewer_keywords:
- C4485
ms.assetid: a6f2b437-ca93-4dcd-b9cb-df415e10df86
ms.openlocfilehash: b5afb829485e0e9533a14e818e6d6785f268a83b
ms.sourcegitcommit: 72583d30170d6ef29ea5c6848dc00169f2c909aa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/18/2019
ms.locfileid: "59776355"
---
# <a name="compiler-warning-c4485"></a>Avviso del compilatore C4485

'funzione_override': corrisponde al metodo di classe di base di riferimento 'funzione_classe_base', ma non è contrassegnato 'new' o 'override'; 'new' (e 'virtual') si presuppone che

Sostituisce una funzione di accesso, con o senza il `virtual` parola chiave, una funzione di accesso di classe di base, ma la `override` o `new` identificatore non faceva parte della firma della funzione esegue l'override. Aggiungere il `new` o `override` identificatore per risolvere il problema.

Visualizzare [eseguire l'override](../../extensions/override-cpp-component-extensions.md) e [new (nuovo slot in vtable)](../../extensions/new-new-slot-in-vtable-cpp-component-extensions.md) per altre informazioni.

C4485 viene sempre generato come errore. Usare la [avviso](../../preprocessor/warning.md) pragma per sopprimere C4485.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C4485

```
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