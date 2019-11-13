---
title: Avviso del compilatore (livello 1) C4628
ms.date: 11/04/2016
f1_keywords:
- C4628
helpviewer_keywords:
- C4628
ms.assetid: 20fdc6f8-5f6a-40cc-aff8-c7ccf3d8ec26
ms.openlocfilehash: 6063755db5ac517d868bc47d2c417356ccef5d58
ms.sourcegitcommit: 458dcc794e3841919c01a3a5ff6b9a3767f8861b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/13/2019
ms.locfileid: "74051435"
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