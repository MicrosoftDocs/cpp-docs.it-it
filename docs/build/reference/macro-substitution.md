---
title: Sostituzione di macro
ms.date: 11/04/2016
helpviewer_keywords:
- NMAKE program, macro substitution
- macros, NMAKE
- substitution macros in NMAKE
ms.assetid: 47465cfe-fd92-49db-aebe-7c2d7ecceb73
ms.openlocfilehash: 43dc9133c53b1c436c0df8c3db66ae8f18604222
ms.sourcegitcommit: 8105b7003b89b73b4359644ff4281e1595352dda
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/14/2019
ms.locfileid: "57827540"
---
# <a name="macro-substitution"></a>Sostituzione di macro

Quando *nomemacro* viene richiamata, ogni occorrenza di *string1* nella definizione dell'espressione stringa viene sostituita da *string2*.

## <a name="syntax"></a>Sintassi

```
$(macroname:string1=string2)
```

## <a name="remarks"></a>Note

Sostituzione di macro distinzione maiuscole / minuscole e un valore letterale; *string1* e *string2* non è possibile richiamare le macro. Sostituzione non modifica la definizione originale. È possibile sostituire il testo in tutte le macro predefinite, ad eccezione [ $$@ ](filename-macros.md).

Spazi o tabulazioni non precedono i due punti; After i due punti vengono interpretati come valore letterale. Se *string2* è null, tutte le occorrenze dei *string1* vengono eliminati dalla stringa di definizione della macro.

## <a name="see-also"></a>Vedere anche

[Uso di una macro di NMAKE](using-an-nmake-macro.md)
