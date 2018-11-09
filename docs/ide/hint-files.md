---
title: File dei suggerimenti
ms.date: 11/04/2016
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
ms.openlocfilehash: 0b3ca7c6b09d85cddb519242e63af0b8097e3fec
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50558782"
---
# <a name="hint-files"></a>File dei suggerimenti

Un *file dei suggerimenti* consente all'ambiente di sviluppo integrato (IDE) di Visual Studio di interpretare gli identificatori di Visual C++, ad esempio i nomi di funzioni e le macro. Quando si apre un progetto di Visual C++ il *sistema di analisi* dell'IDE analizza il codice in ogni file di origine del progetto e raccoglie informazioni su ogni identificatore. Quindi l'IDE usa tali informazioni per supportare funzionalità come il browser **Visualizzazione classi** e la **barra di spostamento**.

Il sistema di analisi, introdotto in Visual C++ 2010, comprende la sintassi C/C++ ma può interpretare erroneamente un'istruzione che contiene una macro. L'istruzione può essere erroneamente interpretata se a causa della macro il codice sorgente è scritto in modo sintatticamente non corretto. L'istruzione può diventare sintatticamente corretta quando il codice sorgente viene compilato e il preprocessore sostituisce l'[identificatore della macro](../preprocessor/hash-define-directive-c-cpp.md) con una propria definizione. Il sistema di analisi funziona senza dover compilare il progetto poiché usa i file dei suggerimenti per interpretare le macro. Di conseguenza, è immediatamente disponibile una funzionalità di visualizzazione, ad esempio **Visualizzazione classi**.

Un file dei suggerimenti contiene *suggerimenti* che possono essere personalizzati dall'utente e hanno la stessa sintassi delle definizioni di macro di C/C++. Visual C++ include un file dei suggerimenti predefinito che è sufficiente per la maggior parte dei progetti, ma è possibile creare propri file dei suggerimenti per migliorare il modo in cui Visual Studio gestisce gli identificatori.

> [!IMPORTANT]
> Se si modifica o si aggiunge un file dei suggerimenti, è necessario eliminare il file SDF e/o il file VC.db nella soluzione affinché le modifiche abbiano effetto.

## <a name="scenario"></a>Scenario

Si supponga che il codice seguente si trovi in un file di origine che si esamina con il browser **Visualizzazione classi**. La macro `STDMETHOD` dichiara un metodo denominato `myMethod` che accetta un parametro e restituisce un puntatore a un **HRESULT**.

```cpp
// Source code file.
STDMETHOD(myMethod)(int parameter1);
```

Le seguenti definizioni di macro sono in un file di intestazione separato.

```cpp
// Header file.
#define STDMETHOD(method) HRESULT (STDMETHODCALLTYPE * method)
#define STDMETHODCALLTYPE __stdcall
#define HRESULT void*
```

Il sistema di analisi non è in grado di interpretare il codice sorgente perché risulta dichiarata una funzione denominata `STDMETHOD` e tale dichiarazione è sintatticamente errata perché contiene due elenchi di parametri. Il sistema di analisi non apre il file di intestazione per individuare le definizioni per le macro `STDMETHOD`, `STDMETHODCALLTYPE` e `HRESULT`. Poiché il sistema di analisi non è in grado di interpretare la macro `STDMETHOD`, ignora l'intera istruzione e quindi continua l'analisi.

Il sistema di analisi non usa i file di intestazione perché il progetto può dipendere da uno o più file di intestazione importanti. Se un file di intestazione cambia, il sistema di analisi potrebbe dover riesaminare tutti i file di intestazione del progetto, rallentando così le prestazioni dell'IDE. Il sistema di analisi usa invece suggerimenti che specificano come gestire le macro `STDMETHOD`, `STDMETHODCALLTYPE` e `HRESULT`.

