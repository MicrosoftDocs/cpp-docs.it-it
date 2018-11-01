---
title: push_macro
ms.date: 11/04/2016
f1_keywords:
- vc-pragma.push_macro
- push_macro_CPP
helpviewer_keywords:
- pragmas, push_macro
- push_macro pragma
ms.assetid: ac89efc9-afd1-4dfe-bfd1-497229b3e81d
ms.openlocfilehash: 9b866fd5907faf46872665bbcaef97f2352efea9
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50535681"
---
# <a name="pushmacro"></a>push_macro
Salva il valore dei *macro_name* macro nella parte superiore dello stack per questa macro.

## <a name="syntax"></a>Sintassi

```
#pragma push_macro("
macro_name
")
```

## <a name="remarks"></a>Note

È possibile recuperare il valore per *macro_name* con `pop_macro`.

Visualizzare [pop_macro](../preprocessor/pop-macro.md) per un esempio.

## <a name="see-also"></a>Vedere anche

[Direttive pragma e parola chiave __Pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)