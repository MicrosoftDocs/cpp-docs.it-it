---
title: inline_recursion
ms.date: 11/04/2016
f1_keywords:
- inline_recursion_CPP
- vc-pragma.inline_recursion
helpviewer_keywords:
- pragmas, inline_recursion
- inline_recursion pragma
ms.assetid: cfef5791-63b7-45ac-9574-623747b9b9c9
ms.openlocfilehash: 635d33d91e779d88b56e353d0cddf6b34b313855
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50523848"
---
# <a name="inlinerecursion"></a>inline_recursion
Controlla l'espansione inline delle chiamate di funzione dirette o ricorsive reciproche.

## <a name="syntax"></a>Sintassi

```
#pragma inline_recursion( [{on | off}] )
```

## <a name="remarks"></a>Note

Utilizzare questo pragma per controllare le funzioni contrassegnato come [inline](../cpp/inline-functions-cpp.md) e [inline](../cpp/inline-functions-cpp.md) o le funzioni che il compilatore espande automaticamente con il `/Ob2` opzione. Uso di questo pragma richiede un [/Ob](../build/reference/ob-inline-function-expansion.md) impostazione dell'opzione del compilatore di 1 o 2. Lo stato predefinito per **inline_recursion** è disattivata. Questo pragma viene applicato alla prima chiamata di funzione dopo che il pragma viene rilevato e non influisce sulla definizione della funzione.

Il **inline_recursion** pragma controlla la modalità di espansione delle funzioni ricorsive. Se **inline_recursion** è disattivata e se una funzione inline chiama se stessa (direttamente o indirettamente), la funzione viene espansa solo una volta. Se **inline_recursion** è attiva, la funzione viene espansa più volte finché non raggiunge il valore impostato con la [inline_depth](../preprocessor/inline-depth.md) pragma, il valore predefinito per le funzioni ricorsive definito per il `inline_depth` pragma, o una capacità limita.

## <a name="see-also"></a>Vedere anche

[Direttive pragma e parola chiave __Pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)<br/>
[inline_depth](../preprocessor/inline-depth.md)<br/>
[/Ob (espansione funzioni inline)](../build/reference/ob-inline-function-expansion.md)