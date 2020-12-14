---
description: 'Altre informazioni su: avviso del compilatore (livello 1) C4545'
title: Avviso del compilatore (livello 1) C4545
ms.date: 11/04/2016
f1_keywords:
- C4545
helpviewer_keywords:
- C4545
ms.assetid: 43f8f34f-ed46-4661-95c0-c588c577ff73
ms.openlocfilehash: 15a86a537d6fdde7d1bc9a70f5bbacda64b939df
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97310684"
---
# <a name="compiler-warning-level-1-c4545"></a>Avviso del compilatore (livello 1) C4545

l'espressione prima della virgola restituisce una funzione senza elenco di argomenti

Il compilatore ha rilevato un'espressione di virgola in formato non valido.

Per impostazione predefinita, questo avviso non è attivo. Per altre informazioni, vedere [Compiler Warnings That Are Off by Default](../../preprocessor/compiler-warnings-that-are-off-by-default.md).

L'esempio seguente genera l'C4545:

```cpp
// C4545.cpp
// compile with: /W1
#pragma warning (default : 4545)

void f() { }

int main()
{
   *(&f), 10;   // C4545
   // try the following line instead
   // (*(&f))(), 10;
}
```
