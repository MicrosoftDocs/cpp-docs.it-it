---
title: Errore del compilatore C3539
ms.date: 11/04/2016
f1_keywords:
- C3539
helpviewer_keywords:
- C3539
ms.assetid: 34a33a0f-d1b6-498f-b312-ffad2d4799b3
ms.openlocfilehash: 85381b237480b86b59c33f02601a1b9dc644a5a4
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74761530"
---
# <a name="compiler-error-c3539"></a>Errore del compilatore C3539

' type ': un argomento di modello non può essere un tipo che contiene ' auto '

Il tipo di argomento del modello indicato non può contenere un utilizzo della parola chiave `auto`.

### <a name="to-correct-this-error"></a>Per correggere l'errore

1. Non specificare l'argomento di modello con la parola chiave `auto`.

## <a name="example"></a>Esempio

Nell'esempio seguente viene restituito C3539.

```cpp
// C3539.cpp
// Compile with /Zc:auto
template<class T> class C{};
int main()
{
   C<auto> c;   // C3539
   return 0;
}
```

## <a name="see-also"></a>Vedere anche

[Auto (parola chiave)](../../cpp/auto-keyword.md)
