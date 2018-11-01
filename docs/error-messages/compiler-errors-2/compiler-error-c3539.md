---
title: Errore del compilatore C3539
ms.date: 11/04/2016
f1_keywords:
- C3539
helpviewer_keywords:
- C3539
ms.assetid: 34a33a0f-d1b6-498f-b312-ffad2d4799b3
ms.openlocfilehash: 7cba9e0271d16420c5cfe4adbed2c7121d139d8f
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50523920"
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

[Auto (parola chiave)](../../cpp/auto-keyword.md)