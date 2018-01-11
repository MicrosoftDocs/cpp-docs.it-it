---
title: 'Procedura dettagliata: Utilizzo di progetti e soluzioni (C++) | Documenti Microsoft'
ms.custom: 
ms.date: 12/13/2017
ms.reviewer: 
ms.suite: 
ms.technology: cpp-ide
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- solutions [C++]
- projects [C++], about projects
- projects [C++]
- solutions [C++], about solutions
ms.assetid: 93a3f290-e294-46e3-876e-e3084d9ae833
caps.latest.revision: "25"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: a20c0ee933d49465a841b638a8260181d7175ac5
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="walkthrough-working-with-projects-and-solutions-c"></a>Procedura dettagliata: utilizzo di progetti e soluzioni (C++)

Di seguito viene illustrato come creare un progetto C++ in Visual Studio, aggiungere il codice e quindi compilare ed eseguire il progetto. Il progetto descritto in questa procedura dettagliata è un programma che traccia il numero di giocatori che eseguono diversi giochi di carte.

In Visual Studio, lavoro è organizzato in progetti e soluzioni. Una soluzione può contenere più di un progetto, ad esempio una DLL e un file eseguibile che fa riferimento alla DLL stessa. Per altre informazioni, vedere [Soluzioni e progetti](/visualstudio/ide/solutions-and-projects-in-visual-studio).

## <a name="before-you-start"></a>Prima di iniziare

Per completare questa procedura dettagliata, è necessario Visual Studio 2017 versione 15.3 o versione successiva. Se necessaria una copia, ecco una breve guida: [il supporto di installazione di C++ in Visual Studio](../build/vscpp-step-0-installation.md). Se è stato fatto ancora, seguire i passaggi successivi dopo l'installazione tramite l'esercitazione "Hello, World" per verificare che Visual C++ sia installato correttamente e tutte le attività eseguite.

È utile se si comprendere le nozioni di base del linguaggio C++ e di conoscere ciò che un compilatore, linker e debugger vengono utilizzati per. Nell'esercitazione si presuppone inoltre che si ha familiarità con Windows e come utilizzare i menu, finestre di dialogo,

## <a name="create-a-project"></a>Creare un progetto

Per creare un progetto, è innanzitutto necessario scegliere un modello del tipo di progetto. Per ogni tipo di progetto Visual Studio imposta le impostazioni del compilatore e, a seconda del tipo, genera il codice iniziale che è possibile modificare in un secondo momento.

### <a name="to-create-a-project"></a>Per creare un progetto

1. Nella barra dei menu, scegliere **File > Nuovo > progetto**.

1. Nel riquadro sinistro della finestra di **nuovo progetto** finestra di dialogo espandere **installato** e selezionare **Visual C++**, se non è già aperto.

1. Nell'elenco dei modelli installati nel riquadro centrale, selezionare **applicazione Console di Windows**.

1. Immettere un nome per il progetto nel **nome** casella. Per questo esempio, immettere **gioco**.

   È possibile accettare il percorso predefinito nel **percorso** elenco a discesa, immettere un percorso diverso o scegliere il **Sfoglia** pulsante per selezionare una directory in cui si desidera salvare il progetto.

   Quando si crea un progetto, Visual Studio inserisce in una soluzione. Per impostazione predefinita, il nome della soluzione è identico a quello del progetto. È possibile modificare il nome di **Nome soluzione** casella, ma per questo esempio, mantenere il nome predefinito.

1. Scegliere il pulsante **OK** per creare il progetto.

   Visual Studio crea la nuova soluzione e file di progetto e apre l'editor per il file di codice sorgente Game.cpp che è generato.

## <a name="organize-projects-and-files"></a>Organizzare progetti e file.

È possibile utilizzare **Esplora** per organizzare e gestire i progetti, file e altre risorse nella soluzione.

In questa parte della procedura dettagliata viene illustrato come aggiungere una classe al progetto. Quando si aggiunge la classe, Visual Studio aggiunge il corrispondente. h e cpp. È possibile visualizzare i risultati in **Esplora**.

### <a name="to-add-a-class-to-a-project"></a>Per aggiungere una classe a un progetto

1. Se il **Esplora** finestra non viene visualizzata in Visual Studio, sulla barra dei menu, scegliere **Vista > Esplora soluzioni**.

1. In **Esplora**, selezionare il **gioco** progetto. Nella barra dei menu, scegliere **progetto > Aggiungi classe**.

1. Nel **Aggiungi classe** finestra di dialogo immettere *Cardgame* nel **nome classe** casella. Non modificare le impostazioni e i nomi di file predefiniti. Fare clic sul pulsante **OK** .

   Visual Studio vengono creati nuovi file e li aggiunge al progetto. È possibile visualizzarli nel **Esplora** finestra. I file Cardgame. h e Cardgame.cpp vengono aperti nell'editor.

