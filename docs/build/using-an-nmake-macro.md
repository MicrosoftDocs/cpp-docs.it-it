---
title: Utilizzo di una macro di NMAKE
ms.date: 11/04/2016
helpviewer_keywords:
- macros, NMAKE
- NMAKE macros, using
ms.assetid: 95c87fbc-76e6-48c0-8536-9bfe179f328e
ms.openlocfilehash: a5f0fb9b13c5d5647b8f4ee382951df6282e8d68
ms.sourcegitcommit: bff17488ac5538b8eaac57156a4d6f06b37d6b7f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2019
ms.locfileid: "57415643"
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
