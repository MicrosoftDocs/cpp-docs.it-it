---
description: 'Altre informazioni su: caratteri speciali in un makefile'
title: Caratteri speciali in un makefile
ms.date: 11/04/2016
helpviewer_keywords:
- NMAKE program, special characters
- makefiles, special characters
- special characters, in NMAKE macros
- macros, special characters
ms.assetid: 92c34ab5-ca6b-4fc0-bcf4-3172eaeda9f0
ms.openlocfilehash: 22b8f6dd82191c88a23eaf1dabb551d468293a42
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97224673"
---
# <a name="special-characters-in-a-makefile"></a>Caratteri speciali in un makefile

Per usare un carattere speciale di NMAKE come carattere letterale, posizionare un accento circonflesso (^) in primo piano. NMAKE ignora i carrier che precedono altri caratteri. I caratteri speciali sono:

`:  ;  #  (  )  $  ^  \  {  }  !  @  —`

Un accento circonflesso (^) all'interno di una stringa racchiusa tra virgolette viene considerato come un carattere di accento letterale. Un punto di inserimento alla fine di una riga inserisce un carattere di nuova riga letterale in una stringa o in una macro.

Nelle macro, una barra rovesciata ( \\ ) seguita da un carattere di nuova riga viene sostituita da uno spazio.

Nei comandi, un simbolo di percentuale (%) è un identificatore di file. Per rappresentare% letteralmente in un comando, specificare un segno di percentuale doppio (%%) al posto di una sola. In altre situazioni, NMAKE interpreta letteralmente un solo%, ma interpreta sempre il doppio%% come una singola percentuale. Pertanto, per rappresentare un valore letterale%%, specificare i tre segni di percentuale,%%% o i segni del 4%,%%%%.

Per usare il segno di dollaro ($) come carattere letterale in un comando, specificare due simboli di dollaro ($ $). Questo metodo può essere utilizzato anche in altre situazioni in cui ^ $ funziona.

## <a name="see-also"></a>Vedi anche

[Contenuto di un makefile](contents-of-a-makefile.md)
