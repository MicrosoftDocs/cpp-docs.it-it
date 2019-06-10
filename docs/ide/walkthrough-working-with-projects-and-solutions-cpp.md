---
title: 'Procedura dettagliata: Uso di progetti e soluzioni (C++)'
ms.date: 05/14/2019
helpviewer_keywords:
- solutions [C++]
- projects [C++], about projects
- projects [C++]
- solutions [C++], about solutions
ms.assetid: 93a3f290-e294-46e3-876e-e3084d9ae833
ms.openlocfilehash: 6dfee695092a69252069dbfc73b6260bd65245e2
ms.sourcegitcommit: fc1de63a39f7fcbfe2234e3f372b5e1c6a286087
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/15/2019
ms.locfileid: "66182641"
---
# <a name="walkthrough-working-with-projects-and-solutions-c"></a>Procedura dettagliata: Uso di progetti e soluzioni (C++)

Di seguito viene illustrato come creare un progetto C++ in Visual Studio, aggiungere il codice e quindi compilare ed eseguire il progetto. Il progetto descritto in questa procedura dettagliata è un programma che traccia il numero di giocatori che eseguono diversi giochi di carte.

In Visual Studio il lavoro è organizzato in progetti e soluzioni. Una soluzione può avere più di un progetto, ad esempio una DLL e un file eseguibile che fa riferimento alla DLL stessa. Per altre informazioni, vedere [Soluzioni e progetti](/visualstudio/ide/solutions-and-projects-in-visual-studio).

## <a name="before-you-start"></a>Prima di iniziare

Per completare la procedura dettagliata è necessario Visual Studio 2017 o versione successiva. Per installare una copia, vedere: [Installare il supporto C++ in Visual Studio](../build/vscpp-step-0-installation.md). Se l'operazione non è stata ancora eseguita, dopo l'installazione seguire i passaggi dell'esercitazione "Hello, World" per assicurarsi che i componenti C++ siano installati e funzionino in modo corretto.

L'esercitazione è utile per comprendere le nozioni di base del linguaggio C++ e l'uso di un compilatore, un linker e un debugger. L'esercitazione presuppone che l'utente conosca Windows e l'uso dei menu e delle finestre di dialogo.

## <a name="create-a-project"></a>Creare un progetto

Per creare un progetto, è innanzitutto necessario scegliere un modello del tipo di progetto. Per ogni tipo di progetto, Visual Studio configura le impostazioni del compilatore e, a seconda del tipo, genera codice di avvio che è possibile modificare in un secondo momento. I passaggi seguenti variano leggermente a seconda della versione di Visual Studio in uso. Assicurarsi che il selettore della versione in alto a sinistra nella pagina sia impostato sulla versione corretta.

::: moniker range="vs-2019"

### <a name="to-create-a-project-in-visual-studio-2019"></a>Per creare un progetto in Visual Studio 2019

1. Dal menu principale scegliere **File** > **Nuovo** > **Progetto** per aprire la finestra di dialogo **Crea nuovo progetto**.

1. Nella parte superiore della finestra di dialogo impostare **Linguaggio** su **C++** , impostare **Piattaforma** su **Windows** e impostare **Tipo di progetto** su **Console**. 

1. Nell'elenco filtrato dei tipi di progetto scegliere **App console** e quindi scegliere **Avanti**. Nella pagina successiva, immettere *Game* come nome per il progetto.

   È possibile accettare il percorso predefinito nell'elenco a discesa **Percorso** oppure inserire un percorso diverso, o ancora scegliere il pulsante **Sfoglia** e passare alla cartella in cui salvare il progetto.

   Quando si crea un progetto, Visual Studio lo inserisce in una soluzione. Per impostazione predefinita, il nome della soluzione è identico a quello del progetto. È possibile modificare il nome nella casella **Nome soluzione**. Per questo esempio, mantenere il nome predefinito.

1. Scegliere il pulsante **Crea** per creare il progetto.

   Visual Studio crea la nuova soluzione e i file di progetto e apre l'editor per il file di codice sorgente Game.cpp che ha generato.

::: moniker-end

::: moniker range="vs-2017"

### <a name="to-create-a-project-in-visual-studio-2017"></a>Per creare un progetto in Visual Studio 2017

1. Nella barra dei menu scegliere **File** > **Nuovo** > **Progetto**.

1. Nel riquadro a sinistra della finestra di dialogo **Nuovo progetto** espandere **Installati** e selezionare **Visual C++** se non è già aperto.

1. Nell'elenco dei modelli installati del riquadro centrale selezionare **Applicazione console di Windows**.

1. Immettere il nome del progetto nella casella **Nome**. Per questo esempio digitare *Game*.

   È possibile accettare il percorso predefinito nell'elenco a discesa **Percorso** oppure inserire un percorso diverso, o ancora scegliere il pulsante **Sfoglia** e passare alla cartella in cui salvare il progetto.

   Quando si crea un progetto, Visual Studio lo inserisce in una soluzione. Per impostazione predefinita, il nome della soluzione è identico a quello del progetto. È possibile modificare il nome nella casella **Nome soluzione**. Per questo esempio, mantenere il nome predefinito.

