---
title: Opzioni di NMAKE | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- NMAKE program, options
ms.assetid: 00ba1aec-ef27-44cf-8d82-c5c095e45bae
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: d2f7ad294a9f199d5dbe6821c61317ed0b6b2693
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32373036"
---
# <a name="nmake-options"></a>Opzioni di NMAKE
Nella tabella seguente vengono descritte le opzioni di NMAKE. Opzioni sono precedute da una barra (/) o un trattino (-) e non tra maiuscole e minuscole. Utilizzare [! CMDSWITCHES](../build/makefile-preprocessing-directives.md) per modificare le impostazioni delle opzioni in un makefile o in Tools.  
  
|Opzione|Scopo|  
|------------|-------------|  
|/A|Forza la compilazione di tutte le destinazioni valutate, anche se non sono aggiornati relativi dipendenti. Non forzare la compilazione di destinazioni non correlate.|  
|/ B|Forza la compilazione anche se i timestamp sono uguali. È consigliabile solo per i sistemi molto veloci (risoluzione di due secondi o meno).|  
|/C|Visualizza l'output, inclusi errori NMAKE non irreversibili o gli avvisi, timestamp e messaggio di copyright NMAKE predefinito. Eliminare gli avvisi generati da /K.|  
|/D|Visualizza i timestamp di ogni valutato di destinazione, dipendente e un messaggio quando una destinazione non esiste. Utile con/p per il debug di un makefile. Utilizzare **! CMDSWITCHES** per impostare o deselezionare l'opzione /D per una parte di un makefile.|  
|/E|Fa sì che le variabili di ambiente eseguire l'override delle definizioni di macro di makefile.|  
|/ERRORREPORT [NONE &AMP;#124; PROMPT &AMP;#124; CODE &AMP;#124; INVIARE]|Se nmake.exe non riesce in fase di esecuzione, è possibile utilizzare /ERRORREPORT per inviare a Microsoft informazioni su questi errori interni.<br /><br /> Per ulteriori informazioni su /ERRORREPORT, vedere [/errorReport (segnala interni del compilatore gli errori)](../build/reference/errorreport-report-internal-compiler-errors.md).|  
|/F `filename`|Specifica `filename` come makefile. Possono essere preceduto da spazi o tabulazioni `filename`. Specificare /F una volta per ogni makefile. Per fornire un makefile dall'input standard, specificare un trattino (-) per `filename`e di fine input da tastiera con F6 o CTRL + Z.|  
|/G|Visualizza i makefile inclusi con il! INCLUDE (direttiva).  Vedere [direttive di pre-elaborazione di Makefile](../build/makefile-preprocessing-directives.md) per ulteriori informazioni.|  
|/HELP, /?|Visualizza un breve riepilogo della sintassi della riga di comando NMAKE.|  
|/I|Ignora i codici di uscita di tutti i comandi. Per impostare o cancellare /I per una parte di un makefile, utilizzare **! CMDSWITCHES**. Per ignorare i codici di uscita di un makefile, usare un modificatore di comando trattino (-) o [. IGNORARE](../build/dot-directives.md). Esegue l'override di /K se vengono specificati entrambi.|  
|/K|Continua la generazione di dipendenze non correlate, se un comando restituisce un errore. Inoltre, genera un avviso e restituisce un codice di uscita pari a 1. Per impostazione predefinita, NMAKE viene arrestato se qualsiasi comando restituisce un codice di uscita diverso da zero. Vengono eliminati gli avvisi da /K opzioni. /I esegue l'override di /K se vengono specificati entrambi.|  
|/N|Consente di visualizzare ma non esegue comandi. i comandi pre-elaborazione vengono eseguiti. Visualizza i comandi in NMAKE le chiamate ricorsive. È utile per il debug makefile e controllare i timestamp. Per impostare o cancellare /N per una parte di un makefile, utilizzare **! CMDSWITCHES**.|  
|/NOLOGO|Elimina il messaggio di copyright NMAKE.|  
|/P|Visualizza le informazioni (definizioni di macro, le regole di inferenza, destinazioni, [. SUFFISSI](../build/dot-directives.md) elenco) nell'output standard, quindi esegue la compilazione. Se è non presente alcun makefile o la destinazione della riga di comando, vengono visualizzate solo informazioni. Utilizzare con /D per eseguire il debug di un makefile.|  
|/Q|Timestamp di controlli di destinazioni; non esegue la compilazione. Restituisce un codice di uscita 0 se tutte le destinazioni sono aggiornate e un codice di uscita diverso da zero se non è qualsiasi destinazione. I comandi pre-elaborazione vengono eseguiti. Utile durante l'esecuzione di NMAKE da un file batch.|  
|/R|Cancella il **. SUFFISSI** elenco e ignora le regole di inferenza e le macro che sono definiti nel file Tools.ini o che sono predefiniti.|  
|/S|Evita la visualizzazione dei comandi eseguiti. Per evitare la visualizzazione in una parte di un makefile, utilizzare il **@** modificatore di comando o [. Invisibile all'utente](../build/dot-directives.md). Per impostare o cancellare /S per una parte di un makefile, utilizzare **! CMDSWITCHES**.|  
|/T|Aggiorna i timestamp delle destinazioni della riga di comando (o di destinazione prima di un makefile) ed esegue i comandi pre-elaborazione, non esegue la compilazione.|  
|/U|Deve essere usata in combinazione con /N. Esegue il dump dei file NMAKE inline in modo che l'output /N può essere usato come un file batch.|  
|/X `filename`|Invia l'output degli errori NMAKE da `filename` invece di errore standard. Possono essere preceduto da spazi o tabulazioni `filename`. Per inviare l'output degli errori nell'output standard, specificare un trattino (-) per `filename`. Non interessa l'output dei comandi di errore standard.|  
|/Y|Disabilita le regole di inferenza in modalità batch. Quando questa opzione è selezionata, tutte le regole di inferenza in modalità batch vengono trattate come normali regole di inferenza.|  
  
## <a name="see-also"></a>Vedere anche  
 [Esecuzione di NMAKE](../build/running-nmake.md)