---
title: Sostituzione di macro | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- NMAKE program, macro substitution
- macros, NMAKE
- substitution macros in NMAKE
ms.assetid: 47465cfe-fd92-49db-aebe-7c2d7ecceb73
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 8f71ef2e1a8f337a4cd415169b6f9d817042f19a
ms.sourcegitcommit: d10a2382832373b900b1780e1190ab104175397f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/06/2018
ms.locfileid: "43894395"
---
# <a name="macro-substitution"></a>Sostituzione di macro

Quando *nomemacro* viene richiamata, ogni occorrenza di *string1* nella definizione dell'espressione stringa viene sostituita da *string2*.

## <a name="syntax"></a>Sintassi

```
$(macroname:string1=string2)
```

## <a name="remarks"></a>Note

Sostituzione di macro distinzione maiuscole / minuscole e un valore letterale; *string1* e *string2* non è possibile richiamare le macro. Sostituzione non modifica la definizione originale. È possibile sostituire il testo in tutte le macro predefinite, ad eccezione [ $$@ ](../build/filename-macros.md).

Spazi o tabulazioni non precedono i due punti; After i due punti vengono interpretati come valore letterale. Se *string2* è null, tutte le occorrenze dei *string1* vengono eliminati dalla stringa di definizione della macro.

## <a name="see-also"></a>Vedere anche

[Uso di una macro di NMAKE](../build/using-an-nmake-macro.md)