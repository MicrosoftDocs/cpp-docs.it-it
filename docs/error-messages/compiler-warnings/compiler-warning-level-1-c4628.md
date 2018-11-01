---
title: Avviso del compilatore (livello 1) C4628
ms.date: 11/04/2016
f1_keywords:
- C4628
helpviewer_keywords:
- C4628
ms.assetid: 20fdc6f8-5f6a-40cc-aff8-c7ccf3d8ec26
ms.openlocfilehash: ebb71155774ce32d6b4fc2b9920fdd31dd466841
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50466027"
---
# <a name="compiler-warning-level-1-c4628"></a>Avviso del compilatore (livello 1) C4628

digraph non supportati con -Ze. La sequenza di caratteri 'digraph' non è stata interpretata come token alternativo per 'char'

Digraph non supportati in [/Ze](../../build/reference/za-ze-disable-language-extensions.md). Questo avviso verrà seguito da un errore.

Per impostazione predefinita, questo avviso non è attivo. Per altre informazioni, vedere [Avvisi del compilatore disattivati per impostazione predefinita](../../preprocessor/compiler-warnings-that-are-off-by-default.md) .

L'esempio seguente genera l'errore C4628:

```
// C4628.cpp
// compile with: /WX
#pragma warning(default : 4628)
int main()
<%   // C4628 <% digraph for {
}
```