---
title: Pragma inline_depth
ms.date: 08/29/2019
f1_keywords:
- inline_depth_CPP
- vc-pragma.inline_depth
helpviewer_keywords:
- pragmas, inline_depth
- inline_depth pragma
ms.assetid: 2bba60fe-43ea-4d09-90f7-aafaba3bad07
ms.openlocfilehash: be57178280e278683b85db1413ff5724b5260aef
ms.sourcegitcommit: 6e1c1822e7bcf3d2ef23eb8fac6465f88743facf
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/03/2019
ms.locfileid: "70220979"
---
# <a name="inline_depth-pragma"></a>Pragma inline_depth

Specifica la profondità della ricerca euristica inline. Le funzioni a una profondità nel grafico delle chiamate maggiori del valore specificato non sono inline.

## <a name="syntax"></a>Sintassi

> **#pragma inline_depth (** [ *n* ] **)**

## <a name="remarks"></a>Note

Questo pragma controlla l'incorporamento di funzioni contrassegnate come [inline](../cpp/inline-functions-cpp.md) e [__inline](../cpp/inline-functions-cpp.md)oppure automaticamente in base all' `/Ob` opzione.

*n* può essere un valore compreso tra 0 e 255, dove 255 indica una profondità illimitata nel grafico delle chiamate. Il valore 0 impedisce l'espansione inline. Se *n* non è specificato, viene usato il valore predefinito 254.

Il pragma **inline_depth** controlla il numero di volte in cui è possibile espandere una serie di chiamate di funzione. Si supponga, ad esempio, che la profondità inline sia pari a 4. Se A chiama B e B chiama C, tutte e tre le chiamate vengono espanse inline. Tuttavia, se l'espansione di profondità inline più vicina è 2, vengono espansi solo A e B e C rimane come chiamata di funzione.

Per usare questo pragma, è necessario impostare l' `/Ob` opzione del compilatore su 1 o su un valore superiore. Il livello di profondità impostata utilizzando il pragma viene applicato alla prima chiamata di funzione dopo il pragma.

Il livello di profondità inline può essere ridotto durante l'espansione, ma non è aumentato. Se il livello di profondità inline è 6 e durante l'espansione il preprocessore rileva un pragma **inline_depth** con un valore pari a 8, la profondità rimane 6.

Il pragma **inline_depth** non ha alcun effetto sulle funzioni contrassegnate con `__forceinline`.

> [!NOTE]
> Le funzioni ricorsive possono essere sostituite inline a un livello di profondità massima di 16 chiamate.

## <a name="see-also"></a>Vedere anche

[Direttive pragma e parola chiave __pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)\
[inline_recursion](../preprocessor/inline-recursion.md)
