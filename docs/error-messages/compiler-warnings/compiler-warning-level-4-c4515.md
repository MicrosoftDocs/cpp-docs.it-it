---
title: Avviso del compilatore (livello 4) C4515
ms.date: 11/04/2016
f1_keywords:
- C4515
helpviewer_keywords:
- C4515
ms.assetid: 167b5177-3f89-418b-b6c8-7de634f6b28f
ms.openlocfilehash: c3df2b4846dfbdd8c1288ae94153ee93aafb2fd0
ms.sourcegitcommit: d0504e2337bb671e78ec6dd1c7b05d89e7adf6a7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/02/2019
ms.locfileid: "74682911"
---
# <a name="compiler-warning-level-4-c4515"></a>Avviso del compilatore (livello 4) C4515

' namespace ': lo spazio dei nomi utilizza se stesso

Uno spazio dei nomi viene utilizzato in modo ricorsivo.

L'esempio seguente genera l'C4515:

```cpp
// C4515.cpp
// compile with: /W4
namespace A
{
   using namespace A; // C4515
}

int main()
{
}
```