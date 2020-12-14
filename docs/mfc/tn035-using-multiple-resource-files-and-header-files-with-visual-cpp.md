---
description: 'Altre informazioni su: TN035: uso di più file di risorse e file di intestazione con Visual C++'
title: 'TN035: utilizzo di più file di risorse e di intestazione in Visual C++'
ms.date: 11/04/2016
f1_keywords:
- vc.resources
helpviewer_keywords:
- resource files, multiple
- TN035
ms.assetid: 1f08ce5e-a912-44cc-ac56-7dd93ad73fb6
ms.openlocfilehash: 347c816040d6e20cd9b7ee01f07662066981b8aa
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97215469"
---
# <a name="tn035-using-multiple-resource-files-and-header-files-with-visual-c"></a>TN035: utilizzo di più file di risorse e di intestazione in Visual C++

> [!NOTE]
> La seguente nota tecnica non è stata aggiornata da quando è stata inclusa per la prima volta nella documentazione online. Di conseguenza, alcune procedure e argomenti potrebbero essere non aggiornati o errati. Per le informazioni più recenti, è consigliabile cercare l'argomento di interesse nell'indice della documentazione online.

In questa nota viene descritto in che modo l'editor risorse di Visual C++ supporta più file di risorse e file di intestazione condivisi in un singolo progetto o tra più progetti e come è possibile usufruire di tale supporto. Questa nota risponde alle domande seguenti:

- Quando si desidera suddividere un progetto in più file di risorse e/o file di intestazione e come procedere

- Come condividere un'intestazione comune. File H tra due. File RC

- Come dividere le risorse del progetto in più. File RC

- In che modo l'utente (e gli strumenti) gestiscono le dipendenze di compilazione tra. RC,. CPP, e. File H

Tenere presente che se si aggiunge un file di risorse aggiuntivo al progetto, ClassWizard non riconoscerà le risorse nel file aggiunto.

Questa nota è strutturata in modo da rispondere alle domande elencate in precedenza come segue:

- **Panoramica del modo in cui Visual C++ gestisce i file di risorse e i file di intestazione** offre una panoramica del comando incluso nel set di risorse Visual C++ consente di usare più file di risorse e file di intestazione nello stesso progetto.

- **Analisi di creazione guidata applicazioni-creato. RC e. I file H** esaminano i più file di risorse e di intestazione usati da un'applicazione creata da Creazione guidata applicazioni. Questi file vengono utilizzati come modello per ulteriori file di risorse e di intestazione che potrebbero essere aggiunti al progetto.

- L' **inclusione di file di intestazione aggiuntivi** descrive la posizione in cui è possibile includere più file di intestazione e fornisce informazioni dettagliate su come eseguire questa operazione.

- **Condivisione di un file di intestazione tra due. File RC** Mostra come è possibile condividere un file di intestazione tra più. RC di file in progetti diversi o eventualmente nello stesso progetto.

- **L'uso di più file di risorse nello stesso progetto descrive la** posizione in cui si potrebbe voler suddividere il progetto in più. I file RC e forniscono informazioni dettagliate su come eseguire questa operazione.

- L' **applicazione di file di Visual C++ non modificabili** descrive come è possibile verificare Visual C++ non modifichi e riformatta involontariamente una risorsa personalizzata.

- **Gestione dei simboli condivisi da più Visual C++ modificati. I file RC** descrivono come condividere gli stessi simboli tra più. File RC e come evitare l'assegnazione di valori numerici ID duplicati.

- **Gestione delle dipendenze tra. RC,. CPP, e. I file H** descrivono come Visual C++ evita la ricompilazione non necessaria. File CPP che dipendono dai file di simboli delle risorse.

- **Il modo in cui Visual C++ gestisce set include informazioni** fornisce dettagli tecnici su come Visual C++ tiene traccia di più (annidato). File RC e più file di intestazione #include da. File RC.

## <a name="overview-of-how-visual-c-manages-resource-files-and-header-files"></a>Panoramica della gestione di file di risorse e file di intestazione in Visual C++

Visual C++ gestisce un singolo file di risorse con estensione RC e un corrispondente file di intestazione con estensione H come coppia di file strettamente accoppiata. Quando si modificano e si salvano le risorse in un file RC, si modificano e si salvano indirettamente i simboli nel file H corrispondente. Sebbene sia possibile aprire e modificare più file RC contemporaneamente, mediante l'interfaccia utente MDI di Visual C++, per qualsiasi file RC specificato viene indirettamente modificato esattamente un file di intestazione corrispondente.

