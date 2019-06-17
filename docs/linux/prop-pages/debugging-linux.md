---
title: Proprietà del debugger (Linux C++) | Microsoft Docs
ms.date: 06/07/2019
ms.assetid: 0c1c0fcc-a49b-451c-a5cb-ce9711fac064
ms.openlocfilehash: d76e398d648db7c5cf65e4ca2bb1665aef4359ad
ms.sourcegitcommit: 8adabe177d557c74566c13145196c11cef5d10d4
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 06/10/2019
ms.locfileid: "66821406"
---
# <a name="c-debugging-properties-linux-c"></a>Proprietà di debug C++ (Linux C++)

::: moniker range="vs-2015"

Il supporto Linux è disponibile in Visual Studio 2017 e versioni successive.

::: moniker-end

::: moniker range=">=vs-2017"

Proprietà | Description | Scelte
--- | ---| ---
Computer di debug remoto | **Visual Studio 2019 versione 16.1**: specifica il computer sul quale eseguire il debug del programma. Può essere diverso dal computer di compilazione remoto specificato nella pagina [Generale](general-linux.md).
Comando di pre-avvio | Comando eseguito nella shell prima dell'avvio del debugger. Può essere usato per influire sull'ambiente di debug.
Programma | Percorso completo nel sistema remoto al programma di cui eseguire il debug. Se viene lasciato vuoto o non viene modificato, viene impostato automaticamente sull'output del progetto corrente.
Argomenti del programma | Argomenti della riga di comando da passare al programma di cui è in corso il debug.
Directory di lavoro | Directory di lavoro dell'applicazione remota. Per impostazione predefinita, è la home directory dell'utente.
Comandi aggiuntivi del debugger | Comandi `gdb` aggiuntivi per il debugger da eseguire prima di avviare il debug.
Numero di porta del debugger | Numero di porta per le comunicazioni del debugger con il debugger remoto. La porta non deve essere in uso in locale. Questo valore deve essere positivo e compreso tra 1 e 65535. Se non viene specificato, viene usato un numero di porta disponibile.
Numero di porta del debugger remoto | Numero di porta su cui il server del debugger remoto `gdbserver` è in ascolto sul sistema remoto. La porta non deve essere in uso nel sistema remoto. Questo valore deve essere positivo e compreso tra 1 e 65535. Se non viene specificato, viene usato un numero di porta disponibile a partire da 4444.
Modalità di debug | Consente di specificare in che modo il debugger si interfaccia con `gdb`. Nella *modalità GDB* il debugger passa `gdb` alla shell nel sistema remoto. Nella *modalità gdbserver*, `gdb` viene eseguito in locale e si connette a `gdbserver` in esecuzione in modalità remota. | **gdbserver**<br/>**gdb**
Percorsi aggiuntivi di ricerca dei simboli | Percorso di ricerca aggiuntivo per i simboli di debug (solib-search-path).
Esegui debug di processi figlio | Specifica se abilitare il debug dei processi figlio.
Abilita pretty print Python | Abilita la pretty print di valori di espressione. Supportata solo nella modalità di debug "gdb".
File di visualizzazione | File di visualizzazione nativa predefinito (con estensione natvis) contenente le direttive di visualizzazione per i tipi SLT. Gli altri file con estensione natvis che appartengono alla soluzione corrente vengono caricati automaticamente.
Mapping percorsi file di origine aggiuntivi | Percorsi equivalenti aggiuntivi utilizzabili dal debugger per eseguire il mapping di nomi file di origine Windows a nomi file di origine Linux. Il formato è "\<percorso-windows>=\<percorso-linux>;...". A un nome file di origine trovato nel percorso Windows viene fatto riferimento come se si trovasse nella stessa posizione relativa nel percorso Linux. Per i file trovati nel progetto locale non è richiesto alcun mapping aggiuntivo.

::: moniker-end
