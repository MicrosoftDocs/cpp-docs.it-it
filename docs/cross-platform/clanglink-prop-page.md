---
title: Proprietà dei linker Clang (Android C++)
ms.date: 10/23/2017
ms.assetid: 66e88848-116c-4eb0-bc57-183394d35b57
f1_keywords:
- VC.Project.VCLinkerTool.Clang.OutputFile
- VC.Project.VCLinkerTool.Clang.Soname
- VC.Project.VCLinkerTool.Clang.ShowProgress
- VC.Project.VCLinkerTool.Clang.Version
- VC.Project.VCLinkerTool.Clang.VerboseOutput
- VC.Project.VCLinkerTool.Clang.IncrementalLink
- VC.Project.VCLinkerTool.Clang.SharedLibrarySearchPath
- VC.Project.VCLinkerTool.Clang.AdditionalLibraryDirectories
- VC.Project.VCLinkerTool.Clang.UnresolvedReferences
- VC.Project.VCLinkerTool.Clang.OptimizeForMemory
- VC.Project.VCLinkerTool.Clang.IgnoreDefaultLibraryNames
- VC.Project.VCLinkerTool.Clang.ForceSymbolReferences
- VC.Project.VCLinkerTool.Clang.ForceFileOutput
- VC.Project.VCLinkerTool.Clang.OmitDebuggerSymbolInformation
- VC.Project.VCLinkerTool.Clang.GenerateMapFile
- VC.Project.VCLinkerTool.Clang.Relocation
- VC.Project.VCLinkerTool.Clang.FunctionBinding
- VC.Project.VCLinkerTool.Clang.NoExecStackRequired
- VC.Project.VCLinkerTool.Clang.WholeArchive
- VC.Project.VCLinkerTool.Clang.AdditionalOptionsPage
- VC.Project.VCLinkerTool.Clang.AdditionalDependencies
- VC.Project.VCLinkerTool.Clang.LibraryDependencies
ms.openlocfilehash: 55b944040157d13741b992f4ec66c35d1b117d95
ms.sourcegitcommit: 63784729604aaf526de21f6c6b62813882af930a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/17/2020
ms.locfileid: "79446531"
---
# <a name="clang-linker-properties-android-c"></a>Proprietà dei linker Clang (Android C++)

| Proprietà | Descrizione | Opzioni |
|--|--|--|
| File di output | L'opzione sostituisce il nome e il percorso predefiniti del programma creato dal linker. (-o) |
| Mostra stato | Visualizza i messaggi di stato del linker. |
| Versione | L'opzione -version indica al linker di inserire un numero di versione nell'intestazione dell'eseguibile. |
| Abilita output dettagliato | L'opzione -verbose indica al linker di visualizzare messaggi dettagliati per il debug. |
| Abilita collegamento incrementale | L'opzione indica al linker di abilitare il collegamento incrementale. |
| Percorso di ricerca libreria condivisa | Consente all'utente di popolare il percorso di ricerca della libreria condivisa. |
| Directory librerie aggiuntive | Consente all'utente di sostituire il percorso della libreria dell'ambiente. (-L cartella). |
| Segnala riferimenti a simboli non risolti | Questa opzione quando abilitata segnala i riferimenti a simboli non risolti. |
| Ottimizza in base all'utilizzo della memoria | Ottimizza in base all'utilizzo della memoria leggendo nuovamente, se necessario, le tabelle di simboli. |
| Ignora librerie predefinite specifiche | Specifica il nome di una o più librerie predefinite da ignorare. |
| Imponi riferimenti al simbolo | Impone l'inserimento del simbolo nel file di output come simbolo non definito. |
| Informazioni sui simboli del debugger | Informazioni sui simboli del debugger ottenuti dal file di output. | **Includi tutti**<br /><br />**Ometti i simboli non necessari per la rilocazione**<br /><br />**Ometti solo le informazioni sui simboli del debugger**<br /><br />**Ometti tutte le informazioni sui simboli** |
| Includi le informazioni sui simboli del debugger nel pacchetto | Rimuove le informazioni sui simboli del debugger prima della creazione del pacchetto.  Per il debug viene utilizzata una copia del file binario originale. |
| Nome file di mapping | L'opzione Map indica al linker di creare un file di mapping con il nome specificato dall'utente. |
| Contrassegna le variabili come di sola lettura dopo la rilocazione | Questa opzione contrassegna le variabili come di sola lettura dopo la rilocazione. |
| Abilita il binding immediato delle funzioni | Questa opzione contrassegna l'oggetto per il binding immediato delle funzioni. |
| Richiedi stack eseguibili | Questa opzione contrassegna l'output in modo da non richiedere lo stack degli eseguibili. |
| Intero archivio | Con Intero archivio viene usato tutto il codice disponibile in origini e dipendenze aggiuntive. |
| Opzioni aggiuntive | Opzioni aggiuntive. |
| Dipendenze aggiuntive | Specifica altri elementi da aggiungere alla riga di comando del collegamento. |
| Dipendenze libreria | Questa opzione consente di specificare librerie aggiuntive da aggiungere alla riga di comando del linker. Le librerie aggiuntive vengono aggiunte alla fine della riga di comando del linker, che inizia con *lib* e termina con l'estensione *. a* o *. so* .  (-lFILE) |
