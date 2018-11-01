---
title: Avviso del compilatore (livello 1) C4228
ms.date: 11/04/2016
f1_keywords:
- C4228
helpviewer_keywords:
- C4228
ms.assetid: 9301d660-d601-464e-83f5-7ed844a3c6dc
ms.openlocfilehash: c737a48883b97970af70014e2bda4bdc508ab471
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50468679"
---
# <a name="compiler-warning-level-1-c4228"></a>Avviso del compilatore (livello 1) C4228

utilizzata estensione non standard: i qualificatori dopo la virgola nell'elenco dei dichiaratori vengono ignorati

Ad esempio l'utilizzo di qualificatori **const** oppure `volatile` dopo una virgola, quando si dichiarano variabili è un'estensione Microsoft ([/Ze](../../build/reference/za-ze-disable-language-extensions.md)).

## <a name="example"></a>Esempio

```
// C4228.cpp
// compile with: /W1
int j, const i = 0;  // C4228
int k;
int const m = 0;  // ok
int main()
{
}
```