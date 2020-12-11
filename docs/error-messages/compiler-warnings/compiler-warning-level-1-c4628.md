---
description: 'Altre informazioni su: avviso del compilatore (livello 1) C4628'
title: Avviso del compilatore (livello 1) C4628
ms.date: 11/04/2016
f1_keywords:
- C4628
helpviewer_keywords:
- C4628
ms.assetid: 20fdc6f8-5f6a-40cc-aff8-c7ccf3d8ec26
ms.openlocfilehash: b5dd017afb5b8bb0d882700cb047643d6d118685
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97112375"
---
# <a name="compiler-warning-level-1-c4628"></a>Avviso del compilatore (livello 1) C4628

digraph non supportati con -Ze. La sequenza di caratteri 'digraph' non è stata interpretata come token alternativo per 'char'

I digrammi non sono supportati in [/ze](../../build/reference/za-ze-disable-language-extensions.md). Questo avviso sarà seguito da un errore.

Per impostazione predefinita, questo avviso non è attivo. Per altre informazioni, vedere [Avvisi del compilatore disattivati per impostazione predefinita](../../preprocessor/compiler-warnings-that-are-off-by-default.md) .

L'esempio seguente genera l'C4628:

```cpp
// C4628.cpp
// compile with: /WX
#pragma warning(default : 4628)
int main()
<%   // C4628 <% digraph for {
}
```
