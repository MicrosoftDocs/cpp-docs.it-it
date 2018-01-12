---
title: C3615 errore del compilatore | Documenti Microsoft
ms.date: 10/24/2017
ms.technology: cpp-tools
ms.topic: error-reference
f1_keywords: C3615
dev_langs: C++
helpviewer_keywords: C3615
ms.assetid: 5ce96ba9-3d31-49f3-9aa8-24e5cdf6dcfc
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: ea5502ee6e66cf3add4a4ff97e4922a66712ed70
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-error-c3615"></a>C3615 errore del compilatore

> funzione constexpr '*funzione*' non può restituire un'espressione costante

La funzione *funzione* non può essere valutata come `constexpr` in fase di compilazione. Per essere `constexpr`, una funzione può chiamare solo altro `constexpr` funzioni.

## <a name="example"></a>Esempio

Visual Studio 2017 correttamente genera un errore quando l'operando sinistro di un'operazione di valutazione in modo condizionale non è valido in un `constexpr` contesto. Il codice seguente viene compilato in Visual Studio 2015, ma non in Visual Studio 2017.

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

Per risolvere questo problema, di dichiarare il `array::size()` funzione `constexpr` o rimuovere il `constexpr` qualificatore da `f`.