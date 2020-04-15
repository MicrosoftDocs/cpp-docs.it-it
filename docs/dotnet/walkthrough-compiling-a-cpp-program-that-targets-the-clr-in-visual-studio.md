---
title: Compilare un programma di tipo C/CLI destinato a CLR
description: Utilizzare Microsoft C.
ms.date: 04/23/2019
helpviewer_keywords:
- command-line applications [C++], managed code
- compiling programs [C++]
- Visual C++, managed code
- managed code [C++]
ms.assetid: 339f89df-a5d2-4040-831a-ddbe25b5dce4
ms.openlocfilehash: 0d661d9e77211a0e49f8695ad713b607377a236a
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81371816"
---
# <a name="walkthrough-compile-a-ccli-program-that-targets-the-clr-in-visual-studio"></a>Procedura dettagliata: Compilazione di un programma in linguaggio C/CLI destinato a CLR in Visual StudioWalkthrough: Compile a C'è/CLI Program that Targets the CLR in Visual Studio

Utilizzando C , c'è possibile creare programmi c'è possibile creare i programmi di C . L'interfaccia della riga di comando è destinata all'utilizzo nelle applicazioni console e nelle DLL che eseguono il wrapping del codice nativo di C e lo rendono accessibile dai programmi .NET. Per creare un'interfaccia utente di Windows basata su .NET, utilizzare C .NET o Visual Basic.

Per questa procedura, è possibile digitare il proprio programma di tipo C o utilizzare uno dei programmi di esempio. Il programma di esempio usato in questa procedura crea un file di testo con nome textfile.txt e lo salva nella directory del progetto.

## <a name="prerequisites"></a>Prerequisiti

- Conoscenza delle nozioni di base del linguaggio C++.
- In Visual Studio 2017 e versioni successive, il supporto di C/CLI è un componente facoltativo. Per installarlo, aprire il **programma di installazione** di Visual Studio dal menu Start di Windows. Assicurarsi che sia selezionata la funzionalità Sviluppo desktop con il riquadro **C,** quindi nella sezione Componenti **facoltativi** selezionare anche **Supporto C/CLI.**

## <a name="create-a-new-project"></a>Creare un nuovo progetto

I passaggi seguenti variano leggermente a seconda della versione di Visual Studio in uso. Per visualizzare la documentazione per la versione preferita di Visual Studio, usare il controllo Selettore **versione.** Si trova nella parte superiore del sommario in questa pagina.

::: moniker range="vs-2019"

### <a name="to-create-a-ccli-project-in-visual-studio-2019"></a>Per creare un progetto in Visual Studio 2019

1. In **Esplora soluzioni**fare clic con il pulsante destro del mouse nella parte superiore per aprire la finestra di dialogo **Crea nuovo progetto.**

1. Nella parte superiore della finestra di dialogo digitare **CLR** nella casella di ricerca e quindi scegliere **Progetto vuoto CLR** dall'elenco dei risultati.

1. Scegliere il pulsante **Crea** per creare il progetto.

::: moniker-end

::: moniker range="vs-2017"

### <a name="to-create-a-ccli-project-in-visual-studio-2017"></a>Per creare un progetto in Visual Studio 2017

1. Creare un nuovo progetto. Scegliere **Nuovo** dal menu **File**e quindi fare clic su **Progetto**.

1. Nei tipi di progetto di Visual C++ fare clic su **CLR** e quindi su **Progetto CLR vuoto**.

1. Digitare un nome di progetto. Per impostazione predefinita la soluzione che contiene il progetto ha lo stesso nome del nuovo progetto, ma è possibile immettere un nome diverso. Se si vuole è anche possibile immettere un percorso diverso per il progetto.

1. Fare clic su **OK** per creare il nuovo progetto.

::: moniker-end

::: moniker range="vs-2015"

### <a name="to-create-a-ccli-project-in-visual-studio-2015"></a>Per creare un progetto in Visual Studio 2015

