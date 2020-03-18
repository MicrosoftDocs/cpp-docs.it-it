---
title: Esecuzione di LIB
description: Descrive le opzioni della riga di comando che è possibile utilizzare con lib. exe.
ms.date: 02/09/2020
f1_keywords:
- VC.Project.VCLibrarianTool.TargetMachine
- VC.Project.VCLibrarianTool.PrintProgress
- VC.Project.VCLibrarianTool.SuppressStartupBanner
helpviewer_keywords:
- -MACHINE target platform option
- command files, LIB
- MACHINE target platform option
- colon command files
- VERBOSE library manager option
- /NOLOGO library manager option
- dash option specifier
- /MACHINE target platform option
- forward slash option specifier
- -NOLOGO library manager option
- LIB [C++], running LIB
- -VERBOSE library manager option
- /VERBOSE library manager option
- command files
- NOLOGO library manager option
- slash (/)
- semicolon, command files
- / command files
ms.assetid: d54f5c81-7147-4b2c-a8db-68ce6eb1eabd
ms.openlocfilehash: 871b92809f38b4dcbf84de802b1ac9940ea6f1e9
ms.sourcegitcommit: 63784729604aaf526de21f6c6b62813882af930a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/17/2020
ms.locfileid: "79438944"
---
# <a name="running-lib"></a>Esecuzione di LIB

Per controllare LIB, è possibile utilizzare varie opzioni della riga di comando.

## <a name="lib-command-line"></a>Riga di comando LIB

Per eseguire LIB, digitare il comando `lib`, quindi le opzioni e i nomi file per l'attività per cui si sta usando LIB. LIB accetta anche l'input da riga di comando nei file di comando, descritti nella sezione seguente. LIB non usa una variabile di ambiente.

## <a name="lib-command-files"></a>File di comando LIB

È possibile passare argomenti della riga di comando a LIB in un file di comando utilizzando la sintassi seguente:

> <em>File di comando</em> **lib \@**

Il file di *comando* file è un file di testo. Non sono consentiti spazi o tabulazioni tra il simbolo di chiocciola ( **\@** ) e il nome del file. Il nome del *file di comando* non ha un'estensione predefinita. Specificare il nome completo del file, incluse eventuali estensioni. Non è possibile usare i caratteri jolly. È possibile specificare un percorso assoluto o relativo con il nome del file.

Nel file di comando gli argomenti possono essere separati da spazi o tabulazioni, in quanto possono essere presenti nella riga di comando. Gli argomenti possono anche essere separati da caratteri di nuova riga. Utilizzare un punto e virgola ( **;** ) per contrassegnare un commento. LIB Ignora tutto il testo dal punto e virgola alla fine della riga.

È possibile specificare tutta o parte della riga di comando in un file di comando ed è possibile usare più di un file di comando in un comando LIB. LIB accetta l'input del file di comando come se fosse specificato in tale posizione nella riga di comando. I file di comando non possono essere annidati. LIB restituisce il contenuto dei file di comando a meno che non venga utilizzata l'opzione **/nologo** .

## <a name="using-lib-options"></a>Uso delle opzioni LIB

Un'opzione è costituita da un identificatore di opzione, che può essere un trattino ( **-** ) o una barra ( **/** ), seguita dal nome dell'opzione. I nomi di opzione non possono essere abbreviati. Alcune opzioni accettano un argomento, specificato dopo i due punti ( **:** ). Non sono consentiti spazi o tabulazioni all'interno di una specifica Option. Usare uno o più spazi o schede per separare le specifiche delle opzioni nella riga di comando. I nomi delle opzioni e gli argomenti relativi a parola chiave o nome file non fanno distinzione tra maiuscole e minuscole, ma gli identificatori usati come argomenti fanno distinzione tra maiuscole LIB elabora le opzioni nell'ordine specificato nella riga di comando e nei file di comando. Se si ripete un'opzione con argomenti diversi, l'ultimo oggetto da elaborare avrà la precedenza.

