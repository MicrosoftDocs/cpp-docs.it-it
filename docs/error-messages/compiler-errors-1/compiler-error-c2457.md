---
title: Errore del compilatore C2457 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2457
dev_langs:
- C++
helpviewer_keywords:
- C2457
ms.assetid: 347e169d-23ad-434f-8836-5b09b53980ff
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 61cdb4f4b679bab858717a6fb96838f389822a6b
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33224923"
---
# <a name="compiler-error-c2457"></a>Errore del compilatore C2457

> '*macro*': la macro non può trovarsi all'esterno di un corpo della funzione

Si è tentato di utilizzare una macro predefinita, ad esempio [ &#95; &#95;funzione&#95;&#95;](../../preprocessor/predefined-macros.md), in uno spazio globale.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C2457 e inoltre illustrato l'utilizzo corretto:

```cpp
// C2457.cpp
#include <stdio.h>

__FUNCTION__;   // C2457, cannot be global

int main()
{
    printf_s("\n%s", __FUNCTION__);   // OK
}
```