---
title: Avviso del compilatore (livello 2) C4302
ms.date: 11/04/2016
f1_keywords:
- C4302
helpviewer_keywords:
- C4302
ms.assetid: f5e1c939-e134-4cca-ba1e-9b15a81549ae
ms.openlocfilehash: 98a489e92633af5cb8e125bfd7bafc4d872baebd
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80161945"
---
# <a name="compiler-warning-level-2-c4302"></a>Avviso del compilatore (livello 2) C4302

' Conversion ': troncamento da' Type 1' a' Type 2'

Il compilatore ha rilevato una conversione da un tipo più grande a un tipo più piccolo. Le informazioni potrebbero andare perse.

Per impostazione predefinita, questo avviso non è attivo. Per altre informazioni, vedere [Avvisi del compilatore disattivati per impostazione predefinita](../../preprocessor/compiler-warnings-that-are-off-by-default.md) .

L'esempio seguente genera l'C4302:

```cpp
// C4302.cpp
// compile with: /W2
#pragma warning(default : 4302)
int main() {
   int i;
   char c = (char) &i;     // C4302
   short s = (short) &i;   // C4302
}
```
