---
title: Uso di una Macro di NMAKE | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- macros, NMAKE
- NMAKE macros, using
ms.assetid: 95c87fbc-76e6-48c0-8536-9bfe179f328e
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: e0b68a5f3128b5d3780895f8080411819ed9b538
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45712595"
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