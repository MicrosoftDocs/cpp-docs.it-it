---
title: Avviso del compilatore (livello 1) C4228
ms.date: 11/04/2016
f1_keywords:
- C4228
helpviewer_keywords:
- C4228
ms.assetid: 9301d660-d601-464e-83f5-7ed844a3c6dc
ms.openlocfilehash: 3a89d5c0924e6fd12a4ccf8afa957f8908670d49
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87223239"
---
# <a name="compiler-warning-level-1-c4228"></a>Avviso del compilatore (livello 1) C4228

utilizzata estensione non standard: i qualificatori dopo la virgola nell'elenco dei dichiaratori vengono ignorati

L'uso di qualificatori come **`const`** o **`volatile`** dopo una virgola quando si dichiarano variabili è un'estensione Microsoft ([/ze](../../build/reference/za-ze-disable-language-extensions.md)).

## <a name="example"></a>Esempio

```cpp
// C4228.cpp
// compile with: /W1
int j, const i = 0;  // C4228
int k;
int const m = 0;  // ok
int main()
{
}
```
