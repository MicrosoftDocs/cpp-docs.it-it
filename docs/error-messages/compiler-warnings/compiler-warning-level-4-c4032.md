---
title: Compilatore avviso (livello 4) C4032
ms.date: 11/04/2016
f1_keywords:
- C4032
helpviewer_keywords:
- C4032
ms.assetid: 70dd0c85-0239-43f9-bb06-507f6a57d206
ms.openlocfilehash: fa1602d63ed9822725fea8e1b842929f221d3926
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50657301"
---
# <a name="compiler-warning-level-4-c4032"></a>Compilatore avviso (livello 4) C4032

parametro formale 'number' ha un tipo diverso quando promosso

Il tipo di parametro non è compatibile, le promozioni di predefinite, con il tipo in una dichiarazione precedente.

Si tratta di un errore in ANSI C ([/Za](../../build/reference/za-ze-disable-language-extensions.md)) e un avviso in estensioni Microsoft (/Ze).

## <a name="example"></a>Esempio

```
// C4032.c
// compile with: /W4
void func();
void func(char);   // C4032, char promotes to int

int main()
{
}
```