Come si capisce che è necessario un suggerimento? E se è necessario creare un suggerimento, di quale tipo deve essere? Un segno che è necessario un suggerimento è il fatto che la visualizzazione di un identificatore in **Visualizzazione classi** non è coerente con la visualizzazione nell'**editor**. Ad esempio, **Visualizzazione classi** potrebbe non visualizzare un membro di classe che esiste sicuramente oppure il nome del membro non è corretto. Per altre informazioni sui tipi di suggerimenti che possono risolvere i problemi comuni, vedere la sezione Quali macro richiedono un suggerimento? più avanti in questo argomento.

## <a name="architecture"></a>Architettura

I file dei suggerimenti riguardano le directory fisiche, non le directory logiche rappresentate in **Esplora soluzioni**. Non è necessario aggiungere un file dei suggerimenti per il progetto perché il file abbia effetto. Il sistema di analisi usa i file dei suggerimenti solo quando analizza i file di origine.

Ogni file dei suggerimenti è denominato **cpp.hint**. Di conseguenza, molte directory può contenere un file dei suggerimenti ma solo un file dei suggerimenti può verificarsi in una directory specifica.

Il progetto può essere influenzato da zero o più file dei suggerimenti. Se non sono presenti file dei suggerimenti, il sistema di analisi usa tecniche di ripristino dagli errori per ignorare il codice sorgente indecifrabile. In caso contrario, il sistema di analisi usa la strategia seguente per individuare e raggruppare i suggerimenti.

### <a name="search-order"></a>Ordine di ricerca

Il sistema di analisi cerca i file dei suggerimenti nelle directory nell'ordine seguente.

- La directory che contiene il pacchetto di installazione per Visual C++ (**vcpackages**). Questa directory contiene un file dei suggerimenti predefinito che descrive i simboli dei file di sistema usati di frequente, ad esempio **windows.h**. Di conseguenza, il progetto eredita automaticamente la maggior parte dei suggerimenti necessari.

- Il percorso dalla directory radice di un file di origine alla directory che contiene il file di origine stesso. In un progetto tipico di Visual C++ la directory radice contiene i file della soluzione o del progetto.

   L'eccezione a questa regola si verifica se un *file di interruzione* si trova nel percorso del file di origine. Un file di interruzione offre un maggiore controllo sull'ordine di ricerca ed è qualsiasi file denominato **cpp.stop**. Anziché iniziare dalla directory radice, il sistema di analisi esegue la ricerca dalla directory che contiene il file di interruzione alla directory che contiene il file di origine. In un progetto tipico non è necessario usare un file di interruzione.

### <a name="hint-gathering"></a>Raccolta dei suggerimenti

Un file dei suggerimenti contiene zero o più *suggerimenti*. Un suggerimento viene definito o eliminato esattamente come una macro di C/C++. Ovvero, dire la direttiva `#define` del preprocessore crea o ridefinisce un suggerimento e la direttiva `#undef` elimina un suggerimento.

Il sistema di analisi apre ogni file dei suggerimenti nell'ordine di ricerca descritto in precedenza, accumula i suggerimenti di ogni file in un set di *suggerimenti effettivi* e quindi usa i suggerimenti effettivi per interpretare gli identificatori nel codice.

Il sistema di analisi usa le regole seguenti per accumulare i suggerimenti.

- Se il nuovo suggerimento specifica un nome non ancora definito, il nuovo suggerimento aggiunge il nome ai suggerimenti effettivi.

- Se il nuovo suggerimento specifica un nome già definito, il nuovo suggerimento ridefinisce il suggerimento esistente.

- Se il nuovo suggerimento è una direttiva `#undef` che specifica un suggerimento effettivo esistente, il nuovo suggerimento elimina il suggerimento esistente.

La prima regola indica che i suggerimenti effettivi vengono ereditati dai file dei suggerimenti aperti in precedenza. Le ultime due regole indicano che i suggerimenti che si verificano successivamente nell'ordine di ricerca possono sostituire i suggerimenti verificatisi in precedenza. Ad esempio, è possibile sostituire tutti i suggerimenti precedenti se si crea un file dei suggerimenti nella directory che contiene un file di origine.

Per una descrizione di come vengono raccolti i suggerimenti, vedere la sezione `Example` più avanti in questo argomento.

### <a name="syntax"></a>Sintassi

