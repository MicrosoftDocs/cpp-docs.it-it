---
title: Errore del compilatore C3615
ms.date: 10/24/2017
f1_keywords:
- C3615
helpviewer_keywords:
- C3615
ms.assetid: 5ce96ba9-3d31-49f3-9aa8-24e5cdf6dcfc
ms.openlocfilehash: e966295b5ab63350828ddb73d6791a9e30bb5c59
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62404104"
---
# <a name="compiler-error-c3615"></a>Errore del compilatore C3615

> la funzione constexpr '*funzione*' non può restituire un'espressione costante

La funzione *funzione* non può essere valutata come `constexpr` in fase di compilazione. Per essere `constexpr`, una funzione può chiamare solo altro `constexpr` funzioni.

## <a name="example"></a>Esempio

Visual Studio 2017 genera correttamente un errore quando l'operando sinistro di un'operazione con valutazione condizionale non è valido in un `constexpr` contesto. Il codice seguente viene compilato in Visual Studio 2015 ma non in Visual Studio 2017.

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

Per risolvere questo problema, dichiarare la `array::size()` fungere `constexpr` o rimuovere il `constexpr` qualificatore `f`.