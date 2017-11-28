---
title: "Proprietà del debugger (Linux C++) | Microsoft Docs"
ms.custom: 
ms.date: 9/26/2017
ms.reviewer: 
ms.suite: 
ms.technology: vs-ide-general
ms.tgt_pltfrm: 
ms.topic: article
ms.assetid: 0c1c0fcc-a49b-451c-a5cb-ce9711fac064
author: mikeblome
ms.author: mblome
manager: ghogen
f1_keywords:
- VC.Project.RaspberryDebugger.DebuggerType
- VC.Project.IVCLocalDebugPageObject.CommandArguments
- VC.Project.IVCLocalDebugPageObject.WorkingDirectory
- VC.Project.RaspberryDebugger.LaunchActivity
- VC.Project.LinuxDebugger.DebugChildProcesses
ms.openlocfilehash: d47645eab33ffb0ee6a203fdfb0cf30c856ea63f
ms.sourcegitcommit: ca2f94dfd015e0098a6eaf5c793ec532f1c97de1
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2017
---
# <a name="c-debugging-properties-linux-c"></a>Proprietà di debug C++ (Linux C++)

Proprietà | Descrizione | Scelte
--- | ---| ---
Comando di pre-avvio | Comando eseguito nella shell prima dell'avvio del debug e prima che il debugger sia in esecuzione. Può essere usato per influire sull'ambiente di debug.
Programma | Percorso completo del programma di cui eseguire il debug nel sistema remoto. Si tratta di un percorso nel sistema remoto. Se viene lasciato vuoto o non viene modificato, per impostazione predefinita verrà usato l'output del progetto corrente.
Argomenti del programma | Argomenti della riga di comando da passare al programma di cui è in corso il debug.
Directory di lavoro | Directory di lavoro dell'applicazione remota. Per impostazione predefinita, è la home directory dell'utente.
Comandi aggiuntivi del debugger | Comandi GDB aggiuntivi per il debugger da eseguire prima di avviare il debug.
Numero di porta del debugger | Numero di porta per le comunicazioni del debugger con il debugger remoto. La porta non deve essere in uso in locale. Questo valore deve essere positivo e compreso tra 1 e 65535. Se non viene specificato, verrà usato un numero di porta disponibile.
Numero di porta del debugger remoto | Numero di porta su cui il server del debugger remoto (GDBSERVER) è in ascolto nel sistema remoto. La porta non deve essere in uso nel sistema remoto. Questo valore deve essere positivo e compreso tra 1 e 65535. Se non viene specificato, verrà usato un numero di porta disponibile a partire da 4444.
Modalità di debug | Consente di specificare in che modo il debugger si interfaccia con GDB. Nella modalità GDB il debugger passa GDB alla shell nel sistema remoto. Nella modalità GDBSERVER GDB viene eseguito in locale e si connette a GDBSERVER eseguito in remoto. | **gdbserver**<br>**gdb**<br>
Percorsi aggiuntivi di ricerca dei simboli | Percorso di ricerca aggiuntivo per i simboli di debug (solib-search-path).
Esegui debug di processi figlio | Specifica se abilitare il debug dei processi figlio.
Abilita pretty print Python | Abilita la pretty print di valori di espressione. Supportata solo nella modalità di debug "gdb".
File di visualizzazione | File di visualizzazione nativa predefinito (con estensione natvis) contenente le direttive di visualizzazione per i tipi SLT. Gli altri file con estensione natvis che appartengono alla soluzione corrente verranno caricati automaticamente.
Mapping percorsi file di origine aggiuntivi | Percorsi equivalenti aggiuntivi utilizzabili dal debugger per eseguire il mapping di nomi file di origine Windows a nomi file di origine Linux. Il formato è "\<percorso-windows>=\<percorso-linux>;...". A un nome file di origine trovato nel percorso Windows verrà fatto riferimento come se fosse stato trovato nella stessa posizione relativa nel percorso Linux. Per i file trovati nel progetto locale non è richiesto alcun mapping aggiuntivo.