I suggerimenti vengono creati ed eliminati con la stessa sintassi delle direttive del preprocessore che creano ed eliminano le macro. Di fatto, il sistema di analisi usa il preprocessore C/C++ per valutare i suggerimenti. Per altre informazioni sulle direttive per il preprocessore, vedere [Direttiva #define (C/C++)](../preprocessor/hash-define-directive-c-cpp.md) e [Direttiva #undef (C/C++)](../preprocessor/hash-undef-directive-c-cpp.md).

Gli unici elementi di sintassi inusuali sono le stringhe di sostituzione `@<`, `@=` e `@>`. Si tratta di stringhe di sostituzione specifiche del file dei suggerimenti che si usano solo le macro di *mapping*. Una mappa è un set di macro che correlano dati, funzioni o eventi ad altri dati, funzioni o gestori di eventi. Ad esempio, `MFC` usa le mappe per creare [mappe di messaggi](../mfc/reference/message-maps-mfc.md) e `ATL` usa le mappe per creare [mappe di oggetti](../atl/reference/object-map-macros.md). Le stringhe di sostituzione specifiche del file dei suggerimenti indicano gli elementi iniziali, intermedi e finali di una mappa. Solo il nome di una macro di mapping è significativo. Quindi, ogni stringa di sostituzione nasconde intenzionalmente l'implementazione della macro.

Nei suggerimenti viene usata la sintassi seguente.

|Sintassi|Significato|
|------------|-------------|
|`#define` *hint-name* *replacement-string*<br /><br /> `#define` *hint-name* `(` *parameter*, ...`)`*replacement-string*|Una direttiva del preprocessore che definisce un nuovo suggerimento o ridefinisce un suggerimento esistente. Dopo la direttiva, il preprocessore sostituisce ogni occorrenza di *hint-name* nel codice sorgente con *replacement-string*.<br /><br /> La seconda forma di sintassi definisce un suggerimento simile a una funzione. Se un suggerimento di tipo funzione si verifica nel codice sorgente, il preprocessore prima sostituisce ogni occorrenza di *parameter* in *replacement-string* con l'argomento corrispondente nel codice sorgente e quindi sostituisce *hint-name* con *replacement-string*.|
|`@<`|Un elemento *replacement-string* specifico del file dei suggerimenti che indica l'inizio di un set di elementi della mappa.|
|`@=`|Un elemento *replacement-string* specifico del file dei suggerimenti che indica un elemento intermedio della mappa. Una mappa può contenere più elementi.|
|`@>`|Un elemento *replacement-string* specifico del file dei suggerimenti che indica la fine di un set di elementi della mappa.|
|`#undef` *hint-name*|La direttiva del preprocessore che elimina un suggerimento esistente. Il nome del suggerimento è specificato dall'identificatore *hint-name*.|
|`//` *comment*|Una singola riga di commento.|
|`/*` *commento* `*/`|Un commento su più righe.|

## <a name="what-macros-require-a-hint"></a>Quali macro richiedono un suggerimento?

Alcuni tipi di macro possono interferire con il sistema di analisi. Questa sezione descrive i tipi di macro che possono causare un problema e il tipo di suggerimento che si può creare per risolvere tale problema.

### <a name="disruptive-macros"></a>Macro dannose

Alcune macro inducono il sistema di analisi a interpretare erroneamente il codice sorgente, ma possono essere ignorate senza compromettere l'esperienza di esplorazione. Ad esempio, le macro del linguaggio di annotazione del codice sorgente ([SAL](../c-runtime-library/sal-annotations.md)) si risolvono in attributi C++ che consentono di trovare i bug di programmazione. Se si vogliono ignorare le annotazioni SAL quando si sfoglia il codice, è consigliabile creare un file dei suggerimenti che nasconde l'annotazione.

Nel codice sorgente riportato di seguito il tipo di parametro per la funzione `FormatWindowClassName()` è `PXSTR` e il nome del parametro è `szBuffer`. Tuttavia, il sistema di analisi interpreta per errore le annotazioni SAL `_Pre_notnull_` e `_Post_z_` come tipo di parametro o nome del parametro.

**Codice sorgente:**

```cpp
static void FormatWindowClassName(_Pre_notnull__Post_z_ PXSTR szBuffer)
```

**Strategia:** definizione Null

La strategia in questa situazione consiste nel trattare le annotazioni SAL come se non esistessero. A tale scopo, specificare un suggerimento la cui stringa di sostituzione è Null. Di conseguenza, il sistema di analisi ignora le annotazioni e il browser **Visualizzazione classi** non le visualizza (Visual C++ include un file dei suggerimenti predefinito che consente di nascondere l'annotazione SAL).

**File dei suggerimenti:**

```cpp.hint
#define _Pre_notnull_
```

### <a name="concealed-cc-language-elements"></a>Elementi nascosti del linguaggio C/C++

Una causa tipica dell'interpretazione errata del codice sorgente da parte del sistema di analisi è una macro che nasconde un token [punctuator](../cpp/punctuators-cpp.md) o [keyword](../cpp/keywords-cpp.md) di C/C++. Vale a dire, una macro potrebbe contenere metà di una coppia di segni di punteggiatura, ad esempio `<>`, `[]`, `{}` e `()`.

Nel seguente codice sorgente la macro `START_NAMESPACE` nasconde una parentesi graffa sinistra non abbinata (`{`).

**Codice sorgente:**

```cpp
#define START_NAMESPACE namespace MyProject {
```

**Strategia:** copia diretta

Se la semantica di una macro è fondamentale per l'esperienza di esplorazione, creare un suggerimento identico alla macro. Il sistema di analisi risolve la macro in una definizione nel file dei suggerimenti.

Si noti che, se la macro nel file di origine contiene altre macro, tali macro vengono interpretate solo se sono già nel set di suggerimenti effettivi.

**File dei suggerimenti:**

```cpp.hint
#define START_NAMESPACE namespace MyProject {
```

### <a name="maps"></a>Mappe

Una mappa è costituita da macro che definiscono un elemento iniziale, un elemento finale ed elementi zero o più elementi intermedi. Il sistema di analisi interpreta erroneamente le mappe perché ogni macro di mapping nasconde gli elementi del linguaggio C/C++ e la sintassi di un'istruzione C/C++ completa viene distribuita tra molte macro distinte.

Il seguente codice sorgente definisce le macro `BEGIN_CATEGORY_MAP`, `IMPLEMENTED_CATEGORY` e `END_CATEGORY_MAP`.

**Codice sorgente:**

```cpp
#define BEGIN_CATEGORY_MAP(x)\
static const struct ATL::_ATL_CATMAP_ENTRY* GetCategoryMap() throw() {\
static const struct ATL::_ATL_CATMAP_ENTRY pMap[] = {
#define IMPLEMENTED_CATEGORY( catid ) { _ATL_CATMAP_ENTRY_IMPLEMENTED, &catid },
#define END_CATEGORY_MAP()\
   { _ATL_CATMAP_ENTRY_END, NULL } };\
   return( pMap ); }
```

**Strategia:** identificare gli elementi della mappa

Specificare i suggerimenti per gli elementi iniziali, intermedi (se presenti) e finali di una mappa. Usare le stringhe di sostituzione speciali della mappa, `@<`, `@=` e `@>`. Per altre informazioni, vedere la sezione `Syntax` in questo argomento.

**File dei suggerimenti:**

```cpp.hint
// Start of the map.
#define BEGIN_CATEGORY_MAP(x) @<
// Intermediate map element.
#define IMPLEMENTED_CATEGORY( catid ) @=
// Intermediate map element.
#define REQUIRED_CATEGORY( catid ) @=
// End of the map.
#define END_CATEGORY_MAP() @>
```

### <a name="composite-macros"></a>Macro composite

Le macro composite contengono uno o più dei tipi di macro che confondono il sistema di analisi.

Il seguente codice sorgente contiene la macro `START_NAMESPACE`, che specifica l'inizio di un ambito di spazio dei nomi e la macro `BEGIN_CATEGORY_MAP`, che specifica l'inizio di una mappa.

**Codice sorgente:**

```cpp
#define NSandMAP START_NAMESPACE BEGIN_CATEGORY_MAP
```

**Strategia:** copia diretta

Creare i suggerimenti per le macro `START_NAMESPACE` e `BEGIN_CATEGORY_MAP`, quindi creare un suggerimento per la macro `NSandMAP` che sia identico a quello illustrato in precedenza per il codice sorgente. In alternativa, se una macro composita è costituita da macro distruttive e spazi vuoti, è possibile definire un suggerimento la cui stringa di sostituzione è una definizione Null.

In questo esempio si supponga che per `START_NAMESPACE` esista già un suggerimento come descritto nella sezione `Concealed C/C++ Language Elements` di questo argomento. Presupporre inoltre che in `BEGIN_CATEGORY_MAP` esista un suggerimento come descritto precedentemente in `Maps`.

**File dei suggerimenti:**

```cpp.hint
#define NSandMAP START_NAMESPACE BEGIN_CATEGORY_MAP
```

### <a name="inconvenient-macros"></a>Macro poco pratiche

Alcune macro possono essere interpretate dal sistema di analisi, ma il codice sorgente è difficile da leggere perché la macro è lunga o complessa. Per ragioni di leggibilità, è possibile specificare un suggerimento che semplifica la visualizzazione della macro.

**Codice sorgente:**

```cpp
#define STDMETHOD(methodName) HRESULT (STDMETHODCALLTYPE * methodName)
```

**Strategia:** semplificazione

Creare un suggerimento che visualizza una definizione di macro più semplice.

**File dei suggerimenti:**

```cpp.hint
#define STDMETHOD(methodName) void* methodName
```

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come si accumulano i suggerimenti contenuti nei file dei suggerimenti. I file di interruzione non vengono usati in questo esempio.

La figura seguente illustra alcune delle directory fisiche di un progetto di Visual C++. I file dei suggerimenti sono nelle directory `vcpackages`, `Debug`, `A1` e `A2`.

### <a name="hint-file-directories"></a>Directory dei file dei suggerimenti

![Directory dei file dei suggerimenti comuni e specifiche del progetto.](../ide/media/hintfile.png "HintFile")

### <a name="directories-and-hint-file-contents"></a>Directory e contenuto dei file dei suggerimenti

Nell'elenco seguente sono indicate le directory di questo progetto che contengono file dei suggerimenti e il contenuto di tali file. Sono indicati solo alcuni dei molti suggerimenti presenti nel file dei suggerimenti della directory `vcpackages`.

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

Nella tabella seguente sono elencati i suggerimenti effettivi per i file di origine di questo progetto.

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

Le note seguenti si applicano all'elenco precedente.

- I suggerimenti effettivi sono presenti nelle directory `vcpackages`, `Debug`, `A1` e `A2`.

- La direttiva **#undef** nel file dei suggerimenti `Debug` ha rimosso il suggerimento `#define _In_` nel file dei suggerimenti della directory `vcpackages`.

- Il file dei suggerimenti nella directory `A1` ridefinisce `START_NAMESPACE`.

- Il suggerimento `#undef` nella directory `A2` ha rimosso i suggerimenti per `OBRACE` e `CBRACE` nel file dei suggerimenti della directory `Debug`.

## <a name="see-also"></a>Vedere anche

[Tipi di file creati per i progetti di Visual C++](../ide/file-types-created-for-visual-cpp-projects.md)<br>
[Direttiva #define (C/C++)](../preprocessor/hash-define-directive-c-cpp.md)<br>
[Direttiva #undef (C/C++)](../preprocessor/hash-undef-directive-c-cpp.md)<br>
[Annotazioni SAL](../c-runtime-library/sal-annotations.md)<br>
[Mappe messaggi](../mfc/reference/message-maps-mfc.md)<br>
[Macro della mappa messaggi](../atl/reference/message-map-macros-atl.md)<br>
[Macro della mappa oggetti](../atl/reference/object-map-macros.md)