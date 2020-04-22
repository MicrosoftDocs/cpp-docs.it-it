---
title: Creare un progetto di app console C++
description: Creare un'app console Hello World usando Microsoft C.
ms.custom: mvc
ms.date: 04/20/2020
ms.topic: tutorial
ms.assetid: 45138d70-719d-42dc-90d7-1d0ca31a2f54
ms.openlocfilehash: 07e88da9a8a3712e1d37e319c29fd25aebce8ea7
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81749303"
---
# <a name="create-a-c-console-app-project"></a>Creare un progetto di app console C++

In genere il punto di partenza per un programmatore C++ è un'applicazione "Hello, world!" eseguita sulla riga di comando. Questo è ciò che verrà creato in Visual Studio in questo passaggio.

## <a name="prerequisites"></a>Prerequisiti

- Visual Studio con il carico di lavoro Sviluppo di applicazioni desktop con C++ deve essere installato e in esecuzione nel computer. Se non è ancora installato, vedere [Installare il supporto C++ in Visual Studio](vscpp-step-0-installation.md).

## <a name="create-your-app-project"></a>Creare il progetto di app

Visual Studia usa i *progetti* per organizzare il codice per un'applicazione e le *soluzioni* per organizzare i progetti. Un progetto contiene tutte le opzioni, le configurazioni e le regole usate per la compilazione dell'applicazione. Gestisce la relazione tra tutti i file del progetto e tutti i file esterni. Per creare l'applicazione, per prima cosa creare un nuovo progetto e una soluzione.

::: moniker range=">=vs-2019"

1. In Visual Studio aprire il menu **File** e scegliere **Nuovo progetto >** per aprire la finestra di dialogo Crea un nuovo **progetto.** Selezionare il modello **di app console** con i tag di **,** **Windows**e **Console,** quindi scegliere **Avanti**.

   ![Creare un nuovo progetto](media/vs2019-choose-console-app.png "Aprire la finestra di dialogo Crea un nuovo progetto")

