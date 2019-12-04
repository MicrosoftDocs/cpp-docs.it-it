---
title: Errore del compilatore C3537
ms.date: 11/04/2016
f1_keywords:
- C3537
helpviewer_keywords:
- C3537
ms.assetid: f537ebd1-4fb0-4e09-a453-4f38db2c6881
ms.openlocfilehash: ef3e954987b84ea128342b38307769903df4b346
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74740481"
---
# <a name="compiler-error-c3537"></a>Errore del compilatore C3537

' type ': non è possibile eseguire il cast a un tipo che contiene ' auto '

Non è possibile eseguire il cast di una variabile al tipo indicato perché il tipo contiene la parola chiave `auto` e l'opzione predefinita del compilatore [/Zc: auto](../../build/reference/zc-auto-deduce-variable-type.md) è attiva.

## <a name="example"></a>Esempio

Il codice seguente restituisce C3537 perché viene eseguito il cast delle variabili in un tipo che contiene la parola chiave `auto`.

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

[Auto (parola chiave)](../../cpp/auto-keyword.md)
