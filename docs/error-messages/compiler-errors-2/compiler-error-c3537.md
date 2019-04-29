---
title: Errore del compilatore C3537
ms.date: 11/04/2016
f1_keywords:
- C3537
helpviewer_keywords:
- C3537
ms.assetid: f537ebd1-4fb0-4e09-a453-4f38db2c6881
ms.openlocfilehash: 50a06180dabfa192292fae7ba1962b6b7455bb89
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62375925"
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