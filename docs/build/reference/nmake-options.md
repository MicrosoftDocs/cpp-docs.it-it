---
title: Opzioni di NMAKE
ms.date: 11/04/2016
helpviewer_keywords:
- NMAKE program, options
ms.assetid: 00ba1aec-ef27-44cf-8d82-c5c095e45bae
ms.openlocfilehash: c60b6d821d8e16e87f86e3b79825aa1dee7867c8
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62320539"
---
# <a name="nmake-options"></a>Opzioni di NMAKE

Nella tabella seguente sono descritte le opzioni di NMAKE. Le opzioni sono precedute da una barra (/) o un trattino (-) e non sono tra maiuscole e minuscole. Usare [! CMDSWITCHES](makefile-preprocessing-directives.md) per modificare le impostazioni delle opzioni in un makefile o Tools. ini.

|Opzione|Scopo|
|------------|-------------|
|/A|Forza la generazione di tutte le destinazioni valutate, anche se non sono aggiornati relativi dipendenti. Non forzare la compilazione di destinazioni non correlate.|
|/B|Forza la compilazione anche se i timestamp sono uguali. Consigliata solo per sistemi molto veloci (soluzione di due secondi o meno).|
|/C|Visualizza l'output, tra cui errori non irreversibili NMAKE o avvisi, timestamp e messaggio di copyright NMAKE predefinito. Elimina gli avvisi generati da /K.|
|/D|Visualizza i timestamp della ognuno valutato destinazione dipendente e un messaggio quando una destinazione non esiste. È utile con/p per il debug di un makefile. Usare **! CMDSWITCHES** per impostare o deselezionare l'opzione /D per una parte di un makefile.|
|/E|Fa sì che le variabili di ambiente eseguire l'override delle definizioni di macro makefile.|
|/ERRORREPORT [NONE &AMP;#124; PROMPT &AMP;#124; CODE &AMP;#124; INVIARE]|Se nmake.exe non riesce in fase di esecuzione, è possibile usare /ERRORREPORT di inviare informazioni a Microsoft informazioni su questi errori interni.<br /><br /> Per altre informazioni sulle /ERRORREPORT, vedere [/errorReport (segnala interni del compilatore gli errori)](errorreport-report-internal-compiler-errors.md).|
|/F *filename*|Specifica *filename* come un makefile. Gli spazi o tabulazioni possono precedere *filename*. Specificare /F una sola volta per ogni makefile. Per fornire un makefile dall'input standard, specificare un trattino (-) per *filename*e terminare l'input da tastiera con F6 o CTRL + Z.|
|/G|Visualizza i makefile inclusi con il. Direttiva INCLUDE.  Visualizzare [direttive di pre-elaborazione di Makefile](makefile-preprocessing-directives.md) per altre informazioni.|
|/HELP, /?|Consente di visualizzare un breve riepilogo della sintassi della riga di comando NMAKE.|
|/I|Ignora i codici di uscita da tutti i comandi. Per impostare o deselezionare /I per una parte di un makefile, usare **! CMDSWITCHES**. Per ignorare i codici di uscita per una parte di un makefile, usare un modificatore di comandi trattino (-) o [. Ignora](dot-directives.md). Esegue l'override /K se vengono specificati entrambi.|
|/K|Continua la generazione di dipendenze non correlate, se un comando viene restituito un errore. Inoltre, genera un avviso e restituisce un codice di uscita pari a 1. Per impostazione predefinita, il processo di NMAKE si interromperà se qualsiasi comando restituisce un codice di uscita diverso da zero. Vengono eliminati gli avvisi da /K opzioni. /I esegue l'override /K se vengono specificati entrambi.|
|/N|Consente di visualizzare ma non di eseguire comandi; vengono eseguiti i comandi pre-elaborazione. Non visualizza i comandi in NMAKE le chiamate ricorsive. È utile per il debug makefile e controllare i timestamp. Per impostare o deselezionare /N per una parte di un makefile, usare **! CMDSWITCHES**.|
|/NOLOGO|Elimina il messaggio di copyright NMAKE.|
|/P|Visualizza le informazioni (definizioni di macro, le regole di inferenza, le destinazioni, [. I SUFFISSI](dot-directives.md) elenco) nell'output standard, e quindi esegue la compilazione. Se non esiste alcun makefile o destinazione della riga di comando, vengono visualizzate solo informazioni. Usare con /D per il debug di un makefile.|
|/Q|Timestamp di controlli di destinazioni; non viene eseguita la compilazione. Restituisce un codice di uscita 0 se tutte le destinazioni sono aggiornate e un codice di uscita diverso da zero se non è qualsiasi destinazione. Vengono eseguiti i comandi pre-elaborazione. È utile durante l'esecuzione di NMAKE da un file batch.|
|/R|Cancella il **. I SUFFISSI** elencare e regole di inferenza e macro che sono definiti in file Tools. ini o che sono predefiniti vengono ignorati.|
|/S|Evita la visualizzazione di comandi eseguiti. Per evitare la visualizzazione in una parte di un makefile, usare il **\@** modificatore di comando o [. Invisibile all'utente](dot-directives.md). Per impostare o deselezionare /S per una parte di un makefile, usare **! CMDSWITCHES**.|
|/T|Aggiorna i timestamp di destinazioni della riga di comando (o prima destinazione makefile) ed esegue i comandi pre-elaborazione, non esegue la compilazione.|
|/U|Deve essere usata in combinazione con /N. Esegue il dump dei file NMAKE inline in modo che l'output /N può essere usato come un file batch.|
|/X *filename*|Invia l'output degli errori NMAKE da *filename* invece di errore standard. Gli spazi o tabulazioni possono precedere *filename*. Per inviare l'output degli errori nell'output standard, specificare un trattino (-) per *filename*. Non interessa l'output dei comandi di errore standard.|
|/Y|Disabilita le regole di inferenza in modalità batch. Quando questa opzione è selezionata, tutte le regole di inferenza in modalità batch vengono considerate come normali regole di inferenza.|

## <a name="see-also"></a>Vedere anche

[Esecuzione di NMAKE](running-nmake.md)
