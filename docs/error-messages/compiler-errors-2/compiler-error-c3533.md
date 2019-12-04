---
title: Errore del compilatore C3533
ms.date: 11/04/2016
f1_keywords:
- C3533
helpviewer_keywords:
- C3533
ms.assetid: a68b1ba5-466e-4190-a1a4-505ccfe548b7
ms.openlocfilehash: ce95bba417e9be3603f15376a0fd65a48f951a2f
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74755642"
---
# <a name="compiler-error-c3533"></a>Errore del compilatore C3533

' type ': un parametro non può avere un tipo che contiene ' auto '

Un metodo o un parametro di modello non può essere dichiarato con la parola chiave `auto` se è attiva l'opzione predefinita del compilatore [/Zc: auto](../../build/reference/zc-auto-deduce-variable-type.md) .

### <a name="to-correct-this-error"></a>Per correggere l'errore

1. Rimuovere la parola chiave `auto` dalla dichiarazione di parametro.

## <a name="example"></a>Esempio

Nell'esempio seguente viene restituito C3533 perché dichiara un parametro di funzione con la parola chiave `auto` e viene compilato con **/Zc: auto**.

```cpp
// C3533a.cpp
// Compile with /Zc:auto
void f(auto j) {} // C3533
```

## <a name="example"></a>Esempio

Nell'esempio seguente viene restituito C3533 in modalità C++ 14 perché dichiara un parametro di modello con la parola chiave `auto` e viene compilato con **/Zc: auto**. In C++ 17 si tratta di una definizione valida di un modello di classe con un singolo parametro di modello non di tipo il cui tipo viene dedotto.

```cpp
// C3533b.cpp
// Compile with /Zc:auto
template<auto T> class C {}; // C3533
```

## <a name="see-also"></a>Vedere anche

[Auto (parola chiave)](../../cpp/auto-keyword.md)<br/>
[/Zc:auto (deduzione del tipo di variabile)](../../build/reference/zc-auto-deduce-variable-type.md)
