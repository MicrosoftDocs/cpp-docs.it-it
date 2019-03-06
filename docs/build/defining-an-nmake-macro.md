---
title: Definizione di una macro di NMAKE
ms.date: 11/04/2016
helpviewer_keywords:
- macros, NMAKE
- defining NMAKE macros
- NMAKE macros, defining
ms.assetid: 45aae451-9d33-4a3d-8799-2e0cae17070d
ms.openlocfilehash: 6eb7c2f7759bda21f1424cef91b1dc814ba8d8ba
ms.sourcegitcommit: bff17488ac5538b8eaac57156a4d6f06b37d6b7f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2019
ms.locfileid: "57424106"
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
