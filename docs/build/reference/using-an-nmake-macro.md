---
description: 'Altre informazioni su: uso di una macro NMAKE'
title: Utilizzo di una macro di NMAKE
ms.date: 11/04/2016
helpviewer_keywords:
- macros, NMAKE
- NMAKE macros, using
ms.assetid: 95c87fbc-76e6-48c0-8536-9bfe179f328e
ms.openlocfilehash: 14a1856b411bf7608b94caacb1b0b078dd1f5577
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97247007"
---
# <a name="using-an-nmake-macro"></a>Utilizzo di una macro di NMAKE

Per usare una macro, racchiudere il nome tra parentesi precedute da un segno di dollaro ($) come indicato di seguito.

## <a name="syntax"></a>Sintassi

```
$(macroname)
```

## <a name="remarks"></a>Osservazioni

Non sono consentiti spazi. Le parentesi sono facoltative se *macroname* è un singolo carattere. La stringa di definizione sostituisce $ (*macroname*); una macro non definita viene sostituita da una stringa null.

## <a name="what-do-you-want-to-know-more-about"></a>Scegliere l'argomento su cui visualizzare maggiori informazioni

[Sostituzione di macro](macro-substitution.md)

## <a name="see-also"></a>Vedi anche

[Macro e NMAKE](macros-and-nmake.md)
