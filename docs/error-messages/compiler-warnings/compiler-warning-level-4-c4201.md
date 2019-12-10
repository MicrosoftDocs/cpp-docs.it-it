---
title: Avviso del compilatore (livello 4) C4201
ms.date: 11/04/2016
f1_keywords:
- C4201
helpviewer_keywords:
- C4201
ms.assetid: 6156f508-9393-4d77-9e73-1ec3e1c32d0d
ms.openlocfilehash: 4bbbc8987c3ae4157d5f8133978a46a004988bce
ms.sourcegitcommit: 573b36b52b0de7be5cae309d45b68ac7ecf9a6d8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/10/2019
ms.locfileid: "74991619"
---
# <a name="compiler-warning-level-4-c4201"></a>Avviso del compilatore (livello 4) C4201

utilizzata estensione non standard: struct/union senza nome

In Microsoft Extensions (/Ze) è possibile specificare una struttura senza un dichiaratore come membri di un'altra struttura o Unione. Queste strutture generano un errore in compatibilità ANSI ([/za](../../build/reference/za-ze-disable-language-extensions.md)).

## <a name="example"></a>Esempio

```cpp
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
