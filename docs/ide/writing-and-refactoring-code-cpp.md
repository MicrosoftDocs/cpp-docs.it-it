---
title: Modificare ed effettuare il refactoring del codice C++ in Visual Studio
description: Usare l'editor di codice C++ in Visual Studio per formattare, esplorare, comprendere ed effettuare il refactoring del codice.
ms.date: 05/31/2019
ms.assetid: 56ffb9e9-514f-41f4-a3cf-fd9ce2daf3b6
ms.openlocfilehash: d4a74608a95df0fdd461f55d26fee97332a66aa8
ms.sourcegitcommit: 65ed563a8a1d4d90f872a2a6edcb086f84ec9f77
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 06/06/2019
ms.locfileid: "66741621"
---
# <a name="edit-and-refactor-c-code-in-visual-studio"></a>Modificare ed effettuare il refactoring del codice C++ in Visual Studio

Visual Studio offre diversi strumenti che consentono di scrivere, modificare ed effettuare il refactoring del codice.

##  <a name="intellisense"></a>IntelliSense

IntelliSense è uno strumento di completamento codice avanzato che suggerisce automaticamente simboli e frammenti di codice durante la digitazione. IntelliSense C++ in Visual Studio viene eseguito in tempo reale e analizza la codebase aggiornata fornendo raccomandazioni. L'inserimento di un maggior numero di caratteri riduce l'elenco dei risultati raccomandati.

