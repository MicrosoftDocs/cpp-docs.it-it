---
title: Direttive di pre-elaborazione di makefile | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: conceptual
f1_keywords:
- '!UNDEF'
- '!INCLUDE'
- '!IFNDEF'
- '!MESSAGE'
dev_langs:
- C++
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
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 6a84557388f521fb6c70c33ce6814ce33a5f6a1d
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="makefile-preprocessing-directives"></a>Direttive di pre-elaborazione di makefile
Direttive di pre-elaborazione non sono tra maiuscole e minuscole. Il punto iniziale di punto esclamativo (!) deve essere presente all'inizio della riga. Zero o più spazi o tabulazioni possono essere visualizzati dopo il punto esclamativo, per il rientro.  
  
 **! CMDSWITCHES**  
 {**+** &#124; **-**}*opzione*... Ogni *opzione* elencato o disattivare. Spazi o tabulazioni devono precedere il + o - operatore Nessuna di esse sia tra l'operatore e [opzione lettere](../build/nmake-options.md). Lettere non sono tra maiuscole e minuscole e vengono specificate senza una barra (/). Per attivare alcune opzioni e disattivarne, utilizzare specifiche separate di **! CMDSWITCHES**.  
  
 Solo ambiente / I, /N e /S può essere utilizzati in un makefile. Nel file sono consentite tutte le opzioni eccetto /F, /HELP, /NOLOGO, /x, e /?. Le modifiche specificate in un blocco di descrizione diventano effettive finché il blocco successivo di descrizione. Questa direttiva aggiorna **MAKEFLAGS**; le modifiche vengono ereditate durante la ricorsione se **MAKEFLAGS** specificato.  
  
 **! ERRORE***testo*   
 Consente di visualizzare *testo* errore U1050, quindi arresta NMAKE, anche se /K, il / I, **. IGNORARE**, **! CMDSWITCHES**, o viene utilizzato il modificatore di comando trattino (-). Spazi o tabulazioni prima *testo* vengono ignorati.  
  
 **! MESSAGGIO***testo*   
 Consente di visualizzare *testo* all'output standard. Spazi o tabulazioni prima *testo* vengono ignorati.  
  
 **! INCLUDERE**[ **\<**] *filename*[ **>**]  
 Legge *filename* come un makefile, continua quindi con il file di progetto corrente. NMAKE cerca *filename* innanzitutto nella directory specificata o corrente, quindi in modo ricorsivo nelle directory dei makefile padre, quindi, se *filename* è racchiuso tra parentesi acute (\<>), nelle directory specificate dal **INCLUDE** (macro), che inizialmente è impostata la variabile di ambiente INCLUDE. Utile per passare **. SUFFISSI** impostazioni, **. PREZIOSI**e le regole di inferenza a makefile ricorsivi.  
  
 **! SE**  `constantexpression`  
 Elabora istruzioni tra **! Se** e la successiva **! ELSE** o `!ENDIF` se `constantexpression` restituisce un valore diverso da zero.  
  
 **! IFDEF***nomemacro*   
 Elabora istruzioni tra `!IFDEF` e la successiva **! ELSE** o `!ENDIF` se *nomemacro* è definito. Macro null viene considerata da definire.  
  
 **! IFNDEF***nomemacro*   
 Elabora istruzioni tra **! IFNDEF** e la successiva **! ELSE** o `!ENDIF` se *nomemacro* non è definito.  
  
 **! ELSE**[**IF** *constantexpression* &#124; **IFDEF** *nomemacro* &#124; **IFNDEF**  *nomemacro*]  
 Elabora istruzioni tra **! ELSE** e la successiva `!ENDIF` se precedente **! Se**, `!IFDEF`, o **! IFNDEF** istruzione restituito zero. Le parole chiave facoltative consentono di controllare ulteriormente di pre-elaborazione.  
  
 **! ELSEIF**  
 Sinonimo di **! ELSE IF**.  
  
 **! ELSEIFDEF**  
 Sinonimo di **! IFDEF ELSE**.  
  
 **! ELSEIFNDEF**  
 Sinonimo di **! IFNDEF ELSE**.  
  
 `!ENDIF`  
 Contrassegna la fine di un **! Se**, `!IFDEF`, o **! IFNDEF** blocco. Qualsiasi testo che segue `!ENDIF` sulla stessa riga viene ignorato.  
  
 **! UNDEF***nomemacro*   
 Rimuove la definizione *nomemacro*.  
  
## <a name="see-also"></a>Vedere anche  
 [Pre-elaborazione di makefile](../build/makefile-preprocessing.md)