### <a name="symbol-header-file"></a>File di intestazione simboli

Per impostazione predefinita, in Visual C++ il file di intestazione corrispondente viene sempre denominato RESOURCE.H, indipendentemente dal nome del file di risorse, ad esempio, MYAPP.RC. Utilizzando il comando **Includi risorse** dal menu **Visualizza** in Visual C++, è possibile modificare il nome del file di intestazione aggiornando il file di intestazione dei simboli nella finestra di dialogo **Includi set** .

### <a name="read-only-symbol-directives"></a>Direttive per simboli in sola lettura

Anche se in Visual C++ viene modificato un solo file di intestazione per ogni file RC specificato, Visual C++ supporta riferimenti ai simboli definiti in file di intestazione di sola lettura aggiuntivi. Utilizzando il comando **Includi risorse** dal menu **Visualizza** in Visual C++, è possibile specificare un numero qualsiasi di file di intestazione di sola lettura aggiuntivi come Read-Only direttive symbol. La restrizione "sola lettura" indica che quando si aggiunge una nuova risorsa nel file RC, è possibile utilizzare un simbolo definito nel file di intestazione di sola lettura, tuttavia se si elimina la risorsa, il simbolo rimarrà definito nel file di intestazione di sola lettura. Non è possibile modificare il valore numerico assegnato a un simbolo di sola lettura.

### <a name="compile-time-directives"></a>Direttive in fase di compilazione

Visual C++ supporta inoltre l'annidamento dei file di risorse, dove un file RC viene incluso tramite #include all'interno di un altro. Quando si modifica un file RC specificato utilizzando Visual C++, alcune risorse nei file #include non sono visibili. Quando tuttavia si compila il file RC, i file #include vengono compilati. Utilizzando il comando **Includi risorse** dal menu **Visualizza** in Visual C++, è possibile specificare un numero qualsiasi di #include. I file RC come direttive Compile-Time.

Si noti che cosa accade se si leggono Visual C++ un. File RC che #include un altro. File RC *non* specificato come direttiva Compile-Time. Questa situazione può verificarsi quando si introduce in Visual C++ un file RC gestito in precedenza manualmente con un editor di testo. Quando in Visual C++ viene letto il file RC #include, le risorse #include vengono unite nel file RC padre. Quando si salva il file RC padre, l'istruzione #include, in effetti, verrà sostituita dalle risorse #include. Se non si desidera che l'Unione venga eseguita, è necessario rimuovere l'istruzione #include dall'elemento padre. File RC *prima* di leggerlo in Visual C++; quindi, utilizzando Visual C++, aggiungere di nuovo la stessa istruzione #include come una direttiva Compile-Time.

Visual C++ Salva in un. File RC i tre tipi di set precedenti includono informazioni (file di intestazione simboli, direttive Read-Only simboli e direttive Compile-Time) nelle direttive #include *e* nelle risorse TEXTINCLUDE. Le risorse di TEXTINCLUDE, un dettaglio di implementazione che non è in genere necessario gestire, sono illustrate nel modo in cui [Visual C++ gestisce il set include le informazioni](#_mfcnotes_tn035_set_includes).

## <a name="analysis-of-appwizard-created-rc-and-h-files"></a>Analisi di file con estensione RC e H creati tramite la Creazione guidata applicazioni

L'analisi del codice dell'applicazione generato dalla Creazione guidata applicazioni consente di comprendere in che modo Visual C++ gestisce i file di risorse e i file di intestazione. Gli estratti di codice esaminati di seguito provengono da un'applicazione MYAPP prodotta dalla Creazione guidata applicazioni utilizzando le opzioni predefinite.

Un'applicazione creata tramite la Creazione guidata applicazioni utilizza più file di risorse e più file di intestazione, come riepilogato nel diagramma riportato di seguito:

```Diagram
   RESOURCE.H     AFXRES.H
          \       /
           \     /
          MYAPP.RC
              |
              |
        RES\MYAPP.RC2
        AFXRES.RC
        AFXPRINT.RC
```

È possibile visualizzare le relazioni tra più file utilizzando il comando File/Inclusioni impostazione di Visual C++.

