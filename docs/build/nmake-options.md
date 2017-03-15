---
title: "Opzioni di NMAKE | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "NMAKE (programma), opzioni"
ms.assetid: 00ba1aec-ef27-44cf-8d82-c5c095e45bae
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 9
---
# Opzioni di NMAKE
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Nella tabella riportata di seguito sono descritte le opzioni di NMAKE.  Tali opzioni sono precedute da una barra \(\/\) o da un trattino \(–\) e per esse non viene rilevata la distinzione tra maiuscole e minuscole.  Per modificare le impostazioni relative alle opzioni in un makefile o in Tools.ini utilizzare [\!CMDSWITCHES](../build/makefile-preprocessing-directives.md).  
  
|Opzione|Scopo|  
|-------------|-----------|  
|\/A|Forza la compilazione di tutte le destinazioni valutate, anche se i relativi dipendenti non sono aggiornati.  Non forza la compilazione di destinazioni non correlate.|  
|\/B|Forza la compilazione anche se i timestamp sono uguali.  Opzione consigliata solo per sistemi molto veloci \(risoluzione di due secondi o meno\).|  
|\/C|Visualizza l'output predefinito, compresi gli avvisi o gli errori NMAKE non irreversibili, i timestamp e il messaggio con le informazioni sul copyright di NMAKE.  Evita la visualizzazione degli avvisi generati da \/K.|  
|\/D|Visualizza i timestamp di tutte le destinazioni e di tutti i dipendenti valutati, nonché un messaggio quando non è presente una destinazione.  È utile insieme all'opzione \/P per eseguire il debug di un makefile.  Utilizzare **\!CMDSWITCHES** per impostare o cancellare l'opzione \/D per una parte del makefile.|  
|\/E|Fa in modo che le variabili di ambiente eseguano l'override delle definizioni di macro del makefile.|  
|\/ERRORREPORT\[NONE &#124; PROMPT &#124; QUEUE &#124; SEND \]|Se nmake.exe non viene eseguito correttamente in fase di esecuzione, è possibile utilizzare \/ERRORREPORT per inviare a Microsoft informazioni su questi errori interni.<br /><br /> Per ulteriori informazioni su \/ERRORREPORT, vedere [\/errorReport \(Segnala gli errori interni del compilatore\)](../build/reference/errorreport-report-internal-compiler-errors.md).|  
|\/F `filename`|Specifica `filename` come makefile.  `filename` può essere preceduto da spazi o tabulazioni.  Specificare \/F una volta per ciascun makefile.  Per fornire un makefile da un input standard, specificare un trattino \(–\) per `filename` e terminare l'input da tastiera con F6 o CTRL\+Z.|  
|\/G|Visualizza i makefile inclusi con la direttiva \!INCLUDE.  Per ulteriori informazioni, vedere [Direttive di pre\-elaborazione di makefile](../build/makefile-preprocessing-directives.md).|  
|\/HELP, \/?|Visualizza un breve riepilogo della sintassi della riga di comando di NMAKE.|  
|\/I|Ignora i codici di uscita di tutti i comandi.  Per impostare o cancellare l'opzione \/I di un makefile, utilizzare **\!CMDSWITCHES**.  Utilizzare il modificatore di comando trattino \(–\) oppure [.IGNORE](../build/dot-directives.md) per ignorare i codici di uscita di una parte di un makefile.  Se sono specificate entrambe le opzioni viene eseguito l'override di \/K.|  
|\/K|Continua la compilazione di dipendenze non correlate anche se un comando restituisce un errore.  Visualizza inoltre un messaggio di avviso e restituisce il codice di uscita 1.  Per impostazione predefinita, NMAKE viene arrestato se un qualsiasi comando restituisce un codice di uscita diverso da zero.  Gli avvisi generati da \/K non vengono visualizzati se è specificata l'opzione \/C. \/I esegue l'override di \/K se sono specificate entrambe le opzioni.|  
|\/N|Visualizza i comandi senza eseguirli. I comandi di pre\-elaborazione vengono invece eseguiti.  Non visualizza i comandi in chiamate NMAKE ricorsive.  È utile per eseguire il debug dei makefile e per controllare i timestamp.  Per impostare o cancellare l'opzione \/N di un makefile, utilizzare **\!CMDSWITCHES**.|  
|\/NOLOGO|Evita la visualizzazione delle informazioni sul copyright di NMAKE.|  
|\/P|Visualizza le informazioni \(definizioni macro, regole di inferenza, destinazioni, elenchi [.SUFFIXES](../build/dot-directives.md)\) nell'output standard, quindi esegue la compilazione.  Se non sono disponibili makefile o destinazioni della riga di comando, visualizza soltanto le informazioni.  Utilizzare questa opzione con \/D per eseguire il debug di un makefile.|  
|\/Q|Controlla i timestamp delle destinazioni, senza eseguire la compilazione.  Se tutte le destinazioni sono aggiornate, restituisce il codice di uscita 0. Se una delle destinazioni non è aggiornata, restituisce un codice di uscita diverso da zero.  I comandi di pre\-elaborazione vengono eseguiti.  È utile quando si esegue NMAKE da un file batch.|  
|\/R|Cancella l'elenco **.SUFFIXES** e ignora le regole di inferenza e le macro definite nel file Tools.ini o quelle già definite.|  
|\/S|Evita la visualizzazione dei comandi eseguiti.  Per evitare la visualizzazione di una parte di un makefile, utilizzare il modificatore di comando **@**o [.SILENT](../build/dot-directives.md).  Per impostare o cancellare l'opzione \/S di un makefile, utilizzare **\!CMDSWITCHES**.|  
|\/T|Aggiorna i timestamp delle destinazioni della riga di comando o della prima destinazione di un makefile ed esegue i comandi di pre\-elaborazione, senza procedere alla compilazione.|  
|\/U|Opzione da utilizzare insieme a \/N.  Esegue il dump dei file NMAKE inline per consentire l'utilizzo dell'output di \/N come file batch.|  
|\/X `filename`|Invia a `filename` l'output di errore di NMAKE anziché l'errore standard.  `filename` può essere preceduto da spazi o tabulazioni.  Per inviare l'output di errore all'output standard, specificare un trattino \(–\) per `filename`.  Non influisce sull'output inviato dai comandi all'errore standard.|  
|\/Y|Disabilita le regole di inferenza in modalità batch.  Quando questa opzione è selezionata, tutte le regole di inferenza in modalità batch vengono considerate come normali regole di inferenza.|  
  
## Vedere anche  
 [Esecuzione di NMAKE](../build/running-nmake.md)