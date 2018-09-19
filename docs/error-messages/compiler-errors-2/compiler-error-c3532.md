---
title: Errore del compilatore C3532 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3532
dev_langs:
- C++
helpviewer_keywords:
- C3532
ms.assetid: 51067853-eda8-4f59-86e8-8924e16d3a95
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 25562a83845690cf923784ee27e20fd109c1c832
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46109639"
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

[Auto (parola chiave)](../../cpp/auto-keyword.md)