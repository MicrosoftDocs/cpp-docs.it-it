---
title: Creare un progetto di app console C++
description: Creare un'app console Hello World in Visual C++
ms.custom: mvc
ms.date: 04/02/2019
ms.topic: tutorial
ms.devlang: cpp
ms.assetid: 45138d70-719d-42dc-90d7-1d0ca31a2f54
ms.openlocfilehash: 739da0b6e5400117c0b09a3d4c3335bd44529a25
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62314955"
---
# <a name="create-a-c-console-app-project"></a>Creare un progetto di app console C++

In genere il punto di partenza per un programmatore C++ è un'applicazione "Hello, world!" eseguita sulla riga di comando. Questo è ciò che si creerà in Visual Studio in questo passaggio.

## <a name="prerequisites"></a>Prerequisiti

- Visual Studio con il carico di lavoro Sviluppo di applicazioni desktop con C++ deve essere installato e in esecuzione nel computer. Se non è ancora installato, vedere [Installare il supporto C++ in Visual Studio](vscpp-step-0-installation.md).

## <a name="create-your-app-project"></a>Creare il progetto di app

Visual Studia usa i *progetti* per organizzare il codice per un'applicazione e le *soluzioni* per organizzare i progetti. Un progetto contiene tutte le opzioni, le configurazioni e le regole usate per compilare le app e gestisce la relazione tra tutti i file del progetto e i file esterni. Per creare l'applicazione, per prima cosa creare un nuovo progetto e una soluzione.

::: moniker range=">=vs-2019"

1. In Visual Studio, aprire il **File** dal menu e scegliere **New** > **progetto** per aprire la **crea un nuovo progetto** finestra di dialogo. Selezionare il **App Console** modello, quindi scegliere **successivo**.

   ![Creare un nuovo progetto](media/vs2019-choose-console-app.png "aprire una finestra di dialogo Nuovo progetto di creazione")

