---
title: Compilare un' c++ /CLI programma destinato a CLR
description: Utilizzare Microsoft C++ per creare programmi e librerie che possono connettersi nativo C++ codice e i programmi .NET.
ms.date: 04/23/2019
helpviewer_keywords:
- command-line applications [C++], managed code
- compiling programs [C++]
- Visual C++, managed code
- managed code [C++]
ms.assetid: 339f89df-a5d2-4040-831a-ddbe25b5dce4
ms.openlocfilehash: 8462b2b031bdcdebf65d58974c521d80e57d856d
ms.sourcegitcommit: da32511dd5baebe27451c0458a95f345144bd439
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2019
ms.locfileid: "65221803"
---
# <a name="walkthrough-compile-a-ccli-program-that-targets-the-clr-in-visual-studio"></a>Procedura dettagliata: Compilare un' c++ /CLI programma destinato a CLR in Visual Studio

Tramite C++o della riga di comando è possibile creare C++ i programmi che utilizzano classi .NET, nonché nativo C++ tipi. C++/ CLI è destinato all'uso in applicazioni console e nelle DLL che eseguono il wrapping nativo C++ del codice e renderla accessibile da programmi .NET. Per creare un'interfaccia utente di Windows basata su .NET, usare C# o Visual Basic. 

Per questa procedura, è possibile digitare il proprio programma C++ o usare uno dei programmi di esempio. Il programma di esempio usato in questa procedura crea un file di testo con nome textfile.txt e lo salva nella directory del progetto.

## <a name="prerequisites"></a>Prerequisiti

- Conoscenza delle nozioni di base del linguaggio C++.
- In Visual Studio 2017 e versioni successive, C++supporto dell'interfaccia della riga è un componente facoltativo. Per installarlo, aprire il **programma di installazione di Visual Studio** dal menu Start di Windows. Assicurarsi che il **sviluppo di applicazioni Desktop con C++**  riquadro è selezionato e nel **facoltativo** sezione componenti, anche controllo di  **C++supporto**.

## <a name="create-a-new-project"></a>Creare un nuovo progetto

Questa procedura varia a seconda di quale versione di Visual Studio in uso. Assicurarsi che il selettore di versione in alto a sinistra della pagina sia impostato correttamente.

::: moniker range="vs-2019"

### <a name="to-create-a-ccli-project-in-visual-studio-2019"></a>Per creare un C++progetto /CLI in Visual Studio 2019

1. Nelle **Esplora soluzioni**, fare clic su alto per aprire il **creare un nuovo progetto** nella finestra di dialogo.

1. Nella parte superiore della finestra di dialogo, digitare **CLR** nella ricerca e quindi selezionare **progetto CLR vuoto** dall'elenco dei risultati. 

1. Scegliere il **Create** pulsante per creare il progetto.

::: moniker-end

::: moniker range="vs-2017"

### <a name="to-create-a-ccli-project-in-visual-studio-2017"></a>Per creare un C++progetto /CLI in Visual Studio 2017

1. Creare un nuovo progetto. Scegliere **Nuovo** dal menu **File**, quindi fare clic su **Progetto**.

1. Nei tipi di progetto di Visual C++ fare clic su **CLR** e quindi su **Progetto CLR vuoto**.

1. Digitare un nome di progetto. Per impostazione predefinita la soluzione che contiene il progetto ha lo stesso nome del nuovo progetto, ma è possibile immettere un nome diverso. Se si vuole è anche possibile immettere un percorso diverso per il progetto.

1. Fare clic su **OK** per creare il nuovo progetto.

::: moniker-end

::: moniker range="vs-2015"

### <a name="to-create-a-ccli-project-in-visual-studio-2015"></a>Per creare un C++progetto /CLI in Visual Studio 2015

1. Creare un nuovo progetto. Scegliere **Nuovo** dal menu **File**, quindi fare clic su **Progetto**.

1. Nei tipi di progetto di Visual C++ fare clic su **CLR** e quindi su **Progetto CLR vuoto**.

1. Digitare un nome di progetto. Per impostazione predefinita la soluzione che contiene il progetto ha lo stesso nome del nuovo progetto, ma è possibile immettere un nome diverso. Se si vuole è anche possibile immettere un percorso diverso per il progetto.

1. Fare clic su **OK** per creare il nuovo progetto.

::: moniker-end

## <a name="add-a-source-file"></a>Aggiungere un file di origine

1. Se **Esplora soluzioni** non è visibile, scegliere **Esplora soluzioni** dal menu **Visualizza**.

1. Aggiungere un nuovo file di origine al progetto:

   - Fare clic con il pulsante destro del mouse sulla cartella **File di origine** in **Esplora soluzioni**, selezionare **Aggiungi** e fare clic su **Nuovo elemento**.

   - Fare clic su **File C++ (.cpp)** e digitare un nome file, quindi fare clic su **Aggiungi**.

   Il file con estensione **cpp** viene visualizzato nella cartella **File di origine** in **Esplora soluzioni** e una finestra a schede consente di digitare il codice da inserire nel file.

1. Fare clic sulla scheda appena creata in Visual Studio e digitare un programma Visual C++ valido oppure copiare e incollare uno dei programmi di esempio.

   Ad esempio è possibile usare il programma disponibile in [Procedura: Scrivere un file di testo (C++/CLI)](how-to-write-a-text-file-cpp-cli.md) (nel nodo **Gestione di file e I/O** della Guida alla programmazione).

   Se si usa il programma di esempio, si noti che viene usata la parola chiave `gcnew` anziché la parola chiave `new` quando si crea un oggetto .NET e che `gcnew` restituisce un handle (`^`) anziché un puntatore (`*`):

   `StreamWriter^ sw = gcnew StreamWriter(fileName);`

   Per altre informazioni su C++sintassi /CLI, vedere [Component Extensions for Runtime Platforms](../extensions/component-extensions-for-runtime-platforms.md).

1. Scegliere **Compila soluzione** dal menu **Compila**.

   La finestra **Output** visualizza informazioni sullo stato della compilazione, quali la posizione del log di compilazione e un messaggio con lo stato del processo di compilazione.

   Se si apportano modifiche e si esegue il programma senza eseguire la compilazione, è possibile che una finestra di dialogo segnali che il progetto è obsoleto. Se si vuole che Visual Studio usi sempre le versioni correnti dei file anziché richiedere quale versione usare ogni volta che compila l'applicazione, selezionare la casella di controllo in questa finestra di dialogo prima di fare clic su **OK**.

1. Nel menu **Debug** fare clic su **Avvia senza eseguire debug**.

1. Se è stato usato il programma di esempio, quando si esegue il programma una finestra di comando indica che il file di testo è stato creato.

   Il file di testo **textfile.txt** è ora disponibile nella directory del progetto. È possibile aprire il file con il Blocco note.

   > [!NOTE]
   > Se si sceglie il modello di progetto CLR vuoto, viene impostata automaticamente l'opzione del compilatore `/clr`. Per verificare quanto sopra, fare clic con il pulsante destro del mouse sul progetto in **Esplora soluzioni** e fare clic su **Proprietà**, quindi selezionare l'opzione **Supporto Common Language Runtime** nel nodo **Generale** di **Proprietà di configurazione**.

## <a name="see-also"></a>Vedere anche

[Riferimenti al linguaggio C++](../cpp/cpp-language-reference.md)<br/>
[Progetti e sistemi di compilazione](../build/projects-and-build-systems-cpp.md)<br/>