1. Creare un nuovo progetto. Scegliere **Nuovo** dal menu **File**e quindi fare clic su **Progetto**.

1. Nei tipi di progetto di Visual C++ fare clic su **CLR** e quindi su **Progetto CLR vuoto**.

1. Digitare un nome di progetto. Per impostazione predefinita la soluzione che contiene il progetto ha lo stesso nome del nuovo progetto, ma è possibile immettere un nome diverso. Se si vuole è anche possibile immettere un percorso diverso per il progetto.

1. Fare clic su **OK** per creare il nuovo progetto.

::: moniker-end

## <a name="add-a-source-file"></a>Aggiungere un file di origine

1. Se **Esplora soluzioni** non è visibile, scegliere **Esplora soluzioni** dal menu **Visualizza**.

1. Aggiungere un nuovo file di origine al progetto:

   - Fare clic con il pulsante destro del mouse sulla cartella File di **origine** in **Esplora soluzioni**, **scegliere Aggiungi**e fare clic su Nuovo **elemento**.

   - Fare clic su **File C++ (.cpp)** e digitare un nome file, quindi fare clic su **Aggiungi**.

   Il file **con estensione cpp** viene visualizzato nella cartella File di **origine** in **Esplora soluzioni** e viene visualizzata una finestra a schede in cui si digita il codice desiderato in tale file.

1. Fare clic sulla scheda appena creata in Visual Studio e digitare un programma Visual C++ valido oppure copiare e incollare uno dei programmi di esempio.

   Ad esempio è possibile usare il programma disponibile in [Procedura: Scrivere un file di testo (C++/CLI)](how-to-write-a-text-file-cpp-cli.md) (nel nodo **Gestione di file e I/O** della Guida alla programmazione).

   Se si usa il programma di esempio, si noti che viene usata la parola chiave `gcnew` anziché la parola chiave `new` quando si crea un oggetto .NET e che `gcnew` restituisce un handle (`^`) anziché un puntatore (`*`):

   `StreamWriter^ sw = gcnew StreamWriter(fileName);`

   Per ulteriori informazioni sulla sintassi di C, consultate Estensioni dei componenti [per piattaforme di runtime.](../extensions/component-extensions-for-runtime-platforms.md)

1. Nel menu **Compila** scegliere **Compila soluzione**.

   La finestra **Output** visualizza informazioni sullo stato della compilazione, quali la posizione del log di compilazione e un messaggio con lo stato del processo di compilazione.

   Se si apportano modifiche e si esegue il programma senza eseguire la compilazione, è possibile che una finestra di dialogo segnali che il progetto è obsoleto. Se si vuole che Visual Studio usi sempre le versioni correnti dei file anziché richiedere quale versione usare ogni volta che compila l'applicazione, selezionare la casella di controllo in questa finestra di dialogo prima di fare clic su **OK**.

1. Nel menu **Debug** fare clic su **Avvia senza eseguire debug**.

1. Se è stato usato il programma di esempio, quando si esegue il programma una finestra di comando indica che il file di testo è stato creato.

   Il file di testo **textfile.txt** è ora disponibile nella directory del progetto. È possibile aprire il file con il Blocco note.

   > [!NOTE]
   > Se si sceglie il modello di progetto CLR vuoto, viene impostata automaticamente l'opzione del compilatore `/clr`. Per verificare quanto sopra, fare clic con il pulsante destro del mouse sul progetto in **Esplora soluzioni** e fare clic su **Proprietà**, quindi selezionare l'opzione **Supporto Common Language Runtime** nel nodo **Generale** di **Proprietà di configurazione**.

## <a name="see-also"></a>Vedere anche

[Guida di riferimento al linguaggio C](../cpp/cpp-language-reference.md)<br/>
[Progetti e sistemi di compilazione](../build/projects-and-build-systems-cpp.md)<br/>
