---
title: Errore del compilatore C3539
ms.date: 11/04/2016
f1_keywords:
- C3539
helpviewer_keywords:
- C3539
ms.assetid: 34a33a0f-d1b6-498f-b312-ffad2d4799b3
ms.openlocfilehash: 813da5a2fd79c191df731937e58100d749f8690c
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87223408"
---
# <a name="compiler-error-c3539"></a>Errore del compilatore C3539

' type ': un argomento di modello non può essere un tipo che contiene ' auto '

Il tipo di argomento del modello indicato non può contenere un utilizzo della **`auto`** parola chiave.

### <a name="to-correct-this-error"></a>Per correggere l'errore

1. Non specificare l'argomento di modello con la **`auto`** parola chiave.

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

[Parola chiave auto](../../cpp/auto-keyword.md)
