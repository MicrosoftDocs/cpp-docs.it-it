---
title: Errore del compilatore C2457 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C2457
dev_langs: C++
helpviewer_keywords: C2457
ms.assetid: 347e169d-23ad-434f-8836-5b09b53980ff
caps.latest.revision: "10"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 915baebbcc2b9b18b277d78f32868374c194d6ef
ms.sourcegitcommit: ca2f94dfd015e0098a6eaf5c793ec532f1c97de1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2017
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