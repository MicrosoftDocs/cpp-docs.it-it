---
description: 'Altre informazioni su: creare un progetto makefile C++'
title: Creare un progetto makefile C++ in Visual Studio
ms.date: 08/05/2019
f1_keywords:
- vc.appwiz.makefile.project
helpviewer_keywords:
- Makefile projects [C++]
ms.assetid: dd077af3-97a8-48fb-baaa-cf7e07ddef61
ms.openlocfilehash: 16b678d5ab8866f2875c20d7016657373d100f7b
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97196958"
---
# <a name="create-a-c-makefile-project"></a>Creare un progetto makefile C++

Un *makefile* è un file di testo contenente istruzioni su come creare e collegare (o *compilare*) un set di file di codice sorgente C++. Un programma *make* legge il makefile e richiama un compilatore, un linker e possibilmente altri programmi per creare un file eseguibile. L'implementazione di Microsoft del programma *make* è chiamata [NMAKE](nmake-reference.md).

Nel caso in cui sia già disponibile un progetto makefile, è possibile scegliere una delle opzioni seguenti se si vuole codificare il file o eseguirne il debug nell'IDE di Visual Studio:

- Creare un progetto makefile in Visual Studio che usa il makefile esistente per configurare un file con estensione vcxproj che verrà usato da Visual Studio per IntelliSense. Non sono disponibili tutte le funzionalità dell'IDE che si ottengono con un progetto MSBuild nativo. Vedere [per creare un progetto makefile di](#create_a_makefile_project) seguito.
- Usare la **Creazione guidata nuovo progetto da file di codice esistenti** per creare un progetto MSBuild nativo dal codice sorgente. Il makefile originale non verrà usato in seguito. Per altre informazioni, vedere [Procedura: Creare un progetto C++ da codice esistente](../how-to-create-a-cpp-project-from-existing-code.md).
- **Visual Studio 2017 e versioni successive**: usare la funzionalità **Apri cartella** per modificare e compilare un progetto makefile così com'è, senza coinvolgere il sistema MSBuild. Per altre informazioni, vedere [Progetti Apri cartella per C++](../open-folder-projects-cpp.md).
- **Visual Studio 2019 e versioni successive**: creare un progetto makefile UNIX per Linux.

## <a name="a-namecreate_a_makefile_project-to-create-a-makefile-project-with-the-makefile-project-template"></a><a name="create_a_makefile_project"> Per creare un progetto makefile con il modello di progetto makefile

In Visual Studio 2017 e versioni successive, il modello di progetto makefile è disponibile se è installato il carico di lavoro per lo sviluppo di applicazioni desktop con C++.

Seguire la procedura guidata per specificare i comandi e l'ambiente usati dal makefile. Questo progetto potrà quindi essere usato per compilare il codice in Visual Studio.

Per impostazione predefinita, il progetto makefile non visualizza file in Esplora soluzioni. Il progetto makefile specifica le impostazioni di compilazione, riportate nella pagina delle proprietà del progetto.

Il file di output specificato nel progetto non influisce sul nome creato dallo script di compilazione, ma fornisce soltanto un'indicazione. Il makefile controlla comunque il processo di compilazione e specifica le destinazioni di compilazione.

::: moniker range="msvc-160"

### <a name="to-create-a-makefile-project-in-visual-studio-2019"></a>Per creare un progetto makefile in Visual Studio 2019

1. Dal menu principale di Visual Studio scegliere **file**  >  **nuovo**  >  **progetto** e digitare "Makefile" nella casella di ricerca. In alternativa, nella finestra di dialogo **Nuovo progetto** espandere **Visual C++** > **Generale** (Visual Studio 2015) o **Altro** (Visual Studio 2017) e quindi selezionare una delle due opzioni a seconda che la destinazione sia Windows o Linux.

1. **Solo Windows**: nella pagina **impostazioni di configurazione debug** specificare le informazioni relative a comando, output, Pulisci e ricompila per le compilazioni di debug e di vendita al dettaglio. Fare clic su **Avanti** se si vogliono specificare impostazioni diverse per la configurazione di una versione.

1. Fare clic su **Fine** per chiudere la finestra di dialogo e aprire il progetto appena creato in **Esplora soluzioni**.

::: moniker-end

::: moniker range="<=msvc-150"

### <a name="to-create-a-makefile-project-in-visual-studio-2015-or-visual-studio-2017"></a>Per creare un progetto makefile in Visual Studio 2015 o Visual Studio 2017

1. Nella pagina iniziale di Visual Studio, digitare "makefile" nella casella di ricerca **Nuovo progetto**. In alternativa, nella finestra di dialogo **Nuovo progetto** espandere **Visual C++** > **Generali** (Visual Studio 2015) o **Altro** (Visual Studio 2017) e quindi selezionare **Progetto makefile** nel riquadro Modelli per aprire la procedura guidata di creazione del progetto.

1. Nella pagina **Impostazioni applicazione** specificare le informazioni relative a ricompilazione, comandi, output e pulitura per le build di debug e vendita.

