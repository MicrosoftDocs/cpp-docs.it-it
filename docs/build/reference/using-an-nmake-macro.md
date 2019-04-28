---
title: Utilizzo di una macro di NMAKE
ms.date: 11/04/2016
helpviewer_keywords:
- macros, NMAKE
- NMAKE macros, using
ms.assetid: 95c87fbc-76e6-48c0-8536-9bfe179f328e
ms.openlocfilehash: fb3b154ba8b30bbfc9a6c7c6b37720e5c60d6327
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62317250"
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

[Sostituzione di macro](macro-substitution.md)

## <a name="see-also"></a>Vedere anche

[Macro e NMAKE](macros-and-nmake.md)