1. Nella finestra di dialogo **Configura il nuovo progetto** immettere *HelloWorld* nella casella di modifica **Nome progetto.** Scegliere **Crea** per creare il progetto.

   ![Assegnare un nome e creare il nuovo progetto](media/vs2019-configure-new-project-hello-world.png "Assegnare un nome e creare il nuovo progetto")

   Visual Studio crea un nuovo progetto. È pronto per aggiungere e modificare il codice sorgente. Per impostazione predefinita, il modello di app console inserisce il codice sorgente con un'app "Hello World":

   ![Progetto Hello World nell'IDE](media/vs2019-hello-world-code.png "Progetto Hello World nell'IDE")

   Quando il codice è simile al seguente nell'editor, è possibile passare al passaggio successivo e compilare l'app.

[Si è verificato un problema.](#create-your-app-project-issues)

::: moniker-end

::: moniker range="<=vs-2017"

1. In Visual Studio aprire il menu **File** e scegliere **Nuovo progetto >** per aprire la finestra di dialogo Nuovo **progetto.**

   ![Aprire la finestra di dialogo Nuovo progetto](media/vscpp-file-new-project.gif "Aprire la finestra di dialogo Nuovo progetto")

1. Nella finestra di dialogo **Nuovo progetto,** selezionare **Installato > Visual C,** se non è già selezionato, quindi scegliere il modello **Progetto vuoto.** Nel campo **Nome** immettere *HelloWorld*. Scegliere **OK** per creare il progetto.

   ![Assegnare un nome e creare il nuovo progetto](media/vscpp-concierge-project-name-callouts.png "Assegnare un nome e creare il nuovo progetto")

Visual Studio crea un nuovo progetto vuoto. È pronto per essere specializzato per il tipo di app che vuoi creare e per aggiungere i file di codice sorgente. Questa operazione verrà eseguita più avanti.

[Si è verificato un problema.](#create-your-app-project-issues)

## <a name="make-your-project-a-console-app"></a>Rendere il progetto un'app console

Visual Studio può creare tutti i tipi di app e componenti per Windows e altre piattaforme. Il modello **Progetto vuoto** non è specifico del tipo di app che crea. Un'app console è *un'app* che viene eseguita in una console o in una finestra del prompt dei comandi. Per crearne uno, devi indicare a Visual Studio di compilare la tua app per usare il sottosistema della console.

1. In Visual Studio aprire il menu Progetto e scegliere Proprietà per aprire la finestra di dialogo Pagine delle proprietà di **HelloWorld.In Visual** Studio, open the **Project** menu and choose **Properties** to open the HelloWorld Property Pages dialog.

1. Nella finestra di dialogo **Pagine delle proprietà** selezionare Proprietà di configurazione > Linker > **System**, quindi scegliere la casella di modifica accanto alla proprietà **Subsystem** . Nel menu a discesa visualizzato, selezionare **Console (/SUBSYSTEM:CONSOLE)**. Scegliere **OK** per salvare le modifiche.

   ![Aprire la finestra di dialogo Pagine delle proprietà](media/vscpp-properties-linker-subsystem.gif "Aprire la finestra di dialogo Pagine delle proprietà")

Visual Studio ora sa di compilare il progetto per l'esecuzione in una finestra della console. Successivamente, si aggiungerà un file di codice sorgente e immettere il codice per l'app.

[Si è verificato un problema.](#make-your-project-a-console-app-issues)

## <a name="add-a-source-code-file"></a>Aggiungere un file di codice sorgenteAdd a source code file

1. In **Esplora soluzioni**selezionare il progetto HelloWorld.In Solution Explorer , select the HelloWorld project. Nella barra dei menu scegliere **Progetto**, **Aggiungi nuovo elemento** per aprire la finestra di dialogo Aggiungi nuovo **elemento.**

1. Nella finestra di dialogo **Aggiungi nuovo elemento,** selezionare **Visual C,** in **Installato,** se non è già selezionato. Nel riquadro centrale, selezionare il **file di C, ovvero cpp,**. Modificare il **nome** in *HelloWorld.cpp*. Scegliere **Aggiungi** per chiudere la finestra di dialogo e creare il file.

   ![Aggiungere un file di origine per HelloWorld.cppAdd a source file for HelloWorld.cpp](media/vscpp-add-new-item.gif "Aggiungere un file di origine per HelloWorld.cppAdd a source file for HelloWorld.cpp")

Visual Studio crea un nuovo file di codice sorgente vuoto e lo apre in una finestra dell'editor, pronto per immettere il codice sorgente.

[Si è verificato un problema.](#add-a-source-code-file-issues)

## <a name="add-code-to-the-source-file"></a>Aggiungere codice al file di origineAdd code to the source file

1. Copiare questo codice nella finestra dell'editor HelloWorld.cpp.Copy this code into the HelloWorld.cpp editor window.

   ```cpp
   #include <iostream>

   int main()
   {
       std::cout << "Hello, world!" << std::endl;
       return 0;
   }
   ```

   Il codice dovrebbe essere simile al seguente nella finestra dell'editor:The code should look like this in the editor window:

   ![Codice Hello World nell'editor](media/vscpp-hello-world-editor.png "Codice Hello World nell'editor")

Quando il codice è simile al seguente nell'editor, è possibile passare al passaggio successivo e compilare l'app.

[Si è verificato un problema.](#add-a-source-code-file-issues)

::: moniker-end

## <a name="next-steps"></a>Passaggi successivi

> [!div class="nextstepaction"]
> [Compilazione ed esecuzione di un progetto in C](vscpp-step-2-build.md)

## <a name="troubleshooting-guide"></a>Guida per la risoluzione dei problemi

Quando si crea il primo progetto in C.

### <a name="create-your-app-project-issues"></a>Creare il progetto dell'app: problemiCreate your app project: issues

::: moniker range="vs-2019"

Nella finestra di dialogo **Nuovo progetto** dovrebbe essere visualizzato un modello di **App console** con i tag **c'è**, **Windows**e **Console.** Se non lo vedi, ci sono due possibili cause. Potrebbe essere escluso dall'elenco o potrebbe non essere installato. Per prima cosa, controlla gli elenchi a discesa dei filtri nella parte superiore dell'elenco dei modelli. Impostarli su **,** **Windows**e **Console**. Dovrebbe essere visualizzato il modello di **app per** console di C. in caso contrario, non è installato il carico di lavoro **Sviluppo desktop con C** .

Per installare **lo sviluppo di desktop con c'è**, è possibile eseguire il programma di installazione direttamente dalla finestra di dialogo Nuovo **progetto.** Scegliere il collegamento **Installa altri strumenti e funzionalità** nella parte inferiore dell'elenco dei modelli per avviare il programma di installazione. Se la finestra di dialogo **Controllo account utente** richiede autorizzazioni, scegliere **Sì**. Nel programma di installazione, assicurarsi che sia controllato lo sviluppo del desktop con il carico di lavoro **di C.** Scegliere **quindi Modifica** per aggiornare l'installazione di Visual Studio.Then choose Modify to update your Visual Studio installation.

Se esiste già un altro progetto con lo stesso nome, scegliere un altro nome per il progetto. In alternativa, eliminare il progetto esistente e riprovare. Per eliminare un progetto esistente, eliminare la cartella della soluzione (la cartella che contiene il file *helloworld.sln)* in Esplora file.

[Torna indietro](#create-your-app-project).

::: moniker-end

::: moniker range="vs-2017"

Se nella finestra di dialogo **Nuovo progetto** non viene visualizzata una voce di **Visual C,** in **Installato**, è probabile che nella copia di Visual Studio non sia installato lo sviluppo sul desktop con il carico di lavoro di **C.** È possibile eseguire il programma di installazione direttamente dalla finestra di dialogo **Nuovo progetto.** Scegliere il collegamento **Apri programma di installazione** di Visual Studio per avviare nuovamente il programma di installazione. Se la finestra di dialogo **Controllo account utente** richiede autorizzazioni, scegliere **Sì**. Se necessario, aggiornare il programma di installazione. Nel programma di installazione, assicurarsi che sia selezionata la fase di sviluppo del desktop con il carico di lavoro di **C,** quindi scegliere **OK** per aggiornare l'installazione di Visual Studio.

::: moniker-end

::: moniker range="<=vs-2017"

Se esiste già un altro progetto con lo stesso nome, scegliere un altro nome per il progetto. In alternativa, eliminare il progetto esistente e riprovare. Per eliminare un progetto esistente, eliminare la cartella della soluzione (la cartella che contiene il file *helloworld.sln)* in Esplora file.

[Torna indietro](#create-your-app-project).

### <a name="make-your-project-a-console-app-issues"></a>Rendere il progetto un'app console: problemi

Se **il Linker** non è elencato in Proprietà **di configurazione**, scegliere **Annulla** per chiudere la finestra di dialogo Pagine **delle proprietà.** Assicurarsi che il progetto **HelloWorld** sia selezionato in **Esplora soluzioni** prima di riprovare. Non selezionare la soluzione **HelloWorld** o un altro elemento in **Esplora soluzioni**.

Il controllo elenco a discesa non viene visualizzato nella casella di modifica della proprietà **SubSystem** finché non si seleziona la proprietà. Fare clic nella casella di modifica per selezionarla. In alternativa, è possibile premere **TAB** per scorrere i controlli della finestra di dialogo fino a quando Non viene evidenziato **SubSystem.** Scegliere il controllo di elenco a discesa o premere **Alt , Giù** per aprirlo.

[Indietro](#make-your-project-a-console-app)

### <a name="add-a-source-code-file-issues"></a>Aggiungere un file di codice sorgente: problemiAdd a source code file: issues

Va bene se si dà il file di codice sorgente un nome diverso. Tuttavia, non aggiungere più di un file che contiene lo stesso codice al progetto.

Se al progetto è stato aggiunto il tipo di file errato, ad esempio un file di intestazione, eliminarlo e riprovare. Per eliminare il file, selezionarlo in **Esplora soluzioni**. Quindi premere il tasto **Canc.**

[Torna indietro](#add-a-source-code-file).

### <a name="add-code-to-the-source-file-issues"></a>Aggiungere codice al file di origine: problemiAdd code to the source file: issues

Se si chiude accidentalmente la finestra dell'editor di file di codice sorgente, è possibile riaprirla facilmente. Per aprirlo, fare doppio clic su HelloWorld.cpp nella finestra **Esplora soluzioni.**

Se nella parte dell'editor del codice sorgente vengono visualizzati elementi rossi, verificare che il codice corrisponda all'esempio in ortografia, punteggiatura e distinzione tra maiuscole e minuscole. Il caso è significativo nel codice c.

[Torna indietro](#add-code-to-the-source-file).

::: moniker-end

<iframe src="" height="0" width="0" frameborder="0" name="frameTarget" />
