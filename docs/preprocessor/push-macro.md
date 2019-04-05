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
ms.openlocfilehash: 5602dd91b7d017c49a122524e469100b0ec6debf
ms.sourcegitcommit: c7f90df497e6261764893f9cc04b5d1f1bf0b64b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/05/2019
ms.locfileid: "59029742"
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