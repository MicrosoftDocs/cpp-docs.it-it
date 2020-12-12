---
description: 'Altre informazioni su: avviso del compilatore C4950'
title: Avviso del compilatore C4950
ms.date: 11/04/2016
f1_keywords:
- C4950
helpviewer_keywords:
- C4950
ms.assetid: 50226a5c-c664-4d09-ac59-e9e874ca244f
ms.openlocfilehash: e1bb05501fcac6c836bfd4aa89f72807b625c292
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97314880"
---
# <a name="compiler-warning-c4950"></a>Avviso del compilatore C4950

'type_or_member': contrassegnato come obsoleto

Un membro o un tipo è stato contrassegnato come obsoleto con l' <xref:System.ObsoleteAttribute> attributo.

C4950 viene sempre generato come errore. È possibile disattivare questo avviso utilizzando la direttiva pragma [warning](../../preprocessor/warning.md) o l'opzione del compilatore [/WD.](../../build/reference/compiler-option-warning-level.md) .

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
