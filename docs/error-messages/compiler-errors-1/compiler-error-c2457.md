---
title: Errore del compilatore C2457 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C2457
dev_langs:
- C++
helpviewer_keywords:
- C2457
ms.assetid: 347e169d-23ad-434f-8836-5b09b53980ff
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: ff89bb3635936ae0f797438d73f71adf1ef08de7
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-error-c2457"></a>Errore del compilatore C2457

> '*macro*': la macro non può trovarsi all'esterno di un corpo della funzione

Si è tentato di utilizzare una macro predefinita, ad esempio [&#95; &#95; FUNZIONE &#95; &#95; ](../../preprocessor/predefined-macros.md), in uno spazio globale.

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