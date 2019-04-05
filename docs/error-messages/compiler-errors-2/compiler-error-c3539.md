---
title: Errore del compilatore C3539
ms.date: 11/04/2016
f1_keywords:
- C3539
helpviewer_keywords:
- C3539
ms.assetid: 34a33a0f-d1b6-498f-b312-ffad2d4799b3
ms.openlocfilehash: be1051859ebbcbdc22a9b71f8c5adba2e75c4e92
ms.sourcegitcommit: c7f90df497e6261764893f9cc04b5d1f1bf0b64b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/05/2019
ms.locfileid: "59025180"
---
# <a name="compiler-error-c3539"></a>Errore del compilatore C3539

'type': un argomento di modello non può essere un tipo che contiene 'auto'

Il tipo di argomento di modello specificato non può contenere un utilizzo del `auto` (parola chiave).

### <a name="to-correct-this-error"></a>Per correggere l'errore

1. Non si specifica l'argomento di modello con il `auto` (parola chiave).

## <a name="example"></a>Esempio

Nell'esempio seguente generato l'errore C3539.

```
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