1. Nel **configurare il nuovo progetto** finestra di dialogo immettere *HelloWorld* nel **nome progetto** casella di modifica. Scegli **Create** per creare il progetto.

   ![Assegnare un nome e creare un nuovo progetto](media/vs2019-configure-new-project-hello-world.png "nome e creare un nuovo progetto")

   Visual Studio crea un nuovo progetto, è possibile aggiungere e modificare il codice sorgente. Per impostazione predefinita, il modello di App Console viene compilata nel codice sorgente con un'app "Hello World":

   ![Progetto di Hello World nell'IDE](media/vs2019-hello-world-code.png "progetto Hello World nell'IDE")

   Quando il codice di aspetto simile al seguente nell'editor, si è pronti per andare al passaggio successivo e compilare l'app.

::: moniker-end

::: moniker range="<=vs-2017"

1. In Visual Studio, aprire il **File** dal menu e scegliere **nuovo > progetto** per aprire il **nuovo progetto** finestra di dialogo.

   ![Aprire la finestra di dialogo Nuovo progetto](media/vscpp-file-new-project.gif "aprire la finestra di dialogo Nuovo progetto")

1. Nel **nuovo progetto** finestra di dialogo, seleziona **installati**, **Visual C++** se non è già selezionato e quindi scegliere il **progetto vuoto** modello. Nel **Name** immettere *HelloWorld*. Scegli **OK** per creare il progetto.

   ![Assegnare un nome e creare un nuovo progetto](media/vscpp-concierge-project-name-callouts.png "nome e creare un nuovo progetto")

Visual Studio crea un nuovo progetto vuoto, pronto per specializzare per il tipo di app che si desidera creare e aggiungere i file del codice sorgente. Verranno eseguite più avanti.

[Si è verificato un problema.](#create-your-app-project-issues)

## <a name="make-your-project-a-console-app"></a>Rendere il progetto di un'app console

Visual Studio è possibile creare tutti i tipi di componenti e App per Windows e altre piattaforme. Il **progetto vuoto** modello non è specifica su quale tipo di app viene creato. Per creare un *app console*, uno che viene eseguito in una console o finestra del prompt dei comandi, è necessario indicare a Visual Studio per compilare l'app per l'utilizzo del sottosistema console.

1. In Visual Studio, aprire il **progetto** menu e scegliere **delle proprietà** per aprire il **pagine delle proprietà HelloWorld** finestra di dialogo.

1. Nel **pagine delle proprietà** finestra di dialogo, sotto **le proprietà di configurazione**, selezionare **Linker**, **sistema**e quindi scegliere la casella di modifica accanto a il **sottosistema** proprietà. Nel menu a discesa visualizzato, selezionare **Console (/ /SUBSYSTEM: CONSOLE)**. Scegliere **OK** per salvare le modifiche.

   ![Aprire la finestra di dialogo Pagine delle proprietà](media/vscpp-properties-linker-subsystem.gif "aprire la finestra di dialogo Pagine delle proprietà")

Visual Studio riconosce automaticamente a questo punto compilare il progetto per l'esecuzione in una finestra della console. Si verrà successivamente, aggiungere un file di codice sorgente e immettere il codice per l'app.

[Si è verificato un problema.](#make-your-project-a-console-app-issues)

## <a name="add-a-source-code-file"></a>Aggiungere un file di codice sorgente

1. Nelle **Esplora soluzioni**, selezionare il progetto HelloWorld. Nella barra dei menu, scegliere **Project**, **Aggiungi nuovo elemento** per aprire il **Aggiungi nuovo elemento** finestra di dialogo.

1. Nel **Aggiungi nuovo elemento** finestra di dialogo, seleziona **Visual C++** sotto **Installed** se non è già selezionata. Nel riquadro centrale, selezionare **file di C++ (. cpp)**. Modifica il **Name** al *HelloWorld.cpp*. Scegli **Add** per chiudere la finestra di dialogo e creare il file.

   ![Aggiungere un file di origine per HelloWorld.cpp](media/vscpp-add-new-item.gif "aggiungere un file di origine per HelloWorld.cpp")

Visual studio crea un file di codice sorgente nuovo e vuoto e viene aperta in una finestra dell'editor, pronta per immettere il codice sorgente.

[Si è verificato un problema.](#add-a-source-code-file-issues)

## <a name="add-code-to-the-source-file"></a>Aggiungere codice al file di origine

1. Copiare questo codice nella finestra dell'editor HelloWorld.cpp.

   ```cpp
   #include <iostream>

   int main()
   {
       std::cout << "Hello, world!" << std::endl;
       return 0;
   }
   ```

   Il codice dovrebbe essere simile al seguente nella finestra dell'editor:

   ![Il codice nell'editor del codice World Hello](media/vscpp-hello-world-editor.png "codice Hello World nell'editor")

Quando il codice di aspetto simile al seguente nell'editor, si è pronti per andare al passaggio successivo e compilare l'app.

[Si è verificato un problema.](#add-a-source-code-file-issues)

::: moniker-end

## <a name="next-steps"></a>Passaggi successivi

> [!div class="nextstepaction"]
> [Compilare ed eseguire un progetto C++](vscpp-step-2-build.md)

::: moniker range="<=vs-2017"

## <a name="troubleshooting-guide"></a>Guida alla risoluzione dei problemi

Qui è per le soluzioni ai problemi comuni quando si crea il primo progetto in C++.

### <a name="create-your-app-project-issues"></a>Crea la tua app problemi del progetto

Se il **nuovo progetto** finestra di dialogo non viene visualizzato un **Visual C++** voce sotto **installato**, probabilmente la copia di Visual Studio non ha la **Desktop sviluppo con C++** installato il carico di lavoro. È possibile eseguire il programma di installazione direttamente dai **nuovo progetto** finestra di dialogo. Scegliere il **aperto Visual Studio Installer** collegamento per avviare nuovamente il programma di installazione. Se il **User Account Control** finestra di dialogo richiede le autorizzazioni, scegliere **Yes**. Nel programma di installazione, assicurarsi che il **sviluppo di applicazioni Desktop con C++** carico di lavoro sia selezionata e scegliere **OK** per aggiornare l'installazione di Visual Studio.

Se un altro progetto con lo stesso nome esiste già, scegliere un altro nome per il progetto, o eliminare il progetto esistente e riprovare. Per eliminare un progetto esistente, eliminare la cartella della soluzione (la cartella che contiene il file HelloWorld. sln) in Esplora File.

[Tornare indietro](#create-your-app-project).

### <a name="make-your-project-a-console-app-issues"></a>Rendere il progetto problemi un'app console

Se non viene visualizzata **Linker** elencato in **delle proprietà di configurazione**, scegliere **Annulla** per chiudere il **pagine delle proprietà** finestra di dialogo e quindi Assicurarsi che il **HelloWorld** progetto sia selezionato nel **Esplora soluzioni**, non la soluzione o un altro file o la cartella prima di riprovare.

Il controllo elenco a discesa non viene visualizzato nei **sottosistema** proprietà casella di modifica fino a quando non si seleziona la proprietà. È possibile selezionarlo con il puntatore del mouse o premere Tab per scorrere i controlli di finestra di dialogo fino **sottosistema** è evidenziato. Scegliere il controllo a discesa oppure premere Alt + freccia giù per aprirlo.

[Indietro](#make-your-project-a-console-app)

### <a name="add-a-source-code-file-issues"></a>Aggiungere un problemi di file del codice sorgente

È accettabile se il file di codice sorgente si assegna un nome diverso. Tuttavia, non aggiungere più di un file di codice sorgente che contiene lo stesso codice al progetto.

Se il tipo non corretto del file è stato aggiunto al progetto, ad esempio, un file di intestazione, eliminarlo e riprovare. Per eliminare il file, selezionarlo nella **Esplora soluzioni** e premere il tasto CANC.

[Tornare indietro](#add-a-source-code-file).

### <a name="add-code-to-the-source-file-issues"></a>Aggiungere codice per i problemi di file di origine

Se si chiude accidentalmente finestra del codice sorgente file editor, per riaprirlo, fare doppio clic su HelloWorld.cpp nel **Esplora soluzioni** finestra.

Se le sottolineature rosse vengono visualizzati in qualsiasi elemento nell'editor del codice sorgente, verificare che il codice corrisponda all'esempio di ortografia, segni di punteggiatura e case. Case è significativa nel codice C++.

[Tornare indietro](#add-code-to-the-source-file).

::: moniker-end

<iframe src="" height="0" width="0" frameborder="0" name="frameTarget" />
