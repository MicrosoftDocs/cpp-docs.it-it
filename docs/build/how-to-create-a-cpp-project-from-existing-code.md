---
title: 'Procedura: creare un progetto C++ da codice esistente'
ms.date: 05/06/2019
helpviewer_keywords:
- C++, creating projects from existing code
- Create New Project From Existing Code Files Wizard, project settings
f1_keywords:
- vc.appwiz.importwiz.location
- vc.appwiz.importwiz.appsettings
- vc.appwiz.importwiz.debugsettings
- vc.appwiz.importwiz.releasesettings
ms.assetid: e328a938-395c-48ea-9e35-dd433de12b31
ms.openlocfilehash: 5e59230186380b787c95dbe08914bcd9d3ca2407
ms.sourcegitcommit: 8e285a766523e653aeeb34d412dc6f615ef7b17b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/21/2020
ms.locfileid: "80078543"
---
# <a name="how-to-create-a-c-project-from-existing-code"></a>Procedura: creare un progetto C++ da codice esistente

In Visual Studio è possibile portare i file di codice esistenti in un progetto C++ usando la **Creazione guidata nuovo progetto da file di codice esistenti**. La procedura guidata crea una soluzione progetto che usa il sistema MSBuild per gestire i file di origine e la configurazione della build. Funziona in modo ottimale con progetti relativamente semplici, che non hanno gerarchie di cartelle complesse. La procedura guidata non è disponibile nelle edizioni Express precedenti di Visual Studio.

L'importazione di file di codice esistenti in un progetto C++ consente l'uso delle funzionalità di gestione progetto MSBuild native incorporate nell'IDE. Se si preferisce usare il sistema di compilazione esistente, ad esempio makefile nmake, CMake o altri ancora, è possibile usare le opzioni Apri cartella o CMake. Per altre informazioni, vedere [Open Folder Projects for C++](open-folder-projects-cpp.md) or [CMake Projects in Visual Studio](cmake-projects-in-visual-studio.md). Entrambe le opzioni consentono di usare funzionalità IDE come [IntelliSense](/visualstudio/ide/using-intellisense) e [Proprietà del progetto](working-with-project-properties.md).

### <a name="to-create-a-c-project-from-existing-code"></a>Per creare un progetto C++ da codice esistente

1. Nel menu **File** selezionare **Nuovo** > **Progetto da codice esistente**.

1. Specificare il percorso del progetto, la directory dei file di origine e i tipi di file che la procedura guidata importa nel nuovo progetto. Scegliere **Avanti** per continuare.

    | Impostazione | Descrizione |
    | --- | --- |
    | **Percorso del file di progetto** | Specifica il percorso della directory del nuovo progetto. Questo è il percorso in cui la creazione guidata inserisce tutti i file (e le sottodirectory) del nuovo progetto.<br/><br/>Selezionare **Sfoglia** per visualizzare la finestra di dialogo **Percorso del file di progetto**. Passare alla cartella a destra e specificare la directory che contiene il nuovo progetto. |
    | **Project name (Nome progetto)** | Specifica il nome del nuovo progetto. I file di progetto con estensioni come vcxproj adottano questo nome, mentre i file di codice esistenti mantengono il nome originale. |
    | **Aggiungi al progetto file dalle cartelle** | Selezionare questa opzione per impostare la procedura guidata per la copia dei file di codice esistenti dalle directory di origine (specificate nella casella di riepilogo sotto il controllo) al nuovo progetto.<br/><br/>Selezionare **Aggiungi sottocartelle** per specificare la copia dei file di codice da tutte le sottodirectory nel progetto. Le directory sono elencate nella colonna **Cartella**.<br/>- Selezionare **Aggiungi** per visualizzare la finestra di dialogo **Aggiungi al progetto file dalla cartella**, nella quale è possibile specificare le directory in cui la procedura guidata eseguirà la ricerca dei file di codice esistenti.<br/>- Selezionare **Rimuovi** per eliminare il percorso della directory selezionato nella casella di riepilogo.<br/><br/>Nella casella **Tipi di file da aggiungere al progetto** specificare i tipi di file che la procedura guidata aggiungerà al nuovo progetto in base alle estensioni di file specificate. Le estensioni di file sono precedute dal carattere jolly asterisco e sono delimitate da punti e virgola nell'elenco di estensioni. |
    | **Mostra tutti i file in Esplora soluzioni** | Specifica che tutti i file del nuovo progetto devono essere visibili e visualizzati nella finestra di **Esplora soluzioni** . Questa opzione è attivata per impostazione predefinita. |

    ![Posizione del progetto](media/location.png)

