---
description: 'Altre informazioni su: avviso del compilatore (livello 4) C4623'
title: Avviso del compilatore (livello 4) C4623
ms.date: 11/04/2016
f1_keywords:
- C4623
helpviewer_keywords:
- C4623
ms.assetid: e630d8d0-f6ea-469c-a74f-07b027587225
ms.openlocfilehash: 3e10b83af1ba38d50307abdc87f3fde3b9b30417
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97134238"
---
# <a name="compiler-warning-level-4-c4623"></a>Avviso del compilatore (livello 4) C4623

'`derived class`': il costruttore predefinito è stato definito in modo implicito come eliminato perché un costruttore predefinito della classe di base è inaccessibile o è stato eliminato

Un costruttore non è accessibile in una classe di base e non è stato generato per la classe derivata. Qualsiasi tentativo di creare un oggetto di questo tipo nello stack causerà un errore del compilatore.

Per impostazione predefinita, questo avviso non è attivo. Per altre informazioni, vedere [Avvisi del compilatore disattivati per impostazione predefinita](../../preprocessor/compiler-warnings-that-are-off-by-default.md) .

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C4623.

```cpp
// C4623.cpp
// compile with: /W4
#pragma warning(default : 4623)
class B {
   B();
};

class C {
public:
   C();
};

class D : public B {};   // C4623 - to fix, make B's constructor public
class E : public C {};   // OK - class C constructor is public

int main() {
   // D d;  will cause an error
}
```
