---
title: Caratteri speciali in un Makefile | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- NMAKE program, special characters
- makefiles, special characters
- special characters, in NMAKE macros
- macros, special characters
ms.assetid: 92c34ab5-ca6b-4fc0-bcf4-3172eaeda9f0
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 3ae77e769672dcc88a9dd41c901424c8c8150e6b
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45709362"
---
# <a name="special-characters-in-a-makefile"></a>Caratteri speciali in un makefile

Per usare un carattere speciale NMAKE come carattere letterale, inserire un accento circonflesso (^) trovano davanti. NMAKE Ignora accenti circonflessi che precedono gli altri caratteri. I caratteri speciali sono:

`:  ;  #  (  )  $  ^  \  {  }  !  @  —`

Un accento circonflesso (^) all'interno di una stringa tra virgolette viene considerato come un valore letterale del carattere. Un punto di inserimento alla fine di una riga viene inserito un carattere letterale in una stringa o una macro.

Nelle macro, una barra rovesciata (\\) seguito da un carattere di nuova riga viene sostituito da uno spazio.

Nei comandi, un simbolo di percentuale (%) è un identificatore di file. Per rappresentare % letteralmente in un comando, specificare un simbolo di percentuale doppio (%) al posto di uno solo. In altre situazioni, viene interpretato letteralmente un singolo %, ma viene sempre interpretato un valore double % % come oggetto % singolo. Pertanto, per rappresentare un valore letterale % %, specificare entrambi tre segni di percentuale, % % %, o segni di percentuale di quattro, % % % c'.

Per utilizzare il segno di dollaro ($) come carattere letterale in un comando, specificare due simboli del dollaro ($$). Questo metodo può essere utilizzato anche in altre situazioni in cui ^ $ works.

## <a name="see-also"></a>Vedere anche

[Contenuto di un makefile](../build/contents-of-a-makefile.md)