1. Modificare il file Cardgame. h e apportare queste modifiche:

   - Aggiungere due membri dati privati dopo la parentesi graffa di apertura della definizione di classe.
      <!--      [!code-cpp[NVC_Walkthrough_Working_With_Projects#100](../ide/codesnippet/CPP/walkthrough-working-with-projects-and-solutions-cpp_1.h)] -->

      ```cpp
      int players;
      static int totalParticipants;
      ```

   - Modificare il costruttore predefinito generato da Visual Studio. Dopo l'identificatore di accesso `public:` individuare la riga simile alla seguente:

      `Cardgame();`

      Modificare questo costruttore per accettare un parametro di tipo `int`, denominato *lettori*.

      <!--[!code-cpp[NVC_Walkthrough_Working_With_Projects#101](../ide/codesnippet/CPP/walkthrough-working-with-projects-and-solutions-cpp_2.h)]-->
      `Cardgame(int players);`

   - Dopo il distruttore predefinito aggiungere una dichiarazione inline per una `static int` funzione membro denominata *GetParticipants* che non accetta parametri e restituisce il `totalParticipants` valore.

      <!--[!code-cpp[NVC_Walkthrough_Working_With_Projects#102](../ide/codesnippet/CPP/walkthrough-working-with-projects-and-solutions-cpp_3.h)]-->
      `static int GetParticipants() { return totalParticipants; }`

   Dopo le modifiche, il file Cardgame.h dovrebbe risultare simile al seguente:

   <!--[!code-cpp[NVC_Walkthrough_Working_With_Projects#103](../ide/codesnippet/CPP/walkthrough-working-with-projects-and-solutions-cpp_4.h)]-->
   ```cpp
   #pragma once
   class Cardgame
   {
       int players;
       static int totalParticipants;
   public:
       Cardgame(int players);
       ~Cardgame(void);
       static int GetParticipants() { return totalParticipants; }
   };
   ```

   La riga `#pragma once` indica al compilatore di includere il file di intestazione solo una volta. Per ulteriori informazioni, vedere [una volta](../preprocessor/once.md). Per informazioni sulle altre parole chiave C++ in questo file di intestazione, vedere [classe](../cpp/class-cpp.md), [int](../cpp/fundamental-types-cpp.md), [statico](../cpp/storage-classes-cpp.md), e [pubblica](../cpp/public-cpp.md).

1. Scegliere il **Cardgame.cpp** scheda nella parte superiore del riquadro di modifica per aprirlo e modificarlo.

1. Eliminare tutto il contenuto del file e sostituirlo con il seguente codice:

   <!--[!code-cpp[NVC_Walkthrough_Working_With_Projects#111](../ide/codesnippet/CPP/walkthrough-working-with-projects-and-solutions-cpp_5.cpp)]-->
   ```cpp
   #include "stdafx.h"
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
   > È possibile utilizzare il completamento automatico quando si scrive il codice. Ad esempio, se si immette questo codice la tastiera, è possibile immettere *pl* o *tot* e quindi premere Ctrl + barra spaziatrice. Completamento automatico immette `players` o `totalParticipants` automaticamente.

## <a name="add-test-code-to-your-main-function"></a>Aggiungere il codice alla funzione principale

Aggiungere codice all'App che consente di verificare le nuove funzioni.

### <a name="to-add-test-code-to-the-project"></a>Per aggiungere il codice di test al progetto

1. Nella finestra dell'editor Game.cpp, sostituire il codice esistente con questo:

   <!--[!code-cpp[NVC_Walkthrough_Working_With_Projects#120](../ide/codesnippet/CPP/walkthrough-working-with-projects-and-solutions-cpp_6.cpp)]-->
   ```cpp
   // Game.cpp : Defines the entry point for the console application.
   //

   #include "stdafx.h"
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
Questo codice aggiunge una funzione di test, `PlayGames`, per il codice sorgente e le chiamate in `main`. 

## <a name="build-and-run-your-app-project"></a>Compilare ed eseguire il progetto di app

Successivamente, compilare il progetto ed eseguire l'app.

### <a name="to-build-and-run-the-project"></a>Per compilare ed eseguire il progetto

1. Nella barra dei menu scegliere **Compilazione > Compila soluzione**.

   Output da una compilazione viene visualizzato nel **Output** finestra. Se la compilazione ha esito positivo, l'output sarà analogo al seguente:

   ```Output
   1>------ Build started: Project: Game, Configuration: Debug Win32 ------
   1>  stdafx.cpp
   1>  Game.cpp
   1>  Cardgame.cpp
   1>  Generating Code...
   1>  Game.vcxproj -> C:\Users\username\Source\Repos\Game\Debug\Game.exe
   ========== Build: 1 succeeded, 0 failed, 0 up-to-date, 0 skipped ==========
   ```

   Il **Output** finestra Mostra passaggi diversi, a seconda della configurazione di compilazione, ma se la compilazione del progetto ha esito positivo, l'ultima riga dovrebbe essere simile l'output visualizzato.

   Se la compilazione non riuscita, confrontare il codice con il codice mostrato nei passaggi precedenti.

1. Per eseguire il progetto, nella barra dei menu, scegliere **Debug > Avvia senza eseguire debug**. Viene visualizzata una finestra della console e l'output sarà analogo al seguente:

   ```Output
   4 players have started a new game.  There are now 4 players in total.
   8 players have started a new game.  There are now 12 players in total.
   1 players have started a new game.  There are now 13 players in total.
   5 players have started a new game.  There are now 18 players in total.
   ```
Premere un tasto per chiudere la finestra della console.

Complimenti, una volta compilato un progetto di app e soluzioni. Per ulteriori informazioni su come compilare progetti di codice C++ in Visual Studio, continuare la procedura dettagliata.

## <a name="next-steps"></a>Passaggi successivi

**Precedente:** [tramite l'IDE di Visual Studio per lo sviluppo Desktop C++](../ide/using-the-visual-studio-ide-for-cpp-desktop-development.md).  
**Passaggio successivo:** [procedura dettagliata: compilazione di un progetto (C++)](../ide/walkthrough-building-a-project-cpp.md).

## <a name="see-also"></a>Vedere anche

[Riferimenti al linguaggio C++](../cpp/cpp-language-reference.md)  
[Compilazione di programmi C/C++](../build/building-c-cpp-programs.md)