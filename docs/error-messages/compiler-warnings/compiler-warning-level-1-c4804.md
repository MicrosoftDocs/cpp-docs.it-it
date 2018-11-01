---
title: Avviso del compilatore (livello 1) C4804
ms.date: 11/04/2016
f1_keywords:
- C4804
helpviewer_keywords:
- C4804
ms.assetid: 069e8f44-3ef6-43bb-8524-4116fc6eea83
ms.openlocfilehash: 28b3e49717993a3bf20c8cfec5938d698266c0f9
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50476076"
---
# <a name="compiler-warning-level-1-c4804"></a>Avviso del compilatore (livello 1) C4804

'operation': utilizzo non affidabile del tipo 'bool' nell'operazione

Questo avviso viene generato quando utilizza un `bool` variabile o un valore in modo imprevisto. Ad esempio, C4804 viene generato se si usano l'operatore unario negativo (**-**) o l'operatore di complemento (`~`). Il compilatore valuta l'espressione.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C4804:

```
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