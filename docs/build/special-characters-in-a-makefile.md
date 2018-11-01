---
title: Caratteri speciali in un makefile
ms.date: 11/04/2016
helpviewer_keywords:
- NMAKE program, special characters
- makefiles, special characters
- special characters, in NMAKE macros
- macros, special characters
ms.assetid: 92c34ab5-ca6b-4fc0-bcf4-3172eaeda9f0
ms.openlocfilehash: 18fa83fcfd0c70ac4e8b9bf5be08ac1922998ecb
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50443730"
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