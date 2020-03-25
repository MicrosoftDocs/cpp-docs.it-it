---
title: Avviso del compilatore (livello 1) C4920
ms.date: 11/04/2016
f1_keywords:
- C4920
helpviewer_keywords:
- C4920
ms.assetid: 1e501f2e-93c1-4d27-a4fa-54fc86271ae7
ms.openlocfilehash: b587a4ca2a78bc2ac54640adb2b149d97bef4def
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80174661"
---
# <a name="compiler-warning-level-1-c4920"></a>Avviso del compilatore (livello 1) C4920

enum 'enum' membro 'member'='value' già presente in enum 'enum' come 'member'='value'

Se un file TLB passato a #import contiene lo stesso simbolo definito in due o più enumerazioni, questo avviso indica che i simboli identici successivi verranno ignorati e impostati come commento nel file TLH.

Si supponga che un file TLB contenga quanto segue:

```
library MyLib
{
    typedef enum {
        enumMember = 512
    } AProblem;

    typedef enum {
        enumMember = 1024
    } BProblem;
};
```

Gli esempi seguenti generano l'errore C4920:

```cpp
// C4920.cpp
// compile with: /W1
#import "t4920.tlb"   // C4920

int main() {
}
```