1. Specificare le impostazioni del progetto da usare, ad esempio l'ambiente di compilazione del nuovo progetto e le impostazioni di compilazione corrispondenti a un tipo specifico di nuovo progetto da generare. Scegliere **Avanti** per continuare.

    | Impostazione | Descrizione |
    | --- | --- |
    | **Usare Visual Studio** | Specifica l'uso degli strumenti di compilazione inclusi in Visual Studio per compilare il nuovo progetto. Questa opzione è selezionata per impostazione predefinita.<br/><br/>Selezionare **Tipo di progetto** per specificare il tipo di progetto generato dalla procedura guidata. Scegliere **Progetto Applicazione Windows**, **Progetto di applicazione console**, **Progetto libreria di collegamento dinamico (DLL)** o **Progetto libreria statica (LIB)**.<br/><br/>Selezionare **Aggiungi supporto per ATL** per aggiungere il supporto per ATL al nuovo progetto.<br/><br/>Selezionare **Aggiungi supporto per MFC** per aggiungere il supporto per MFC al nuovo progetto.<br/><br/>Selezionare **Aggiungi supporto per Common Language Runtime** per aggiungere il supporto di programmazione CLR al progetto. Scegliere il **supporto Common Language Runtime** per il tipo di conformità, ad esempio **Common Language Runtime (sintassi precedente)** per la conformità con estensioni gestite per C++ sintassi, la sintassi di programmazione CLR precedente a Visual Studio 2005. |
    | **Utilizza sistema di compilazione esterno** | Specifica l'uso di strumenti di compilazione non inclusi in Visual Studio per compilare il nuovo progetto. Quando questa opzione è selezionata, è possibile specificare righe di comando di compilazione nelle pagine **Specifica le impostazioni di configurazione per il debug** e **Specifica le impostazioni di configurazione per il rilascio**. |

    ![Impostazioni progetto](media/settings.png)

    > [!NOTE]
    > Quando l'opzione **Utilizza sistema di compilazione esterno** è selezionata l'IDE non compila il progetto, pertanto le opzioni /D, /I, /FI, /AI o /FU non sono necessarie per la compilazione. Tuttavia queste opzioni devono essere impostate correttamente per consentire il funzionamento di IntelliSense.

1. Specificare le impostazioni di configurazione per il debug da usare. Scegliere **Avanti** per continuare.

    | Impostazione | Descrizione |
    | --- | --- |
    | **Riga di comando di compilazione** | Specifica la riga di comando che esegue la compilazione del progetto. Immettere il nome del compilatore (e le eventuali opzioni o argomenti) o gli script di compilazione da usare per compilare il progetto. |
    | **Riga di comando di ricompilazione** | Specifica la riga di comando che consente di ricompilare il nuovo progetto. |
    | **Pulisci riga di comando** | Specifica la riga di comando che elimina i file di supporto generati dagli strumenti di compilazione per il progetto. |
    | **Output (per il debug)** | Specifica il percorso della directory dei file di output per la configurazione di debug del progetto. |
    | **Definizioni del preprocessore (/D)** | Definisce i simboli del preprocessore per il progetto. Vedere [/D (definizioni preprocessore)](../build/reference/d-preprocessor-definitions.md). |
    | **Percorsi di ricerca (/I)** | Specifica i percorsi di directory in cui il compilatore esegue la ricerca per risolvere i riferimenti di file passati alle direttive del preprocessore nel progetto. Vedere [/I (directory di inclusione aggiuntive)](../build/reference/i-additional-include-directories.md). |
    | **File di inclusione imposti (/FI)** | Specifica i file di intestazione da elaborare quando si compila il progetto. Vedere [/FI (specifica il file di inclusione da usare)](../build/reference/fi-name-forced-include-file.md). |
    | **Percorsi di ricerca dell'assembly .NET (/AI)** | Specifica i percorsi di directory in cui il compilatore esegue la ricerca per risolvere i riferimenti agli assembly .NET passati alle direttive del preprocessore nel progetto. Vedere [/AI (specifica le directory di metadati)](../build/reference/ai-specify-metadata-directories.md). |
    | **Assembly .NET imposti (/FU)** | Specifica gli assembly .NET da elaborare quando si compila il progetto. Vedere [/FU (specifica file #using da usare)](../build/reference/fu-name-forced-hash-using-file.md). |

    ![Configurazione del progetto](media/config.png)

    > [!NOTE]
    > Le impostazioni della riga di comando **Compila**, **Ricompila**, **Pulisci** e l'impostazione **Output (per il debug)** sono abilitate solo se l'opzione **Utilizza sistema di compilazione esterno** è selezionata nella pagina **Specifica le impostazioni del progetto**.

1. Specificare le impostazioni di configurazione per la versione da usare. Queste impostazioni corrispondono alle impostazioni di configurazione per il debug. Scegliere **Fine** per generare il nuovo progetto.

    > [!NOTE]
    > È possibile selezionare **Uguale alla configurazione di debug** per specificare che la procedura guidata genererà impostazioni progetto di configurazione per il rilascio identiche alle impostazioni progetto di configurazione per il debug. Questa opzione è selezionata per impostazione predefinita. Se la casella è selezionata, tutte le altre opzioni in questa pagina sono inattive.
