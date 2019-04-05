---
title: Creare un progetto makefile di C++ in Visual Studio
ms.date: 12/08/2018
f1_keywords:
- vc.appwiz.makefile.project
helpviewer_keywords:
- Makefile projects, creating
- project files [C++], Makefile projects
ms.assetid: dd077af3-97a8-48fb-baaa-cf7e07ddef61
ms.openlocfilehash: 9c2edfe35233672e8117d336ba40cfea497b1a22
ms.sourcegitcommit: c7f90df497e6261764893f9cc04b5d1f1bf0b64b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/05/2019
ms.locfileid: "59035598"
---
# <a name="create-a-c-makefile-project"></a>Creare un progetto makefile di C++

Un *makefile* è un file di testo contenente istruzioni su come creare e collegare (o *compilare*) un set di file di codice sorgente C++. Un programma *make* legge il makefile e richiama un compilatore, un linker e possibilmente altri programmi per creare un file eseguibile. Implementazione Microsoft del *rendere* automaticamente viene chiamato [NMAKE](nmake-reference.md);

Nel caso in cui sia già disponibile un progetto makefile, è possibile scegliere una delle opzioni seguenti se si vuole codificare il file o eseguirne il debug nell'IDE di Visual Studio:

- Creare un progetto makefile che utilizza il makefile esistente per configurare un file con estensione vcxproj che Visual Studio userà per IntelliSense in Visual Studio. In questo caso, non si potrà usufruire di tutte le funzionalità dell'IDE che si hanno con un progetto MSBuild nativo. Vedere la sezione [Per creare un progetto makefile](#create_a_makefile_project) riportata di seguito.
- Usare la **Creazione guidata nuovo progetto da file di codice esistenti** per creare un progetto MSBuild nativo dal codice sorgente. Il makefile originale non useranno questo punto. Per altre informazioni, vedere [Procedura: Creare un progetto C++ da codice esistente](../how-to-create-a-cpp-project-from-existing-code.md).
- **Visual Studio 2017 e versioni successive**: Usare la **Apri cartella** funzionalità per modificare e compilare un progetto makefile come-senza alcun coinvolgimento del sistema MSBuild. Per altre informazioni, vedere [Progetti Apri cartella per C++](../open-folder-projects-cpp.md).

## <a name="a-namecreateamakefileproject-to-create-a-makefile-project-with-the-makefile-project-template"></a><a name="create_a_makefile_project"> Per creare un progetto makefile con il modello di progetto makefile

In Visual Studio 2017 e versioni successive, il modello di progetto makefile è disponibile se è installato il carico di lavoro per lo sviluppo di applicazioni desktop con C++.

Seguire la procedura guidata per specificare i comandi e l'ambiente usati dal makefile. È quindi possibile usare questo progetto per compilare il codice in Visual Studio.

Per impostazione predefinita, il progetto makefile non visualizza file in Esplora soluzioni. Il progetto makefile specifica le impostazioni di compilazione, riportate nella pagina delle proprietà del progetto.

Il file di output specificato nel progetto non influisce sul nome creato dallo script di compilazione, ma fornisce soltanto un'indicazione. Il makefile controlla comunque il processo di compilazione e specifica le destinazioni di compilazione.

1. Nella pagina iniziale di Visual Studio, digitare "makefile" nella casella di ricerca **Nuovo progetto**. In alternativa, nella finestra di dialogo **Nuovo progetto** espandere **Visual C++** > **Generali** (Visual Studio 2015) o **Altro** (Visual Studio 2017) e quindi selezionare **Progetto makefile** nel riquadro Modelli per aprire la procedura guidata di creazione del progetto.

1. Nella pagina **Impostazioni applicazione** specificare le informazioni relative a ricompilazione, comandi, output e pulitura per le build di debug e vendita.

1. Scegliere **Fine** per uscire dalla procedura guidata e aprire il progetto appena creato in **Esplora soluzioni**.

È possibile visualizzare e modificare le proprietà del progetto nella relativa pagina delle proprietà. Visualizzare [le proprietà del compilatore e compilazione impostare C++ in Visual Studio](../working-with-project-properties.md) per informazioni su come visualizzare la pagina delle proprietà.

## <a name="makefile-project-wizard"></a>Creazione guidata progetto makefile

Dopo aver creato un progetto makefile, è possibile visualizzare e modificare le opzioni seguenti nel **Nmake** pagina della pagina delle proprietà del progetto.

