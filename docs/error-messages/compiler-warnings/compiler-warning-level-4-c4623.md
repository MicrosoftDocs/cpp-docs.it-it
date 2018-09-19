---
title: Compilatore avviso (livello 4) C4623 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4623
dev_langs:
- C++
helpviewer_keywords:
- C4623
ms.assetid: e630d8d0-f6ea-469c-a74f-07b027587225
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: beb890483db5ef9e979f6eb790f811ae6822e42b
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46118596"
---
# <a name="compiler-warning-level-4-c4623"></a>Avviso del compilatore (livello 4) C4623

'`derived class`': il costruttore predefinito è stato definito in modo implicito come eliminato perché un costruttore predefinito della classe di base è inaccessibile o è stato eliminato

Un costruttore non è accessibile in una classe di base e non è stato generato per la classe derivata. Qualsiasi tentativo di creare un oggetto di questo tipo nello stack causerà un errore del compilatore.

Per impostazione predefinita, questo avviso non è attivo. Per altre informazioni, vedere [Avvisi del compilatore disattivati per impostazione predefinita](../../preprocessor/compiler-warnings-that-are-off-by-default.md) .

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C4623.

```
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