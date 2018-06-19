---
title: Creare un progetto di applicazione console C++ | Documenti Microsoft
description: Creare un'applicazione console Hello World in Visual C++
ms.custom: mvc
ms.date: 12/12/2017
ms.topic: tutorial
ms.technology:
- devlang-C++
ms.devlang: C++
dev_langs:
- C++
ms.assetid: 45138d70-719d-42dc-90d7-1d0ca31a2f54
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 35b7b896dfb2a4c9dd37a9f59476cbc7f23c3902
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32391233"
---
# <a name="create-a-c-console-app-project"></a>Creare un progetto di applicazione console C++

Il normale punto di partenza per un programmatore di C++ è un "Hello, world!" applicazione che viene eseguita nella riga di comando. È ciò che verrà creata in Visual Studio in questo passaggio.

## <a name="prerequisites"></a>Prerequisiti

- Dispone di Visual Studio con lo sviluppo Desktop con carico di lavoro C++ installato e in esecuzione nel computer in uso. Se non è ancora installato, vedere [il supporto di installazione di C++ in Visual Studio](../build/vscpp-step-0-installation.md).

## <a name="create-your-app-project"></a>Creare il progetto di app

Visual Studia usa i *progetti* per organizzare il codice per un'applicazione e le *soluzioni* per organizzare i progetti. Un progetto contiene tutte le opzioni, configurazioni e le regole utilizzate per compilare le applicazioni e gestisce la relazione tra tutti i file del progetto e dei file esterni. Per creare l'app, in primo luogo, si creerà un nuovo progetto e soluzione.

1. In Visual Studio, aprire il **File** menu e scegliere **nuovo > progetto** per aprire la **nuovo progetto** finestra di dialogo.

   ![Aprire la finestra di dialogo Nuovo progetto](../build/media/vscpp-file-new-project.gif "aprire la finestra di dialogo Nuovo progetto")

1. Nel **nuovo progetto** finestra di dialogo Seleziona **installato**, **Visual C++** se non è già selezionata e quindi scegliere il **progetto vuoto** modello. Nel **nome** immettere *HelloWorld*. Scegliere **OK** per creare il progetto.

   ![Assegnare un nome e creare il nuovo progetto](../build/media/vscpp-concierge-project-name-callouts.png "nome e creare il nuovo progetto")

Visual Studio crea un nuovo progetto vuoto, pronto per essere specializzata per il tipo di app che si desidera creare e aggiungere i file del codice sorgente. Verrà eseguita più avanti.

