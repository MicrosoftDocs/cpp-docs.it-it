---
title: Errore del compilatore C3533
ms.date: 11/04/2016
f1_keywords:
- C3533
helpviewer_keywords:
- C3533
ms.assetid: a68b1ba5-466e-4190-a1a4-505ccfe548b7
ms.openlocfilehash: 4e3c773d0498a35c7b5d053268bff26f9943103b
ms.sourcegitcommit: c1fd917a8c06c6504f66f66315ff352d0c046700
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/16/2020
ms.locfileid: "90686769"
---
# <a name="compiler-error-c3533"></a>Errore del compilatore C3533

' type ': un parametro non può avere un tipo che contiene ' auto '

Un metodo o un parametro di modello non può essere dichiarato con la **`auto`** parola chiave se è attiva l'opzione predefinita del compilatore [/Zc: auto](../../build/reference/zc-auto-deduce-variable-type.md) .

### <a name="to-correct-this-error"></a>Per correggere l'errore

1. Rimuovere la **`auto`** parola chiave dalla dichiarazione di parametro.

## <a name="examples"></a>Esempi

Nell'esempio seguente viene restituito C3533 perché dichiara un parametro di funzione con la **`auto`** parola chiave e viene compilato con **/Zc: auto**.

```cpp
// C3533a.cpp
// Compile with /Zc:auto
void f(auto j) {} // C3533
```

Nell'esempio seguente viene restituito C3533 in modalità C++ 14 perché dichiara un parametro di modello con la **`auto`** parola chiave e viene compilato con **/Zc: auto**. In C++ 17 si tratta di una definizione valida di un modello di classe con un singolo parametro di modello non di tipo il cui tipo viene dedotto.

```cpp
// C3533b.cpp
// Compile with /Zc:auto
template<auto T> class C {}; // C3533
```

## <a name="see-also"></a>Vedere anche

[Parola chiave auto](../../cpp/auto-keyword.md)<br/>
[/Zc: auto (deduce il tipo di variabile)](../../build/reference/zc-auto-deduce-variable-type.md)
