---
title: Direttive di pre-elaborazione di makefile
ms.date: 08/11/2019
f1_keywords:
- '!UNDEF'
- '!INCLUDE'
- '!IFNDEF'
- '!MESSAGE'
helpviewer_keywords:
- ERROR directive
- '!MESSAGE directive'
- IF directive
- '!UNDEF directive'
- IFDEF directive
- '!ELSEIF directive'
- '!IFDEF directive'
- '!IF directive'
- UNDEF directive
- '!CMDSWITCHES directive'
- ENDIF directive
- directives, makefile preprocessing
- INCLUDE directive
- IFNDEF directive
- preprocessing directives, makefiles
- '!IFNDEF directive'
- ELSEIFNDEF directive
- NMAKE program, expressions
- ELSEIF directive
- '!ERROR directive'
- '!ENDIF directive'
- MESSAGE directive
- '!INCLUDE directive'
- '!ELSEIFNDEF directive'
- CMDSWITCHES directive
- '!ELSEIFDEF directive'
- '!ELSE directive'
- NMAKE program, preprocessor directives
- makefiles, preprocessing directives
- ELSE directive
- ELSEIFDEF directive
ms.assetid: bcedeccb-d981-469d-b9e8-ab5d097fd8c2
ms.openlocfilehash: 1dd30c8e338343626d8a8cc3157d118e44f0ea18
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80170488"
---
# <a name="makefile-preprocessing-directives"></a>Direttive di pre-elaborazione di makefile

Le direttive di pre-elaborazione non fanno distinzione tra maiuscole e minuscole. Il punto esclamativo iniziale (!) deve essere visualizzato all'inizio della riga. Dopo il punto esclamativo, è possibile che vengano visualizzati zero o più spazi o tabulazioni per il rientro.

- opzione `!CMDSWITCHES` { &#124;`+` `-`*option* }...

   Attiva o disattiva tutte le *Opzioni* elencate. Gli spazi o le schede devono essere visualizzati prima dell'operatore `+` o `-`; Nessuno può comparire tra l'operatore e le [lettere delle opzioni](running-nmake.md#nmake-options). Le lettere non fanno distinzione tra maiuscole e minuscole e vengono specificate senza una barra (`/`). Per attivare alcune opzioni e disattivare altre, usare specifiche separate di `!CMDSWITCHES`.

   In un makefile è possibile utilizzare solo/D,/I,/N e/S. In Tools. ini sono consentite tutte le opzioni eccetto/F,/HELP,/NOLOGO,/X e/?. Le modifiche specificate in un blocco di descrizione non diventano effettive fino al blocco di descrizione successivo. Questa direttiva aggiorna **MAKEFLAGS**; le modifiche vengono ereditate durante la ricorsione se viene specificato **MAKEFLAGS** .

- *testo* `!ERROR`

   Visualizza il *testo* in Error U1050, quindi interrompe NMAKE, anche se viene usato/K,/i, `.IGNORE`, `!CMDSWITCHES`o il modificatore di comando dash (`-`). Spazi o tabulazioni prima del *testo* vengono ignorati.

- *testo* `!MESSAGE`

   Visualizza il *testo* nell'output standard. Spazi o tabulazioni prima del *testo* vengono ignorati.

- `!INCLUDE` [`<`] *nomefile* [`>`]

   Legge *filename* come makefile, quindi continua con il Makefile corrente. NMAKE cerca il *nome file* per primo nella directory specificata o corrente, quindi in modo ricorsivo attraverso le directory di tutti i makefile padre, quindi, se *filename* è racchiuso tra parentesi angolari (`< >`), nelle directory specificate dalla macro **include** , inizialmente impostata sulla variabile di ambiente include. Utile per passare `.SUFFIXES` impostazioni, `.PRECIOUS`e regole di inferenza ai makefile ricorsivi.

- `!IF` *constant_expression*

   Elabora le istruzioni tra `!IF` e il `!ELSE` successivo o `!ENDIF` se *constant_expression* restituisce un valore diverso da zero.

- `!IFDEF` *macroname*

   Elabora le istruzioni tra `!IFDEF` e il `!ELSE` successivo o `!ENDIF` se è definito *macroname* . Una macro NULL è considerata definita.

- `!IFNDEF` *macroname*

   Elabora le istruzioni tra `!IFNDEF` e il `!ELSE` successivo o `!ENDIF` se *macroname* non è definito.

- `!ELSE` [`IF` *constant_expression* &#124; `IFDEF` *macroname* &#124; `IFNDEF` *macroname*]

   Elabora le istruzioni tra `!ELSE` e il `!ENDIF` successivo se l'istruzione `!IF`, `!IFDEF`o `!IFNDEF` precedente è stata valutata su zero. Le parole chiave facoltative offrono un maggiore controllo sulla pre-elaborazione.

- `!ELSEIF`

   Sinonimo di `!ELSE IF`.

- `!ELSEIFDEF`

   Sinonimo di `!ELSE IFDEF`.

- `!ELSEIFNDEF`

   Sinonimo di `!ELSE IFNDEF`.

- `!ENDIF`

   Contrassegna la fine di un blocco di `!IF`, `!IFDEF`o `!IFNDEF`. Qualsiasi testo dopo `!ENDIF` sulla stessa riga viene ignorato.

- `!UNDEF` *macroname*

   Non definisce *macroname*.

## <a name="see-also"></a>Vedere anche

- [Pre-elaborazione di makefile](makefile-preprocessing.md)