MyApp. RC
Il file di risorse dell'applicazione che viene modificato tramite Visual C++.

RESOURCE.H è il file di intestazione specifico dell'applicazione. Sempre è denominato RESOURCE.H dalla Creazione guidata applicazioni, coerentemente con la denominazione predefinita del file di intestazione di Visual C++. L'istruzione #include per questo file di intestazione è la prima nel file di risorse (MYAPP.RC):

```rc
//Microsoft Visual C++ generated resource script
//
#include "resource.h"
```

RES\MYAPP. RC2
Contiene le risorse che non verranno modificate tramite Visual C++, ma che verranno incluse nel file con estensione exe compilato finale. La Creazione guidata applicazioni non crea tali risorse per impostazione predefinita, poiché Visual C++ può modificare tutte le risorse standard, inclusa la risorsa di versione (una nuova funzionalità di questa versione). Tramite la Creazione guidata applicazioni viene generato un file vuoto qualora si volessero aggiungere a questo file risorse in formato personalizzato.

Se si utilizzano risorse in formato personalizzato, è possibile aggiungerle a RES\MYAPP.RC2 e modificarle utilizzando l'editor di testo di Visual C++.

AFXRES.RC e AFXPRINT.RC contengono le risorse standard richieste da determinate funzionalità del framework. Come RES \ MYAPP.RC2, questi due file di risorse forniti dal framework vengono inclusi (tramite #include) alla fine di MYAPP.RC e vengono specificati nelle Direttive in fase di compilazione della finestra di dialogo Inclusioni impostazione. Pertanto, queste risorse del framework non vengono direttamente visualizzate o modificate durante la modifica MYAPP.RC in Visual C++, ma vengono compilate nel file RES binario e nel file con estensione exe finale dell'applicazione. Per ulteriori informazioni sulle risorse standard del Framework, incluse le procedure per modificarle, vedere la [Nota tecnica 23](../mfc/tn023-standard-mfc-resources.md).

AFXRES.H definisce i simboli standard, ad esempio `ID_FILE_NEW`, utilizzati dal framework e in modo specifico in AFXRES.RC. AFXRES.H include (tramite #include) inoltre WINRES.H che contiene un sottoinsieme di WINDOWS.H richiesto dai file RC generati da Visual C++, nonché da AFXRES.RC. I simboli definiti in AFXRES.H sono disponibili quando si modifica il file di risorse dell'applicazione (MYAPP.RC). Ad esempio, `ID_FILE_NEW` viene utilizzato per la voce di menu File Nuovo nella risorsa di menu di MYAPP.RC. Non è possibile modificare o eliminare questi simboli definiti dal framework.

## <a name="including-additional-header-files"></a><a name="_mfcnotes_tn035_including"></a> Inclusione di file di intestazione aggiuntivi

L'applicazione creata dalla Creazione guidata applicazioni include solo due file di intestazione: RESOURCE.H e AFXRES.H. Solo RESOURCE.H è specifico dell'applicazione. Potrebbe essere necessario includere file di intestazione di sola lettura aggiuntivi nei seguenti casi:

Il file di intestazione viene fornito da un'origine esterna oppure se si desidera condividere il file di intestazione tra più progetti o più parti dello stesso progetto.

Il file di intestazione contiene formattazione e commenti che non dovranno essere modificati o filtrati da Visual C++ quando si salva il file. Ad esempio, è possibile che si desideri conservare le istruzioni #define che utilizzano aritmetica simbolica come:

```h
#define RED 0
#define BLUE 1
#define GREEN 2
#define ID_COLOR_BUTTON 1001
#define ID_RED_BUTTON (ID_COLOR_BUTTON + RED)
#define ID_BLUE_BUTTON (ID_COLOR_BUTTON + BLUE)
#define ID_GREEN_BUTTON (ID_COLOR_BUTTON + GREEN)
```

È possibile includere file di intestazione di sola lettura aggiuntivi usando il comando di **inclusione della risorsa** per specificare l'istruzione #include come seconda direttiva Read-Only Symbol, come in:

```rc
#include "afxres.h"
#include "second.h"
```

Il nuovo diagramma delle relazioni tra file avrà il seguente aspetto:

```Diagram
                   AFXRES.H
    RESOURCE.H     SECOND.H
          \       /
           \     /
          MYAPP.RC
              |
              |
        RES\MYAPP.RC2  
        AFXRES.RC
        AFXPRINT.RC
```

## <a name="sharing-a-header-file-between-two-rc-files"></a>Condivisione di un file di intestazione tra due file con estensione RC

È possibile condividere un file di intestazione tra due file RC inclusi in progetti diversi o eventualmente nello stesso progetto. A tale scopo, applicare semplicemente la tecnica delle direttive di sola lettura sopra descritta in entrambi i file RC. Nel caso in cui i due file RC siano destinati ad applicazioni diverse (progetti diversi), il risultato è illustrato nel diagramma seguente:

```Diagram
     RESOURCE.H   AFXRES.H   RESOURCE.H  
    (for MYAPP1)  SECOND.H   (for MYAPP2)
          \       /     \       /
           \     /       \     /
          MYAPP1.RC      MYAPP2.RC
           /    \        /     \
          /      \      /       \
RES\MYAPP1.RC2  AFXRES.RC     RES\MYAPP2.RC2
                AFXPRINT.RC
```

Il caso in cui il secondo file di intestazione è condiviso da due file RC nella stessa applicazione (progetto) viene illustrato di seguito.

## <a name="using-multiple-resource-files-in-the-same-project"></a>Utilizzo di più file di risorse nello stesso progetto

Visual C++ e il Compilatore di risorse supportano più file RC multipli nello stesso progetto tramite #include di un file RC all'interno di un altro. È consentito l'annidamento multiplo. Esistono vari motivi per dividere le risorse del progetto in più file RC:

- È più facile gestire un numero elevato di risorse tra più membri del team di progetto se le risorse sono suddivise in più file RC. Se si utilizza un pacchetto per la gestione del controllo del codice sorgente per estrarre i file e archiviare le modifiche, la suddivisione delle risorse in più file RC consentirà un controllo più accurato della gestione delle modifiche apportate alle risorse.

- Se si desidera utilizzare direttive per il preprocessore, come #ifdef, #endif e #define, per parti delle risorse, è necessario isolarle in risorse di sola lettura che verranno compilate dal Compilatore di risorse.

- I file RC di componente vengono caricati e salvati più velocemente in Visual C++ rispetto a un file RC composito.

- Se si desidera gestire una risorsa con un editor di testo in formato leggibile, è necessario mantenerla in un file RC separato da quello modificato da Visual C++.

- Se è necessario mantenere una risorsa definita dall'utente in un form binario o di testo interpretabile da un altro editor di dati specifico, è necessario mantenerla in un file RC distinto, in modo che Visual C++ non modifichi il formato in dati esadecimali. Il. Le risorse file WAV (audio) nell'esempio MFC Advanced Concepts [sono un](../overview/visual-cpp-samples.md) buon esempio.

È possibile includere (tramite #include) un SECOND.RC nelle Direttive in fase di compilazione nella finestra di dialogo Inclusioni impostazione:

```h
#include "res\myapp.rc2"  // non-Visual C++ edited resources
#include "second.rc"  // THE SECOND .RC FILE

#include "afxres.rc"  // Standard components
#include "afxprint.rc"  // printing/print preview resources
```

Il risultato è illustrato nel diagramma seguente:

```Diagram
   RESOURCE.H     AFXRES.H
          \       /
           \     /
          MYAPP.RC
              |
              |
        RES\MYAPP.RC2
        SECOND.RC  
        AFXRES.RC
        AFXPRINT.RC
```

Mediante le Direttive in fase di compilazione è possibile organizzare le risorse modificabili e non modificabili di Visual C++ in più file RC, in cui MYAPP.RC "master" non esegue alcuna operazione tranne includere (tramite #include) gli altri file RC. Se si usa un progetto Visual Studio C++. File MAK, quindi è necessario includere il "Master". File RC nel progetto in modo che tutte le risorse di #include siano compilate con l'applicazione.

## <a name="enforcement-of-noneditable-visual-c-files"></a>Imposizione di file Visual C++ non modificabili

RES\MYAPP. creato da Creazione guidata applicazioni Il file RC2 è un esempio di file che contiene le risorse che *non* si desidera leggere accidentalmente nel Visual C++ e quindi scriverlo di nuovo con la perdita di informazioni di formattazione. Per evitare questo problema, inserire le seguenti righe all'inizio del file RES\MYAPP.RC2:

```rc2
#ifdef APSTUDIO_INVOKED
    #error this file is not editable by Visual C++
#endif //APSTUDIO_INVOKED
```

Quando Visual C++ compila la. Il file RC definisce così come `APSTUDIO_INVOKED` `RC_INVOKED` . Se la struttura di file creata dalla Creazione guidata applicazioni è danneggiata e Visual C++ legge la riga #error precedente, viene segnalato un errore irreversibile e la lettura del file RC viene interrotta.

## <a name="managing-symbols-shared-by-multiple-visual-c-edited-rc-files"></a>Gestione di simboli condivisi da più file RC modificati da Visual C++

Quando si dividono le risorse in più file RC che si desidera modificare separatamente in Visual C++, si verificano due problemi:

- È possibile condividere gli stessi simboli tra più file RC.

- È necessario evitare che Visual C++ assegni gli stessi valori numeri di ID a risorse distinte (simboli).

Nel diagramma seguente viene illustrata un'organizzazione di file RC e H riguardanti il primo problema:

```Diagram
              MYAPP.RC
             /         \
            /           \
MYSTRS.H   / MYSHARED.H  \  MYMENUS.H
     \    /    /      \   \    \
      \  /    /        \   \    \
      MYSTRS.RC         MYMENUS.RC
```

In questo esempio le risorse stringa sono conservate in un file di risorse, MYSTRS.RC, mentre i menu sono conservati in un altro file, MYMENUS.RC. Potrebbe essere necessario condividere alcuni simboli, quali i comandi, tra i due file. Ad esempio, ID_TOOLS_SPELL può essere l'ID del comando di menu per l'elemento Controllo ortografico in un menu Strumenti. Potrebbe inoltre essere l'ID stringa del prompt dei comandi visualizzato dal framework nella barra di stato della finestra principale dell'applicazione.

Il simbolo di ID_TOOLS_SPELL si trova nel file di intestazione condiviso, MYSHARED.H. Gestire questo file di intestazione condiviso manualmente con un editor di testo. Non viene modificato direttamente da Visual C++. Nei due file di file di risorse. RC e MENU. RC specificare #include condivisione. H nelle direttive Read-Only per MYAPP. RC, usando il comando **Includi risorsa** , come descritto in precedenza.

È consigliabile prevedere un simbolo che verrà condiviso prima di provare a usarlo per identificare qualsiasi risorsa. Aggiungere il simbolo al file di intestazione condiviso e, se il file di intestazione condiviso non è già incluso (tramite #include) nelle Direttive di sola lettura per il file RC, eseguire tale operazione prima di utilizzare il simbolo. Se non si è previsto di condividere il simbolo in questo modo, sarà necessario spostare manualmente (utilizzando un editor di testo) l'istruzione #define per il simbolo, ad esempio, da MYMENUS.H a MYSHARED.H prima di utilizzarlo in MYSTRS.RC.

Quando si gestiscono simboli in più file RC, è inoltre necessario evitare che Visual C++ assegni gli stessi valori numerici di ID a risorse distinte (simboli). Per qualsiasi file RC specificato, Visual C++ assegna in modo incrementale gli ID in ognuno dei quattro domini di ID. Visual C++ tiene traccia, tra le sessioni di modifica, dell'ultimo ID assegnato in ognuno dei domini nel file di intestazione simboli per il file RC. Di seguito è riportato il significato dei valori di APS_NEXT per un (nuovo) file RC vuoto:

```rc
#define _APS_NEXT_RESOURCE_VALUE  101
#define _APS_NEXT_COMMAND_VALUE   40001
#define _APS_NEXT_CONTROL_VALUE   1000
#define _APS_NEXT_SYMED_VALUE     101
```

`_APS_NEXT_RESOURCE_VALUE` valore di simbolo successivo che verrà utilizzato per una risorsa finestra di dialogo, una risorsa di menu e così via. L'intervallo valido per i valori dei simboli risorsa è compreso tra 1 e 0x6FFF.

`_APS_NEXT_COMMAND_VALUE` valore del simbolo successivo che verrà utilizzato per l'identificazione di un comando. L'intervallo valido per i valori dei simboli di comando è compreso tra 0x8000 e 0xDFFF.

`_APS_NEXT_CONTROL_VALUE` valore del simbolo successivo che verrà utilizzato per un controllo finestra di dialogo. L'intervallo valido per i valori dei simboli di controllo finestra di dialogo è compreso tra 8 e 0xDFFF.

`_APS_NEXT_SYMED_VALUE` è il valore di simbolo successivo che verrà emesso quando si assegna manualmente un valore di simbolo usando il nuovo comando nel Visualizzatore simboli.

Quando viene creato un nuovo file RC, Visual C++ inizia con valori leggermente più elevati del valore valido più basso. Questi valori verranno inizializzati anche dalla Creazione guidata applicazioni in valori più appropriati per le applicazioni MFC. Per ulteriori informazioni sugli intervalli di valori ID, vedere la [Nota tecnica 20](../mfc/tn020-id-naming-and-numbering-conventions.md).

A questo punto, ogni volta che si crea un nuovo file di risorse, anche nello stesso progetto, Visual C++ definisce gli stessi `_APS_NEXT_` valori. Ciò significa che se si aggiungono, ad esempio, più finestre di dialogo in due diversi file RC, è molto probabile che lo stesso valore #define venga assegnato alle diverse finestre di dialogo. Ad esempio, a IDD_MY_DLG1 nel primo file RC può essere assegnato lo stesso numero, 101, di IDD_MY_DLG2 in un secondo file RC.

Per evitare questo problema, è necessario riservare un intervallo numerico separato per ognuno dei quattro domini di ID nei rispettivi file RC. A tale scopo, aggiornare manualmente i `_APS_NEXT` valori in ogni. File RC **prima** di iniziare ad aggiungere risorse. Ad esempio, se il primo oggetto. Il file RC usa i `_APS_NEXT` valori predefiniti, quindi è consigliabile assegnare i valori seguenti `_APS_NEXT` al secondo. File RC:

```rc
#define _APS_NEXT_RESOURCE_VALUE  2000
#define _APS_NEXT_COMMAND_VALUE   42000
#define _APS_NEXT_CONTROL_VALUE   2000
#define _APS_NEXT_SYMED_VALUE     2000
```

Naturalmente è ancora possibile che Visual C++ assegni così tanti ID nel primo file RC che i valori numerici inizieranno a sovrapporsi a quelli riservati per il secondo file RC. È necessario riservare intervalli sufficientemente ampi da evitare che ciò si verifichi.

## <a name="managing-dependencies-between-rc-cpp-and-h-files"></a>Gestione delle dipendenze tra file con estensione RC, CPP e H

Quando Visual C++ salva un file RC, salva anche le modifiche dei simboli nel file RESOURCE.H corrispondente. Uno qualsiasi dei file CPP che fanno riferimento alle risorse nel file RC deve includere (tramite #include) il file RESOURCE.H, in genere dall'interno del file di intestazione master del progetto. Ciò causa un effetto collaterale indesiderabile a causa della gestione di progetto interna dell'ambiente di sviluppo che ricerca nei file di origine le dipendenze dell'intestazione. Ogni volta che si aggiunge un nuovo simbolo in Visual C++, tutti i. File CPP che #include risorsa. È necessario ricompilare H.

Visual C++ aggira la dipendenza da RESOURCE.H includendo il seguente commento come prima riga del file RESOURCE.H:

```h
//{{NO_DEPENDENCIES}}
```

L'ambiente di sviluppo interpreta il commento ignorando le modifiche a RESOURCE.H in modo che i file CPP dipendenti CPP non debbano essere ricompilati.

Visual C++ aggiunge sempre la riga di commento //{{NO_DEPENDENCIES}} a un file RC al momento del salvataggio. In alcuni casi, aggirare la dipendenza di compilazione da RESOURCE.H può generare errori di runtime non rilevati in fase di collegamento. Ad esempio, se si utilizza il visualizzatore simboli per modificare il valore numerico assegnato a un simbolo per una risorsa, la risorsa non verrà rilevata e caricata correttamente in fase di esecuzione dell'applicazione, se il file di .CPP che fa riferimento alla risorsa non viene ricompilato. In questi casi, è necessario ricompilare in modo esplicito any. I file CPP a cui si è certi sono interessati dalle modifiche apportate al simbolo nella risorsa. H o selezionare **Ricompila tutto**. Se è necessario modificare spesso i valori dei simboli per un determinato gruppo di risorse, probabilmente sarà più semplice e sicuro suddividere questi simboli in un file di intestazione di sola lettura separato, come descritto nella sezione precedente, [inclusi i file di intestazione aggiuntivi](#_mfcnotes_tn035_including).

## <a name="how-visual-c-manages-set-includes-information"></a><a name="_mfcnotes_tn035_set_includes"></a> Modalità di gestione delle impostazioni del set di Visual C++

Come descritto in precedenza, il menu comando Inclusioni impostazione del menu File consente di specificare tre tipi di informazioni:

- File di intestazione simboli

- Direttive per simboli in sola lettura

- Direttive in fase di compilazione

Di seguito viene illustrato come Visual C++ gestisce queste informazioni in un file RC. Queste informazioni non sono necessarie per l'utilizzo di Visual C++, ma possono contribuire a una migliore comprensione della funzionalità Inclusioni impostazione per utilizzarla più agevolmente.

Ciascuno dei tre tipi di informazioni di Inclusione impostazione viene archiviato nel file RC in due formati: (1) come #include o altre direttive interpretabili dal Compilatore di risorse e (2) come risorse TEXTINCLUDE speciali interpretabili solo da Visual C++.

Lo scopo della risorsa TEXTINCLUDE è archiviare in modo sicuro le informazioni di inclusione dei set in un modulo che è immediatamente disponibile nella finestra di dialogo **Includi set** di Visual C++. TEXTINCLUDE è un *tipo di risorsa* definito da Visual C++. Visual C++ riconosce tre risorse TEXTINCLUDE specifiche che presentano numeri di identificazione risorsa 1, 2 e 3:

|ID risorsa TEXTINCLUDE|Tipo informazioni di Inclusioni impostazione|
|-----------------------------|--------------------------------------|
|1|File di intestazione simboli|
|2|Direttive per simboli in sola lettura|
|3|Direttive in fase di compilazione|

Ciascuno dei tre tipi di informazioni di Inclusioni impostazione viene illustrato dai file predefiniti MYAPP.RC e RESOURCE.H creati dalla Creazione guidata applicazioni, come descritto di seguito. I token \ 0 e "" supplementari tra i blocchi BEGIN e FINALI sono richiesti dalla sintassi RC per specificare le stringhe che terminano rispettivamente con zero e il carattere virgolette doppie.

### <a name="symbol-header-file"></a>File di intestazione simboli

Il formato delle informazioni del File di intestazione simboli interpretato dal Compilatore di risorse è semplicemente un'istruzione #include:

```rc
#include "resource.h"
```

La risorsa TEXTINCLUDE corrispondente è:

```rc
1 TEXTINCLUDE DISCARDABLE
BEGIN
    "resource.h\0"
END
```

### <a name="read-only-symbol-directives"></a>Direttive per simboli in sola lettura

Le Direttive per simboli in sola lettura sono incluse nella parte superiore di MYAPP.RC nel seguente formato interpretabile dal Compilatore di risorse:

```rc
#include "afxres.h"
```

La risorsa TEXTINCLUDE corrispondente è:

```rc
2 TEXTINCLUDE DISCARDABLE
BEGIN
   "#include ""afxres.h""\r\n"
   "\0"
END
```

### <a name="compile-time-directives"></a>Direttive in fase di compilazione

Le Direttive in fase di compilazione sono incluse alla fine di MYAPP.RC nel seguente formato interpretabile dal Compilatore di risorse:

```rc
#ifndef APSTUDIO_INVOKED
///////////////////////
//
// From TEXTINCLUDE 3
//
#include "res\myapp.rc2"  // non-Visual C++ edited resources

#include "afxres.rc"  // Standard components
#include "afxprint.rc"  // printing/print preview resources
#endif  // not APSTUDIO_INVOKED
```

La direttiva #ifndef APSTUDIO_INVOKED indica a Visual C++ ignorare le Direttive in fase di compilazione.

La risorsa TEXTINCLUDE corrispondente è:

```rc
3 TEXTINCLUDE DISCARDABLE
BEGIN
"#include ""res\myapp.rc2""  // non-Visual C++ edited resources\r\n"
"\r\n"
"#include ""afxres.rc""  // Standard components\r\n"
"#include ""afxprint.rc""  // printing/print preview resources\r\n"
"\0"
END
```

## <a name="see-also"></a>Vedi anche

[Note tecniche per numero](../mfc/technical-notes-by-number.md)\
[Note tecniche per categoria](../mfc/technical-notes-by-category.md)
