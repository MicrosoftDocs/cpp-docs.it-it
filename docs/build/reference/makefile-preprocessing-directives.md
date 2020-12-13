---
description: 'Altre informazioni su: direttive di pre-elaborazione di makefile'
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
ms.openlocfilehash: 7c394e3547044be661fea5a8ec86f05a3b93e967
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97138072"
---
# <a name="makefile-preprocessing-directives"></a>Direttive di pre-elaborazione di makefile

Le direttive di pre-elaborazione non fanno distinzione tra maiuscole e minuscole. Il punto esclamativo iniziale (!) deve essere visualizzato all'inizio della riga. Dopo il punto esclamativo, è possibile che vengano visualizzati zero o più spazi o tabulazioni per il rientro.

- `!CMDSWITCHES``+`Opzione { `-` &#124; }...

   Attiva o disattiva tutte le *Opzioni* elencate. Gli spazi o le schede devono essere visualizzati prima dell' `+` `-` operatore OR; nessuno può comparire tra l'operatore e le [lettere delle opzioni](running-nmake.md#nmake-options). Le lettere non fanno distinzione tra maiuscole e minuscole e vengono specificate senza una barra ( `/` ). Per attivare alcune opzioni e disattivare altre, usare specifiche separate di `!CMDSWITCHES` .

   In un makefile è possibile utilizzare solo/D,/I,/N e/S. In Tools.ini sono consentite tutte le opzioni eccetto/F,/HELP,/NOLOGO,/X e/?. Le modifiche specificate in un blocco di descrizione non diventano effettive fino al blocco di descrizione successivo. Questa direttiva aggiorna **MAKEFLAGS**; le modifiche vengono ereditate durante la ricorsione se viene specificato **MAKEFLAGS** .

- `!ERROR`*testo*

   Visualizza il *testo* in Error U1050, quindi interrompe NMAKE, anche se viene usato/K,/i, `.IGNORE` , `!CMDSWITCHES` o il `-` modificatore di comando Dash (). Spazi o tabulazioni prima del *testo* vengono ignorati.

- `!MESSAGE`*testo*

   Visualizza il *testo* nell'output standard. Spazi o tabulazioni prima del *testo* vengono ignorati.

- `!INCLUDE` [ `<` ] *nomefile* [ `>` ]

   Legge *filename* come makefile, quindi continua con il Makefile corrente. NMAKE cerca *filename* prima nella directory specificata o corrente, quindi in modo ricorsivo attraverso le directory di tutti i makefile padre, quindi, se *filename* è racchiuso tra parentesi acute ( `< >` ), nelle directory specificate dalla macro di **inclusione** , inizialmente impostata sulla variabile di ambiente include. Utile per passare `.SUFFIXES` le impostazioni, `.PRECIOUS` , e le regole di inferenza ai makefile ricorsivi.

- `!IF` *constant_expression*

   Elabora le istruzioni tra `!IF` e il successivo `!ELSE` o `!ENDIF` se *constant_expression* restituisce un valore diverso da zero.

- `!IFDEF` *nomemacro*

   Elabora le istruzioni tra `!IFDEF` e il successivo `!ELSE` o `!ENDIF` se viene definito *macroname* . Una macro NULL è considerata definita.

- `!IFNDEF` *nomemacro*

   Elabora le istruzioni tra `!IFNDEF` e il successivo `!ELSE` o `!ENDIF` se *macroname* non è definito.

- `!ELSE` [ `IF` *constant_expression* &#124; `IFDEF` *macroname* &#124; `IFNDEF` *macroname*]

   Elabora le istruzioni tra `!ELSE` e il successivo `!ENDIF` se l' `!IF` istruzione, o precedente restituisce `!IFDEF` `!IFNDEF` zero. Le parole chiave facoltative offrono un maggiore controllo sulla pre-elaborazione.

- `!ELSEIF`

   Sinonimo di `!ELSE IF`.

- `!ELSEIFDEF`

   Sinonimo di `!ELSE IFDEF`.

- `!ELSEIFNDEF`

   Sinonimo di `!ELSE IFNDEF`.

- `!ENDIF`

   Contrassegna la fine di un `!IF` `!IFDEF` blocco, o `!IFNDEF` . Qualsiasi testo dopo `!ENDIF` nella stessa riga viene ignorato.

- `!UNDEF` *nomemacro*

   Non definisce *macroname*.

## <a name="see-also"></a>Vedi anche

- [Pre-elaborazione di makefile](makefile-preprocessing.md)