Le opzioni seguenti si applicano a tutte le modalità di LIB:

> **/Errorreport** \[**Nessuna** &#124; **richiesta** &#124; di **invio** **coda** &#124; ]

L'opzione/ERRORREPORT è deprecata. A partire da Windows Vista, la segnalazione degli errori è controllata dalle impostazioni di [segnalazione errori Windows (WER)](/windows/win32/wer/windows-error-reporting) .

> **/LINKREPRO:** _directory-path_ \
> **/LINKREPROTARGET:** _nomefile_

Per consentire a Microsoft di diagnosticare gli arresti anomali e gli errori interni di lib. exe, è possibile utilizzare l'opzione [/LINKREPRO](linkrepro.md) . Questa opzione genera una procedura di *riproduzione del collegamento*, un set di elementi di compilazione che consentono a Microsoft di riprodurre un problema che si verifica durante le operazioni della libreria. L'opzione [/LINKREPROTARGET](linkreprotarget.md) può essere usata con l'opzione **/LINKREPRO** . Genera solo elementi di ripetizione dei collegamenti quando lib. exe produce il file specificato. Per ulteriori informazioni, vedere [come segnalare un problema con il set di C++ strumenti Microsoft](../../overview/how-to-report-a-problem-with-the-visual-cpp-toolset.md).

> **/LTCG**

"LTCG" è l'acronimo della *generazione di codice in fase di collegamento*. Questa funzionalità richiede la collaborazione tra il compilatore ([CL. exe](compiler-options.md)), lib e il linker ([collegamento](linker-options.md)). Insieme possono ottimizzare il codice oltre quello che qualsiasi componente può eseguire autonomamente.

L'opzione **/LTCG** per lib specifica che gli input da cl. exe includono i file oggetto generati con l'opzione del compilatore [/GL](gl-whole-program-optimization.md) . Se LIB rileva tali input e **/LTCG** non è specificato, viene riavviato con/LTCG abilitato dopo la visualizzazione di un messaggio informativo. In altre parole, non è necessario impostare questa opzione in modo esplicito, ma accelera le prestazioni di compilazione. Questo perché non è necessario riavviare LIB.

Nel processo di compilazione, l'output di LIB viene inviato al collegamento. Il collegamento ha una propria opzione **/LTCG** separata. Viene usato per eseguire varie ottimizzazioni, tra cui l'ottimizzazione dell'intero programma e la strumentazione di ottimizzazione PGO (PGO). Per ulteriori informazioni sull'opzione di collegamento, vedere [/LTCG](ltcg-link-time-code-generation.md).

> **/MACHINE**

Specifica la piattaforma di destinazione per il programma. In genere, non è necessario specificare **/Machine**. LIB deduce il tipo di computer dai file obj. Tuttavia, in alcune circostanze, LIB non è in grado di determinare il tipo di computer e genera un messaggio di errore. Se si verifica un errore di questo tipo, specificare **/Machine**. In modalità **/Extract** questa opzione è solo per la verifica. Usare `lib /?` dalla riga di comando per visualizzare i tipi di computer disponibili.

> **/NOLOGO**

Elimina la visualizzazione del messaggio di copyright e del numero di versione di LIB e impedisce l'eco dei file di comando.

> **/VERBOSE**

Visualizza i dettagli sullo stato di avanzamento della sessione, inclusi i nomi dei file con estensione obj da aggiungere. Le informazioni vengono inviate all'output standard e possono essere reindirizzate a un file.

> **/WX**[ **: No**]

Considera gli avvisi come errori. Per altre informazioni, vedere [/WX (Considera gli avvisi del linker come errori)](wx-treat-linker-warnings-as-errors.md).

Le altre opzioni sono valide solo per le modalità specifiche di LIB. Queste opzioni vengono descritte nelle sezioni che descrivono ogni modalità.

## <a name="see-also"></a>Vedere anche

[Riferimento a LIB](lib-reference.md)
