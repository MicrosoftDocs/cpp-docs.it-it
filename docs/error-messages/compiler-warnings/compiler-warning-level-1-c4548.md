---
description: 'Altre informazioni su: avviso del compilatore (livello 1) C4548'
title: Avviso del compilatore (livello 1) C4548
ms.date: 11/04/2016
f1_keywords:
- C4548
helpviewer_keywords:
- C4548
ms.assetid: 2cee817e-e463-4d90-bbd2-de120d48c101
ms.openlocfilehash: 7c0f88f6516b1069fa9ef13e56c5ca043f627820
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97266000"
---
# <a name="compiler-warning-level-1-c4548"></a>Avviso del compilatore (livello 1) C4548

l'espressione prima della virgola non ha effetto. Prevista espressione con effetto collaterale.

Il compilatore ha rilevato un'espressione di virgola in formato non valido.

Per impostazione predefinita, questo avviso non è attivo. Per altre informazioni, vedere [Compiler Warnings That Are Off by Default](../../preprocessor/compiler-warnings-that-are-off-by-default.md).

L'esempio seguente genera l'C4548:

```cpp
// C4548.cpp
// compile with: /W1
#pragma warning (default : 4548)
int main()
{
   int i = 0, k = 0;

   if ( i, k )   // C4548
   // try the following line instead
   // if ( i = 0, k )
      i++;
}
```
