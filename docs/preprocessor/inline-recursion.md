---
description: Altre informazioni sulla direttiva inline_recursion pragma in Microsoft C/C++
title: inline_recursion pragma
ms.date: 01/22/2021
f1_keywords:
- inline_recursion_CPP
- vc-pragma.inline_recursion
helpviewer_keywords:
- pragma, inline_recursion
- inline_recursion pragma
no-loc:
- pragma
ms.openlocfilehash: b4e377d4c97c46a20e44a2c41f872a8762cdea4d
ms.sourcegitcommit: a26a66a3cf479e0e827d549a9b850fad99b108d1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/22/2021
ms.locfileid: "98713558"
---
# <a name="inline_recursion-no-locpragma"></a>`inline_recursion` pragma

Controlla l'espansione inline delle chiamate di funzione dirette o ricorsive reciproche.

## <a name="syntax"></a>Sintassi

> **`#pragma inline_recursion(`** [ { **`on`** | **`off`** } ] **`)`**

## <a name="remarks"></a>Osservazioni

Usare questa pragma opzione per controllare le funzioni contrassegnate come [`inline`](../cpp/inline-functions-cpp.md) e [`__inline`](../cpp/inline-functions-cpp.md) o funzioni che il compilatore espande automaticamente in base all' **`/Ob2`** opzione. L'uso di questa operazione pragma richiede un' [`/Ob`](../build/reference/ob-inline-function-expansion.md) impostazione dell'opzione del compilatore 1 o 2. Lo stato predefinito per **`inline_recursion`** è disattivato. Questa operazione pragma viene applicata alla prima chiamata di funzione dopo che l'oggetto pragma è stato individuato e non influisce sulla definizione della funzione.

**`inline_recursion`** pragma Controlla la modalità di espansione delle funzioni ricorsive. Se **`inline_recursion`** è off e se una funzione inline chiama se stessa, direttamente o indirettamente, la funzione viene espansa solo una volta. Se **`inline_recursion`** è on, la funzione viene espansa più volte fino a raggiungere il valore impostato con [`inline_depth`](../preprocessor/inline-depth.md) pragma , il valore predefinito per le funzioni ricorsive definite da `inline_depth` pragma o un limite di capacità.

## <a name="see-also"></a>Vedere anche

[Direttive pragma e `__pragma` `_Pragma` parole chiave e](./pragma-directives-and-the-pragma-keyword.md)\
[`inline_depth`](../preprocessor/inline-depth.md)\
[`/Ob` (Espansione funzione inline)](../build/reference/ob-inline-function-expansion.md)
