---
description: 'Altre informazioni su: avviso del compilatore (livello 4) C4670'
title: Avviso del compilatore (livello 4) C4670
ms.date: 11/04/2016
f1_keywords:
- C4670
helpviewer_keywords:
- C4670
ms.assetid: e172b134-b1fb-4dfe-8e9d-209ea08b73c7
ms.openlocfilehash: c1d0f81f10fe63882987d660e4b9099f4ff895ff
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97134030"
---
# <a name="compiler-warning-level-4-c4670"></a>Avviso del compilatore (livello 4) C4670

'identifier': classe base inaccessibile

La classe base specificata di un oggetto da generare in un **`try`** blocco non è accessibile. Non è possibile creare un'istanza dell'oggetto se questo viene generato. Verificare che la classe base venga ereditata con l'identificatore di accesso corretto.

L'esempio seguente genera l'errore C4670:

```cpp
// C4670.cpp
// compile with: /EHsc /W4
class A
{
};

class B : /* public */ A
{
} b;   // inherits A with private access by default

int main()
{
    try
    {
       throw b;   // C4670
    }
    catch( B )
    {
    }
}
```
