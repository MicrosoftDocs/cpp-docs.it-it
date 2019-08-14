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
ms.openlocfilehash: 4825ca180cb1b419a9ffa5232575ba1a24f8805d
ms.sourcegitcommit: db1ed91fa7451ade91c3fb76bc7a2b857f8a5eef
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/13/2019
ms.locfileid: "68980519"
---
# <a name="makefile-preprocessing-directives"></a>Direttive di pre-elaborazione di makefile

Le direttive di pre-elaborazione non fanno distinzione tra maiuscole e minuscole. Il punto esclamativo iniziale (!) deve essere visualizzato all'inizio della riga. Dopo il punto esclamativo, è possibile che vengano visualizzati zero o più spazi o tabulazioni per il rientro.

- `!CMDSWITCHES``+` *opzione* { &#124; }...`-`

   Attiva o disattiva tutte le *Opzioni* elencate. Gli spazi o le schede devono essere `+` visualizzati `-` prima dell'operatore OR; nessuno può comparire tra l'operatore e le [lettere delle opzioni](running-nmake.md#nmake-options). Le lettere non fanno distinzione tra maiuscole e minuscole e`/`vengono specificate senza una barra (). Per attivare alcune opzioni e disattivare altre, usare specifiche separate di `!CMDSWITCHES`.

   In un makefile è possibile utilizzare solo/D,/I,/N e/S. In Tools. ini sono consentite tutte le opzioni eccetto/F,/HELP,/NOLOGO,/X e/?. Le modifiche specificate in un blocco di descrizione non diventano effettive fino al blocco di descrizione successivo. Questa direttiva aggiorna **MAKEFLAGS**; le modifiche vengono ereditate durante la ricorsione se viene specificato **MAKEFLAGS** .

- `!ERROR`*testo*

   Visualizza il *testo* in Error U1050, quindi interrompe NMAKE, anche se viene usato/K, `.IGNORE`/i `!CMDSWITCHES`,, o il modificatore di comando Dash (`-`). Spazi o tabulazioni prima del *testo* vengono ignorati.

- `!MESSAGE`*testo*

   Visualizza il *testo* nell'output standard. Spazi o tabulazioni prima del *testo* vengono ignorati.

- `!INCLUDE`[ `<` ] *nomefile* [ `>` ]

   Legge *filename* come makefile, quindi continua con il Makefile corrente. NMAKE cerca *filename* prima nella directory specificata o corrente, quindi in modo ricorsivo attraverso le directory di tutti i makefile padre, quindi, se *filename* è racchiuso tra parentesi acute (`< >`), nelle directory specificate dal parametro  **INCLUDE** la macro, inizialmente impostata sulla variabile di ambiente include. Utile per passare `.SUFFIXES` le impostazioni `.PRECIOUS`,, e le regole di inferenza ai makefile ricorsivi.

- `!IF`*constant_expression*

   Elabora le istruzioni `!IF` tra e il `!ELSE` successivo `!ENDIF` o se *constant_expression* restituisce un valore diverso da zero.

- `!IFDEF`*macroname*

   Elabora le istruzioni `!IFDEF` tra e il `!ELSE` successivo `!ENDIF` o se viene definito macroname. Una macro NULL è considerata definita.

- `!IFNDEF`*macroname*

   Elabora le istruzioni `!IFNDEF` tra e il `!ELSE` successivo `!ENDIF` o se macroname non è definito.

- `!ELSE`[`IF` &#124; &#124; constant_expression macroname`IFDEF` ] `IFNDEF`

   Elabora le istruzioni `!ELSE` tra e il `!ENDIF` successivo se l' `!IF`istruzione `!IFDEF`, o `!IFNDEF` precedente restituisce zero. Le parole chiave facoltative offrono un maggiore controllo sulla pre-elaborazione.

- `!ELSEIF`

   Sinonimo di `!ELSE IF`.

- `!ELSEIFDEF`

   Sinonimo di `!ELSE IFDEF`.

- `!ELSEIFNDEF`

   Sinonimo di `!ELSE IFNDEF`.

- `!ENDIF`

   Contrassegna la fine di un `!IF`blocco `!IFDEF`, o `!IFNDEF` . Qualsiasi testo dopo `!ENDIF` nella stessa riga viene ignorato.

- `!UNDEF`*macroname*

   Non definisce *macroname*.

## <a name="see-also"></a>Vedere anche

- [Pre-elaborazione di makefile](makefile-preprocessing.md)