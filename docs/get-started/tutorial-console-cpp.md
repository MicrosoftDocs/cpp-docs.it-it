---
title: Creare un progetto di app console C++
description: Creare un'app console Hello World e un'app calcolatrice in Visual C++
ms.custom: mvc
ms.date: 08/19/2019
ms.topic: tutorial
ms.devlang: cpp
ms.assetid: 45138d70-719d-42dc-90d7-1d0ca31a2f54
ms.openlocfilehash: 27522a6960546dc935ea3d9bce974eb36789c0aa
ms.sourcegitcommit: 8e285a766523e653aeeb34d412dc6f615ef7b17b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/21/2020
ms.locfileid: "80079295"
---
# <a name="create-a-c-console-app-project"></a>Creare un progetto di app console C++

::: moniker range=">=vs-2019"

In genere il punto di partenza per un programmatore C++ è un'applicazione "Hello, world!" eseguita sulla riga di comando. Questo articolo illustra la procedura di creazione dell'applicazione in Visual Studio e quindi quella di un'applicazione più complessa, ovvero un'app calcolatrice.

## <a name="prerequisites"></a>Prerequisites

- Visual Studio con il carico di lavoro **Sviluppo di applicazioni desktop con C++** installato e in esecuzione nel computer. Se non è ancora installato, vedere [Installare il supporto C++ in Visual Studio](../build/vscpp-step-0-installation.md).

## <a name="create-your-app-project"></a>Creare il progetto di app

Visual Studia usa i *progetti* per organizzare il codice per un'applicazione e le *soluzioni* per organizzare i progetti. Un progetto contiene tutte le opzioni, le configurazioni e le regole usate per la compilazione dell'applicazione. Gestisce anche la relazione tra tutti i file del progetto e i file esterni. Per creare l'applicazione, per prima cosa creare un nuovo progetto e una soluzione.

1. Se si è appena avviato Visual Studio, verrà visualizzata la finestra di dialogo Visual Studio 2019. Per iniziare, scegliere **Crea un nuovo progetto**.

   ![Finestra di dialogo iniziale di Visual Studio 2019](./media/calc-vs2019-initial-dialog.png "Finestra di dialogo iniziale di Visual Studio 2019")

   In caso contrario, nella barra dei menu di Visual Studio scegliere **File** > **Nuovo** > **Progetto**. Verrà aperta la finestra **Crea un nuovo progetto**.

1. Nell'elenco di modelli di progetto scegliere **App console**, quindi scegliere **Avanti**.

   ![Scegliere il modello applicazione console](./media/calc-vs2019-choose-console-app.png "Scegliere il modello applicazione console")

   > [!Important]
   > Assicurarsi di scegliere la versione C++ del modello **App Console**. La versione include i tag **C++** , **Windows** e **Console** e visualizza "++" nell'angolo dell'icona.

1. Nella finestra di dialogo **Configura il nuovo progetto** selezionare la casella di modifica **Nome del progetto**, assegnare al nuovo progetto il nome *CalculatorTutorial*, quindi scegliere **Crea**.

   ![Assegnare un nome al progetto nella finestra di dialogo Configura nuovo progetto](./media/calc-vs2019-name-your-project.png "Assegnare un nome al progetto nella finestra di dialogo Configura nuovo progetto")

   Viene creata un'applicazione console C++ di Windows vuota. Le applicazioni console usano una finestra della console di Windows per visualizzare l'output e accettare l'input dell'utente. In Visual Studio si apre una finestra dell'editor e viene visualizzato il codice generato:

    ```cpp
    // CalculatorTutorial.cpp : This file contains the 'main' function. Program execution begins and ends there.
    //

    #include <iostream>

    int main()
    {
        std::cout << "Hello World!\n";
    }

    // Run program: Ctrl + F5 or Debug > Start Without Debugging menu
    // Debug program: F5 or Debug > Start Debugging menu

    // Tips for Getting Started:
    //   1. Use the Solution Explorer window to add/manage files
    //   2. Use the Team Explorer window to connect to source control
    //   3. Use the Output window to see build output and other messages
    //   4. Use the Error List window to view errors
    //   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
    //   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
    ```

## <a name="verify-that-your-new-app-builds-and-runs"></a>Verificare che la nuova app venga compilata ed eseguita

Il modello per una nuova applicazione console di Windows crea una semplice app "Hello World" di C++. A questo punto è possibile vedere in che modo Visual Studio compila ed esegue le app create direttamente dall'IDE.

1. Per compilare il progetto scegliere **Compila soluzione** dal menu **Compila**. Nella finestra **Output** vengono visualizzati i risultati del processo di compilazione.

   ![Compilare il progetto](./media/calc-vs2019-build-your-project.png "Compilare il progetto")

1. Per eseguire il codice, nella barra dei menu selezionare **Debug**, **Avvia senza eseguire debug**.

   ![Avviare il progetto](./media/calc-vs2019-hello-world-console.png "Avviare il progetto")

   Si apre una finestra della console si apre e quindi viene eseguita l'app. Quando viene avviata in Visual Studio, un'app console esegue il codice, quindi stampa "Premere un tasto qualsiasi per chiudere questa finestra. . ." per consentire di visualizzare l'output. Congratulazioni! Si è creata la prima app console "Hello, World!" in Visual Studio.

1. Premere un tasto per chiudere la finestra della console e tornare a Visual Studio.

Ora sono disponibili gli strumenti necessari per compilare ed eseguire l'app dopo ogni modifica, per verificare che il codice continui a funzionare come previsto. Successivamente, verrà illustrata la procedura di debug da seguire se il codice non funziona.

## <a name="edit-the-code"></a>Modificare il codice

Ora è possibile trasformare il codice contenuto in questo modello in un'app calcolatrice.

1. Nel file *CalculatorTutorial.cpp* modificare il codice in base a questo esempio:

    ```cpp
    // CalculatorTutorial.cpp : This file contains the 'main' function. Program execution begins and ends there.
    //

    #include <iostream>

    using namespace std;

    int main()
    {
        cout << "Calculator Console Application" << endl << endl;
        cout << "Please enter the operation to perform. Format: a+b | a-b | a*b | a/b"
            << endl;
        return 0;
    }

    // Run program: Ctrl + F5 or Debug > Start Without Debugging menu
    // Debug program: F5 or Debug > Start Debugging menu
    // Tips for Getting Started:
    //   1. Use the Solution Explorer window to add/manage files
    //   2. Use the Team Explorer window to connect to source control
    //   3. Use the Output window to see build output and other messages
    //   4. Use the Error List window to view errors
    //   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
    //   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
    ```

   > Informazioni sul codice:
   >
   > - Le istruzioni `#include` consentono di fare riferimento al codice che si trova in altri file. In alcuni casi viene visualizzato un nome file racchiuso tra parentesi quadre ( **\<\>** ), in altri casi il nome è racchiuso tra virgolette ( **" "** ). In generale, le parentesi quadre vengono usate quando si fa riferimento alla libreria standard C++, mentre le virgolette vengono usate per gli altri file.
   > - La riga `using namespace std;` indica al compilatore che è previsto materiale in arrivo dalla libreria standard C++ da usare in questo file. Senza questa riga, ogni parola chiave proveniente dalla libreria dovrà essere preceduta da `std::`, per indicarne l'ambito. Ad esempio, senza tale riga, ogni riferimento a `cout` deve essere scritto come `std::cout`. L'istruzione `using` viene aggiunta per rendere il codice più pulito.
   > - La parola chiave `cout` viene usata per stampare in un output standard di C++. L'operatore **\<\<** indica al compilatore di inviare tutto ciò che si trova alla sua destra all'output standard.
   > - La parola chiave **endl** è simile al tasto INVIO, termina la riga e sposta il cursore nella riga successiva. È opportuno inserire un elemento `\n` all'interno della stringa (racchiuso tra "") per eseguire la stessa operazione, poiché `endl` svuota sempre il buffer e può influire negativamente sulle prestazioni del programma, ma dal momento che si tratta di un'app di dimensioni molto ridotte, si usa `endl` per migliorare la leggibilità.
   > - Tutte le istruzioni C++ devono terminare con un punto e virgola e tutte le applicazioni C++ devono contenere una funzione `main()`. Questa funzione è ciò che il programma esegue all'inizio. Tutto il codice deve essere accessibile da `main()` per poter essere usato.

