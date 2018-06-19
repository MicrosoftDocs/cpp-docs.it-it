---
title: C3615 errore del compilatore | Documenti Microsoft
ms.date: 10/24/2017
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3615
dev_langs:
- C++
helpviewer_keywords:
- C3615
ms.assetid: 5ce96ba9-3d31-49f3-9aa8-24e5cdf6dcfc
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: ce1ab43f8e15535614cedf43dba42fef882bf87a
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33253394"
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