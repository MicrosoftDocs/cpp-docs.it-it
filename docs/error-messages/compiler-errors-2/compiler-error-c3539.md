---
title: Errore del compilatore C3539
ms.date: 11/04/2016
f1_keywords:
- C3539
helpviewer_keywords:
- C3539
ms.assetid: 34a33a0f-d1b6-498f-b312-ffad2d4799b3
ms.openlocfilehash: e30ea0713229bfd8da395baef710571f8dfd49e9
ms.sourcegitcommit: a1676bf6caae05ecd698f26ed80c08828722b237
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/29/2020
ms.locfileid: "91508143"
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

[Parola chiave auto](../../cpp/auto-cpp.md)
