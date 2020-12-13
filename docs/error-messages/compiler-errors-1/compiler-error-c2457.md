---
description: 'Altre informazioni su: errore del compilatore C2457'
title: Errore del compilatore C2457
ms.date: 11/04/2016
f1_keywords:
- C2457
helpviewer_keywords:
- C2457
ms.assetid: 347e169d-23ad-434f-8836-5b09b53980ff
ms.openlocfilehash: 1fea5192b97e280a38f674a67b0bf739041ffe97
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97332374"
---
# <a name="compiler-error-c2457"></a>Errore del compilatore C2457

> '*macro*': la macro predefinita non può apparire all'esterno del corpo di una funzione

Si è provato a usare una macro predefinita, ad esempio [&#95;&#95;funzione&#95;&#95;](../../preprocessor/predefined-macros.md), in uno spazio globale.

## <a name="example"></a>Esempio

L'esempio seguente genera C2457 e Mostra anche l'uso corretto:

```cpp
// C2457.cpp
#include <stdio.h>

__FUNCTION__;   // C2457, cannot be global

int main()
{
    printf_s("\n%s", __FUNCTION__);   // OK
}
```