1. Scegliere il pulsante **OK** per creare il progetto.

   Visual Studio crea la nuova soluzione e i file di progetto e apre l'editor per il file di codice sorgente Game.cpp che ha generato.

::: moniker-end

::: moniker range="vs-2015"

### <a name="to-create-a-project-in-visual-studio-2015"></a>Per creare un progetto in Visual Studio 2015

1. Nella barra dei menu scegliere **File** > **Nuovo** > **Progetto**.

1. Nel riquadro a sinistra della finestra di dialogo **Nuovo progetto** espandere **Installati** e selezionare **Visual C++** se non è già aperto.

1. Nell'elenco dei modelli installati nel riquadro centrale selezionare **Applicazione console Win32**.

1. Immettere il nome del progetto nella casella **Nome**. Per questo esempio digitare *Game*.

   È possibile accettare il percorso predefinito nell'elenco a discesa **Percorso** oppure inserire un percorso diverso, o ancora scegliere il pulsante **Sfoglia** e passare alla cartella in cui salvare il progetto.

   Quando si crea un progetto, Visual Studio lo inserisce in una soluzione. Per impostazione predefinita, il nome della soluzione è identico a quello del progetto. È possibile modificare il nome nella casella **Nome soluzione**. Per questo esempio, mantenere il nome predefinito.

1. Scegliere il pulsante **OK** per creare il progetto.

   Visual Studio crea la nuova soluzione e i file di progetto e apre l'editor per il file di codice sorgente Game.cpp che ha generato.

::: moniker-end

## <a name="organize-projects-and-files"></a>Organizzare progetti e file

È possibile usare **Esplora soluzioni** per organizzare e gestire progetti, file e altre risorse nella soluzione.

In questa parte della procedura dettagliata viene illustrato come aggiungere una classe al progetto. Quando si aggiunge la classe, Visual Studio aggiunge i file corrispondenti con estensione h e cpp. È possibile visualizzare i risultati in **Esplora soluzioni**.

### <a name="to-add-a-class-to-a-project"></a>Per aggiungere una classe a un progetto

1. Se la finestra di **Esplora soluzioni** non viene visualizzata, sulla barra dei menu di Visual Studio selezionare **Visualizza** > **Esplora soluzioni**.

1. In **Esplora soluzioni** selezionare il progetto **Game**. Sulla barra dei menu scegliere **Progetto** > **Aggiungi classe**.

1. Nella finestra di dialogo **Aggiungi classe** digitare *Cardgame* nella casella **Nome classe**. Non modificare le impostazioni e i nomi di file predefiniti. Fare clic sul pulsante **OK** .

   In Visual Studio vengono creati i nuovi file, che vengono quindi aggiunti al progetto. I file sono visibili nella finestra **Esplora soluzioni**. I file Cardgame.h e Cardgame.cpp vengono aperti nell'editor.

