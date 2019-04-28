---
title: Caratteri speciali in un makefile
ms.date: 11/04/2016
helpviewer_keywords:
- NMAKE program, special characters
- makefiles, special characters
- special characters, in NMAKE macros
- macros, special characters
ms.assetid: 92c34ab5-ca6b-4fc0-bcf4-3172eaeda9f0
ms.openlocfilehash: d915b182d72b4251f416433642cd8b1832b80e08
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62318576"
---
# <a name="special-characters-in-a-makefile"></a>Caratteri speciali in un makefile

Per usare un carattere speciale NMAKE come carattere letterale, inserire un accento circonflesso (^) trovano davanti. NMAKE Ignora accenti circonflessi che precedono gli altri caratteri. I caratteri speciali sono:

`:  ;  #  (  )  $  ^  \  {  }  !  @  —`

Un accento circonflesso (^) all'interno di una stringa tra virgolette viene considerato come un valore letterale del carattere. Un punto di inserimento alla fine di una riga viene inserito un carattere letterale in una stringa o una macro.

Nelle macro, una barra rovesciata (\\) seguito da un carattere di nuova riga viene sostituito da uno spazio.

Nei comandi, un simbolo di percentuale (%) è un identificatore di file. Per rappresentare % letteralmente in un comando, specificare un simbolo di percentuale doppio (%) al posto di uno solo. In altre situazioni, viene interpretato letteralmente un singolo %, ma viene sempre interpretato un valore double % % come oggetto % singolo. Pertanto, per rappresentare un valore letterale % %, specificare entrambi tre segni di percentuale, % % %, o segni di percentuale di quattro, % % % c'.

Per utilizzare il segno di dollaro ($) come carattere letterale in un comando, specificare due simboli del dollaro ($$). Questo metodo può essere utilizzato anche in altre situazioni in cui ^ $ works.

## <a name="see-also"></a>Vedere anche

[Contenuto di un makefile](contents-of-a-makefile.md)
