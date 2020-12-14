---
description: 'Altre informazioni su: avviso del compilatore (livello 4) C4125'
title: Avviso del compilatore (livello 4) C4125
ms.date: 11/04/2016
f1_keywords:
- C4125
helpviewer_keywords:
- C4125
ms.assetid: a081d1f4-0789-4915-91df-7ff0b28ca245
ms.openlocfilehash: 82c94743e2ff52efacdf1b5f139bc4d9d40d0eed
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97261918"
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
