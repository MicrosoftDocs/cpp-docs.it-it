---
description: 'Altre informazioni su: errore del compilatore C3615'
title: Errore del compilatore C3615
ms.date: 10/24/2017
f1_keywords:
- C3615
helpviewer_keywords:
- C3615
ms.assetid: 5ce96ba9-3d31-49f3-9aa8-24e5cdf6dcfc
ms.openlocfilehash: 9f3b95b96ff10a99f3ebeac1bc3b19f759dd0ab7
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97262282"
---
# <a name="compiler-error-c3615"></a>Errore del compilatore C3615

> la funzione constExpr '*Function*' non può produrre un'espressione costante

Non è stato possibile valutare la *funzione* della funzione come **`constexpr`** in fase di compilazione. Per essere **`constexpr`** , una funzione può chiamare solo altre **`constexpr`** funzioni.

## <a name="example"></a>Esempio

Visual Studio 2017 genera correttamente un errore quando l'operando sinistro di un'operazione di valutazione condizionale non è valido in un **`constexpr`** contesto. Il codice seguente viene compilato in Visual Studio 2015 ma non in Visual Studio 2017.

```cpp
// C3615.cpp
// Compile with: /c

template<int N>
struct myarray
{
    int size() const { return N; }
};

constexpr bool f(const myarray<1> &arr)
{
    return arr.size() == 10 || arr.size() == 11; // C3615 starting in Visual Studio 2017
}
```

Per risolvere questo problema, dichiarare la `array::size()` funzione come **`constexpr`** o rimuovere il **`constexpr`** qualificatore da `f` .
