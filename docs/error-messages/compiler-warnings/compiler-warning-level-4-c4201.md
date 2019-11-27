---
title: Avviso del compilatore (livello 4) C4201
ms.date: 11/04/2016
f1_keywords:
- C4201
helpviewer_keywords:
- C4201
ms.assetid: 6156f508-9393-4d77-9e73-1ec3e1c32d0d
ms.openlocfilehash: 1f029d7717f99e55a977ad9cb80dacbfa1485086
ms.sourcegitcommit: 3ee06ec53153cf21910fc8cfef78a4f25f9633f3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/26/2019
ms.locfileid: "74541219"
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