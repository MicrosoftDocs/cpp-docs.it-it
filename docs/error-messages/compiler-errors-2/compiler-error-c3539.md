---
description: 'Altre informazioni su: errore del compilatore C3539'
title: Errore del compilatore C3539
ms.date: 11/04/2016
f1_keywords:
- C3539
helpviewer_keywords:
- C3539
ms.assetid: 34a33a0f-d1b6-498f-b312-ffad2d4799b3
ms.openlocfilehash: a944a2e6af03e030434cf41e2b6009be82ad9239
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97315244"
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

## <a name="see-also"></a>Vedi anche

[Parola chiave auto](../../cpp/auto-cpp.md)