1. Per salvare il file, immettere **Ctrl + S** o scegliere l'icona **Salva** nella parte superiore dell'IDE, l'icona a forma di disco floppy nella barra degli strumenti sotto la barra dei menu.

1. Per eseguire l'applicazione, premere **CTRL+F5** o accedere al menu **Debug** e scegliere **Avvia senza eseguire debug**. Dovrebbe essere visualizzata una finestra della console con il testo specificato nel codice.

1. Al termine, chiudere la finestra della console.

## <a name="add-code-to-do-some-math"></a>Aggiungere codice per eseguire alcuni calcoli matematici

È il momento di aggiungere una logica matematica.

### <a name="to-add-a-calculator-class"></a>Per aggiungere una classe Calculator

1. Accedere al menu **Progetto** e scegliere **Aggiungi classe**. Nella casella di modifica **Nome classe** immettere *Calculator*. Scegliere **OK**. Due nuovi file vengono aggiunti al progetto. Per salvare tutti i file modificati in una sola volta, premere **CTRL+MAIUSC+S**. Si tratta di una scelta rapida da tastiera per **File** > **Salva tutto**. È anche disponibile un pulsante della barra degli strumenti per **Salva tutto**, un'icona con due dischi floppy, accanto al pulsante **Salva**. In generale, è buona norma scegliere spesso **Salva tutto** in modo da non tralasciare qualche file quando si salva.

   ![Creare la classe Calculator](./media/calc-vs2019-create-calculator-class.png "Creare la classe Calculator")

   Una classe è simile a un progetto per un oggetto che esegue un'operazione. In questo caso si definisce una calcolatrice e il modo in cui deve funzionare. La procedura guidata **Aggiungi classe** usata in precedenza ha creato i file H e CPP che hanno lo stesso nome della classe. È possibile visualizzare un elenco completo dei file del progetto nella finestra **Esplora soluzioni** visibile sul lato dell'IDE. Se la finestra non è visibile, è possibile aprirla dalla barra dei menu: scegliere **Visualizza** > **Esplora soluzioni**.

   ![Esplora soluzioni](./media/calc-vs2019-solution-explorer.png "Esplora soluzioni")

   Nell'editor verranno ora aperte tre schede: *CalculatorTutorial. cpp*, *Calculator. h*e *Calculator. cpp*. Se si chiude accidentalmente una delle schede, è possibile riaprirla facendo doppio clic su di essa nella finestra **Esplora soluzioni**.

1. In **Calculator.h** rimuovere le righe `Calculator();` e `~Calculator();` generate, poiché in questa fase non sono necessarie. Successivamente, aggiungere la seguente riga di codice in modo che il file abbia questo aspetto:

    ```cpp
    #pragma once
    class Calculator
    {
    public:
        double Calculate(double x, char oper, double y);
    };
    ```

   > Informazioni sul codice
   >
   > - La riga aggiunta dichiara una nuova funzione denominata `Calculate`, che verrà usata per eseguire operazioni matematiche di addizione, sottrazione, moltiplicazione e divisione.
   > - Il codice C++ è organizzato in file di *intestazione* (con estensione h) e file di *origine* (con estensione cpp). Diversi compilatori supportano alcune altre estensioni di file, ma queste sono le principali che è opportuno conoscere. Funzioni e variabili normalmente vengono *dichiarate*, con l'assegnazione di un nome e un tipo, nei file di intestazione e *implementate*, ovvero definite, nei file di origine. Per accedere al codice definito in un altro file, è possibile usare `#include "filename.h"`, dove "filename.h" è il nome del file che dichiara le variabili o funzioni da usare.
   > - Le due righe eliminate dichiaravano un *costruttore* e un *distruttore* per la classe. Per una classe semplice come questa, il compilatore le crea automaticamente e il relativo utilizzo esula dall'ambito di questa esercitazione.
   > - Può essere opportuno organizzare il codice in diversi file in base allo scopo, in modo che sia più facile trovare il codice necessario in un secondo tempo. In questo caso la classe `Calculator` viene definita separatamente dal file che contiene la funzione `main()`, ma si prevede di fare riferimento alla classe `Calculator` in `main()`.

1. Si noterà una sottolineatura a zig zag verde sotto `Calculate`, che appare perché non è ancora stata definita la funzione `Calculate` nel file CPP. Passare il mouse sulla parola, fare clic sulla lampadina (in questo caso, un cacciavite) visualizzata e scegliere **Crea definizione di 'Calculate' in Calculator.cpp**.

   ![Crea definizione di calcolo](./media/calc-vs2019-create-definition.png "Crea definizione di calcolo")

   Viene visualizzato un popup con un'anteprima della modifica del codice apportata nell'altro file. Il codice è stato aggiunto a *Calculator.cpp*.

   ![Popup con la definizione del calcolo](./media/calc-vs2019-pop-up-definition.png "Popup con la definizione del calcolo")

   Attualmente restituisce solo 0.0. A tale scopo, seguire questa procedura. Premere **ESC** per chiudere l'elemento popup.

1. Passare al file *Calculator.cpp* nella finestra dell'editor. Rimuovere le sezioni `Calculator()` e `~Calculator()` (come per il file H) e aggiungere il codice seguente a `Calculate()`:

    ```cpp
    #include "Calculator.h"

    double Calculator::Calculate(double x, char oper, double y)
    {
        switch(oper)
        {
            case '+':
                return x + y;
            case '-':
                return x - y;
            case '*':
                return x * y;
            case '/':
                return x / y;
            default:
                return 0.0;
        }
    }
    ```

   > Informazioni sul codice
   >
   > - La funzione `Calculate` usa un numero, un operatore e un secondo numero, quindi esegue l'operazione richiesta sui numeri.
   > - L'istruzione switch verifica quale operatore è stato specificato ed esegue solo il case corrispondente a tale operazione. Il case predefinito rappresenta il fallback nel caso in cui l'utente digiti un operatore che non viene accettato, in modo che il programma non venga interrotto. In generale, è consigliabile gestire l'input utente non valido in modo più elegante, ma ciò esula dall'ambito di questa esercitazione.
   > - La parola chiave `double` denota un tipo di numero che supporta i decimali. In questo modo, la calcolatrice può gestire funzioni matematiche sia con numeri decimali che con numeri interi. La funzione `Calculate` è necessaria per restituire sempre un numero di questo tipo a causa della presenza di `double` all'inizio del codice (indica il tipo restituito della funzione), motivo per cui viene restituito 0.0 anche nel case predefinito.
   > - Il file H dichiara il *prototipo* di funzione, che indica in anticipo al compilatore quali sono i parametri richiesti e quale tipo restituito è previsto. Il file CPP contiene tutti i dettagli dell'implementazione della funzione.

