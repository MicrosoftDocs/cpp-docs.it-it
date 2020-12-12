---
description: 'Altre informazioni su: errore del compilatore C3533'
title: Errore del compilatore C3533
ms.date: 11/04/2016
f1_keywords:
- C3533
helpviewer_keywords:
- C3533
ms.assetid: a68b1ba5-466e-4190-a1a4-505ccfe548b7
ms.openlocfilehash: 03506c5880cce18a27f16f0e05d3b231d14c9ce6
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97113195"
---
# <a name="compiler-error-c3533"></a>Errore del compilatore C3533

' type ': un parametro non può avere un tipo che contiene ' auto '

Un metodo o un parametro di modello non può essere dichiarato con la **`auto`** parola chiave se è attiva l'opzione predefinita del compilatore [/Zc: auto](../../build/reference/zc-auto-deduce-variable-type.md) .

### <a name="to-correct-this-error"></a>Per correggere l'errore

1. Rimuovere la **`auto`** parola chiave dalla dichiarazione di parametro.

## <a name="examples"></a>Esempio

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

## <a name="see-also"></a>Vedi anche

[Parola chiave auto](../../cpp/auto-cpp.md)<br/>
[/Zc: auto (deduce il tipo di variabile)](../../build/reference/zc-auto-deduce-variable-type.md)
