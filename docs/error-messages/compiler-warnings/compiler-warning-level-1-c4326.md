---
title: Avviso del compilatore (livello 1) C4326
ms.date: 08/27/2018
f1_keywords:
- C4326
helpviewer_keywords:
- C4326
ms.assetid: d44d2c4e-9456-42d3-b35b-4ba4b2d42ec7
ms.openlocfilehash: 32bcd85b1cd1bb6c89678daae02f4f31a9318b6d
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80162972"
---
# <a name="compiler-warning-level-1-c4326"></a>Avviso del compilatore (livello 1) C4326

> il tipo restituito di '*Function*' deve essere '*tipo1*' anziché'*tipo2*'

## <a name="remarks"></a>Osservazioni

Una funzione ha restituito un tipo diverso da *tipo1*. Se ad esempio si usa [/za](../../build/reference/za-ze-disable-language-extensions.md), **Main** non restituisce un valore **int**.

## <a name="example"></a>Esempio

L'esempio seguente genera C4326 e Mostra come risolverlo:

```cpp
// C4326.cpp
// compile with: /Za /W1
char main()
{
    // C4326, instead use int main()
}
```
