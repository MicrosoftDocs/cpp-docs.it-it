---
title: Avviso del compilatore (livello 1) C4683
ms.date: 08/27/2018
f1_keywords:
- C4683
helpviewer_keywords:
- C4683
ms.assetid: e6e77364-dba1-46dd-ae1d-03da23070bce
ms.openlocfilehash: 264753ece6cbabded21df8e6b9dbb463f811e8a2
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62375158"
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