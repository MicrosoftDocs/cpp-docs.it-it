---
title: Avviso del compilatore (livello 1) C4804
ms.date: 11/04/2016
f1_keywords:
- C4804
helpviewer_keywords:
- C4804
ms.assetid: 069e8f44-3ef6-43bb-8524-4116fc6eea83
ms.openlocfilehash: 97ad076325b11329896d98367fb3ac311ec5ded9
ms.sourcegitcommit: 458dcc794e3841919c01a3a5ff6b9a3767f8861b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/13/2019
ms.locfileid: "74051563"
---
# <a name="compiler-warning-level-1-c4804"></a>Avviso del compilatore (livello 1) C4804

' Operation ': utilizzo non sicuro del tipo ' bool ' nell'operazione

Questo avviso si verifica quando si utilizza una `bool` variabile o un valore in modo imprevisto. Ad esempio, C4804 viene generato se si utilizzano operatori quali l'operatore unario negativo ( **-** ) o l'operatore di complemento (`~`). Il compilatore valuta l'espressione.

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