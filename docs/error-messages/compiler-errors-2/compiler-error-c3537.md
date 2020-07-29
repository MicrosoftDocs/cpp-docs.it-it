---
title: Errore del compilatore C3537
ms.date: 11/04/2016
f1_keywords:
- C3537
helpviewer_keywords:
- C3537
ms.assetid: f537ebd1-4fb0-4e09-a453-4f38db2c6881
ms.openlocfilehash: 663ef761d6c52aeb4c3cc9ce109079c647904e36
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87197553"
---
# <a name="compiler-error-c3537"></a>Errore del compilatore C3537

' type ': non è possibile eseguire il cast a un tipo che contiene ' auto '

Non è possibile eseguire il cast di una variabile al tipo indicato perché il tipo contiene la **`auto`** parola chiave e l'opzione predefinita del compilatore [/Zc: auto](../../build/reference/zc-auto-deduce-variable-type.md) è attiva.

## <a name="example"></a>Esempio

Il codice seguente restituisce C3537 perché viene eseguito il cast delle variabili in un tipo che contiene la **`auto`** parola chiave.

```cpp
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

[Parola chiave auto](../../cpp/auto-keyword.md)