![Elenco a discesa dei membri C&#43;&#43;](../ide/media/cpp-statement-completion.png)

Alcuni simboli vengono omessi automaticamente per limitare i risultati. Ad esempio, quando si accede ai membri di un oggetto classe dall'esterno della classe, per impostazione predefinita non è possibile visualizzare i membri privati o i membri protetti (se non si è nel contesto di una classe figlio). È possibile modificare il filtro usando i pulsanti nella parte inferiore.

Dopo aver selezionato il simbolo dall'elenco a discesa, è possibile completarlo automaticamente usando i tasti **TAB** o **INVIO** oppure uno dei caratteri di commit (per impostazione predefinita: {}[]().,:;+-*/%&|^!=?@#\). Per aggiungere o rimuovere i caratteri dall'elenco, cercare "IntelliSense" in **Avvio veloce** (CTRL+Q) e scegliere l'opzione **Editor di testo > C/C++ > Avanzate**. L'opzione **Caratteri commit elenco membri** consente di personalizzare l'elenco apportando le modifiche desiderate.

L'opzione **Modalità filtro elenchi di membri** controlla il tipo di suggerimenti del completamento automatico di IntelliSense visualizzati. Per impostazione predefinita, l'opzione è impostata su **Fuzzy**. In una ricerca fuzzy se è presente un simbolo denominato *MyAwesomeClass*, è possibile digitare "MAC" e trovare la classe nei suggerimenti del completamento automatico. L'algoritmo fuzzy imposta una soglia minima che i simboli devono soddisfare per essere visualizzati nell'elenco. Il filtro **Intelligenti** visualizza tutti i simboli che contengono sottostringhe corrispondenti a quanto digitato. Il filtro **Prefisso** esegue la ricerca di stringhe che iniziano con quanto digitato.

Per altre informazioni su IntelliSense C++, vedere [IntelliSense Visual C++](/visualstudio/ide/visual-cpp-intellisense) e [Configurare un progetto C++ per IntelliSense](/visualstudio/ide/visual-cpp-intellisense-configuration).

## <a name="intellicode"></a>IntelliCode

IntelliCode è IntelliSense con il supporto per l'intelligenza artificiale. Inserisce il candidato più probabile nella parte superiore dell'elenco di completamento. I suggerimenti di IntelliCode si basano su migliaia di progetti open source in GitHub, ciascuno con più di 100 stelle. Con l'aggiunta del contesto del codice, l'elenco di completamento viene adattato per promuovere le procedure comuni.

Durante la scrittura di codice C++, IntelliCode è utile quando si usano librerie comuni, ad esempio la libreria standard C++. Il contesto del codice viene usato per offrire i suggerimenti più utili per primi. Nell'esempio seguente poiché la funzione membro `size` viene comunemente usata con la funzione `sort`, la funzione verrà messa in evidenza tra i primi risultati dell'elenco.

![IntelliCode C&#43;&#43;](../ide/media/intellicode-cpp.png "IntelliCode C++")

::: moniker range="vs-2019"

In Visual Studio 2019 IntelliCode è disponibile come componente facoltativo nel carico di lavoro **Sviluppo di applicazioni desktop con C++** . Per verificare che IntelliCode sia attivo per C++, passare a **Strumenti** > **Opzioni** > **IntelliCode** > **Generale** e impostare **Modello di base C++** su **Abilitato**.

::: moniker-end

::: moniker range="vs-2017"

In Visual Studio 2017 IntelliCode è disponibile come estensione in Visual Studio Marketplace.

::: moniker-end

## <a name="predictive-intellisense-experimental"></a>IntelliSense predittivo (sperimentale)

**IntelliSense predittivo** è una funzionalità sperimentale che usa il riconoscimento del contesto per limitare il numero di risultati visualizzati nell'elenco a discesa di IntelliSense. L'algoritmo applica la corrispondenza di tipo in modo da visualizzare solo i risultati che corrispondono al tipo previsto. Nel caso più semplice se si digita `int x =` e si richiama l'elenco a discesa di IntelliSense, vengono visualizzati solo numeri interi o funzioni che restituiscono numeri interi. Questa funzionalità è disattivata per impostazione predefinita perché è ancora in fase di sviluppo. Funziona al meglio con i simboli globali. Le funzioni membro non sono ancora supportate. È possibile attivarla digitando "Predittivo" in **Avvio veloce** o scegliendo **Strumenti** > **Opzioni** > **Editor di testo** > **C/C++**  > **Sperimentale** > **	Abilita IntelliSense predittivo**.

Per eseguire l'override di **IntelliSense predittivo** e visualizzare l'elenco completo e premere **CTRL+J**. Se **IntelliSense predittivo** è attivo, premendo **CTRL+J** si rimuove il filtro predittivo. Premendo di nuovo **CTRL+J** si rimuove il filtro di accessibilità dai risultati Elenco membri dove pertinente. Il pulsante ([+]) sotto l'elenco a discesa di IntelliSense svolge la stessa funzione di **CTRL+J**. Passare il mouse sul pulsante per visualizzare le informazioni della descrizione comando sull'elemento visualizzato.

![IntelliSense predittivo C&#43;&#43;](../ide/media/predictive-intellisense-cpp.png "IntelliSense predittivo")

Lo screenshot precedente mostra diversi pulsanti sotto l'elenco a discesa. Questi pulsanti abilitano i filtri di IntelliSense per i diversi tipi di risultati:

- Variabili e costanti
- Funzioni
- Tipi
- Macro
- Enumerazioni
- Spazi dei nomi

Un pulsante viene visualizzato solo se è pertinente alla sessione corrente di IntelliSense. In genere non vengono visualizzati tutti i pulsanti contemporaneamente.

## <a name="template-intellisense"></a>IntelliSense per i modelli

Quando il cursore si trova all'interno di una definizione di modello, viene visualizzata una **barra modelli** che consente di specificare gli argomenti di modello di esempio per IntelliSense. 

![IntelliSense per i modelli C&#43;&#43; con le creazioni di istanza esistenti](../ide/media/template-intellisense-cpp-1.png "IntelliSense per i modelli con le creazioni di istanza esistenti")

Fare clic sull'icona **<T>** per espandere o comprimere la **barra modelli**. Fare clic sull'icona a forma di matita oppure fare doppio clic sulla **barra modelli** per aprire la finestra **Modifica**. 

![IntelliSense per i modelli C&#43;&#43;](../ide/media/template-intellisense-cpp-3.png "IntelliSense per i modelli")

Le modifiche apportate nella finestra vengono applicate direttamente al codice sorgente in modo che sia possibile visualizzare gli effetti in tempo reale. 

La barra modelli può inserire automaticamente i candidati in base alle creazioni di istanza nel codice. Fare clic su **Aggiungi tutte le creazioni di istanza esistenti** per visualizzare un elenco di tutti gli argomenti concreti usati per creare un'istanza del modello nella codebase.

![Elenco dei risultati di IntelliSense per i modelli C&#43;&#43;](../ide/media/template-intellisense-cpp-2.png "Elenco dei risultati di IntelliSense per i modelli")

Una finestra nella parte inferiore dell'editor visualizza la posizione in cui è stata trovata ogni creazione di istanza con i relativi argomenti.

![Mappa delle creazioni di istanza di IntelliSense per i modelli C&#43;&#43;](../ide/media/template-intellisense-cpp-4.png "Mappa delle creazioni di istanza di IntelliSense per i modelli")

Le informazioni della **barra modelli** sono considerate informazioni specifiche dell'utente. Le informazioni sono archiviate nella cartella .vs non sottoposta al controllo del codice sorgente.

##  <a name="error-squiggles-and-quick-fixes"></a>Controllo ortografia e correzioni rapide

Se rileva problemi nel codice, l'editor aggiunge linee a zigzag colorate che indicano la posizione del problema. Le linee a zigzag rosse indicano un codice che non verrà compilato. Le linee a zigzag verdi indicano altri tipi di problemi che potrebbero essere potenzialmente pericolosi. È possibile visualizzare la finestra **Elenco errori** per ottenere altre informazioni sui problemi.

Per alcuni tipi di errori e i modelli di codice comuni, l'editor offre una **Correzione rapida** sotto forma di lampadina visualizzata quando si passa il mouse sulle linee a zigzag. Fare clic sulla freccia verso il basso per visualizzare i suggerimenti. 

Nell'esempio seguente poiché è stato dichiarato un `vector` ma non è stata trovata alcuna definizione, l'editor suggerisce di includere il file di intestazione necessario:

![Correzione rapida C&#43;&#43;](../ide/media/quick-fix-for-header-cpp.png "Correzione rapida C++")

L'editor offre anche correzioni rapide per alcune opportunità di refactoring. Ad esempio, se si dichiara una classe in un file di intestazione, Visual Studio suggerisce di creare una definizione in un file separato con estensione cpp. 

![Correzione rapida C&#43;&#43;](../ide/media/quick-fix.png "Correzione rapida C++")

## <a name="change-tracking"></a>Change tracking

Ogni volta che si apporta una modifica in un file, viene visualizzata una barra gialla a sinistra per indicare che sono state apportate modifiche non salvate. Quando si salva il file, la barra diventa verde. Le barre di colore giallo e verde rimangono visualizzate fino a quando il documento rimane aperto nell'editor. Le barre rappresentano le modifiche apportate dall'ultima apertura del documento.

![Rilevamento modifiche C&#43;&#43;](../ide/media/change-tracking-cpp.png "Rilevamento modifiche")

## <a name="move-code"></a>Spostare il codice

È possibile spostare le righe di codice verso l'alto e verso il basso selezionandole, tenendo premuto ALT e premendo i tasti di direzione **PGSU/PGGIÙ**.

##  <a name="insert-snippets"></a>Inserire frammenti di codice

Per frammento si intende una parte predefinita di codice sorgente. Fare clic con il pulsante destro del mouse su un singolo punto o su testo selezionato per inserire un frammento oppure racchiudere il testo selezionato con il frammento. Nella figura seguente sono illustrati i tre passaggi per racchiudere un'istruzione selezionata con un ciclo for. Le evidenziazioni gialle nell'immagine finale sono campi modificabili a cui è possibile accedere premendo TAB. Per altre informazioni, vedere [Code Snippets](/visualstudio/ide/code-snippets) (Frammenti di codice).

![Elenco a discesa Inserisci frammento C&#43;&#43;](../ide/media/vs2015_cpp_surround_with.png "vs2015_cpp_surround_with")

##  <a name="add-class"></a>Aggiungi classe

Aggiungere una nuova classe dal menu **Progetto** o dal menu di scelta rapida in **Esplora soluzioni**:

![Aggiungi nuova classe in C&#43;&#43;](../ide/media/vs2017-add-class.png "vs2015_cpp_add_class")

È anche possibile usare la Creazione guidata classe per modificare o esaminare una classe esistente.

![Creazione guidata classe C&#43;&#43;](../ide/media/vs2017-class-wizard.png)

Per altre informazioni, vedere [Aggiunta di funzionalità con creazioni guidate codice (C++)](../ide/adding-functionality-with-code-wizards-cpp.md).

##  <a name="refactoring"></a>Refactoring

I refactoring sono disponibili nel menu di scelta rapida Azioni rapide oppure facendo clic su una [lampadina](/visualstudio/ide/perform-quick-actions-with-light-bulbs) nell'editor.  Alcuni sono inclusi anche nel menu **Modifica > Refactoring**.  Queste funzionalità comprendono:

* [Rinomina](refactoring/rename.md)
* [Estrai funzione](refactoring/extract-function.md)
* [Implementa elementi virtuali puri](refactoring/implement-pure-virtuals.md)
* [Crea dichiarazione / definizione](refactoring/create-declaration-definition.md)
* [Sposta definizione della funzione](refactoring/move-definition-location.md)
* [Converti in valore letterale stringa non elaborata](refactoring/convert-to-raw-string-literal.md)
* [Modifica firma](refactoring/change-signature.md)

## <a name="code-style-enforcement-with-clangformat-and-editorconfig"></a>Imposizione dello stile di codice con ClangFormat ed EditorConfig

Visual Studio 2017 e versioni successive include il supporto di [ClangFormat](https://clang.llvm.org/docs/ClangFormat.html), un'utilità di formattazione del codice tra le più diffuse per C++ basata su Clang/LLVM. Digitare "ClangFormat" in [Avvio veloce](/visualstudio/ide/reference/quick-launch-environment-options-dialog-box) per impostare l'uso di uno dei formati comuni seguenti:

- LLVM
- Google
- Chromium
- Mozilla
- WebKit
- Visual Studio

È anche possibile specificare un proprio file con estensione clang-format o _clang-format per applicare regole personalizzate a tutti i file di codice allo stesso livello o a un livello inferiore.

Poiché i file sono facilmente condivisibili tramite il controllo del codice sorgente, è possibile imporre le convenzioni di codifica per l'intero team di sviluppo.

![Formato Clang C&#43;&#43;](../ide/media/clang-format-cpp.png "Formato Clang")

Visual Studio 2017 e versioni successive supporta anche [EditorConfig](https://editorconfig.org/) che funziona in modo analogo. ClangFormat, tuttavia, ha più opzioni di stile rispetto a EditorConfig, incluse le regole specifiche di C++. Con **EditorConfig** è possibile creare file con estensione **editorconfig** e inserirli in cartelle diverse della codebase per specificare gli stili di codice per le cartelle e le relative sottocartelle. Un file con estensione **editorconfig** sostituisce qualsiasi altro file con estensione **editorconfig** nelle cartelle padre e sovrascrive eventuali impostazioni di formattazione configurate tramite **Strumenti** > **Opzioni**. È possibile impostare regole per tabulazioni e spazi, dimensione del rientro e altro ancora. Per altre informazioni, vedere [Creare impostazioni personalizzate e portabili per l'editor con EditorConfig](/visualstudio/ide/create-portable-custom-editor-options).

## <a name="other-formatting-options"></a>Altre opzioni di formattazione

La casella di ricerca **Avvio veloce** offre il modo più rapido per trovare un'impostazione o uno strumento. La casella si trova nel menu principale. È sufficiente iniziare a digitare. L'elenco di completamento automatico filtrerà i risultati.

![Avvio veloce di Visual Studio](../ide/media/vs2015_cpp_quick_launch.png "Avvio veloce")

Per impostare le opzioni di formattazione, ad esempio rientri, completamento parentesi graffe e colorazione, digitare "Formattazione C++" nella finestra **Avvio veloce**.

![Opzioni di formattazione di C++](media/cpp-formatting-options.png)

Altre opzioni di formattazione sono disponibili in **Modifica** > **Avanzate** nel menu principale.

![Opzioni di modifica avanzate C++](media/edit-advanced-cpp.png)

Le opzioni per l'abilitazione e la configurazione delle funzionalità di modifica specifiche di C++ sono disponibili in **Strumenti** > **Opzioni** > **Editor di testo** > **C/C++** . Dopo aver scelto l'opzione da impostare, è possibile ottenere ulteriori informazioni premendo il tasto **F1** quando la finestra di dialogo è attiva. Per le opzioni di formattazione di codice generali, digitare `Editor C++` in **Avvio veloce**.

![Strumenti di Visual Studio > Opzioni](../ide/media/tools-options.png "Opzioni editor")

Le funzionalità sperimentali, che possono o non possono essere incluse in una versione futura di Visual Studio, sono nella finestra di dialogo [Editor di testo C++ Sperimentale](/visualstudio/ide/reference/options-text-editor-c-cpp-experimental). In Visual Studio 2017 e versioni successive è possibile abilitare **IntelliSense predittivo** in questa finestra di dialogo.

## <a name="see-also"></a>Vedere anche

[Leggere e comprendere il codice C++](read-and-understand-code-cpp.md)</br>
[Spostarsi all'interno del codice C++ in Visual Studio](navigate-code-cpp.md)</br>
[Collaborare con Live Share per C++](live-share-cpp.md)