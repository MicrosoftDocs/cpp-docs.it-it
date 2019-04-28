---
title: File dei suggerimenti
ms.date: 02/26/2019
f1_keywords:
- cpp.hint
- vc.hint.file
helpviewer_keywords:
- stop file
- cpp.hint
- hint file
- cpp.stop
- Class View, hint file
ms.assetid: 17194f66-cf62-4523-abec-77db0675ab65
ms.openlocfilehash: 3d8b3be76fea454ed3b3dd3fd2a44174f34c065c
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62291894"
---
# <a name="hint-files"></a>File dei suggerimenti

Un *file dei suggerimenti* contiene macro a causa delle quali intere aree di codice verrebbero ignorate dal parser del database di esplorazione di C++. Quando si apre un progetto di Visual C++, il parser analizza il codice in ogni file di origine del progetto e crea un database con le informazioni su ogni identificatore. L'IDE usa le informazioni per supportare le funzionalità di esplorazione del codice, ad esempio il browser **Visualizzazione classi** e la **barra di spostamento**.

Il parser del database di esplorazione di C++ è un parser 'fuzzy' in grado di analizzare grandi quantità di codice in un breve periodo di tempo. Il parser risulta veloce anche perché ignora il contenuto dei blocchi. Ad esempio, il parser registra solo la posizione e i parametri di una funzione e ne ignora il contenuto. Alcune macro possono causare problemi per l'euristica usata per determinare l'inizio e la fine di un blocco. Questi problemi causano una registrazione non corretta delle aree di codice.

Le aree ignorate possono manifestarsi in modi diversi:

- Tipi e funzioni mancanti in **Visualizzazione classi**, **Vai a** e nella **barra di spostamento**

- Ambiti non corretti nella **barra di spostamento**

- Suggerimenti in **Crea dichiarazione/definizione** per funzioni già definite

Un file dei suggerimenti contiene suggerimenti che possono essere personalizzati dall'utente e hanno la stessa sintassi delle definizioni di macro C/C++. Visual C++ include un file dei suggerimenti predefinito adatto per la maggior parte dei progetti. È possibile tuttavia creare un proprio file dei suggerimenti per migliorare il parser per il progetto specifico.

> [!IMPORTANT]
> Se si modifica o aggiunge un file dei suggerimenti, è necessario eseguire altri passaggi per rendere effettive le modifiche:
> - Nelle versioni precedenti a Visual Studio 2017 versione 15.6: Eliminare il file con estensione sdf e/o il file VC.db nella soluzione per tutte le modifiche.
> - In Visual Studio 2017 dalla versione 15.6 alla versione 15.9: Chiudere e riaprire la soluzione dopo aver aggiunto nuovi file dei suggerimenti.

## <a name="scenario"></a>Scenario

```cpp
#define NOEXCEPT noexcept
void Function() NOEXCEPT
{
}
```

Senza un file dei suggerimenti, `Function` non viene visualizzato in **Visualizzazione classi**, **Vai a** o nella **barra di spostamento**. Dopo aver aggiunto un file dei suggerimenti con questa definizione di macro, il parser interpreta e sostituisce la macro `NOEXCEPT` in modo da analizzare correttamente la funzione:

```cpp.hint
#define NOEXCEPT
```

## <a name="disruptive-macros"></a>Macro dannose

Esistono due categorie di macro che causano l'interruzione del parser:

- Macro che incapsulano le parole chiave di una funzione

   ```cpp
   #define NOEXCEPT noexcept
   #define STDMETHODCALLTYPE __stdcall
   ```

   Per questi tipi di macro è necessario solo il nome della macro nel file dei suggerimenti:

   ```cpp.hint
   #define NOEXCEPT
   #define STDMETHODCALLTYPE
   ```

- Macro con parentesi di apertura o chiusura mancanti

   ```cpp
   #define BEGIN {
   ```

   Per questi tipi di macro è necessario includere nel file dei suggerimenti il nome della macro e il relativo contenuto:

   ```cpp.hint
   #define BEGIN {
   ```

