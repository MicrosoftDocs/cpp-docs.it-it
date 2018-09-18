---
title: Avviso del compilatore C4950 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4950
dev_langs:
- C++
helpviewer_keywords:
- C4950
ms.assetid: 50226a5c-c664-4d09-ac59-e9e874ca244f
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 750295da5d2da42ae4c2aac4fbb04dd208a7f32c
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46072212"
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