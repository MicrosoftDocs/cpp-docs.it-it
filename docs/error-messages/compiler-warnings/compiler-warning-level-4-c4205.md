---
description: 'Altre informazioni su: avviso del compilatore (livello 4) C4205'
title: Avviso del compilatore (livello 4) C4205
ms.date: 11/04/2016
f1_keywords:
- C4205
helpviewer_keywords:
- C4205
ms.assetid: 39b5108c-7230-41b4-b2fe-2293eb6aae28
ms.openlocfilehash: d4a9250ad84f45a9e2ce40e6f103904ce7f8722e
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97173233"
---
# <a name="compiler-warning-level-4-c4205"></a>Avviso del compilatore (livello 4) C4205

utilizzata estensione non standard: dichiarazione di funzione statica nell'ambito della funzione

Con le estensioni Microsoft (/Ze), le **`static`** funzioni possono essere dichiarate all'interno di un'altra funzione. Alla funzione viene assegnato un ambito globale.

## <a name="example"></a>Esempio

```c
// C4205.c
// compile with: /W4
void func1()
{
   static int func2();  // C4205
};

int main()
{
}
```

Tali inizializzazioni non sono valide in compatibilità ANSI ([/za](../../build/reference/za-ze-disable-language-extensions.md)).
