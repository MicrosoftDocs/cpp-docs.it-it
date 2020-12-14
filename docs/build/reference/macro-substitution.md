---
description: 'Altre informazioni su: sostituzione macro'
title: Sostituzione di macro
ms.date: 11/04/2016
helpviewer_keywords:
- NMAKE program, macro substitution
- macros, NMAKE
- substitution macros in NMAKE
ms.assetid: 47465cfe-fd92-49db-aebe-7c2d7ecceb73
ms.openlocfilehash: 5e1531afb210b4671632bca2540bfc7562653139
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97199181"
---
# <a name="macro-substitution"></a>Sostituzione di macro

Quando si richiama *macroname* , ogni occorrenza di *String1* nella relativa stringa di definizione viene sostituita da *string2*.

## <a name="syntax"></a>Sintassi

```
$(macroname:string1=string2)
```

## <a name="remarks"></a>Osservazioni

La sostituzione della macro fa distinzione tra maiuscole e minuscole ed è letterale *String1* e *string2* non possono richiamare macro. La sostituzione non modifica la definizione originale. È possibile sostituire il testo in qualsiasi macro predefinita eccetto [$$@](filename-macros.md) .

Nessun spazio o tabulazione precede i due punti; qualsiasi dopo i due punti viene interpretato come valore letterale. Se *string2* è null, tutte le occorrenze di *String1* vengono eliminate dalla stringa di definizione della macro.

## <a name="see-also"></a>Vedi anche

[Utilizzo di una macro NMAKE](using-an-nmake-macro.md)
