---
title: Errore del compilatore C3532
ms.date: 11/04/2016
f1_keywords:
- C3532
helpviewer_keywords:
- C3532
ms.assetid: 51067853-eda8-4f59-86e8-8924e16d3a95
ms.openlocfilehash: 7b5d1fe61ae08811186e25547ccc3f33e3b0198e
ms.sourcegitcommit: c7f90df497e6261764893f9cc04b5d1f1bf0b64b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/05/2019
ms.locfileid: "59023971"
---
# <a name="compiler-error-c3532"></a>Errore del compilatore C3532

'type': utilizzo non corretto del 'auto'

Impossibile dichiarare il tipo indicato con il `auto` (parola chiave). Ad esempio, è possibile usare il `auto` parola chiave per dichiarare una matrice o un metodo il tipo restituito.

### <a name="to-correct-this-error"></a>Per correggere l'errore

1. Assicurarsi che l'espressione di inizializzazione genera un tipo valido.

1. Assicurarsi che non si dichiara una matrice o tipo restituito del metodo.

## <a name="example"></a>Esempio

Nell'esempio seguente generato l'errore C3532 perché il `auto` parola chiave non può dichiarare un tipo restituito del metodo.

```
// C3532a.cpp
// Compile with /Zc:auto
auto f(){}   // C3532
```

## <a name="example"></a>Esempio

Nell'esempio seguente generato l'errore C3532 perché il `auto` parola chiave non è possibile dichiarare una matrice.

```
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

[Parola chiave auto](../../cpp/auto-keyword.md)