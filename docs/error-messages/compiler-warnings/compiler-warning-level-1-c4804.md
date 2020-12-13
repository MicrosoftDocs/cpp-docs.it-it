---
description: 'Altre informazioni su: avviso del compilatore (livello 1) C4804'
title: Avviso del compilatore (livello 1) C4804
ms.date: 11/04/2016
f1_keywords:
- C4804
helpviewer_keywords:
- C4804
ms.assetid: 069e8f44-3ef6-43bb-8524-4116fc6eea83
ms.openlocfilehash: 0e1260df9327e714c487159b7c0c8c1a1168bad9
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97334916"
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
