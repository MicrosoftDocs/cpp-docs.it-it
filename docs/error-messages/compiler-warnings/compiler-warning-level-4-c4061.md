---
description: 'Altre informazioni su: avviso del compilatore (livello 4) C4061'
title: Avviso del compilatore (livello 4) C4061
ms.date: 04/05/2019
f1_keywords:
- C4061
helpviewer_keywords:
- C4061
ms.assetid: a99cf88e-7941-4519-8b1b-f6889d914b2f
ms.openlocfilehash: 9e76fd864e57e6d84ed28b1646e8950186945d11
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97262061"
---
# <a name="compiler-warning-level-4-c4061"></a>Avviso del compilatore (livello 4) C4061

> l'enumeratore '*Identifier*' nell'opzione '*Enumeration*' dell'enumerazione non è gestito in modo esplicito da un'etichetta case

All' *identificatore* di enumeratore specificato non è associato alcun gestore in un' **`switch`** istruzione con un **`default`** case. Il caso mancante potrebbe essere una supervisione o potrebbe non essere un problema. Può dipendere dal fatto che l'enumeratore venga gestito o meno dal caso predefinito. Per un avviso correlato sugli enumeratori non utilizzati in **`switch`** istruzioni senza **`default`** case, vedere [C4062](compiler-warning-level-4-c4062.md).

Per impostazione predefinita, questo avviso non è attivo. Per ulteriori informazioni su come abilitare gli avvisi disattivati per impostazione predefinita, vedere [avvisi del compilatore disattivati per impostazione predefinita](../../preprocessor/compiler-warnings-that-are-off-by-default.md).

## <a name="example"></a>Esempio

L'esempio seguente genera C4061; aggiungere un caso per l'enumeratore mancante da correggere:

```cpp
// C4061.cpp
// compile with: /W4
#pragma warning(default : 4061)

enum E { a, b, c };
void func ( E e )
{
   switch(e)
   {
      case a:
      case b:
      default:
         break;
   }   // C4061 c' not handled
}

int main()
{
}
```

## <a name="see-also"></a>Vedi anche

[Avviso del compilatore (livello 4) C4062](compiler-warning-level-4-c4062.md)
