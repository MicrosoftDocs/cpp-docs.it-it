---
title: Avviso del compilatore (livello 4) C4032
ms.date: 11/04/2016
f1_keywords:
- C4032
helpviewer_keywords:
- C4032
ms.assetid: 70dd0c85-0239-43f9-bb06-507f6a57d206
ms.openlocfilehash: 52e80340a5157e9350b6d4bbf3bcabea0487e089
ms.sourcegitcommit: 3ee06ec53153cf21910fc8cfef78a4f25f9633f3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/26/2019
ms.locfileid: "74541251"
---
# <a name="compiler-warning-level-4-c4032"></a>Avviso del compilatore (livello 4) C4032

il tipo del parametro formale ' Number ' è diverso quando viene promosso

Il tipo di parametro non è compatibile, tramite le promozioni predefinite, con il tipo in una dichiarazione precedente.

Si tratta di un errore in ANSI C ([/za](../../build/reference/za-ze-disable-language-extensions.md)) e di un avviso in Microsoft Extensions (/Ze).

## <a name="example"></a>Esempio

```c
// C4032.c
// compile with: /W4
void func();
void func(char);   // C4032, char promotes to int

int main()
{
}
```