Se a questo punto si compila e si esegue nuovamente il codice, verrà comunque chiesto quale operazione eseguire e il codice verrà chiuso. Successivamente, si modificherà la funzione `main` per eseguire alcuni calcoli.

### <a name="to-call-the-calculator-class-member-functions"></a>Per chiamare le funzioni membro della classe Calculator

1. A questo punto è possibile aggiornare la funzione `main` in *CalculatorTutorial.cpp*:

    ```cpp
    // CalculatorTutorial.cpp : This file contains the 'main' function. Program execution begins and ends there.
    //

    #include <iostream>
    #include "Calculator.h"

    using namespace std;

    int main()
    {
        double x = 0.0;
        double y = 0.0;
        double result = 0.0;
        char oper = '+';

        cout << "Calculator Console Application" << endl << endl;
        cout << "Please enter the operation to perform. Format: a+b | a-b | a*b | a/b"
             << endl;

        Calculator c;
        while (true)
        {
            cin >> x >> oper >> y;
            result = c.Calculate(x, oper, y);
            cout << "Result is: " << result << endl;
        }

        return 0;
    }
    ```

   > Informazioni sul codice
   >
   > - Poiché i programmi C++ iniziano sempre con la funzione `main()`, è necessario chiamare altro codice da tale posizione, quindi è necessaria un'istruzione `#include`.
   > - Alcune variabili iniziali, `x`, `y`, `oper` e `result`, vengono dichiarate per archiviare rispettivamente il primo numero, il secondo numero, l'operatore e il risultato finale. È sempre opportuno assegnare alle variabili alcuni valori iniziali per evitare un comportamento indefinito, operazione eseguita in questa procedura.
   > - La riga `Calculator c;` dichiara un oggetto denominato "c" come istanza della classe `Calculator`. La classe stessa è semplicemente un progetto iniziale per il funzionamento delle calcolatrici e l'oggetto è la calcolatrice specifica che esegue le funzioni matematiche.
   > - L'istruzione `while (true)` è un ciclo. Il codice all'interno del ciclo continua a essere eseguito ripetutamente finché la condizione all'interno di `()` risulta vera. Poiché la condizione viene indicata semplicemente come `true`, è sempre vera, quindi il ciclo viene eseguito all'infinito. Per chiudere il programma, l'utente deve chiudere manualmente la finestra della console. In caso contrario, il programma attende sempre un nuovo input.
   > - La parola chiave `cin` viene usata per accettare l'input da parte dell'utente. Questo flusso di input è in grado di elaborare una riga di testo immessa nella finestra della console e di inserirla all'interno di ogni variabile specificata, in ordine, presupponendo che l'input dell'utente corrisponda alla specifica richiesta. È possibile modificare questa riga per accettare tipi diversi di input, ad esempio, più di due numeri, benché sia anche necessario aggiornare la funzione `Calculate()` per gestire questa situazione.
   > - L'espressione `c.Calculate(x, oper, y);` chiama la funzione `Calculate` definita in precedenza e specifica i valori di input immessi. La funzione restituisce quindi un numero che viene memorizzato in `result`.
   > - Infine, `result` viene stampato nella console, in modo che l'utente veda il risultato del calcolo.

### <a name="build-and-test-the-code-again"></a>Compilare e testare di nuovo il codice

È ora possibile testare di nuovo il programma per verificare che tutto funzioni correttamente.

1. Premere **CTRL+F5** per ricompilare e avviare l'app.

1. Immettere `5 + 5` e premere **INVIO**. Verificare che il risultato sia 10.

   ![Risultato di 5 + 5](./media/calc-vs2019-five-plus-five.png "Risultato di 5 + 5")

## <a name="debug-the-app"></a>Eseguire il debug dell'app

Poiché l'utente è libero di digitare qualsiasi cosa nella finestra della console, è importante assicurarsi che la calcolatrice gestisca un certo input come previsto. Si eseguirà il debug del programma, anziché il programma stesso, in modo da verificare nel dettaglio quali operazioni esegue.

### <a name="to-run-the-app-in-the-debugger"></a>Per eseguire l'app nel debugger

1. Impostare un punto di interruzione sulla riga `result = c.Calculate(x, oper, y);`, subito dopo aver richiesto l'input dell'utente. Per impostare il punto di interruzione, fare clic accanto alla riga nella barra grigia verticale lungo il bordo sinistro della finestra dell'editor. Viene visualizzato un punto rosso.

   ![Imposta un punto di interruzione](./media/calc-vs2019-set-breakpoint.png "Imposta punto di interruzione")

   A questo punto, durante il debug del programma, l'esecuzione viene sempre sospesa in corrispondenza di quella riga. È già appurato che il programma funziona nei casi semplici. Poiché non si vuole sospendere l'esecuzione ogni volta, il punto di interruzione verrà impostato come condizionale.

1. Fare clic con il pulsante destro del mouse sul punto rosso che rappresenta il punto di interruzione e scegliere **Condizioni**. Nella casella di modifica per la condizione immettere `(y == 0) && (oper == '/')`. Scegliere il pulsante **Chiudi** al termine. La condizione viene salvata automaticamente.

   ![Impostare un punto di interruzione condizionale](./media/calc-vs2019-conditional-breakpoint.png "Impostare un punto di interruzione condizionale")

   Ora si sospende l'esecuzione in corrispondenza del nel punto di interruzione nel caso specifico in cui viene tentata una divisione per 0.

1. Per eseguire il debug del programma, premere **F5** o scegliere il pulsante della barra degli strumenti **Debugger Windows locale**, ovvero il pulsante con l'icona a forma di freccia verde. Nell'app console, se si immette un valore del tipo "5 - 0", il programma ha un comportamento normale e rimane in esecuzione. Tuttavia, se si digita "10 / 0", si interrompe in corrispondenza del punto di interruzione. È anche possibile inserire un numero qualsiasi di spazi tra l'operatore e i numeri: `cin` è abbastanza intelligente da analizzare l'input in modo appropriato.

   ![Sospendi in corrispondenza del punto di interruzione condizionale](./media/calc-vs2019-debug-breakpoint.png "Sospendi in corrispondenza del punto di interruzione condizionale")

### <a name="useful-windows-in-the-debugger"></a>Finestre utili nel debugger

Ogni volta che si esegue il debug del codice, è possibile notare che vengono visualizzate alcune nuove finestre. Queste finestre possono semplificare l'esperienza di debug. Osservare la finestra **Auto**. La finestra **Auto** contiene i valori correnti delle variabili usate almeno tre righe prima e fino alla riga corrente. Per visualizzare tutte le variabili da tale funzione, passare alla finestra **Variabili locali**. È effettivamente possibile modificare i valori di queste variabili in tempo reale durante il debug, per vedere quale effetto possono avere sul programma. In questo caso non verranno modificate.

   ![Finestra variabili locali](./media/calc-vs2019-debug-locals.png "Finestra variabili locali")

