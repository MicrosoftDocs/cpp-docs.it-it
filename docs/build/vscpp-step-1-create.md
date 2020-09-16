---
title: Creare un progetto di app console C++
description: Creare un'app console Hello World usando Microsoft C++ in Visual Studio.
ms.custom: mvc
ms.date: 04/20/2020
ms.topic: tutorial
ms.assetid: 45138d70-719d-42dc-90d7-1d0ca31a2f54
ms.openlocfilehash: 333bb6ce1f3ea0db6b07d70ddd60d4a4be337abd
ms.sourcegitcommit: c1fd917a8c06c6504f66f66315ff352d0c046700
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/16/2020
ms.locfileid: "90686509"
---
# <a name="create-a-c-console-app-project"></a>Creare un progetto di app console C++

In genere il punto di partenza per un programmatore C++ è un'applicazione "Hello, world!" eseguita sulla riga di comando. Questo è ciò che verrà creato in Visual Studio in questo passaggio.

## <a name="prerequisites"></a>Prerequisiti

- Visual Studio con il carico di lavoro Sviluppo di applicazioni desktop con C++ deve essere installato e in esecuzione nel computer. Se non è ancora installato, vedere [Installare il supporto C++ in Visual Studio](vscpp-step-0-installation.md).

## <a name="create-your-app-project"></a>Creare il progetto di app

Visual Studia usa i *progetti* per organizzare il codice per un'applicazione e le *soluzioni* per organizzare i progetti. Un progetto contiene tutte le opzioni, le configurazioni e le regole usate per la compilazione dell'applicazione. Gestisce la relazione tra tutti i file del progetto ed eventuali file esterni. Per creare l'applicazione, per prima cosa creare un nuovo progetto e una soluzione.

::: moniker range=">=vs-2019"

1. In Visual Studio aprire il menu **file** e scegliere **nuovo > progetto** per aprire la finestra di dialogo **Crea un nuovo progetto** . Selezionare il modello **applicazione console** con i **Tag C++**, **Windows**e **console** , quindi scegliere **Avanti**.

   ![Creare un nuovo progetto](media/vs2019-choose-console-app.png "Aprire la finestra di dialogo Crea un nuovo progetto")

