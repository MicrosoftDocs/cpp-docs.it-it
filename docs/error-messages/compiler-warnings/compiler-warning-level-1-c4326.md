---
description: 'Altre informazioni su: avviso del compilatore (livello 1) C4326'
title: Avviso del compilatore (livello 1) C4326
ms.date: 08/27/2018
f1_keywords:
- C4326
helpviewer_keywords:
- C4326
ms.assetid: d44d2c4e-9456-42d3-b35b-4ba4b2d42ec7
ms.openlocfilehash: d7c82d7a0157b53e60281bbe7c45a38cc765a73d
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97340046"
---
# <a name="compiler-warning-level-1-c4326"></a>Avviso del compilatore (livello 1) C4326

> il tipo restituito di '*Function*' deve essere '*tipo1*' anziché'*tipo2*'

## <a name="remarks"></a>Commenti

Una funzione ha restituito un tipo diverso da *tipo1*. Se ad esempio si usa [/za](../../build/reference/za-ze-disable-language-extensions.md), **Main** non ha restituito un oggetto **`int`** .

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