È anche possibile passare il mouse sulle variabili nel codice stesso per visualizzarne i valori correnti dove l'esecuzione è attualmente in pausa. Verificare che la finestra dell'editor sia attiva facendo clic su di essa.

   ![Passare il mouse per visualizzare i valori delle variabili correnti](./media/calc-vs2019-hover-tooltip.png "Passare il mouse per visualizzare i valori delle variabili correnti")

### <a name="to-continue-debugging"></a>Per continuare il debug

1. La linea gialla a sinistra indica il punto di esecuzione corrente. La riga corrente chiama `Calculate`, quindi premere **F11** per selezionare **Esegui istruzione** per la funzione. In questo modo si accede al corpo della funzione `Calculate`. Fare attenzione con **Esegui istruzione**. Con un uso eccessivo si potrebbe sprecare molto tempo, perché accede a tutto il codice usato nella riga attiva, incluse le funzioni della libreria standard.

1. Ora che il punto di esecuzione è all'inizio della funzione `Calculate`, premere **F10** per passare alla riga successiva nell'esecuzione del programma. La funzione **F10** è anche nota come **Esegui istruzione/routine**. È possibile usare **Passa** per passare da una riga all'altra senza scendere nel dettaglio di ciò che avviene in ogni parte della riga. In generale è consigliabile usare **Passa** anziché **Esegui istruzione**, a meno che non si voglia scendere più in dettaglio nel codice chiamato da un'altra posizione (come per raggiungere il corpo di `Calculate`).

1. Continuare a usare **F10** per **passare** ogni riga finché non si torna alla funzione `main()` nell'altro file e fermarsi alla riga `cout`.

   Sembra che il programma si comporti come previsto: accetta il primo numero e lo divide per il secondo. Sulla riga `cout` passare il mouse sulla variabile `result` o esaminare `result` nella finestra **Auto**. Si noterà che il relativo valore è elencato come "inf" e questo non è corretto, quindi si vedrà come risolvere il problema. La riga `cout` restituisce semplicemente qualsiasi valore archiviato in `result`, quindi se si va avanti di un'altra riga usando **F10**, la finestra della console visualizza:

   ![Risultato della divisione per zero](./media/calc-vs2019-divide-by-zero-fail.png "Risultato della divisione per zero")

   Ciò accade perché la divisione per zero non è definita, quindi il programma non ha una risposta numerica per l'operazione richiesta.

### <a name="to-fix-the-divide-by-zero-error"></a>Per correggere l'errore di divisione per zero

È possibile gestire la divisione per zero in modo che un utente sia in grado di capire il problema.

1. Apportare le modifiche seguenti in *CalculatorTutorial.cpp*. È possibile lasciare il programma in esecuzione durante la modifica, grazie alla del debugger **Modifica e continuazione**:

    ```cpp
    // CalculatorTutorial.cpp : This file contains the 'main' function. Program execution begins and ends there.
    //

    #include <iostream>
    #include "Calculator.h"

    using namespace std;

    int main()
    {
        double x = 0.0;
        double y = 0.0;
        double result = 0.0;
        char oper = '+';

        cout << "Calculator Console Application" << endl << endl;
        cout << "Please enter the operation to perform. Format: a+b | a-b | a*b | a/b" << endl;

        Calculator c;
        while (true)
        {
            cin  >> x  >> oper  >> y;
            if (oper == '/' && y == 0)
            {
                cout << "Division by 0 exception" << endl;
                continue;
            }
            else
            {
                result = c.Calculate(x, oper, y);
            }
            cout << "Result is: " << result << endl;
        }

        return 0;
    }
    ```

1. Ora premere **F5** una volta. L'esecuzione del programma continua finché non deve essere sospesa per richiedere l'input dell'utente. Immettere di nuovo `10 / 0`. A questo punto viene stampato un messaggio più utile. Viene chiesto all'utente di immettere altro input e il programma continua normalmente l'esecuzione.

   ![Risultato finale dopo le modifiche](./media/calc-vs2019-final-verification.png "Risultato finale dopo le modifiche")

   > [!Note]
   > Quando si modifica il codice mentre si è in modalità di debug, è possibile che il codice risulti non aggiornato. Ciò si verifica quando il debugger sta ancora eseguendo il codice precedente e non lo ha ancora aggiornato con le modifiche. In questo caso nel debugger viene visualizzata una finestra di dialogo per informare l'utente. A volte può essere necessario premere **F5** per aggiornare il codice in esecuzione. In particolare, se si apporta una modifica in una funzione mentre il punto di esecuzione è all'interno di tale funzione, è necessario uscire dalla funzione e ritornare al suo interno per ottenere il codice aggiornato. Se per qualche motivo questa operazione non funziona e viene visualizzato un messaggio di errore, è possibile interrompere il debug facendo clic sul quadrato rosso nella barra degli strumenti sotto i menu della parte superiore dell'IDE, quindi avviare di nuovo il debug immettendo **F5** o scegliendo la freccia verde di riproduzione accanto al pulsante di arresto nella barra degli strumenti.

   > Informazioni sui tasti di scelta rapida di esecuzione e debug
   >
   > - **F5** (o **Debug** > **Avvia debug**) avvia una sessione di debug, se non ne è stata già attivata una, ed esegue il programma finché non viene raggiunto un punto di interruzione o il programma richiede l'input dell'utente. Se non è necessario alcun input dell'utente e non è disponibile un punto di interruzione da raggiungere, il programma termina e la finestra della console si chiude quando il programma completa l'esecuzione. Se si vuole eseguire un programma, ad esempio di tipo "Hello World", usare **CTRL+F5** o impostare un punto di interruzione prima di immettere **F5** per mantenere aperta la finestra.
   > - **CTRL+F5** (o **Debug** > **Avvia senza eseguire debug**) consente di eseguire l'applicazione senza entrare nella modalità di debug. L'operazione è leggermente più veloce rispetto al debug e la finestra della console rimane aperta dopo che il programma termina l'esecuzione.
   > - **F10** (opzione **Passa**) consente di scorrere il codice riga per riga e di vedere in che modo viene eseguito il codice e quali sono i valori delle variabili in ogni fase dell'esecuzione.
   > - **F11** (opzione **Esegui istruzione**) funziona in modo analogo a **Passa**, ad eccezione del fatto che esegue le istruzioni per tutte le funzioni chiamate sulla riga di esecuzione. Ad esempio, se la riga da eseguire chiama una funzione, premendo **F11** il puntatore del mouse si sposta nel corpo della funzione, quindi è possibile seguire il codice della funzione da eseguire prima di tornare alla riga da cui si è partiti. Premendo **F10** si passa semplicemente alla riga successiva ignorando la chiamata alla funzione, che avviene ugualmente, ma il programma non si interrompe per indicare quale operazione sta eseguendo.

### <a name="close-the-app"></a>Chiudere l'app

- Se è ancora in esecuzione, chiudere la finestra della console per l'app calcolatrice.

