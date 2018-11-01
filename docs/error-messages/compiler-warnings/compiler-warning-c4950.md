---
title: Avviso del compilatore C4950
ms.date: 11/04/2016
f1_keywords:
- C4950
helpviewer_keywords:
- C4950
ms.assetid: 50226a5c-c664-4d09-ac59-e9e874ca244f
ms.openlocfilehash: 784179af68ff55ba70c61255c88688105ecb1738
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50494559"
---
# <a name="compiler-warning-c4950"></a>Avviso del compilatore C4950

'type_or_member': contrassegnato come obsoleto

Un tipo o membro è stato contrassegnato come obsoleto con la <xref:System.ObsoleteAttribute> attributo.

C4950 viene sempre generato come errore. È possibile disattivare questo avviso utilizzando il [avviso](../../preprocessor/warning.md) direttiva pragma o il [/wd](../../build/reference/compiler-option-warning-level.md) opzione del compilatore.

## <a name="example"></a>Esempio

L'esempio seguente genera l'avviso C4950:

```cpp
// C4950.cpp
// compile with: /clr
using namespace System;

// Any reference to Func3 should generate an error with message
[System::ObsoleteAttribute("Will be removed in next version", true)]
Int32 Func3(Int32 a, Int32 b) {
   return (a + b);
}

int main() {
   Int32 MyInt3 = ::Func3(2, 2);   // C4950
}
```