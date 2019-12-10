---
title: Avviso del compilatore (livello 4) C4125
ms.date: 11/04/2016
f1_keywords:
- C4125
helpviewer_keywords:
- C4125
ms.assetid: a081d1f4-0789-4915-91df-7ff0b28ca245
ms.openlocfilehash: f194f0efc8012bf027e4785c2f398a0a7027b368
ms.sourcegitcommit: 573b36b52b0de7be5cae309d45b68ac7ecf9a6d8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/10/2019
ms.locfileid: "74991577"
---
# <a name="compiler-warning-level-4-c4125"></a>Avviso del compilatore (livello 4) C4125

sequenza di escape ottale terminata con una cifra decimale

Il numero ottale viene valutato senza la cifra decimale e viene interpretato come un carattere.

## <a name="example"></a>Esempio

```cpp
// C4125a.cpp
// compile with: /W4
char array1[] = "\709"; // C4125
int main()
{
}
```

Se si intende usare la cifra 9 come carattere, correggere l'esempio nel modo seguente:

```cpp
// C4125b.cpp
// compile with: /W4
char array[] = "\0709";  // C4125 String containing "89"
int main()
{
}
```