## <a name="the-finished-app"></a>L'app completata

Congratulazioni! Il codice per l'app calcolatrice è stato completato e compilato e ne è stato eseguito il debug in Visual Studio.

## <a name="next-steps"></a>Passaggi successivi

[Altre informazioni su Visual Studio per C++](https://blogs.msdn.microsoft.com/vcblog/2017/04/21/getting-started-with-visual-studio-for-c-and-cpp-development/)

::: moniker-end

::: moniker range="<vs-2019"

In genere il punto di partenza per un programmatore C++ è un'applicazione "Hello, world!" eseguita sulla riga di comando. Questo articolo illustra la procedura di creazione dell'applicazione in Visual Studio e quindi quella di un'applicazione più complessa, ovvero un'app calcolatrice.

## <a name="prerequisites"></a>Prerequisites

- Visual Studio con il carico di lavoro **Sviluppo di applicazioni desktop con C++** installato e in esecuzione nel computer. Se non è ancora installato, vedere [Installare il supporto C++ in Visual Studio](../build/vscpp-step-0-installation.md).

## <a name="create-your-app-project"></a>Creare il progetto di app

Visual Studia usa i *progetti* per organizzare il codice per un'applicazione e le *soluzioni* per organizzare i progetti. Un progetto contiene tutte le opzioni, le configurazioni e le regole usate per la compilazione dell'applicazione. Gestisce anche la relazione tra tutti i file del progetto e i file esterni. Per creare l'applicazione, per prima cosa creare un nuovo progetto e una soluzione.

1. Nella barra dei menu di Visual Studio scegliere **File** > **Nuovo** > **Progetto**. Si apre la finestra **Nuovo progetto**.

2. Nella barra laterale sinistra verificare che sia selezionato **Visual C++** . Nella parte centrale scegliere **Applicazione console di Windows**.

3. Nella casella di modifica **Nome** in basso assegnare il nome *CalculatorTutorial* al nuovo progetto e scegliere **OK**.

   ![Finestra di dialogo nuovo progetto](./media/calculator-new-project-dialog.png "Finestra di dialogo nuovo progetto")

   Viene creata un'applicazione console C++ di Windows vuota. Le applicazioni console usano una finestra della console di Windows per visualizzare l'output e accettare l'input dell'utente. In Visual Studio si apre una finestra dell'editor e viene visualizzato il codice generato:

    ```cpp
    // CalculatorTutorial.cpp : This file contains the 'main' function. Program execution begins and ends there.
    //

    #include "pch.h"
    #include <iostream>

    int main()
    {
        std::cout << "Hello World!\n";
    }

    // Run program: Ctrl + F5 or Debug > Start Without Debugging menu
    // Debug program: F5 or Debug > Start Debugging menu

    // Tips for Getting Started:
    //   1. Use the Solution Explorer window to add/manage files
    //   2. Use the Team Explorer window to connect to source control
    //   3. Use the Output window to see build output and other messages
    //   4. Use the Error List window to view errors
    //   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
    //   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
    ```

## <a name="verify-that-your-new-app-builds-and-runs"></a>Verificare che la nuova app venga compilata ed eseguita

Il modello per una nuova applicazione console di Windows crea una semplice app "Hello World" di C++. A questo punto è possibile vedere in che modo Visual Studio compila ed esegue le app create direttamente dall'IDE.

1. Per compilare il progetto scegliere **Compila soluzione** dal menu **Compila**. Nella finestra **Output** vengono visualizzati i risultati del processo di compilazione.

   ![Compilare il progetto](./media/calculator-initial-build-output.png "Compilare il progetto")

1. Per eseguire il codice, nella barra dei menu selezionare **Debug**, **Avvia senza eseguire debug**.

   ![Avviare il progetto](./media/calculator-hello-world-console.png "Avviare il progetto")

   Si apre una finestra della console si apre e quindi viene eseguita l'app. Quando viene avviata in Visual Studio, un'app console esegue il codice, quindi stampa "Premere un tasto per continuare. . ." per consentire di visualizzare l'output. Congratulazioni! Si è creata la prima app console "Hello, World!" in Visual Studio.

1. Premere un tasto per chiudere la finestra della console e tornare a Visual Studio.

Ora sono disponibili gli strumenti necessari per compilare ed eseguire l'app dopo ogni modifica, per verificare che il codice continui a funzionare come previsto. Successivamente, verrà illustrata la procedura di debug da seguire se il codice non funziona.

## <a name="edit-the-code"></a>Modificare il codice

Ora è possibile trasformare il codice contenuto in questo modello in un'app calcolatrice.

1. Nel file *CalculatorTutorial.cpp* modificare il codice in base a questo esempio:

    ```cpp
    // CalculatorTutorial.cpp : This file contains the 'main' function. Program execution begins and ends there.
    //

    #include "pch.h"
    #include <iostream>

    using namespace std;

    int main()
    {
        cout << "Calculator Console Application" << endl << endl;
        cout << "Please enter the operation to perform. Format: a+b | a-b | a*b | a/b"
            << endl;
        return 0;
    }

    // Run program: Ctrl + F5 or Debug > Start Without Debugging menu
    // Debug program: F5 or Debug > Start Debugging menu
    // Tips for Getting Started:
    //   1. Use the Solution Explorer window to add/manage files
    //   2. Use the Team Explorer window to connect to source control
    //   3. Use the Output window to see build output and other messages
    //   4. Use the Error List window to view errors
    //   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
    //   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
    ```

   > Informazioni sul codice:
   >
   > - Le istruzioni `#include` consentono di fare riferimento al codice che si trova in altri file. In alcuni casi viene visualizzato un nome file racchiuso tra parentesi quadre ( **\<\>** ), in altri casi il nome è racchiuso tra virgolette ( **" "** ). In generale, le parentesi quadre vengono usate quando si fa riferimento alla libreria standard C++, mentre le virgolette vengono usate per gli altri file.
   > - La riga `#include "pch.h"` (o in Visual Studio 2017 e versioni precedenti, `#include "stdafx.h"`) fa riferimento a un elemento noto come intestazione precompilata. Questi oggetti vengono spesso usati dai programmatori professionisti per migliorare i tempi di compilazione, ma esulano dall'ambito di questa esercitazione.
   > - La riga `using namespace std;` indica al compilatore che è previsto materiale in arrivo dalla libreria standard C++ da usare in questo file. Senza questa riga, ogni parola chiave proveniente dalla libreria dovrà essere preceduta da `std::`, per indicarne l'ambito. Ad esempio, senza tale riga, ogni riferimento a `cout` deve essere scritto come `std::cout`. L'istruzione `using` viene aggiunta per rendere il codice più pulito.
   > - La parola chiave `cout` viene usata per stampare in un output standard di C++. L'operatore **\<\<** indica al compilatore di inviare tutto ciò che si trova alla sua destra all'output standard.
   > - La parola chiave **endl** è simile al tasto INVIO, termina la riga e sposta il cursore nella riga successiva. È opportuno inserire un elemento `\n` all'interno della stringa (racchiuso tra "") per eseguire la stessa operazione, poiché `endl` svuota sempre il buffer e può influire negativamente sulle prestazioni del programma, ma dal momento che si tratta di un'app di dimensioni molto ridotte, si usa `endl` per migliorare la leggibilità.
   > - Tutte le istruzioni C++ devono terminare con un punto e virgola e tutte le applicazioni C++ devono contenere una funzione `main()`. Questa funzione è ciò che il programma esegue all'inizio. Tutto il codice deve essere accessibile da `main()` per poter essere usato.

1. Per salvare il file, immettere **Ctrl + S** o scegliere l'icona **Salva** nella parte superiore dell'IDE, l'icona a forma di disco floppy nella barra degli strumenti sotto la barra dei menu.

1. Per eseguire l'applicazione, premere **CTRL+F5** o accedere al menu **Debug** e scegliere **Avvia senza eseguire debug**. Se un elemento popup indica **Il progetto seguente non è aggiornato**, è possibile selezionare **Non visualizzare più questo messaggio** e quindi scegliere **Sì** per compilare l'applicazione. Dovrebbe essere visualizzata una finestra della console con il testo specificato nel codice.

   ![Compilare e avviare l'applicazione](./media/calculator-first-launch.gif "Compilare e avviare l'applicazione")

1. Al termine, chiudere la finestra della console.

## <a name="add-code-to-do-some-math"></a>Aggiungere codice per eseguire alcuni calcoli matematici

È il momento di aggiungere una logica matematica.

### <a name="to-add-a-calculator-class"></a>Per aggiungere una classe Calculator

1. Accedere al menu **Progetto** e scegliere **Aggiungi classe**. Nella casella di modifica **Nome classe** immettere *Calculator*. Scegliere **OK**. Due nuovi file vengono aggiunti al progetto. Per salvare tutti i file modificati in una sola volta, premere **CTRL+MAIUSC+S**. Si tratta di una scelta rapida da tastiera per **File** > **Salva tutto**. È anche disponibile un pulsante della barra degli strumenti per **Salva tutto**, un'icona con due dischi floppy, accanto al pulsante **Salva**. In generale, è buona norma scegliere spesso **Salva tutto** in modo da non tralasciare qualche file quando si salva.

   ![Creare la classe Calculator](./media/calculator-create-class.gif "Creare la classe Calculator")

   Una classe è simile a un progetto per un oggetto che esegue un'operazione. In questo caso si definisce una calcolatrice e il modo in cui deve funzionare. La procedura guidata **Aggiungi classe** usata in precedenza ha creato i file H e CPP che hanno lo stesso nome della classe. È possibile visualizzare un elenco completo dei file del progetto nella finestra **Esplora soluzioni** visibile sul lato dell'IDE. Se la finestra non è visibile, è possibile aprirla dalla barra dei menu: scegliere **Visualizza** > **Esplora soluzioni**.

   ![Esplora soluzioni](./media/calculator-solution-explorer.png "Esplora soluzioni")

   Nell'editor verranno ora aperte tre schede: *CalculatorTutorial. cpp*, *Calculator. h*e *Calculator. cpp*. Se si chiude accidentalmente una delle schede, è possibile riaprirla facendo doppio clic su di essa nella finestra **Esplora soluzioni**.

1. In **Calculator.h** rimuovere le righe `Calculator();` e `~Calculator();` generate, poiché in questa fase non sono necessarie. Successivamente, aggiungere la seguente riga di codice in modo che il file abbia questo aspetto:

    ```cpp
    #pragma once
    class Calculator
    {
    public:
        double Calculate(double x, char oper, double y);
    };
    ```

   > Informazioni sul codice
   >
   > - La riga aggiunta dichiara una nuova funzione denominata `Calculate`, che verrà usata per eseguire operazioni matematiche di addizione, sottrazione, moltiplicazione e divisione.
   > - Il codice C++ è organizzato in file di *intestazione* (con estensione h) e file di *origine* (con estensione cpp). Diversi compilatori supportano alcune altre estensioni di file, ma queste sono le principali che è opportuno conoscere. Funzioni e variabili normalmente vengono *dichiarate*, con l'assegnazione di un nome e un tipo, nei file di intestazione e *implementate*, ovvero definite, nei file di origine. Per accedere al codice definito in un altro file, è possibile usare `#include "filename.h"`, dove "filename.h" è il nome del file che dichiara le variabili o funzioni da usare.
   > - Le due righe eliminate dichiaravano un *costruttore* e un *distruttore* per la classe. Per una classe semplice come questa, il compilatore le crea automaticamente e il relativo utilizzo esula dall'ambito di questa esercitazione.
   > - Può essere opportuno organizzare il codice in diversi file in base allo scopo, in modo che sia più facile trovare il codice necessario in un secondo tempo. In questo caso la classe `Calculator` viene definita separatamente dal file che contiene la funzione `main()`, ma si prevede di fare riferimento alla classe `Calculator` in `main()`.

1. Si noterà una sottolineatura a zig zag verde sotto `Calculate`, che appare perché non è ancora stata definita la funzione `Calculate` nel file CPP. Passare il mouse sulla parola, fare clic sulla lampadina visualizzata e scegliere l'opzione che consente di **creare una definizione di "Calculate" in Calculator.cpp**. Viene visualizzato un popup con un'anteprima della modifica del codice apportata nell'altro file. Il codice è stato aggiunto a *Calculator.cpp*.

   ![Crea definizione di calcolo](./media/calculator-create-definition.gif "Crea definizione di calcolo")

   Attualmente restituisce solo 0.0. A tale scopo, seguire questa procedura. Premere **ESC** per chiudere l'elemento popup.

1. Passare al file *Calculator.cpp* nella finestra dell'editor. Rimuovere le sezioni `Calculator()` e `~Calculator()` (come per il file H) e aggiungere il codice seguente a `Calculate()`:

    ```cpp
    #include "pch.h"
    #include "Calculator.h"

    double Calculator::Calculate(double x, char oper, double y)
    {
        switch(oper)
        {
            case '+':
                return x + y;
            case '-':
                return x - y;
            case '*':
                return x * y;
            case '/':
                return x / y;
            default:
                return 0.0;
        }
    }
    ```

   > Informazioni sul codice
   >
   > - La funzione `Calculate` usa un numero, un operatore e un secondo numero, quindi esegue l'operazione richiesta sui numeri.
   > - L'istruzione switch verifica quale operatore è stato specificato ed esegue solo il case corrispondente a tale operazione. Il case predefinito rappresenta il fallback nel caso in cui l'utente digiti un operatore che non viene accettato, in modo che il programma non venga interrotto. In generale, è consigliabile gestire l'input utente non valido in modo più elegante, ma ciò esula dall'ambito di questa esercitazione.
   > - La parola chiave `double` denota un tipo di numero che supporta i decimali. In questo modo, la calcolatrice può gestire funzioni matematiche sia con numeri decimali che con numeri interi. La funzione `Calculate` è necessaria per restituire sempre un numero di questo tipo a causa della presenza di `double` all'inizio del codice (indica il tipo restituito della funzione), motivo per cui viene restituito 0.0 anche nel case predefinito.
   > - Il file H dichiara il *prototipo* di funzione, che indica in anticipo al compilatore quali sono i parametri richiesti e quale tipo restituito è previsto. Il file CPP contiene tutti i dettagli dell'implementazione della funzione.

Se a questo punto si compila e si esegue nuovamente il codice, verrà comunque chiesto quale operazione eseguire e il codice verrà chiuso. Successivamente, si modificherà la funzione `main` per eseguire alcuni calcoli.

### <a name="to-call-the-calculator-class-member-functions"></a>Per chiamare le funzioni membro della classe Calculator

1. A questo punto è possibile aggiornare la funzione `main` in *CalculatorTutorial.cpp*:

    ```cpp
    // CalculatorTutorial.cpp : This file contains the 'main' function. Program execution begins and ends there.
    //

    #include "pch.h"
    #include <iostream>
    #include "Calculator.h"

    using namespace std;

    int main()
    {
        double x = 0.0;
        double y = 0.0;
        double result = 0.0;
        char oper = '+';

        cout << "Calculator Console Application" << endl << endl;
        cout << "Please enter the operation to perform. Format: a+b | a-b | a*b | a/b"
             << endl;

        Calculator c;
        while (true)
        {
            cin >> x >> oper >> y;
            result = c.Calculate(x, oper, y);
            cout << "Result is: " << result << endl;
        }

        return 0;
    }
    ```

   > Informazioni sul codice
   >
   > - Poiché i programmi C++ iniziano sempre con la funzione `main()`, è necessario chiamare altro codice da tale posizione, quindi è necessaria un'istruzione `#include`.
   > - Alcune variabili iniziali, `x`, `y`, `oper` e `result`, vengono dichiarate per archiviare rispettivamente il primo numero, il secondo numero, l'operatore e il risultato finale. È sempre opportuno assegnare alle variabili alcuni valori iniziali per evitare un comportamento indefinito, operazione eseguita in questa procedura.
   > - La riga `Calculator c;` dichiara un oggetto denominato "c" come istanza della classe `Calculator`. La classe stessa è semplicemente un progetto iniziale per il funzionamento delle calcolatrici e l'oggetto è la calcolatrice specifica che esegue le funzioni matematiche.
   > - L'istruzione `while (true)` è un ciclo. Il codice all'interno del ciclo continua a essere eseguito ripetutamente finché la condizione all'interno di `()` risulta vera. Poiché la condizione viene indicata semplicemente come `true`, è sempre vera, quindi il ciclo viene eseguito all'infinito. Per chiudere il programma, l'utente deve chiudere manualmente la finestra della console. In caso contrario, il programma attende sempre un nuovo input.
   > - La parola chiave `cin` viene usata per accettare l'input da parte dell'utente. Questo flusso di input è in grado di elaborare una riga di testo immessa nella finestra della console e di inserirla all'interno di ogni variabile specificata, in ordine, presupponendo che l'input dell'utente corrisponda alla specifica richiesta. È possibile modificare questa riga per accettare tipi diversi di input, ad esempio, più di due numeri, benché sia anche necessario aggiornare la funzione `Calculate()` per gestire questa situazione.
   > - L'espressione `c.Calculate(x, oper, y);` chiama la funzione `Calculate` definita in precedenza e specifica i valori di input immessi. La funzione restituisce quindi un numero che viene memorizzato in `result`.
   > - Infine, `result` viene stampato nella console, in modo che l'utente veda il risultato del calcolo.

### <a name="build-and-test-the-code-again"></a>Compilare e testare di nuovo il codice

È ora possibile testare di nuovo il programma per verificare che tutto funzioni correttamente.

1. Premere **CTRL+F5** per ricompilare e avviare l'app.

1. Immettere `5 + 5` e premere **INVIO**. Verificare che il risultato sia 10.

   ![Risultato di 5 + 5](./media/calculator-five-plus-five.png "Risultato di 5 + 5")

## <a name="debug-the-app"></a>Eseguire il debug dell'app

Poiché l'utente è libero di digitare qualsiasi cosa nella finestra della console, è importante assicurarsi che la calcolatrice gestisca un certo input come previsto. Si eseguirà il debug del programma, anziché il programma stesso, in modo da verificare nel dettaglio quali operazioni esegue.

### <a name="to-run-the-app-in-the-debugger"></a>Per eseguire l'app nel debugger

1. Impostare un punto di interruzione sulla riga `result = c.Calculate(x, oper, y);`, subito dopo aver richiesto l'input dell'utente. Per impostare il punto di interruzione, fare clic accanto alla riga nella barra grigia verticale lungo il bordo sinistro della finestra dell'editor. Viene visualizzato un punto rosso.

   ![Imposta un punto di interruzione](./media/calculator-set-breakpoint.gif "Imposta punto di interruzione")

   A questo punto, durante il debug del programma, l'esecuzione viene sempre sospesa in corrispondenza di quella riga. È già appurato che il programma funziona nei casi semplici. Poiché non si vuole sospendere l'esecuzione ogni volta, il punto di interruzione verrà impostato come condizionale.

1. Fare clic con il pulsante destro del mouse sul punto rosso che rappresenta il punto di interruzione e scegliere **Condizioni**. Nella casella di modifica per la condizione immettere `(y == 0) && (oper == '/')`. Scegliere il pulsante **Chiudi** al termine. La condizione viene salvata automaticamente.

   ![Impostare un punto di interruzione condizionale](./media/calculator-conditional-breakpoint.gif "Impostare un punto di interruzione condizionale")

   Ora si sospende l'esecuzione in corrispondenza del nel punto di interruzione nel caso specifico in cui viene tentata una divisione per 0.

1. Per eseguire il debug del programma, premere **F5** o scegliere il pulsante della barra degli strumenti **Debugger Windows locale**, ovvero il pulsante con l'icona a forma di freccia verde. Nell'app console, se si immette un valore del tipo "5 - 0", il programma ha un comportamento normale e rimane in esecuzione. Tuttavia, se si digita "10 / 0", si interrompe in corrispondenza del punto di interruzione. È anche possibile inserire un numero qualsiasi di spazi tra l'operatore e i numeri. `cin` è abbastanza intelligente da analizzare l'input in modo appropriato.

   ![Sospendi in corrispondenza del punto di interruzione condizionale](./media/calculator-debug-conditional.gif "Sospendi in corrispondenza del punto di interruzione condizionale")

### <a name="useful-windows-in-the-debugger"></a>Finestre utili nel debugger

Ogni volta che si esegue il debug del codice, è possibile notare che vengono visualizzate alcune nuove finestre. Queste finestre possono semplificare l'esperienza di debug. Osservare la finestra **Auto**. La finestra **Auto** contiene i valori correnti delle variabili usate almeno tre righe prima e fino alla riga corrente.

   ![Finestra auto](./media/calculator-autos.png "Finestra auto")

Per visualizzare tutte le variabili da tale funzione, passare alla finestra **Variabili locali**. È effettivamente possibile modificare i valori di queste variabili in tempo reale durante il debug, per vedere quale effetto possono avere sul programma. In questo caso non verranno modificate.

   ![Finestra variabili locali](./media/calculator-locals.png "Finestra variabili locali")

È anche possibile passare il mouse sulle variabili nel codice stesso per visualizzarne i valori correnti dove l'esecuzione è attualmente in pausa. Verificare che la finestra dell'editor sia attiva facendo clic su di essa.

   ![Passare il mouse per visualizzare i valori delle variabili correnti](./media/calculator-hover-tooltip.gif "Passare il mouse per visualizzare i valori delle variabili correnti")

### <a name="to-continue-debugging"></a>Per continuare il debug

1. La linea gialla a sinistra indica il punto di esecuzione corrente. La riga corrente chiama `Calculate`, quindi premere **F11** per selezionare **Esegui istruzione** per la funzione. In questo modo si accede al corpo della funzione `Calculate`. Fare attenzione con **Esegui istruzione**. Con un uso eccessivo si potrebbe sprecare molto tempo, perché accede a tutto il codice usato nella riga attiva, incluse le funzioni della libreria standard.

1. Ora che il punto di esecuzione è all'inizio della funzione `Calculate`, premere **F10** per passare alla riga successiva nell'esecuzione del programma. La funzione **F10** è anche nota come **Esegui istruzione/routine**. È possibile usare **Passa** per passare da una riga all'altra senza scendere nel dettaglio di ciò che avviene in ogni parte della riga. In generale è consigliabile usare **Passa** anziché **Esegui istruzione**, a meno che non si voglia scendere più in dettaglio nel codice chiamato da un'altra posizione (come per raggiungere il corpo di `Calculate`).

1. Continuare a usare **F10** per **passare** ogni riga finché non si torna alla funzione `main()` nell'altro file e fermarsi alla riga `cout`.

   ![Esci da istruzione/ricalcolo e controlla risultato](./media/calculator-undefined-zero.gif "Esci da istruzione/ricalcolo e controlla risultato")

   Sembra che il programma si comporti come previsto: accetta il primo numero e lo divide per il secondo. Sulla riga `cout` passare il mouse sulla variabile `result` o esaminare `result` nella finestra **Auto**. Si noterà che il relativo valore è elencato come "inf" e questo non è corretto, quindi si vedrà come risolvere il problema. La riga `cout` restituisce semplicemente qualsiasi valore archiviato in `result`, quindi se si va avanti di un'altra riga usando **F10**, la finestra della console visualizza:

   ![Risultato della divisione per zero](./media/calculator-divide-by-zero-fail.png "Risultato della divisione per zero")

   Ciò accade perché la divisione per zero non è definita, quindi il programma non ha una risposta numerica per l'operazione richiesta.

### <a name="to-fix-the-divide-by-zero-error"></a>Per correggere l'errore di divisione per zero

È possibile gestire la divisione per zero in modo che un utente sia in grado di capire il problema.

1. Apportare le modifiche seguenti in *CalculatorTutorial.cpp*. È possibile lasciare il programma in esecuzione durante la modifica, grazie alla del debugger **Modifica e continuazione**:

    ```cpp
    // CalculatorTutorial.cpp : This file contains the 'main' function. Program execution begins and ends there.
    //

    #include "pch.h"
    #include <iostream>
    #include "Calculator.h"

    using namespace std;

    int main()
    {
        double x = 0.0;
        double y = 0.0;
        double result = 0.0;
        char oper = '+';

        cout << "Calculator Console Application" << endl << endl;
        cout << "Please enter the operation to perform. Format: a+b | a-b | a*b | a/b" << endl;

        Calculator c;
        while (true)
        {
            cin  >> x  >> oper  >> y;
            if (oper == '/' && y == 0)
            {
                cout << "Division by 0 exception" << endl;
                continue;
            }
            else
            {
                result = c.Calculate(x, oper, y);
            }
            cout << "Result is: " << result << endl;
        }

        return 0;
    }
    ```

1. Ora premere **F5** una volta. L'esecuzione del programma continua finché non deve essere sospesa per richiedere l'input dell'utente. Immettere di nuovo `10 / 0`. A questo punto viene stampato un messaggio più utile. Viene chiesto all'utente di immettere altro input e il programma continua normalmente l'esecuzione.

   ![Risultato finale dopo le modifiche](./media/calculator-final-verification.gif "Risultato finale dopo le modifiche")

   > [!Note]
   > Quando si modifica il codice mentre si è in modalità di debug, è possibile che il codice risulti non aggiornato. Ciò si verifica quando il debugger sta ancora eseguendo il codice precedente e non lo ha ancora aggiornato con le modifiche. In questo caso nel debugger viene visualizzata una finestra di dialogo per informare l'utente. A volte può essere necessario premere **F5** per aggiornare il codice in esecuzione. In particolare, se si apporta una modifica in una funzione mentre il punto di esecuzione è all'interno di tale funzione, è necessario uscire dalla funzione e ritornare al suo interno per ottenere il codice aggiornato. Se per qualche motivo questa operazione non funziona e viene visualizzato un messaggio di errore, è possibile interrompere il debug facendo clic sul quadrato rosso nella barra degli strumenti sotto i menu della parte superiore dell'IDE, quindi avviare di nuovo il debug immettendo **F5** o scegliendo la freccia verde di riproduzione accanto al pulsante di arresto nella barra degli strumenti.

   > Informazioni sui tasti di scelta rapida di esecuzione e debug
   >
   > - **F5** (o **Debug** > **Avvia debug**) avvia una sessione di debug, se non ne è stata già attivata una, ed esegue il programma finché non viene raggiunto un punto di interruzione o il programma richiede l'input dell'utente. Se non è necessario alcun input dell'utente e non è disponibile un punto di interruzione da raggiungere, il programma termina e la finestra della console si chiude quando il programma completa l'esecuzione. Se si vuole eseguire un programma, ad esempio di tipo "Hello World", usare **CTRL+F5** o impostare un punto di interruzione prima di immettere **F5** per mantenere aperta la finestra.
   > - **CTRL+F5** (o **Debug** > **Avvia senza eseguire debug**) consente di eseguire l'applicazione senza entrare nella modalità di debug. L'operazione è leggermente più veloce rispetto al debug e la finestra della console rimane aperta dopo che il programma termina l'esecuzione.
   > - **F10** (opzione **Passa**) consente di scorrere il codice riga per riga e di vedere in che modo viene eseguito il codice e quali sono i valori delle variabili in ogni fase dell'esecuzione.
   > - **F11** (opzione **Esegui istruzione**) funziona in modo analogo a **Passa**, ad eccezione del fatto che esegue le istruzioni per tutte le funzioni chiamate sulla riga di esecuzione. Ad esempio, se la riga da eseguire chiama una funzione, premendo **F11** il puntatore del mouse si sposta nel corpo della funzione, quindi è possibile seguire il codice della funzione da eseguire prima di tornare alla riga da cui si è partiti. Premendo **F10** si passa semplicemente alla riga successiva ignorando la chiamata alla funzione, che avviene ugualmente, ma il programma non si interrompe per indicare quale operazione sta eseguendo.

### <a name="close-the-app"></a>Chiudere l'app

- Se è ancora in esecuzione, chiudere la finestra della console per l'app calcolatrice.

## <a name="the-finished-app"></a>L'app completata

Congratulazioni! Il codice per l'app calcolatrice è stato completato e compilato e ne è stato eseguito il debug in Visual Studio.

## <a name="next-steps"></a>Passaggi successivi

[Altre informazioni su Visual Studio per C++](https://blogs.msdn.microsoft.com/vcblog/2017/04/21/getting-started-with-visual-studio-for-c-and-cpp-development/)

::: moniker-end
