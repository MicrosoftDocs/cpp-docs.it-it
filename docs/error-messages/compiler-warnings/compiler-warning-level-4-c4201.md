---
title: Avviso del compilatore (livello 4) C4201
ms.date: 11/04/2016
f1_keywords:
- C4201
helpviewer_keywords:
- C4201
ms.assetid: 6156f508-9393-4d77-9e73-1ec3e1c32d0d
ms.openlocfilehash: c7c10273e06ec35528dbd9d51c02bb844d275638
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50445799"
---
# <a name="compiler-warning-level-4-c4201"></a>Avviso del compilatore (livello 4) C4201

utilizzata estensione non standard: struct/union senza nome

In estensioni Microsoft (/Ze), è possibile specificare una struttura senza un dichiaratore come membri di un'altra struttura o unione. Queste strutture di generano un errore in compatibilità ANSI ([/Za](../../build/reference/za-ze-disable-language-extensions.md)).

## <a name="example"></a>Esempio

```
// C4201.cpp
// compile with: /W4
struct S
{
   float y;
   struct
   {
      int a, b, c;  // C4201
   };
} *p_s;

int main()
{
}
```