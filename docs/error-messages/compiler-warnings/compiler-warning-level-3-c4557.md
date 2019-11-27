---
title: Avviso del compilatore (livello 3) C4557
ms.date: 11/04/2016
f1_keywords:
- C4557
helpviewer_keywords:
- C4557
ms.assetid: 7d9db716-03b2-4ee5-9b09-ba8aa5aa7e4c
ms.openlocfilehash: 22ee456c5f79434c5e3b8a79b4c174aa3cdb3c7a
ms.sourcegitcommit: 217fac22604639ebd62d366a69e6071ad5b724ac
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/19/2019
ms.locfileid: "74188943"
---
# <a name="compiler-warning-level-3-c4557"></a>Avviso del compilatore (livello 3) C4557

'__assume' contiene l'effetto 'effetto'

Il valore passato a un [__assume](../../intrinsics/assume.md) istruzione2 è stato modificato.

Per impostazione predefinita, questo avviso non è attivo. Per altre informazioni, vedere [Avvisi del compilatore disattivati per impostazione predefinita](../../preprocessor/compiler-warnings-that-are-off-by-default.md) .

L'esempio seguente genera l'C4557:

```cpp
// C4557.cpp
// compile with: /W3
#pragma warning(default : 4557)
int main()
{
   int i;
   __assume(i++);   // C4557
}
```