## <a name="editor-support"></a>Supporto dell'editor

A partire da Visual Studio 2017 versione 15.8 sono disponibili numerose funzionalità per identificare le macro dannose:

- Evidenziazione delle macro che si trovano all'interno di aree ignorate dal parser.

- Azione rapida per la creazione di un file dei suggerimenti che includa la macro evidenziata oppure, se il file dei suggerimenti è già presente, per l'aggiunta della macro al file.

![Macro evidenziata.](media/hint-squiggle-and-actions.png "Suggerimento e azioni rapide")

Dopo l'esecuzione di una delle azioni rapide, il parser analizza di nuovo i file interessati dal file dei suggerimenti.

Per impostazione predefinita, la macro dannosa è evidenziata come un suggerimento. L'evidenziazione può essere modificata in un elemento maggiormente visibile, ad esempio una sottolineatura a zigzag rossa o verde. Usare l'opzione **Macro nelle aree di esplorazione ignorate** nella sezione **Controllo ortografia codice** in **Strumenti** > **Opzioni** > **Editor di testo** > **C/C++** > **Visualizza**.

![Opzione Macro nelle aree di esplorazione ignorate.](media/skipped-regions-squiggle-option.png "Opzione di controllo delle aree ignorate.")

## <a name="display-browsing-database-errors"></a>Visualizzare gli errori del database di esplorazione

Il comando di menu **Progetto** > **Visualizza errori del database di esplorazione** visualizza tutte le aree non analizzate nell'**Elenco errori**. Il comando è progettato per semplificare la creazione del file dei suggerimenti iniziale. Tuttavia, poiché il parser non indica se la causa dell'errore è stato una macro dannosa, sarà necessario valutare ogni errore. Eseguire il comando **Visualizza errori del database di esplorazione** e passare a ogni errore per caricare il file interessato nell'editor. Dopo aver caricato il file, le macro presenti all'interno dell'area vengono evidenziate. È possibile richiamare le azioni rapide per aggiungerle a un file dei suggerimenti. Dopo l'aggiornamento del file dei suggerimenti, l'elenco errori viene aggiornato automaticamente. In alternativa, se si modifica manualmente il file dei suggerimenti è possibile usare il comando **Ripeti analisi soluzione** per attivare un aggiornamento.

## <a name="architecture"></a>Architettura

I file dei suggerimenti riguardano le directory fisiche, non le directory logiche visualizzate in **Esplora soluzioni**. Non è necessario aggiungere un file dei suggerimenti al progetto perché il file abbia effetto. Il sistema di analisi usa i file dei suggerimenti solo quando analizza i file di origine.

Ogni file dei suggerimenti è denominato **cpp.hint**. Numerose directory possono contenere un file dei suggerimenti, ma una determinata directory può contenere un solo file dei suggerimenti.

Il progetto può essere influenzato da zero o più file dei suggerimenti. Se non sono presenti file dei suggerimenti, il sistema di analisi usa tecniche di ripristino dagli errori per ignorare il codice sorgente indecifrabile. In caso contrario, il sistema di analisi usa la strategia seguente per individuare e raggruppare i suggerimenti.

### <a name="search-order"></a>Ordine di ricerca

Il sistema di analisi cerca i file dei suggerimenti nelle directory nell'ordine seguente.

- La directory che contiene il pacchetto di installazione per Visual C++ (**vcpackages**). Questa directory contiene un file dei suggerimenti predefinito che descrive i simboli dei file di sistema usati di frequente, ad esempio **windows.h**. Di conseguenza, il progetto eredita automaticamente la maggior parte dei suggerimenti necessari.

- Il percorso dalla directory radice di un file di origine alla directory che contiene il file di origine stesso. In un progetto tipico di Visual C++ la directory radice contiene i file della soluzione o del progetto.

   L'eccezione a questa regola si verifica se un *file di interruzione* si trova nel percorso del file di origine. Un file di interruzione è un file denominato **cpp.stop**. Un file di interruzione offre un maggiore controllo sull'ordine di ricerca. Anziché iniziare dalla directory radice, il sistema di analisi esegue la ricerca dalla directory che contiene il file di interruzione alla directory che contiene il file di origine. In un progetto tipico non è necessario usare un file di interruzione.