1. Scegliere **Fine** per uscire dalla procedura guidata e aprire il progetto appena creato in **Esplora soluzioni**.

::: moniker-end

È possibile visualizzare e modificare le proprietà del progetto nella relativa pagina delle proprietà. Per informazioni sulla visualizzazione della pagina delle proprietà, vedere [Impostare le proprietà del compilatore e di compilazione C++ in Visual Studio](../working-with-project-properties.md).

## <a name="makefile-project-wizard"></a>Creazione guidata Progetto makefile

Dopo aver creato il progetto makefile, è possibile visualizzare e modificare ognuna delle opzioni seguenti nella pagina **Nmake** della pagina delle proprietà del progetto.

- **Riga di comando di compilazione:** Consente di specificare la riga di comando da eseguire quando l'utente seleziona Compila dal menu Compila. Viene visualizzata nel campo Riga di comando di compilazione nella pagina Nmake della pagina delle proprietà del progetto.

- **Output:** Specifica il nome del file che conterrà l'output per la riga di comando. Per impostazione predefinita, questa opzione è basata sul nome del progetto. Viene visualizzata nel campo Output nella pagina Nmake della pagina delle proprietà del progetto.

- **Comandi puliti:** Consente di specificare la riga di comando da eseguire quando l'utente seleziona Pulisci dal menu Compila. Vengono visualizzati nel campo Riga di comando per Pulisci nella pagina Nmake della pagina delle proprietà del progetto.

- **Riga di comando di ricompilazione:** Consente di specificare la riga di comando da eseguire quando l'utente seleziona Ricompila dal menu Compila. Viene visualizzata nel campo Riga di comando per Ricompila tutto nella pagina Nmake della pagina delle proprietà del progetto.

## <a name="how-to-enable-intellisense-for-makefile-projects"></a>Procedura: abilitare IntelliSense per progetti makefile

IntelliSense non funziona nei progetti makefile quando determinate impostazioni di progetto o opzioni del compilatore sono configurate in modo non corretto. Per configurare i progetti makefile in modo che IntelliSense funzioni come previsto, seguire questa procedura:

1. Aprire la finestra di dialogo **Pagine delle proprietà**. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Espandere il nodo **Proprietà di configurazione**.

1. Selezionare la pagina della proprietà **NMake** e quindi modificare le proprietà nell'area **IntelliSense** nel modo desiderato.

   - Impostare la proprietà **Definizioni del preprocessore** per definire i simboli del preprocessore nel progetto makefile. Per altre informazioni, vedere [/D (definizioni preprocessore)](d-preprocessor-definitions.md).

   - Impostare la proprietà **Percorso di ricerca di inclusione** per specificare l'elenco delle directory in cui il compilatore esegue la ricerca per risolvere i riferimenti di file che vengono passati alle direttive del preprocessore nel progetto makefile. Per altre informazioni, vedere [/I (Directory di inclusione aggiuntive)](i-additional-include-directories.md).

   - Per i progetti che vengono compilati con CL.EXE da una finestra di comando, impostare la variabile di ambiente **INCLUDE** per specificare le directory in cui il compilatore esegue la ricerca per risolvere i riferimenti di file che vengono passati alle direttive del preprocessore nel progetto makefile.

   - Impostare la proprietà **Inclusioni imposte** per specificare quali file di intestazione elaborare durante la compilazione del progetto makefile. Per altre informazioni, vedere [/FI (Specifica il file di inclusione da usare)](fi-name-forced-include-file.md).

   - Impostare la proprietà **Percorso di ricerca assembly** per specificare l'elenco delle directory in cui il compilatore eseguirà la ricerca per risolvere i riferimenti agli assembly .NET nel progetto. Per altre informazioni, vedere [/AI (Specifica le directory di metadati)](ai-specify-metadata-directories.md).

   - Impostare la proprietà **Assembly a uso forzato** per specificare quali assembly .NET elaborare durante la compilazione del progetto makefile. Per altre informazioni, vedere [/FU (Specifica file #using da usare)](fu-name-forced-hash-using-file.md).

   - Impostare la proprietà **Opzioni aggiuntive** per specificare le opzioni aggiuntive del compilatore che verranno utilizzate da IntelliSense durante l'analisi dei file C++.

1. Scegliere **OK** per chiudere le pagine delle proprietà.

1. Usare il comando **Salva tutto** per salvare le impostazioni del progetto modificate.

Alla successiva apertura del progetto makefile nell'ambiente di sviluppo di Visual Studio, eseguire il comando **Pulisci soluzione** e quindi il comando **Compila soluzione** nel progetto makefile. IntelliSense funzionerà correttamente nell'IDE.

## <a name="see-also"></a>Vedi anche

[Utilizzo di IntelliSense](/visualstudio/ide/using-intellisense)<br>
[Riferimento a NMAKE](nmake-reference.md)<br>
[Procedura: Creare un progetto C++ da codice esistente](../how-to-create-a-cpp-project-from-existing-code.md)<br>
[Caratteri speciali in un makefile](special-characters-in-a-makefile.md)<br/>
[Contenuto di un makefile](contents-of-a-makefile.md)<br/>