- **Riga di comando di compilazione:** Specifica la riga di comando da eseguire quando l'utente seleziona compilazione dal menu Compila. Visualizzato nel campo della riga di comando compilazione nella pagina Nmake della pagina delle proprietà del progetto.

- **Output:** Specifica il nome del file che conterrà l'output della riga di comando. Per impostazione predefinita, questa opzione è basata sul nome del progetto. Visualizzato nel campo di Output nella pagina Nmake della pagina delle proprietà del progetto.

- **Comandi per la pulitura:** Specifica la riga di comando da eseguire quando l'utente seleziona Pulisci dal menu Compila. Visualizzato nel campo riga di comando di pulizia nella pagina Nmake della pagina delle proprietà del progetto.

- **Ricompilare della riga di comando:** Specifica la riga di comando da eseguire quando l'utente seleziona ricompilazione dal menu Compila. Viene visualizzata nella ricompilazione tutto da riga di comando nella pagina Nmake della pagina delle proprietà del progetto.

## <a name="how-to-enable-intellisense-for-makefile-projects"></a>Procedura: Abilitare IntelliSense per i progetti makefile

IntelliSense non riesce in progetti makefile quando alcune impostazioni del progetto o le opzioni del compilatore sono configurate in modo non corretto. Seguire questi passaggi per configurare i progetti makefile in modo che IntelliSense funziona come previsto:

1. Aprire la finestra di dialogo **Pagine delle proprietà**. Per informazioni dettagliate, vedere [le proprietà del compilatore e compilazione impostare C++ in Visual Studio](../working-with-project-properties.md).

1. Espandere il nodo **Proprietà di configurazione**.

1. Selezionare la pagina della proprietà **NMake** e quindi modificare le proprietà nell'area **IntelliSense** nel modo desiderato.

   - Impostare la proprietà **Definizioni del preprocessore** per definire i simboli del preprocessore nel progetto makefile. Per altre informazioni, vedere [/D (definizioni preprocessore)](d-preprocessor-definitions.md).

   - Impostare la proprietà **Percorso di ricerca di inclusione** per specificare l'elenco delle directory in cui il compilatore esegue la ricerca per risolvere i riferimenti di file che vengono passati alle direttive del preprocessore nel progetto makefile. Per altre informazioni, vedere [/I (Directory di inclusione aggiuntive)](i-additional-include-directories.md).

    - Per i progetti che vengono compilati con CL.EXE da una finestra di comando, impostare la variabile di ambiente **INCLUDE** per specificare le directory in cui il compilatore esegue la ricerca per risolvere i riferimenti di file che vengono passati alle direttive del preprocessore nel progetto makefile.

   - Impostare la proprietà **Inclusioni imposte** per specificare quali file di intestazione elaborare durante la compilazione del progetto makefile. Per altre informazioni, vedere [/FI (Specifica il file di inclusione da usare)](fi-name-forced-include-file.md).

   - Impostare la proprietà **Percorso di ricerca assembly** per specificare l'elenco delle directory in cui il compilatore eseguirà la ricerca per risolvere i riferimenti agli assembly .NET nel progetto. Per altre informazioni, vedere [/AI (Specifica le directory di metadati)](ai-specify-metadata-directories.md).

   - Impostare la proprietà **Assembly a uso forzato** per specificare quali assembly .NET elaborare durante la compilazione del progetto makefile. Per altre informazioni, vedere [/FU (Specifica file #using da usare)](fu-name-forced-hash-using-file.md).

   - Impostare la proprietà **Opzioni aggiuntive** per specificare opzioni aggiuntive del compilatore che IntelliSense deve usare durante l'analisi dei file C++.

1. Scegliere **OK** per chiudere le pagine delle proprietà.

1. Usare il comando **Salva tutto** per salvare le impostazioni del progetto modificate.

Alla successiva apertura del progetto makefile nell'ambiente di sviluppo di Visual Studio, eseguire il comando **Pulisci soluzione** e quindi il comando **Compila soluzione** nel progetto makefile. IntelliSense funzionerà correttamente nell'IDE.

## <a name="see-also"></a>Vedere anche

[Using IntelliSense](/visualstudio/ide/using-intellisense)<br>
[Riferimenti a NMAKE](nmake-reference.md)<br>
[Procedura: Creare un progetto C++ da codice esistente](../how-to-create-a-cpp-project-from-existing-code.md)
[caratteri speciali in un Makefile](special-characters-in-a-makefile.md)<br/>
[Contenuto di un makefile](contents-of-a-makefile.md)<br/>
