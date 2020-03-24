---
title: Avviso del compilatore (livello 1) C4683
ms.date: 08/27/2018
f1_keywords:
- C4683
helpviewer_keywords:
- C4683
ms.assetid: e6e77364-dba1-46dd-ae1d-03da23070bce
ms.openlocfilehash: f86cf8f6d894d6efaa1b49977634956dc1979a98
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80175429"
---
# <a name="compiler-warning-level-1-c4683"></a>Avviso del compilatore (livello 1) C4683

> '*Function*': l'origine evento ha un parametro ' out''; prestare attenzione durante l'associazione di più gestori di eventi

## <a name="remarks"></a>Osservazioni

Se più di un sink di evento è in ascolto di un'origine evento COM, il valore di un parametro out può essere ignorato.

Tenere presente che si verificherà una perdita di memoria nelle situazioni seguenti:

1. Se un metodo ha un parametro out allocato internamente, ad esempio un BSTR *.

2. Se l'evento dispone di più di un gestore (è un evento multicast).

Il motivo della perdita è che il parametro out verrà impostato da più di un gestore, ma restituito al sito di chiamata solo dall'ultimo gestore.

## <a name="example"></a>Esempio

L'esempio seguente genera C4683 e Mostra come risolverlo:

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
