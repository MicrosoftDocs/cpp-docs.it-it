---
title: Esecuzione di NMAKE
description: Informazioni sull'esecuzione di NMAKE.
ms.date: 02/09/2020
helpviewer_keywords:
- targets, building
- response files, NMAKE
- targets
- command files
- NMAKE program, targets
- NMAKE program, running
- command files, NMAKE
ms.assetid: 0421104d-8b7b-4bf3-86c1-928d9b7c1a8c
ms.openlocfilehash: c2327e13e59ebf9df1ecba6fa66c6354641768ee
ms.sourcegitcommit: 72161bcd21d1ad9cc3f12261aa84a5b026884afa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2020
ms.locfileid: "90743139"
---
# <a name="running-nmake"></a>Esecuzione di NMAKE

## <a name="syntax"></a>Sintassi

> **NMAKE** [*opzione* ...] [*macro* ...] [*destinazioni* ...] [ **\@** _file di comando_ ...]

## <a name="remarks"></a>Osservazioni

NMAKE compila solo le *destinazioni* specificate oppure, quando non viene specificato alcun valore, la prima destinazione nel makefile. La prima destinazione del makefile può essere un [pseudo-destinazione](description-blocks.md#pseudotargets) che compila altre destinazioni. NMAKE usa i makefile specificati con **/f**, oppure se **/f** non è specificato, il file Makefile nella directory corrente. Se non viene specificato alcun makefile, vengono utilizzate le regole di inferenza per compilare le *destinazioni*della riga di comando.

Il file di testo del *file di comando* (o il file di risposta) contiene l'input della riga di comando. Altri input possono precedere o seguire il \@ *file di comando*. Un percorso è consentito. Nel *file di comando*le interruzioni di riga vengono considerate come spazi. Racchiudere le definizioni di macro tra virgolette se contengono spazi.

## <a name="nmake-options"></a>Opzioni di NMAKE

Le opzioni di NMAKE sono descritte nella tabella seguente. Le opzioni sono precedute da una barra ( `/` ) o da un trattino ( `-` ) e non fanno distinzione tra maiuscole e minuscole. Usare [`!CMDSWITCHES`](makefile-preprocessing-directives.md) per modificare le impostazioni delle opzioni in un makefile o in Tools.ini.

| Opzione | Scopo |
| ------------ | ------------- |
| **/A** | Forza la compilazione di tutte le destinazioni valutate, anche se non aggiornate rispetto ai dipendenti. Non forza le compilazioni di destinazioni non correlate. |
| **/B** | Impone la compilazione anche se i timestamp sono uguali. Consigliato solo per i sistemi veloci (risoluzione di due secondi o meno). |
| **/C** | Disattiva l'output predefinito, inclusi gli errori o gli avvisi NMAKE non irreversibili, i timestamp e il messaggio di copyright NMAKE. Elimina gli avvisi rilasciati da **/K**. |
| **/D** | Visualizza i timestamp di ogni destinazione e dipendente valutati e un messaggio quando non esiste una destinazione. Utile con **/p** per il debug di un makefile. Utilizzare `!CMDSWITCHES` per impostare o deselezionare **/d** per una parte di un makefile. |
| **/E** | Consente alle variabili di ambiente di eseguire l'override delle definizioni delle macro Makefile. |
| **/Errorreport** [ **NONE** &#124; **prompt** &#124; **queue** &#124; **Send** ] | Deprecato. [Segnalazione errori Windows (WER)](/windows/win32/wer/windows-error-reporting) impostazioni di gestione rapporti. |
| **/F** *nomefile* | Specifica il *nome del file* come Makefile. Spazi o tabulazioni possono precedere il *nome del file*. Specificare **/f** una volta per ogni makefile. Per fornire un makefile dall'input standard, specificare un trattino ( `-` ) per *filename*e l'input della tastiera finale con **F6** o **CTRL + Z**. |
| **/G** | Consente di visualizzare i makefile inclusi nella `!INCLUDE` direttiva. Per altre informazioni, vedere [direttive di pre-elaborazione di makefile](makefile-preprocessing-directives.md). |
| **/Help**, **/?** | Visualizza un breve riepilogo della sintassi della riga di comando NMAKE. |
| **/I** | Ignora i codici di uscita da tutti i comandi. Per impostare o deselezionare **/i** per parte di un makefile, utilizzare `!CMDSWITCHES` . Per ignorare i codici di uscita per una parte di un makefile, usare un `-` modificatore di comando Dash () o [`.IGNORE`](dot-directives.md) . Esegue l'override di **/K** se sono specificati entrambi. |
| **/K** | Continua a compilare dipendenze non correlate, se un comando restituisce un errore. Genera anche un avviso e restituisce un codice di uscita pari a 1. Per impostazione predefinita, NMAKE si interrompe se un comando restituisce un codice di uscita diverso da zero. Gli avvisi provenienti da **/K** vengono eliminati da **/c**; **/I** esegue l'override di **/K** se sono specificati entrambi. |
| **/N** | Visualizza ma non esegue i comandi; vengono eseguiti i comandi di pre-elaborazione. Non Visualizza i comandi nelle chiamate NMAKE ricorsive. Utile per il debug di makefile e il controllo dei timestamp. Per impostare o deselezionare **/n** per parte di un makefile, utilizzare `!CMDSWITCHES` . |
| **/NOLOGO** | Disattiva il messaggio di copyright NMAKE. |
| **/P** | Visualizza informazioni (definizioni di macro, regole di inferenza, destinazioni, [`.SUFFIXES`](dot-directives.md) elenchi) nell'output standard e quindi esegue la compilazione. Se non esiste alcun makefile o destinazione della riga di comando, vengono visualizzate solo le informazioni. Usare con **/d** per eseguire il debug di un makefile. |
| **/Q** | Verifica i timestamp delle destinazioni. non esegue la compilazione. Restituisce un codice di uscita zero se tutte le destinazioni sono aggiornate e un codice di uscita diverso da zero se una destinazione non è aggiornata. Vengono eseguiti i comandi di pre-elaborazione. Utile quando si esegue NMAKE da un file batch. |
| **/R** | Cancella l' `.SUFFIXES` elenco e ignora le regole di inferenza e le macro definite nel file Tools.ini o predefinite. |
| **/S** | Disattiva la visualizzazione dei comandi eseguiti. Per evitare la visualizzazione in parte di un makefile, usare il **\@** modificatore di comando o [`.SILENT`](dot-directives.md) . Per impostare o deselezionare **/s** per parte di un makefile, utilizzare `!CMDSWITCHES` . |
| **/T** | Aggiorna i timestamp delle destinazioni della riga di comando (o la prima destinazione del makefile) ed esegue i comandi di pre-elaborazione ma non esegue la compilazione. |
| **/U** | Deve essere usato insieme a **/n**. Esegui il dump dei file NMAKE inline in modo che l'output **/n** possa essere utilizzato come file batch. |
| **/X** *nomefile* | Invia l'output degli errori NMAKE a *filename* anziché a un errore standard. Spazi o tabulazioni possono precedere il *nome del file*. Per inviare l'output degli errori all'output standard, specificare un trattino ( `-` ) per *filename*. Non influisce sull'output dei comandi nell'errore standard. |
| **/Y** | Disabilita le regole di inferenza in modalità batch. Quando questa opzione è selezionata, tutte le regole di inferenza in modalità batch vengono considerate come regole di inferenza regolari. |

## <a name="toolsini-and-nmake"></a>Tools.ini e NMAKE

NMAKE legge Tools.ini prima di leggere i makefile, a meno che non si stia usando **/r** . Cerca Tools.ini prima nella directory corrente, quindi nella directory specificata dalla variabile di ambiente INIT. La sezione per le impostazioni NMAKE nel file di inizializzazione inizia con `[NMAKE]` e può contenere qualsiasi informazione sul makefile. Consente di specificare un commento su una riga distinta che inizia con un simbolo di cancelletto ( `#` ).

## <a name="exit-codes-from-nmake"></a>Codici di uscita di NMAKE

NMAKE restituisce i seguenti codici di uscita:

| Codice | Significato |
| ---------- | ------------- |
| 0 | Nessun errore (probabilmente un avviso) |
| 1 | Compilazione incompleta (eseguita solo quando si usa **/K** ) |
| 2 | Errore del programma, probabilmente causato da uno dei problemi seguenti:<br /> -Errore di sintassi nel makefile<br /> -Un errore o codice di uscita da un comando<br /> -Un'interruzione da parte dell'utente |
| 4 | Errore di sistema: memoria insufficiente |
| 255 | La destinazione non è aggiornata (eseguita solo quando si usa **/q** ) |

## <a name="see-also"></a>Vedere anche

[Riferimento a NMAKE](nmake-reference.md)
