---
title: Errore del compilatore C3537 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3537
dev_langs:
- C++
helpviewer_keywords:
- C3537
ms.assetid: f537ebd1-4fb0-4e09-a453-4f38db2c6881
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 9f04500998adf132594b91fc38f82c8bec4b1c5c
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46107692"
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