[È verificato un problema.](#create-your-app-project-issues)

## <a name="make-your-project-a-console-app"></a>Che il progetto sia un'applicazione console

Visual Studio è possibile creare tutti i tipi di componenti e App per Windows e altre piattaforme. Il **progetto vuoto** modello non specifico su quale tipo di app viene creata. Per creare un *app console*, uno che viene eseguito in una console o una finestra del prompt dei comandi, è necessario indicare a Visual Studio per compilare l'app per l'utilizzo del sottosistema di console.

1. In Visual Studio, aprire il **progetto** menu e scegliere **proprietà** per aprire la **pagine delle proprietà HelloWorld** finestra di dialogo.

1. Nel **pagine delle proprietà** finestra di dialogo, in **le proprietà di configurazione**selezionare **Linker**, **sistema**e quindi scegliere accanto alla casella di modifica il **sottosistema** proprietà. Nel menu a discesa che viene visualizzato, selezionare **Console (o /SUBSYSTEM: CONSOLE)**. Scegliere **OK** per salvare le modifiche.

   ![Aprire la finestra di dialogo Pagine delle proprietà](../build/media/vscpp-properties-linker-subsystem.gif "aprire la finestra di dialogo Pagine delle proprietà")

Visual Studio è ora in grado di compilare il progetto per l'esecuzione in una finestra della console. Successivamente, si aggiungerai un file di codice sorgente e immettere il codice per l'app.

[È verificato un problema.](#make-your-project-a-console-app-issues)

## <a name="add-a-source-code-file"></a>Aggiungere un file di codice sorgente

1. In **Esplora**, selezionare il progetto HelloWorld. Nella barra dei menu, scegliere **progetto**, **Aggiungi nuovo elemento** per aprire la **Aggiungi nuovo elemento** finestra di dialogo.

1. Nel **Aggiungi nuovo elemento** finestra di dialogo Seleziona **Visual C++** in **installato** se non è già selezionata. Nel riquadro centrale selezionare **file C++ (. cpp)**. Modifica il **nome** a *HelloWorld.cpp*. Scegliere **Aggiungi** per chiudere la finestra di dialogo e creare il file.

   ![Aggiungere un file di origine per HelloWorld.cpp](../build/media/vscpp-add-new-item.gif "aggiungere un file di origine per HelloWorld.cpp")

Visual studio crea un file di codice sorgente di nuovo e vuoto e verrà aperto in una finestra dell'editor, pronta per immettere il codice sorgente.

[È verificato un problema.](#add-a-source-code-file-issues)

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

   Nella finestra dell'editor, il codice dovrebbe essere simile al seguente:

   ![Hello codice World nell'editor](../build/media/vscpp-hello-world-editor.png "codice Hello World nell'editor")

Quando il codice simile al seguente nell'editor, è pronti per andare al passaggio successivo e compilare l'applicazione.

[È verificato un problema.](#add-a-source-code-file-issues)

## <a name="next-steps"></a>Passaggi successivi

> [!div class="nextstepaction"]
> [Compilare ed eseguire un progetto C++](vscpp-step-2-build.md)

## <a name="troubleshooting-guide"></a>Guida alla risoluzione dei problemi

Sono qui per le soluzioni ai problemi comuni quando si crea il primo progetto C++.

### <a name="create-your-app-project-issues"></a>Creare l'app problemi del progetto

Se il **nuovo progetto** non Mostra finestra di dialogo un **Visual C++** voce **installato**, probabilmente la copia di Visual Studio non dispone di **Desktop sviluppo con C++** installato carico di lavoro. È possibile eseguire il programma di installazione direttamente dal **nuovo progetto** finestra di dialogo. Scegliere il **aprire Visual Studio Installer** collegamento per avviare nuovamente il programma di installazione. Se il **controllo dell'Account utente** finestra di dialogo richiede le autorizzazioni, scegliere **Sì**. Nel programma di installazione, assicurarsi che il **sviluppo di applicazioni Desktop con C++** carico di lavoro è selezionata e scegliere **OK** per aggiornare l'installazione di Visual Studio.

Se esiste già un altro progetto con lo stesso nome, scegliere un altro nome per il progetto, o eliminare il progetto esistente e riprovare. Per eliminare un progetto esistente, eliminare la cartella della soluzione (la cartella che contiene il file HelloWorld. sln) in Esplora File.

[Tornare indietro](#create-your-app-project).

### <a name="make-your-project-a-console-app-issues"></a>Che il progetto sia un problemi app console

Se non viene visualizzato **Linker** sotto **le proprietà di configurazione**, scegliere **Annulla** per chiudere la **pagine delle proprietà** finestra di dialogo e quindi Assicurarsi che il **HelloWorld** progetto selezionato **Esplora**, non la soluzione o un altro file o la cartella prima di riprovare.

Il controllo elenco a discesa non viene visualizzata la **sottosistema** proprietà casella di modifica fino a quando non si seleziona la proprietà. È possibile selezionarlo utilizzando il puntatore o è possibile premere Tab per scorrere i controlli di finestra di dialogo fino al **sottosistema** viene evidenziato. Scegliere il controllo elenco a discesa oppure premere Alt + freccia giù per aprirlo.

[Indietro](#make-your-project-a-console-app)

### <a name="add-a-source-code-file-issues"></a>Aggiungere un problemi di file di codice sorgente

È accettabile se il file di codice sorgente si assegna un nome diverso. Tuttavia, non aggiungere più di un file di codice sorgente che contiene lo stesso codice al progetto.

Se il tipo di file errato è stato aggiunto al progetto, ad esempio, un file di intestazione, eliminarlo e riprovare. Per eliminare il file, selezionarlo in **Esplora** e premere il tasto CANC.

[Tornare indietro](#add-a-source-code-file).

### <a name="add-code-to-the-source-file-issues"></a>Aggiungere codice per i problemi di file di origine

Se si chiude accidentalmente finestra del codice sorgente file editor, per aprire di nuovo, fare doppio clic su HelloWorld.cpp nel **Esplora** finestra.

Se le sottolineature rosse vengono visualizzati in qualsiasi elemento nell'editor del codice sorgente, verificare che il codice corrisponda all'esempio nel caso ortografia e punteggiatura. Case è significativo nel codice C++.

[Tornare indietro](#add-code-to-the-source-file).

<iframe src="" height="0" width="0" frameborder="0" name="frameTarget" />