### <a name="hint-gathering"></a>Raccolta dei suggerimenti

Un file dei suggerimenti contiene zero o più *suggerimenti*. Un suggerimento viene definito o eliminato esattamente come una macro di C/C++. Ovvero, dire la direttiva `#define` del preprocessore crea o ridefinisce un suggerimento e la direttiva `#undef` elimina un suggerimento.

Il sistema di analisi apre ogni file dei suggerimenti nell'ordine di ricerca descritto in precedenza. Il sistema accumula i suggerimenti di ogni file in un set di *suggerimenti effettivi* e quindi usa i suggerimenti effettivi per interpretare gli identificatori nel codice.

Per accumulare i suggerimenti, il sistema di analisi usa le regole seguenti:

- Se il nuovo suggerimento specifica un nome non ancora definito, il nuovo suggerimento aggiunge il nome ai suggerimenti effettivi.

- Se il nuovo suggerimento specifica un nome già definito, il nuovo suggerimento ridefinisce il suggerimento esistente.

- Se il nuovo suggerimento è una direttiva `#undef` che specifica un suggerimento effettivo esistente, il nuovo suggerimento elimina il suggerimento esistente.

La prima regola indica che i suggerimenti effettivi vengono ereditati dai file dei suggerimenti aperti in precedenza. Le ultime due regole indicano che i suggerimenti successivi nell'ordine di ricerca possono sostituire i suggerimenti precedenti. Ad esempio, è possibile sostituire tutti i suggerimenti precedenti se si crea un file dei suggerimenti nella directory che contiene un file di origine.

