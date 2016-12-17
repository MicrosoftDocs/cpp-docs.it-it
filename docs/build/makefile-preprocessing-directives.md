---
title: "Direttive di pre-elaborazione di makefile | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "!UNDEF"
  - "!INCLUDE"
  - "!IFNDEF"
  - "!MESSAGE"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "!CMDSWITCHES (direttiva)"
  - "!ELSE (direttiva)"
  - "!ELSEIF (direttiva)"
  - "!ELSEIFDEF (direttiva)"
  - "!ELSEIFNDEF (direttiva)"
  - "!ENDIF (direttiva)"
  - "!ERROR (direttiva)"
  - "!IF (direttiva)"
  - "!IFDEF (direttiva)"
  - "!IFNDEF (direttiva)"
  - "!INCLUDE (direttiva)"
  - "!MESSAGE (direttiva)"
  - "!UNDEF (direttiva)"
  - "CMDSWITCHES (direttiva)"
  - "direttive, pre-elaborazione di makefile"
  - "ELSE (direttiva)"
  - "ELSEIF (direttiva)"
  - "ELSEIFDEF (direttiva)"
  - "ELSEIFNDEF (direttiva)"
  - "ENDIF (direttiva)"
  - "ERROR (direttiva)"
  - "IF (direttiva)"
  - "IFDEF (direttiva)"
  - "IFNDEF (direttiva)"
  - "INCLUDE (direttiva)"
  - "makefile, direttive di pre-elaborazione"
  - "MESSAGE (direttiva)"
  - "NMAKE (programma), espressioni"
  - "NMAKE (programma), direttive del preprocessore"
  - "direttive di pre-elaborazione, makefile"
  - "UNDEF (direttiva)"
ms.assetid: bcedeccb-d981-469d-b9e8-ab5d097fd8c2
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Direttive di pre-elaborazione di makefile
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Per le direttive di pre\-elaborazione non viene rilevata la distinzione tra maiuscole e minuscole.  Il punto esclamativo \(\!\) iniziale deve trovarsi all'inizio della riga.  Dopo il punto esclamativo possono essere inseriti spazi o tabulazioni per il rientro.  
  
 **\!CMDSWITCHES**  
 {**\+**&#124; **–**}*opzione*...  Attiva o disattiva ciascuna *opzione* elencata.  Gli spazi e le tabulazioni devono essere indicati prima dell'operatore \+ o – e non tra l'operatore e le [lettere delle opzioni](../build/nmake-options.md).  Le lettere vengono specificate senza la barra \( \/ \) e per esse non rilevata la distinzione tra maiuscole e minuscole.  Per attivare alcune opzioni e disattivarne altre, utilizzare specifiche separate di **\!CMDSWITCHES**.  
  
 In un makefile possono essere utilizzate solo le opzioni \/D, \/I, \/N e \/S.  Nel file Tools.ini è consentito l'utilizzo di tutte le opzioni eccetto \/F, \/HELP, \/NOLOGO, \/X e \/?.  Le modifiche specificate in un blocco di descrizione non hanno alcun effetto fino al successivo blocco di descrizione.  Questa direttiva aggiorna **MAKEFLAGS**. Le modifiche vengono ereditate durante la ricorsione se si specifica **MAKEFLAGS**.  
  
 **Testo**  *\!ERROR*  
 Visualizza il *testo* dell'errore U1050, quindi arresta NMAKE, anche se viene utilizzata l'opzione \/K, \/I, **.IGNORE**, **\!CMDSWITCHES** o il modificatore di comando \(–\).  Gli spazi o le tabulazioni prima del *testo* vengono ignorati.  
  
 **Testo**  *\!MESSAGE*  
 Visualizza del *testo* nell'output standard.  Gli spazi o le tabulazioni prima del *testo* vengono ignorati.  
  
 **\!INCLUDE**\[ **\<**\] *nomefile*\[ **\>**\]  
 Legge il *nomefile* come makefile, quindi continua con il makefile corrente.  NMAKE cerca il *nomefile* innanzitutto nella directory specificata o in quella corrente, quindi prosegue la ricerca in modo ricorsivo nelle directory dei makefile padre, infine, se il *nomefile* è racchiuso tra parentesi angolari \(\< \>\), continua la ricerca nelle directory specificate dalla macro **INCLUDE**, che inizialmente è impostata sulla variabile di ambiente INCLUDE.  È utile per passare impostazioni **.SUFFIXES**, **.PRECIOUS** e regole di inferenza a makefile ricorsivi.  
  
 **\!IF**  `constantexpression`  
 Elabora istruzioni tra l'istruzione **\!IF** e la successiva istruzione **\!ELSE** o `!ENDIF` se `constantexpression` restituisce un valore diverso da zero.  
  
 **\!IFDEF**  *nomemacro*  
 Elabora istruzioni tra l'istruzione `!IFDEF` e la successiva istruzione **\!ELSE** o `!ENDIF` se la macro *nomemacro* è definita.  Una macro null viene considerata come definita.  
  
 **\!IFNDEF**  *nomemacro*  
 Elabora istruzioni tra l'istruzione **\!IFNDEF** e la successiva istruzione **\!ELSE** o `!ENDIF` se la macro *nomemacro* non è definita.  
  
 **\!ELSE**\[**IF** *espressionecostante*&#124; **IFDEF** *nomemacro*&#124; **IFNDEF** *nomemacro*\]  
 Elabora istruzioni tra l'istruzione **\!ELSE** e la successiva istruzione `!ENDIF` se l'istruzione **\!IF**, `!IFDEF` o **\!IFNDEF** precedente ha restituito il valore zero.  Le parole chiave facoltative consentono di controllare ulteriormente la fase di pre\-elaborazione.  
  
 **\!ELSEIF**  
 Sinonimo di **\!ELSE IF**.  
  
 **\!ELSEIFDEF**  
 Sinonimo di **\!ELSE IFDEF**.  
  
 **\!ELSEIFNDEF**  
 Sinonimo di **\!ELSE IFNDEF**.  
  
 `!ENDIF`  
 Contrassegna la fine di un blocco **\!IF**, `!IFDEF` o **\!IFNDEF**.  Qualsiasi testo dopo `!ENDIF` presente sulla stessa riga verrà ignorato.  
  
 **\!UNDEF**  *nomemacro*  
 Rimuove la definizione di *nomemacro*.  
  
## Vedere anche  
 [Pre\-elaborazione di makefile](../build/makefile-preprocessing.md)