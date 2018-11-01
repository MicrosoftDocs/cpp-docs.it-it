---
title: Utilizzo di una macro di NMAKE
ms.date: 11/04/2016
helpviewer_keywords:
- macros, NMAKE
- NMAKE macros, using
ms.assetid: 95c87fbc-76e6-48c0-8536-9bfe179f328e
ms.openlocfilehash: 9d8ff76e1e730b65db363749797ef9ae2062adab
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50645081"
---
# <a name="using-an-nmake-macro"></a>Utilizzo di una macro di NMAKE

Per utilizzare una macro, racchiudere il nome tra parentesi precedute da un segno di dollaro ($) come indicato di seguito.

## <a name="syntax"></a>Sintassi

```
$(macroname)
```

## <a name="remarks"></a>Note

Non sono consentiti spazi. Le parentesi sono facoltative se *nomemacro* è un singolo carattere. La stringa di definizione consente di sostituire $(*nomemacro*); una macro viene sostituita da una stringa null.

## <a name="what-do-you-want-to-know-more-about"></a>Scegliere l'argomento su cui visualizzare maggiori informazioni

[Sostituzione di macro](../build/macro-substitution.md)

## <a name="see-also"></a>Vedere anche

[Macro e NMAKE](../build/macros-and-nmake.md)