1. Nella finestra di dialogo **Configura nuovo progetto** immettere *HelloWorld* nella casella di modifica **nome progetto** . Scegliere **Crea** per creare il progetto.

   ![Screenshot della finestra di dialogo Configura nuovo progetto con Hello World digitato nel campo di testo nome progetto.](media/vs2019-configure-new-project-hello-world.png "Nome e creazione del nuovo progetto")

   Visual Studio crea un nuovo progetto. È possibile aggiungere e modificare il codice sorgente. Per impostazione predefinita, il modello di applicazione console compila il codice sorgente con un'app "Hello World":

   ![Hello World progetto nell'IDE](media/vs2019-hello-world-code.png "Hello World progetto nell'IDE")

   Quando il codice è simile a questo nell'editor, è possibile passare al passaggio successivo e compilare l'app.

[Si è verificato un problema.](#create-your-app-project-issues)

::: moniker-end

::: moniker range="<=vs-2017"

1. In Visual Studio aprire il menu **file** e scegliere **nuovo > progetto** per aprire la finestra di dialogo **nuovo progetto** .

   ![Aprire la finestra di dialogo Nuovo progetto](media/vscpp-file-new-project.gif "Aprire la finestra di dialogo Nuovo progetto")

1. Nella finestra di dialogo **nuovo progetto** selezionare **installato > Visual C++** se non è già selezionato, quindi scegliere il modello di **progetto vuoto** . Nel campo **nome** immettere *HelloWorld*. Scegliere **OK** per creare il progetto.

   ![Screenshot della finestra di dialogo nuovo progetto con installato > Visual C Plus più selezionato e denominato out, l'opzione di progetto vuota denominata out e hellow World digitato nella casella di testo nome.](media/vscpp-concierge-project-name-callouts.png "Nome e creazione del nuovo progetto")

Visual Studio crea un nuovo progetto vuoto. È possibile specializzarsi per il tipo di app che si vuole creare e aggiungere i file di codice sorgente. Questa operazione verrà eseguita più avanti.

[Si è verificato un problema.](#create-your-app-project-issues)

## <a name="make-your-project-a-console-app"></a>Rendere il progetto un'app console

Visual Studio consente di creare tutti i tipi di app e componenti per Windows e altre piattaforme. Il modello di **progetto vuoto** non è specifico del tipo di app che crea. Un' *app console* è una che viene eseguita in una finestra del prompt dei comandi o della console. Per crearne uno, è necessario indicare a Visual Studio di compilare l'app per l'uso del sottosistema della console.

1. In Visual Studio aprire il menu **progetto** e scegliere **Proprietà** per aprire la finestra di dialogo **pagine delle proprietà HelloWorld** .

1. Nella finestra di dialogo **pagine delle proprietà** selezionare **proprietà di configurazione > linker > System**, quindi scegliere la casella di modifica accanto alla proprietà **sottosistema** . Nel menu a discesa visualizzato selezionare **Console (/Subsystem: console)**. Scegliere **OK** per salvare le modifiche.

   ![Aprire la finestra di dialogo Pagine delle proprietà](media/vscpp-properties-linker-subsystem.gif "Aprire la finestra di dialogo Pagine delle proprietà")

Visual Studio ora sa come compilare il progetto per l'esecuzione in una finestra della console. Successivamente, si aggiungerà un file di codice sorgente e si immetterà il codice per l'app.

[Si è verificato un problema.](#make-your-project-a-console-app-issues)

## <a name="add-a-source-code-file"></a>Aggiungere un file di codice sorgente

1. In **Esplora soluzioni**selezionare il progetto HelloWorld. Sulla barra dei menu scegliere **progetto**, **Aggiungi nuovo elemento** per aprire la finestra di dialogo **Aggiungi nuovo elemento** .

1. Nella finestra di dialogo **Aggiungi nuovo elemento** selezionare **Visual C++** in **installato** , se non è già selezionato. Nel riquadro centrale selezionare file di **C++ (. cpp)**. Modificare il **nome** in *HelloWorld. cpp*. Scegliere **Aggiungi** per chiudere la finestra di dialogo e creare il file.

   ![Aggiungere un file di origine per HelloWorld. cpp](media/vscpp-add-new-item.gif "Aggiungere un file di origine per HelloWorld. cpp")

Visual Studio crea un nuovo file di codice sorgente vuoto e lo apre in una finestra dell'editor, pronto per l'immissione del codice sorgente.

[Si è verificato un problema.](#add-a-source-code-file-issues)

## <a name="add-code-to-the-source-file"></a>Aggiungere codice al file di origine

1. Copiare questo codice nella finestra dell'editor HelloWorld. cpp.

   ```cpp
   #include <iostream>

   int main()
   {
       std::cout << "Hello, world!" << std::endl;
       return 0;
   }
   ```

   Il codice dovrebbe essere simile al seguente nella finestra dell'Editor:

   ![Codice Hello World nell'editor](media/vscpp-hello-world-editor.png "Codice Hello World nell'editor")

Quando il codice è simile a questo nell'editor, è possibile passare al passaggio successivo e compilare l'app.

[Si è verificato un problema.](#add-a-source-code-file-issues)

::: moniker-end

## <a name="next-steps"></a>Passaggi successivi

> [!div class="nextstepaction"]
> [Compilare ed eseguire un progetto C++](vscpp-step-2-build.md)

## <a name="troubleshooting-guide"></a>Guida per la risoluzione dei problemi

Ecco le soluzioni ai problemi comuni quando si crea il primo progetto C++.

### <a name="create-your-app-project-issues"></a>Creare il progetto dell'app: problemi

::: moniker range="vs-2019"

Nella finestra di dialogo **nuovo progetto** dovrebbe essere visualizzato un modello di **applicazione console** con tag **C++**, **Windows**e **console** . Se non viene visualizzato, è possibile che si verifichino due cause. Potrebbe essere escluso dall'elenco oppure potrebbe non essere installato. Prima di tutto, controllare i menu a discesa dei filtri nella parte superiore dell'elenco di modelli. Impostarli su **C++**, **Windows**e **console**. Verrà visualizzato il modello di **applicazione console** C++. in caso contrario, il carico **di lavoro sviluppo di applicazioni desktop con C++** non è installato.

Per installare **lo sviluppo di applicazioni desktop con C++**, è possibile eseguire il programma di installazione direttamente dalla finestra di dialogo **nuovo progetto** . Scegliere il collegamento **Installa altri strumenti e funzionalità** nella parte inferiore dell'elenco dei modelli per avviare il programma di installazione. Se la finestra di dialogo **controllo dell'account utente** richiede le autorizzazioni, scegliere **Sì**. Nel programma di installazione, verificare che il carico di lavoro **sviluppo di applicazioni desktop con C++** sia selezionato. Quindi scegliere **modifica** per aggiornare l'installazione di Visual Studio.

Se esiste già un altro progetto con lo stesso nome, scegliere un altro nome per il progetto. In alternativa, eliminare il progetto esistente e riprovare. Per eliminare un progetto esistente, eliminare la cartella della soluzione, ovvero la cartella che contiene il file *HelloWorld. sln* , in Esplora file.

Tornare [indietro](#create-your-app-project).

::: moniker-end

::: moniker range="vs-2017"

Se nella finestra di dialogo **nuovo progetto** non viene visualizzata una voce di **Visual C++** in **installato**, è probabile che la copia di Visual Studio non abbia installato il carico di lavoro sviluppo di applicazioni **desktop con C++** . È possibile eseguire il programma di installazione direttamente dalla finestra di dialogo **nuovo progetto** . Scegliere il collegamento **apri programma di installazione di Visual Studio** per avviare di nuovo il programma di installazione. Se la finestra di dialogo **controllo dell'account utente** richiede le autorizzazioni, scegliere **Sì**. Se necessario, aggiornare il programma di installazione. Nel programma di installazione, verificare che il carico di lavoro **sviluppo di applicazioni desktop con C++** sia selezionato e scegliere **OK** per aggiornare l'installazione di Visual Studio.

::: moniker-end

::: moniker range="<=vs-2017"

Se esiste già un altro progetto con lo stesso nome, scegliere un altro nome per il progetto. In alternativa, eliminare il progetto esistente e riprovare. Per eliminare un progetto esistente, eliminare la cartella della soluzione, ovvero la cartella che contiene il file *HelloWorld. sln* , in Esplora file.

Tornare [indietro](#create-your-app-project).

### <a name="make-your-project-a-console-app-issues"></a>Rendere il progetto un'app console: problemi

Se il **linker** non è elencato in **proprietà di configurazione**, scegliere **Annulla** per chiudere la finestra di dialogo **pagine delle proprietà** . Verificare che il progetto **HelloWorld** sia selezionato in **Esplora soluzioni** prima di riprovare. Non selezionare la soluzione **HelloWorld** o un altro elemento in **Esplora soluzioni**.

Il controllo a discesa non viene visualizzato nella casella di modifica della proprietà del **sottosistema** fino a quando non si seleziona la proprietà. Fare clic nella casella di modifica per selezionarla. In alternativa, è possibile premere **Tab** per scorrere i controlli della finestra di dialogo fino a quando non viene evidenziato il **sottosistema** . Scegliere il controllo a discesa o premere **ALT + freccia giù** per aprirlo.

[Indietro](#make-your-project-a-console-app)

### <a name="add-a-source-code-file-issues"></a>Aggiungere un file di codice sorgente: problemi

È accettabile se si assegna al file del codice sorgente un nome diverso. Tuttavia, non aggiungere più di un file che contiene lo stesso codice al progetto.

Se è stato aggiunto il tipo di file errato al progetto, ad esempio un file di intestazione, eliminarlo e riprovare. Per eliminare il file, selezionarlo in **Esplora soluzioni**. Quindi premere il tasto **Canc** .

Tornare [indietro](#add-a-source-code-file).

### <a name="add-code-to-the-source-file-issues"></a>Aggiungere codice al file di origine: problemi

Se la finestra dell'editor del file del codice sorgente è stata chiusa accidentalmente, è possibile riaprirla con facilità. Per aprirlo, fare doppio clic su HelloWorld. cpp nella finestra **Esplora soluzioni** .

Se la controllo ortografia durante rossa viene visualizzata sotto qualsiasi elemento nell'editor del codice sorgente, verificare che il codice corrisponda all'esempio in ortografia, punteggiatura e maiuscole/minuscole. Il caso è significativo nel codice C++.

Tornare [indietro](#add-code-to-the-source-file).

::: moniker-end

<iframe src="" height="0" width="0" frameborder="0" name="frameTarget" />
