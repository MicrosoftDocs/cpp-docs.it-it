---
title: Compilatore avviso (livello 1) C4683 | Microsoft Docs
ms.custom: ''
ms.date: 08/27/2018
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4683
dev_langs:
- C++
helpviewer_keywords:
- C4683
ms.assetid: e6e77364-dba1-46dd-ae1d-03da23070bce
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: a157d3beb7c2efa7f1144a961973652e2ce384f7
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43194197"
---
# <a name="compiler-warning-level-1-c4683"></a>Avviso del compilatore (livello 1) C4683

> «*funzione*': origine evento è un 'out'-parametro; prestare attenzione nello stabilire associazioni a più gestori eventi

## <a name="remarks"></a>Note

Se più di un sink di evento è in ascolto per un'origine evento COM, il valore di un parametro out può essere ignorato.

Tenere presente che si verificherà una perdita di memoria nelle situazioni seguenti:

1. Se un metodo non ha un parametro out allocata internamente, ad esempio un oggetto BSTR *.

2. Se l'evento ha più di un gestore (è un evento multicast).

Il motivo per la perdita è che il parametro out verrà impostato da più di un gestore, ma restituito al sito di chiamata solo l'ultimo gestore.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C4683 e Mostra come risolverlo:

```cpp
// C4683.cpp
// compile with: /W1 /LD
#define _ATL_ATTRIBUTES 1
#include "atlbase.h"
#include "atlcom.h"

[ module(name="xx") ];

[ object ]
__interface I {
   HRESULT f([out] int* pi);
   // try the following line instead
   // HRESULT f(int* pi);
};

[ coclass, event_source(com) ]
struct E {
   __event __interface I;   // C4683
};
```