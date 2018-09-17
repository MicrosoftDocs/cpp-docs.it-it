---
title: Definizione di una Macro NMAKE | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- macros, NMAKE
- defining NMAKE macros
- NMAKE macros, defining
ms.assetid: 45aae451-9d33-4a3d-8799-2e0cae17070d
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: c266a0be1c5ff16b719e9055f79b377d13ffbf3c
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45715710"
---
# <a name="defining-an-nmake-macro"></a>Definizione di una macro di NMAKE

## <a name="syntax"></a>Sintassi

```

macroname=string
```

## <a name="remarks"></a>Note

Il *nomemacro* è una combinazione di lettere, cifre e caratteri di sottolineatura (_) fino a 1.024 caratteri e avviene sensibili. Il *nomemacro* può contenere una macro di richiamata. Se *nomemacro* consiste interamente tale macro, macro da richiamare non può essere null o non definito.

Il `string` può essere qualsiasi sequenza di zero o più caratteri. Una stringa null contiene zero caratteri o solo spazi o tabulazioni. Il `string` può contenere una chiamata di macro.

## <a name="what-do-you-want-to-know-more-about"></a>Scegliere l'argomento su cui visualizzare maggiori informazioni

[Caratteri speciali nelle macro](../build/special-characters-in-macros.md)

[Macro null e non definite](../build/null-and-undefined-macros.md)

[Definizione delle macro](../build/where-to-define-macros.md)

[Precedenza nelle definizioni di macro](../build/precedence-in-macro-definitions.md)

## <a name="see-also"></a>Vedere anche

[Macro e NMAKE](../build/macros-and-nmake.md)