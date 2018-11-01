---
title: Avviso del compilatore (livello 1) C4326
ms.date: 08/27/2018
f1_keywords:
- C4326
helpviewer_keywords:
- C4326
ms.assetid: d44d2c4e-9456-42d3-b35b-4ba4b2d42ec7
ms.openlocfilehash: d14a1902db4dcf2224ce6a58db120a81ebb5620f
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50601162"
---
# <a name="compiler-warning-level-1-c4326"></a>Avviso del compilatore (livello 1) C4326

> tipo restituito di '*funzione*'deve essere'*type1*'invece di'*type2*'

## <a name="remarks"></a>Note

Una funzione ha restituito un tipo diverso da *type1*. Ad esempio, usando [/Za](../../build/reference/za-ze-disable-language-extensions.md), **principale** non ha restituito un **int**.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C4326 e Mostra come risolverlo:

```cpp
// C4326.cpp
// compile with: /Za /W1
char main()
{
    // C4326, instead use int main()
}
```