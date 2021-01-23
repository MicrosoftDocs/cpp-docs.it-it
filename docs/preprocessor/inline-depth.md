---
description: Altre informazioni sulla direttiva inline_depth pragma in Microsoft C/C++
title: inline_depth pragma
ms.date: 01/22/2021
f1_keywords:
- inline_depth_CPP
- vc-pragma.inline_depth
helpviewer_keywords:
- pragma, inline_depth
- inline_depth pragma
no-loc:
- pragma
ms.openlocfilehash: 6daffdbcb598304925675c15c955941eb8369d23
ms.sourcegitcommit: a26a66a3cf479e0e827d549a9b850fad99b108d1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/22/2021
ms.locfileid: "98713571"
---
# <a name="inline_depth-no-locpragma"></a>`inline_depth` pragma

Specifica la profondità della ricerca euristica inline. Le funzioni a una profondità nel grafico delle chiamate maggiori del valore specificato non sono inline.

## <a name="syntax"></a>Sintassi

> **`#pragma inline_depth(`** [ *n* ] **`)`**

## <a name="remarks"></a>Osservazioni

Questa operazione pragma consente di controllare l'incorporamento di funzioni contrassegnate con [`inline`](../cpp/inline-functions-cpp.md) e [`__inline`](../cpp/inline-functions-cpp.md) , o inline automaticamente sotto l' **`/Ob`** opzione del compilatore. Per ulteriori informazioni, vedere [ `/Ob` (espansione della funzione inline)](../build/reference/ob-inline-function-expansion.md).

*n* può essere un valore compreso tra 0 e 255, dove 255 indica una profondità illimitata nel grafico delle chiamate. Il valore 0 impedisce l'espansione inline. Se *n* non è specificato, viene usato il valore predefinito 254.

**`inline_depth`** pragma Controlla il numero di volte in cui è possibile espandere una serie di chiamate di funzione. Si supponga, ad esempio, che la profondità inline sia pari a 4. Se A chiama B e B chiama C, tutte e tre le chiamate vengono espanse inline. Tuttavia, se l'espansione di profondità inline più vicina è 2, vengono espansi solo A e B e C rimane come chiamata di funzione.

Per usarlo pragma , è necessario impostare l' **`/Ob`** opzione del compilatore su 1 o su un valore superiore. Il set di profondità utilizzato viene pragma applicato alla prima chiamata di funzione dopo pragma .

Il livello di profondità inline può essere ridotto durante l'espansione, ma non è aumentato. Se il livello di profondità inline è 6 e durante l'espansione il preprocessore rileva un **`inline_depth`** pragma con un valore pari a 8, la profondità rimane 6.

**`inline_depth`** pragma Non ha alcun effetto sulle funzioni contrassegnate con **`__forceinline`** .

> [!NOTE]
> Le funzioni ricorsive possono essere sostituite inline a un livello di profondità massima di 16 chiamate.

## <a name="see-also"></a>Vedere anche

[Direttive pragma e `__pragma` `_Pragma` parole chiave e](./pragma-directives-and-the-pragma-keyword.md)\
[`inline_recursion`](../preprocessor/inline-recursion.md)
