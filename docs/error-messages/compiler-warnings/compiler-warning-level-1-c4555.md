---
description: 'Altre informazioni su: avviso del compilatore (livello 1) C4555'
title: Avviso del compilatore (livello 1) C4555
ms.date: 11/04/2016
f1_keywords:
- C4555
helpviewer_keywords:
- C4555
ms.assetid: 50b286c1-f7bf-4292-b1fa-baaac9538611
ms.openlocfilehash: e6ef8f5698364e0186dbf6cbf623af96ef2bf7d3
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97265844"
---
# <a name="compiler-warning-level-1-c4555"></a>Avviso del compilatore (livello 1) C4555

l'espressione non ha effetto. Prevista espressione con effetto collaterale

Questo avviso informa l'utente quando un'espressione non ha effetto.

Per impostazione predefinita, questo avviso non è attivo. Per altre informazioni, vedere [Avvisi del compilatore disattivati per impostazione predefinita](../../preprocessor/compiler-warnings-that-are-off-by-default.md) .

Ad esempio:

```cpp
// C4555.cpp
// compile with: /W1
#pragma warning(default:4555)

void func1()
{
   1;   // C4555
}

void func2()
{
   int x;
   x;   // C4555
}

int main()
{
}
```
