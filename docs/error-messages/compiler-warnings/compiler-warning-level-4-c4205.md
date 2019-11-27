---
title: Avviso del compilatore (livello 4) C4205
ms.date: 11/04/2016
f1_keywords:
- C4205
helpviewer_keywords:
- C4205
ms.assetid: 39b5108c-7230-41b4-b2fe-2293eb6aae28
ms.openlocfilehash: e46642494e55769a0676f0e33af0ca40c31939ad
ms.sourcegitcommit: 3ee06ec53153cf21910fc8cfef78a4f25f9633f3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/26/2019
ms.locfileid: "74541794"
---
# <a name="compiler-warning-level-4-c4205"></a>Avviso del compilatore (livello 4) C4205

utilizzata estensione non standard: dichiarazione di funzione statica nell'ambito della funzione

Con le estensioni Microsoft (/Ze), le funzioni **statiche** possono essere dichiarate all'interno di un'altra funzione. Alla funzione viene assegnato un ambito globale.

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