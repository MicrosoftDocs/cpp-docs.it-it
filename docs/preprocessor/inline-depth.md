---
title: inline_depth
ms.date: 11/04/2016
f1_keywords:
- inline_depth_CPP
- vc-pragma.inline_depth
helpviewer_keywords:
- pragmas, inline_depth
- inline_depth pragma
ms.assetid: 2bba60fe-43ea-4d09-90f7-aafaba3bad07
ms.openlocfilehash: 18d772c8a9f6218ed3afaa385f214445bd0fe8e6
ms.sourcegitcommit: 72583d30170d6ef29ea5c6848dc00169f2c909aa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/18/2019
ms.locfileid: "59039020"
---
# <a name="inlinedepth"></a>inline_depth
Specifica l'euristica inline ricerca profondità, in modo che nessuna funzione verrà resa inline se è a una profondità (nel grafico delle chiamate) maggiore *n*.

## <a name="syntax"></a>Sintassi

```
#pragma inline_depth( [n] )
```

## <a name="remarks"></a>Note

Questo pragma controlla l'incorporamento di funzioni contrassegnate [inline](../cpp/inline-functions-cpp.md) e [inline](../cpp/inline-functions-cpp.md) o rese inline automaticamente il `/Ob2` opzione.

*n* può essere un valore compreso tra 0 e 255, dove 255 indica una profondità illimitata nel grafico delle chiamate e zero inibisce l'espansione inline.  Quando *n* viene omesso, viene usato il valore predefinito (254).

Il **inline_depth** pragma controlla il numero di volte in cui una serie di chiamate di funzione può essere espanso. Se ad esempio il livello di profondità inline è quattro e se A chiama B e B quindi chiama C, tutte le tre chiamate verranno espanse in modalità inline. Tuttavia, se l'espansione inline più vicina è due, vengono espanse solo A e B, mentre C rimane una chiamata di funzione.

Per utilizzare questo pragma, è necessario impostare il `/Ob` opzione del compilatore su 1 o 2. Il livello di profondità impostata utilizzando il pragma viene applicato alla prima chiamata di funzione dopo il pragma.

Il livello di profondità inline può essere ridotto durante l'espansione, ma non aumentato. Se il livello di profondità inline è sei e durante l'espansione nel preprocessore viene rilevato un **inline_depth** pragma con un valore pari a otto, la profondità rimane sei.

Il **inline_depth** pragma non ha alcun effetto sulle funzioni contrassegnate con `__forceinline`.

> [!NOTE]
> Le funzioni ricorsive possono essere sostituite inline a un livello di profondità massima di 16 chiamate.

## <a name="see-also"></a>Vedere anche

[Direttive pragma e parola chiave __Pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)<br/>
[inline_recursion](../preprocessor/inline-recursion.md)