Per una descrizione di come vengono raccolti i suggerimenti, vedere la sezione [Esempio](#example).

### <a name="syntax"></a>Sintassi

I suggerimenti vengono creati ed eliminati con la stessa sintassi delle direttive del preprocessore che creano ed eliminano le macro. Di fatto, il sistema di analisi usa il preprocessore C/C++ per valutare i suggerimenti. Per altre informazioni sulle direttive per il preprocessore, vedere [Direttiva #define (C/C++)](../../preprocessor/hash-define-directive-c-cpp.md) e [Direttiva #undef (C/C++)](../../preprocessor/hash-undef-directive-c-cpp.md).

Gli unici elementi di sintassi inusuali sono le stringhe di sostituzione `@<`, `@=` e `@>`. Queste stringhe di sostituzione specifiche del file dei suggerimenti vengono usate solo nelle macro di *mapping*. Una mappa è un set di macro che correlano dati, funzioni o eventi ad altri dati, funzioni o gestori di eventi. Ad esempio, `MFC` usa le mappe per creare [mappe di messaggi](../../mfc/reference/message-maps-mfc.md) e `ATL` usa le mappe per creare [mappe di oggetti](../../atl/reference/object-map-macros.md). Le stringhe di sostituzione specifiche del file dei suggerimenti indicano gli elementi iniziali, intermedi e finali di una mappa. Solo il nome di una macro di mapping è significativo. Quindi, ogni stringa di sostituzione nasconde intenzionalmente l'implementazione della macro.

I suggerimenti usano questa sintassi:

|Sintassi|Significato|
|------------|-------------|
|`#define` *hint-name* *replacement-string*<br /><br /> `#define` *hint-name* `(` *parameter*, ...`)`*replacement-string*|Una direttiva del preprocessore che definisce un nuovo suggerimento o ridefinisce un suggerimento esistente. Dopo la direttiva, il preprocessore sostituisce ogni occorrenza di *hint-name* nel codice sorgente con *replacement-string*.<br /><br /> La seconda forma di sintassi definisce un suggerimento simile a una funzione. Se un suggerimento di tipo funzione si verifica nel codice sorgente, il preprocessore prima sostituisce ogni occorrenza di *parameter* in *replacement-string* con l'argomento corrispondente nel codice sorgente e quindi sostituisce *hint-name* con *replacement-string*.|
|`@<`|Un elemento *replacement-string* specifico del file dei suggerimenti che indica l'inizio di un set di elementi della mappa.|
|`@=`|Un elemento *replacement-string* specifico del file dei suggerimenti che indica un elemento intermedio della mappa. Una mappa può contenere più elementi.|
|`@>`|Un elemento *replacement-string* specifico del file dei suggerimenti che indica la fine di un set di elementi della mappa.|
|`#undef` *hint-name*|La direttiva del preprocessore che elimina un suggerimento esistente. Il nome del suggerimento è specificato dall'identificatore *hint-name*.|
|`//` *comment*|Commento a riga singola.|
|`/*` *commento* `*/`|Un commento su più righe.|

## <a name="example"></a>Esempio

Questo esempio illustra come si accumulano i suggerimenti contenuti nei file dei suggerimenti. I file di interruzione non vengono usati in questo esempio.

La figura illustra alcune delle directory fisiche di un progetto Visual C++. I file dei suggerimenti si trovano nelle directory `vcpackages`, `Debug`, `A1` e `A2`.

### <a name="hint-file-directories"></a>Directory dei file dei suggerimenti

![Directory dei file dei suggerimenti comuni e specifiche del progetto.](media/hintfile.png "HintFile")

### <a name="directories-and-hint-file-contents"></a>Directory e contenuto dei file dei suggerimenti

L'elenco seguente mostra le directory del progetto che contengono file dei suggerimenti e il contenuto dei file. Sono elencati solo alcuni dei numerosi suggerimenti presenti nel file dei suggerimenti della directory `vcpackages`:

- vcpackages

    ```cpp.hint
    // vcpackages (partial list)
    #define _In_
    #define _In_opt_
    #define _In_z_
    #define _In_opt_z_
    #define _In_count_(size)
    ```

- Debug

    ```cpp.hint
    // Debug
    #undef _In_
    #define OBRACE {
    #define CBRACE }
    #define RAISE_EXCEPTION(x) throw (x)
    #define START_NAMESPACE namespace MyProject {
    #define END_NAMESPACE }
    ```

- A1

    ```cpp.hint
    // A1
    #define START_NAMESPACE namespace A1Namespace {
    ```

- A2

    ```cpp.hint
    // A2
    #undef OBRACE
    #undef CBRACE
    ```

### <a name="effective-hints"></a>Suggerimenti effettivi

La tabella seguente elenca i suggerimenti effettivi per i file di origine del progetto:

- File di origine: A1_A2_B.cpp

- Suggerimenti effettivi:

    ```cpp.hint
    // vcpackages (partial list)
    #define _In_opt_
    #define _In_z_
    #define _In_opt_z_
    #define _In_count_(size)
    // Debug...
    #define RAISE_EXCEPTION(x) throw (x)
    // A1
    #define START_NAMESPACE namespace A1Namespace {
    // ...Debug
    #define END_NAMESPACE }
    ```

Le note seguenti si applicano all'elenco precedente:

- I suggerimenti effettivi sono presenti nelle directory `vcpackages`, `Debug`, `A1` e `A2`.

- La direttiva **#undef** nel file dei suggerimenti `Debug` ha rimosso il suggerimento `#define _In_` nel file dei suggerimenti della directory `vcpackages`.

- Il file dei suggerimenti nella directory `A1` ridefinisce `START_NAMESPACE`.

- Il suggerimento `#undef` nella directory `A2` ha rimosso i suggerimenti per `OBRACE` e `CBRACE` nel file dei suggerimenti della directory `Debug`.

## <a name="see-also"></a>Vedere anche

[Tipi di file creati per i progetti di Visual C++](file-types-created-for-visual-cpp-projects.md)<br>
[Direttiva #define (C/C++)](../../preprocessor/hash-define-directive-c-cpp.md)<br>
[Direttiva #undef (C/C++)](../../preprocessor/hash-undef-directive-c-cpp.md)<br>
[Annotazioni SAL](../../c-runtime-library/sal-annotations.md)<br>

