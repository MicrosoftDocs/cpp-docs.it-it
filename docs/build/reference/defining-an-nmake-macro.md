---
description: 'Altre informazioni su: definizione di una macro di NMAKE'
title: Definizione di una macro di NMAKE
ms.date: 11/04/2016
helpviewer_keywords:
- macros, NMAKE
- defining NMAKE macros
- NMAKE macros, defining
ms.assetid: 45aae451-9d33-4a3d-8799-2e0cae17070d
ms.openlocfilehash: 133e05cac2a236a38f6b2d1e719f1b66fd73760d
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97201638"
---
# <a name="defining-an-nmake-macro"></a>Definizione di una macro di NMAKE

## <a name="syntax"></a>Sintassi

```

macroname=string
```

## <a name="remarks"></a>Osservazioni

Il valore di *macroname* è costituito da una combinazione di lettere, cifre e caratteri di sottolineatura (_) fino a 1.024 caratteri e fa distinzione tra maiuscole e minuscole. Il *macroname* può contenere una macro richiamata. Se *macroname* è costituito interamente da una macro richiamata, la macro richiamata non può essere null o non definita.

`string`Può essere una qualsiasi sequenza di zero o più caratteri. Una stringa null contiene zero caratteri o solo spazi o tabulazioni. `string`Può contenere una chiamata di macro.

## <a name="what-do-you-want-to-know-more-about"></a>Scegliere l'argomento su cui visualizzare maggiori informazioni

[Caratteri speciali nelle macro](special-characters-in-macros.md)

[Macro Null e non definite](null-and-undefined-macros.md)

[Definizione delle macro](where-to-define-macros.md)

[Precedenza nelle definizioni delle macro](precedence-in-macro-definitions.md)

## <a name="see-also"></a>Vedi anche

[Macro e NMAKE](macros-and-nmake.md)
