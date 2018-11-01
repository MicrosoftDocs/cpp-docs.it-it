---
title: Errore del compilatore C3537
ms.date: 11/04/2016
f1_keywords:
- C3537
helpviewer_keywords:
- C3537
ms.assetid: f537ebd1-4fb0-4e09-a453-4f38db2c6881
ms.openlocfilehash: 22387470019b0118d06b4cacd82a1df5c3e505fb
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50576124"
---
# <a name="compiler-error-c3537"></a>Errore del compilatore C3537

'type': è possibile eseguire il cast a un tipo che contiene 'auto'

È Impossibile eseguire il cast di una variabile per il tipo indicato perché il tipo contiene il `auto` parola chiave e il valore predefinito [/Zc: Auto](../../build/reference/zc-auto-deduce-variable-type.md) opzione del compilatore è in vigore.

## <a name="example"></a>Esempio

Il codice seguente produce C3537 perché le variabili vengono eseguito il cast a un tipo che contiene il `auto` (parola chiave).

```
// C3537.cpp
// Compile with /Zc:auto
int main()
{
   int value = 123;
   auto(value);                        // C3537
   (auto)value;                        // C3537
   auto x1 = auto(value);              // C3537
   auto x2 = (auto)value;              // C3537
   auto x3 = static_cast<auto>(value); // C3537
   return 0;
}
```

## <a name="see-also"></a>Vedere anche

[Auto (parola chiave)](../../cpp/auto-keyword.md)