1. Modificare il file Cardgame.h come segue:

   - Aggiungere due membri dati privati dopo la parentesi graffa di apertura della definizione di classe.
     <!--      [!code-cpp[NVC_Walkthrough_Working_With_Projects#100](../ide/codesnippet/CPP/walkthrough-working-with-projects-and-solutions-cpp_1.h)] -->

      ```cpp
      int players;
      static int totalParticipants;
      ```

   - Modificare il costruttore predefinito generato da Visual Studio. Dopo l'identificatore di accesso `public:` individuare la riga simile alla seguente:

      `Cardgame();`

      Modificare il costruttore in modo che accetti un parametro di tipo `int` denominato *players*.

      <!--[!code-cpp[NVC_Walkthrough_Working_With_Projects#101](../ide/codesnippet/CPP/walkthrough-working-with-projects-and-solutions-cpp_2.h)]-->
      `Cardgame(int players);`

   - Dopo il distruttore predefinito, aggiungere una dichiarazione inline per una funzione membro `static int` denominata *GetParticipants* che non accetta alcun parametro e restituisce il valore `totalParticipants`.

      <!--[!code-cpp[NVC_Walkthrough_Working_With_Projects#102](../ide/codesnippet/CPP/walkthrough-working-with-projects-and-solutions-cpp_3.h)]-->
      `static int GetParticipants() { return totalParticipants; }`

   Dopo le modifiche, il file Cardgame.h risulta simile al codice seguente:

   <!--[!code-cpp[NVC_Walkthrough_Working_With_Projects#103](../ide/codesnippet/CPP/walkthrough-working-with-projects-and-solutions-cpp_4.h)]-->

    ```cpp
    #pragma once
    class Cardgame
    {
        int players;
        static int totalParticipants;
    public:
        Cardgame(int players);
        ~Cardgame();
        static int GetParticipants() { return totalParticipants; }
    };
    ```

   La riga `#pragma once` indica al compilatore di includere il file di intestazione una sola volta. Per altre informazioni, vedere [once](../preprocessor/once.md). Per informazioni sulle altre parole chiave di C++ nel file di intestazione precedente, vedere [class](../cpp/class-cpp.md), [int](../cpp/fundamental-types-cpp.md), [static](../cpp/storage-classes-cpp.md) e [public](../cpp/public-cpp.md).

1. Scegliere la scheda **Cardgame.cpp** nella parte superiore del riquadro di modifica per aprirla e modificarla.

1. Eliminare tutto il contenuto del file e sostituirlo con il codice:

   <!--[!code-cpp[NVC_Walkthrough_Working_With_Projects#111](../ide/codesnippet/CPP/walkthrough-working-with-projects-and-solutions-cpp_5.cpp)]-->

    ```cpp
    #include "pch.h" // remove this line in Visual Studio 2019
    #include "Cardgame.h"
    #include <iostream>

    using namespace std;

    int Cardgame::totalParticipants = 0;

    Cardgame::Cardgame(int players)
        : players(players)
    {
        totalParticipants += players;
        cout << players << " players have started a new game.  There are now "
             << totalParticipants << " players in total." << endl;
    }

    Cardgame::~Cardgame()
    {
    }
    ```

   > [!NOTE]
   > È possibile utilizzare il completamento automatico quando si scrive il codice. Se ad esempio si digita questo codice, è possibile immettere *pl* o *tot* e premere **CTRL**+**BARRA SPAZIATRICE**. Il completamento automatico immette `players` o `totalParticipants`.

## <a name="add-test-code-to-your-main-function"></a>Aggiungere codice di test alla funzione principale

Aggiungere codice all'app per il test delle nuove funzioni.

### <a name="to-add-test-code-to-the-project"></a>Per aggiungere codice di test al progetto

1. Nella finestra dell'editor **Game.cpp** sostituire il codice esistente con:

   <!--[!code-cpp[NVC_Walkthrough_Working_With_Projects#120](../ide/codesnippet/CPP/walkthrough-working-with-projects-and-solutions-cpp_6.cpp)]-->

    ```cpp
    // Game.cpp : Defines the entry point for the console application.
    //

    #include "pch.h" // remove this line in Visual Studio 2019
    #include "Cardgame.h"
    #include <iostream>

    using namespace std;

    void PlayGames()
    {
        Cardgame bridge(4);
        Cardgame blackjack(8);
        Cardgame solitaire(1);
        Cardgame poker(5);
    }

    int main()
    {
        PlayGames();
        return 0;
    }
    ```

   Il codice aggiunge una funzione di test `PlayGames` al codice sorgente e chiama la funzione in `main`.

## <a name="build-and-run-your-app-project"></a>Compilare ed eseguire il progetto di app

A questo punto compilare il progetto ed eseguire l'app.

### <a name="to-build-and-run-the-project"></a>Per compilare ed eseguire il progetto

1. Nella barra dei menu scegliere **Compila** > **Compila soluzione**.

   Nella finestra **Output** viene visualizzato l'output di una compilazione. Se la compilazione ha esito positivo, l'output sarà analogo al seguente:

    ```Output
    1>------ Build started: Project: Game, Configuration: Debug Win32 ------
    1>pch.cpp
    1>Cardgame.cpp
    1>Game.cpp
    1>Generating Code...
    1>Game.vcxproj -> C:\Users\<username>\source\repos\Game\Debug\Game.exe
    ========== Build: 1 succeeded, 0 failed, 0 up-to-date, 0 skipped ==========
    ```

   La finestra **Output** visualizza passaggi diversi a seconda della configurazione della compilazione, ma se la compilazione del progetto ha esito positivo, l'ultima riga dell'output deve essere simile a quella indicata.

   Se la compilazione ha esito negativo, confrontare il codice con quello visualizzato nei passaggi precedenti.

1. Per eseguire il progetto, sulla barra dei menu scegliere **Debug** > **Avvia senza eseguire debug**. Viene visualizzata una finestra della console e l'output è simile al seguente:

    ```Output
    4 players have started a new game.  There are now 4 players in total.
    8 players have started a new game.  There are now 12 players in total.
    1 players have started a new game.  There are now 13 players in total.
    5 players have started a new game.  There are now 18 players in total.
    ```

   Premere un tasto per chiudere la finestra della console.

La compilazione di un progetto e una soluzione per l'app è stata completata. Continuare con la procedura dettagliata per informazioni sulla compilazione di progetti di codice C++ in Visual Studio.

## <a name="next-steps"></a>Passaggi successivi

**Precedente:** [Uso dell'IDE di Visual Studio per lo sviluppo di applicazioni desktop C++](../ide/using-the-visual-studio-ide-for-cpp-desktop-development.md)<br/>
**Successivo:** [Procedura dettagliata: Compilazione di un progetto (C++)](../ide/walkthrough-building-a-project-cpp.md)<br/>

## <a name="see-also"></a>Vedere anche

[Riferimenti al linguaggio C++](../cpp/cpp-language-reference.md)<br/>
[Progetti e sistemi di compilazione](../build/projects-and-build-systems-cpp.md)<br/>
