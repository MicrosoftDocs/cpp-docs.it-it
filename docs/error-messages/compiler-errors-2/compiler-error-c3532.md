---
title: Errore del compilatore C3532
ms.date: 11/04/2016
f1_keywords:
- C3532
helpviewer_keywords:
- C3532
ms.assetid: 51067853-eda8-4f59-86e8-8924e16d3a95
ms.openlocfilehash: b8d516074b79704b10d27dd4638585a5ada08323
ms.sourcegitcommit: a1676bf6caae05ecd698f26ed80c08828722b237
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/29/2020
ms.locfileid: "91510127"
---
# <a name="compiler-error-c3532"></a>Errore del compilatore C3532

' type ': utilizzo non corretto di ' auto '

Il tipo indicato non può essere dichiarato con la **`auto`** parola chiave. Non è ad esempio possibile utilizzare la **`auto`** parola chiave per dichiarare una matrice o un tipo restituito di un metodo.

### <a name="to-correct-this-error"></a>Per correggere l'errore

1. Verificare che l'espressione di inizializzazione restituisca un tipo valido.

1. Assicurarsi di non dichiarare una matrice o un tipo restituito di metodo.

## <a name="examples"></a>Esempio

L'esempio seguente restituisce C3532 perché la **`auto`** parola chiave non può dichiarare un tipo restituito dal metodo.

```cpp
// C3532a.cpp
// Compile with /Zc:auto
auto f(){}   // C3532
```

Nell'esempio seguente viene restituito C3532 perché la **`auto`** parola chiave non può dichiarare una matrice.

```cpp
// C3532b.cpp
// Compile with /Zc:auto
int main()
{
   int x[5];
   auto a[5];            // C3532
   auto b[1][2];         // C3532
   auto y[5] = x;        // C3532
   auto z[] = {1, 2, 3}; // C3532
   auto w[] = x;         // C3532
   return 0;
}
```

## <a name="see-also"></a>Vedere anche

[Parola chiave auto](../../cpp/auto-cpp.md)
