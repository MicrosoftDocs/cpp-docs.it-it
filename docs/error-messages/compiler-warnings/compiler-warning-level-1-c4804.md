---
title: Avviso del compilatore (livello 1) C4804
ms.date: 11/04/2016
f1_keywords:
- C4804
helpviewer_keywords:
- C4804
ms.assetid: 069e8f44-3ef6-43bb-8524-4116fc6eea83
ms.openlocfilehash: aa2cdf0103a1ccc607f2e4a55e1d8f85bb8cc45d
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87233223"
---
# <a name="compiler-warning-level-1-c4804"></a>Avviso del compilatore (livello 1) C4804

' Operation ': utilizzo non sicuro del tipo ' bool ' nell'operazione

Questo avviso si verifica quando si utilizza una **`bool`** variabile o un valore in modo imprevisto. Ad esempio, C4804 viene generato se si utilizzano operatori quali l'operatore unario negativo ( **-** ) o l'operatore di complemento ( `~` ). Il compilatore valuta l'espressione.

## <a name="example"></a>Esempio

L'esempio seguente genera l'C4804:

```cpp
// C4804.cpp
// compile with: /W1

int main()
{
   bool i = true;
   if (-i)   // C4804, remove the '-' to resolve
   {
      i = false;
   }
}
```
