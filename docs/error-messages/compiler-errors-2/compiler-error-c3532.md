---
title: Errore del compilatore C3532
ms.date: 11/04/2016
f1_keywords:
- C3532
helpviewer_keywords:
- C3532
ms.assetid: 51067853-eda8-4f59-86e8-8924e16d3a95
ms.openlocfilehash: 2ef5eb3c2bedd9defbd0b80e6d8c5c8912fcf16d
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74761933"
---
# <a name="compiler-error-c3532"></a>Errore del compilatore C3532

' type ': utilizzo non corretto di ' auto '

Il tipo indicato non può essere dichiarato con la parola chiave `auto`. Non è ad esempio possibile usare la parola chiave `auto` per dichiarare una matrice o un tipo restituito di un metodo.

### <a name="to-correct-this-error"></a>Per correggere l'errore

1. Verificare che l'espressione di inizializzazione restituisca un tipo valido.

1. Assicurarsi di non dichiarare una matrice o un tipo restituito di metodo.

## <a name="example"></a>Esempio

L'esempio seguente restituisce C3532 perché la parola chiave `auto` non può dichiarare un tipo restituito dal metodo.

```cpp
// C3532a.cpp
// Compile with /Zc:auto
auto f(){}   // C3532
```

## <a name="example"></a>Esempio

L'esempio seguente restituisce C3532 perché la parola chiave `auto` non può dichiarare una matrice.

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

[Auto (parola chiave)](../../cpp/auto-keyword.md)
