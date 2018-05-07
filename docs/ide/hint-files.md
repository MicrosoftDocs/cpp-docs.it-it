---
title: Hint file | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-ide
ms.topic: conceptual
f1_keywords:
- cpp.hint
- vc.hint.file
dev_langs:
- C++
helpviewer_keywords:
- stop file
- cpp.hint
- hint file
- cpp.stop
- Class View, hint file
ms.assetid: 17194f66-cf62-4523-abec-77db0675ab65
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 687e5cba94693a752f934d7816e6a7c36e318354
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="hint-files"></a>File dei suggerimenti
Oggetto *file dei suggerimenti* consente di Visual Studio ambiente di sviluppo integrato (IDE) di interpretare gli identificatori di Visual C++, ad esempio i nomi di funzioni e macro. Quando si apre un progetto Visual C++, l'IDE *l'analisi di sistema* analizza il codice in ogni file di origine nel progetto e raccoglie le informazioni su ogni identificatore. Quindi l'IDE Usa tali informazioni per supportare funzionalità quali la **Visualizzazione classi** browser e **barra di spostamento**.  
  
 Il sistema di analisi, è stato introdotto in Visual C++ 2010, in grado di comprendere la sintassi C/C++, ma può interpretare erroneamente un'istruzione che contiene una macro. L'istruzione possa essere erroneamente interpretata se la macro genera il codice sorgente è sintatticamente errato così come scritta. L'istruzione può diventare sintatticamente corretta quando viene compilato il codice sorgente e il preprocessore sostituisce il [identificatore macro](../preprocessor/hash-define-directive-c-cpp.md) con la relativa definizione. Il sistema di analisi funziona senza dover compilare il progetto perché utilizza i file dei suggerimenti per interpretare le macro. Pertanto, una visualizzazione funzionalità, ad esempio **Visualizzazione classi** è immediatamente disponibile.  
  
 Un file dei suggerimenti contiene personalizzabili *hint*, che hanno la stessa sintassi di definizioni di macro di C/C++. Visual C++ include un file dei suggerimenti incorporato che è sufficiente per la maggior parte dei progetti, ma è possibile creare i file dei suggerimenti per migliorare il modo in cui che Visual Studio gestisce gli identificatori.  
  
> [!IMPORTANT]
>  Se si modifica o aggiunta un file dei suggerimenti, è necessario eliminare il file con estensione sdf e/o file VC.db nella soluzione affinché le modifiche abbiano effetto.  
  
## <a name="scenario"></a>Scenario  
 Si supponga che il codice seguente in un file di origine che si esamina con il **Visualizzazione classi** browser. Il `STDMETHOD` macro dichiara un metodo denominato `myMethod` che accetta un parametro e restituisce un puntatore a un **HRESULT**.  
  
```  
// Source code file.  
STDMETHOD(myMethod)(int parameter1);  
```  
  
 Le definizioni di macro seguenti sono in un file di intestazione.  
  
```  
// Header file.  
#define STDMETHOD(method) HRESULT (STDMETHODCALLTYPE * method)  
#define STDMETHODCALLTYPE __stdcall  
#define HRESULT void*  
```  
  
 Il sistema di analisi non è possibile interpretare il codice sorgente perché una funzione denominata STDMETHOD sembra essere dichiarata e la dichiarazione è sintatticamente errata perché dispone di due elenchi di parametri. Il sistema di analisi non apre il file di intestazione per individuare le definizioni per il `STDMETHOD`, `STDMETHODCALLTYPE`, e `HRESULT` macro. Poiché il sistema di analisi non è in grado di interpretare il `STDMETHOD` (macro), l'intera istruzione Ignora e continua quindi l'analisi.  
  
 Il sistema di analisi non utilizza i file di intestazione perché il progetto potrebbe dipendere da uno o più file di intestazione importanti. Se viene modificato alcun file di intestazione, il sistema di analisi potrebbe essere necessario riesaminare tutti i file di intestazione nel progetto, rallentando così le prestazioni dell'IDE. Il sistema di analisi utilizza invece dei suggerimenti che specificano come gestire il `STDMETHOD`, `STDMETHODCALLTYPE`, e `HRESULT` macro.  
  
 Come si capisce che è necessario un hint? E se è necessario un suggerimento, il tipo è necessario creare? Un segno che è necessario un hint è se la visualizzazione di un identificatore in **Visualizzazione classi** non è coerente con la visualizzazione nel **Editor**. Ad esempio, **Visualizzazione classi** potrebbe non visualizzare esiste un membro di classe che si è certi o il nome del membro non è corretto. Per ulteriori informazioni sui tipi di suggerimenti che possono risolvere i problemi comuni, vedere la cosa Macros Require a Hint? sezione più avanti in questo argomento.  
  
## <a name="architecture"></a>Architettura  
 File dei suggerimenti relativi alla directory fisica, non le directory logiche rappresentati **Esplora**. Non è necessario aggiungere un file dei suggerimenti per il progetto per il file dei suggerimenti abbia effetto. Il sistema di analisi utilizza i file dei suggerimenti solo durante l'analisi di file di origine.  
  
 Ogni file dei suggerimenti è denominato **hint**. Pertanto, molte directory può contenere un file dei suggerimenti, ma solo un file dei suggerimenti può verificarsi in una directory specifica.  
  
 Il progetto può essere influenzato da zero o più file dei suggerimenti. Se non sono presenti file hint, il sistema di analisi utilizza tecniche di ripristino di errore per ignorare il codice sorgente possono essere decifrati. In caso contrario, il sistema di analisi utilizza la strategia seguente per individuare e raggruppare i suggerimenti.  
  
### <a name="search-order"></a>Ordine di ricerca  
 Il sistema di analisi viene eseguita nelle directory per i file dei suggerimenti nell'ordine seguente.  
  
-   La directory contenente il pacchetto di installazione di Visual C++ (**vcpackages**). Questa directory contiene un file dei suggerimenti incorporato che descrive i simboli nei file di sistema utilizzate di frequente, ad esempio **h**. Di conseguenza, il progetto eredita automaticamente la maggior parte dei suggerimenti di cui necessita.  
  
-   Il percorso dalla directory radice di un file di origine alla directory che contiene il file di origine stesso. In un tipico progetto di Visual C++, la directory radice contiene i file di soluzione o progetto.  
  
     L'eccezione a questa regola è se un *file stop* nel percorso del file di origine. Un file di interruzione consente di controllare l'ordine di ricerca aggiuntive ed è qualsiasi file denominato **cpp**. Anziché iniziare dalla directory radice, il sistema di analisi Cerca dalla directory contenente il file di interruzione alla directory che contiene il file di origine. In un progetto tipico, non è necessario un file di interruzione.  
  
### <a name="hint-gathering"></a>Raccolta di suggerimenti  
 Un file dei suggerimenti contiene zero o più *hint*. Un hint viene definito come una macro di C/C++. Vale a dire il `#define` direttiva del preprocessore crea o ridefinisce un suggerimento e `#undef` direttiva Elimina un suggerimento.  
  
 Il sistema di analisi consente di aprire ogni file dei suggerimenti nell'ordine di ricerca descritto in precedenza, vengono accumulati gli hint di ciascun file in un set di *suggerimenti*e quindi utilizza i suggerimenti per interpretare gli identificatori nel codice.  
  
 Il sistema di analisi utilizza le regole seguenti per accumulare suggerimenti.  
  
-   Se il nuovo suggerimento specifica un nome che non è già stato definito, il nuovo suggerimento aggiunge il nome ai suggerimenti validi.  
  
-   Se il nuovo suggerimento specifica un nome che è già stato definito, il nuovo suggerimento ridefinisce il suggerimento esistente.  
  
-   Se il nuovo suggerimento è un `#undef` direttiva che specifica un suggerimento valido esistente, il nuovo suggerimento Elimina quello esistente.  
  
 La prima regola che suggerimenti vengono ereditate dal file dei suggerimenti precedentemente aperti. Le ultime due regole indicano che gli hint che si verificano in un secondo momento nell'ordine di ricerca possono eseguire l'override dei suggerimenti che si è verificato in precedenza. Ad esempio, è possibile eseguire l'override dei suggerimenti precedenti se si crea un file dei suggerimenti nella directory che contiene un file di origine.  
  
 Per una descrizione di come vengono raccolti i suggerimenti, vedere il `Example` sezione più avanti in questo argomento.  
  
### <a name="syntax"></a>Sintassi  
 Gli hint vengono creati con la stessa sintassi le direttive del preprocessore che creano ed eliminano le macro. In effetti, il sistema di analisi Usa il preprocessore C/C++ per valutare i suggerimenti. Per ulteriori informazioni sulle direttive di pre-elaborazione, vedere [#define (direttiva) (C/C++)](../preprocessor/hash-define-directive-c-cpp.md) e [#undef (direttiva) (C/C++)](../preprocessor/hash-undef-directive-c-cpp.md).  
  
 Gli elementi di sintassi uniche sono il `@<`, `@=`, e `@>` le stringhe di sostituzione. Si tratta di stringhe di sostituzione specifica del file dei suggerimenti che vengono utilizzate solo con *mappa* macro. Una mappa è un set di macro che correlano i dati, funzioni o gli eventi ad altri dati, funzioni o i gestori di eventi. Ad esempio, `MFC` le mappe vengono utilizzate per creare [mappe messaggi](../mfc/reference/message-maps-mfc.md), e `ATL` le mappe vengono utilizzate per creare [oggetto mappe](../atl/reference/object-map-macros.md). Le stringhe di sostituzione specifica del file dei suggerimenti indicano gli elementi iniziale, intermedi e finale di una mappa. Solo il nome di una macro di mapping è significativo. Pertanto, ogni stringa di sostituzione nasconde intenzionalmente l'implementazione della macro.  
  
 Gli hint di usare la sintassi seguente.  
  
|Sintassi|Significato|  
|------------|-------------|  
|`#define` *nome-suggerimento* *stringa di sostituzione*<br /><br /> `#define` *nome-suggerimento* `(` *parametro*,... `)` *stringa di sostituzione*|Una direttiva del preprocessore che definisce un nuovo suggerimento o ridefinisce un suggerimento esistente. Dopo la direttiva, il preprocessore sostituisce ogni occorrenza del *nome suggerimento* nel codice sorgente con *stringa di sostituzione*.<br /><br /> La seconda forma della sintassi definisce un hint di tipo funzione. In caso di un hint di tipo funzione nel codice sorgente, il preprocessore prima sostituisce ogni occorrenza di *parametro* in *stringa di sostituzione* con l'argomento corrispondente nel codice sorgente e quindi sostituisce *nome suggerimento* con *stringa di sostituzione*.|  
|`@<`|Specifica un file dei suggerimenti *stringa di sostituzione* che indica l'inizio di un set di elementi della mappa.|  
|`@=`|Specifica un file dei suggerimenti *stringa di sostituzione* che indica un elemento della mappa intermedio. Una mappa può disporre di più elementi della mappa.|  
|`@>`|Specifica un file dei suggerimenti *stringa di sostituzione* che indica la fine di un set di elementi della mappa.|  
|`#undef` *nome di suggerimento*|La direttiva del preprocessore che elimina un suggerimento esistente. Il nome del suggerimento è fornito dal *nome suggerimento* identificatore.|  
|`//` *Commento*|Un commento a riga singola.|  
|`/*` *comment* `*/`|Un commento su più righe.|  
  
## <a name="what-macros-require-a-hint"></a>Le macro richiedono un Hint?  
 Alcuni tipi di macro possono interferire con il sistema di analisi. In questa sezione descrive i tipi di macro che possono causare un problema e il tipo di hint che è possibile creare per risolvere il problema.  
  
### <a name="disruptive-macros"></a>Macro dannose  
 Alcune macro che il sistema di analisi l'errata interpretazione di codice sorgente, ma può essere ignorato senza comprometterne l'esperienza di esplorazione. Ad esempio, il linguaggio annotazione del codice sorgente ([SAL](../c-runtime-library/sal-annotations.md)) macro risolvono in attributi di C++ che consentono di trovare i bug di programmazione. Se si desidera ignorare le annotazioni SAL durante la visualizzazione di codice, è consigliabile creare un file dei suggerimenti che consente di nascondere l'annotazione.  
  
 Nel seguente codice sorgente, il tipo di parametro per il `FormatWindowClassName()` funzione `PXSTR`, e il nome del parametro è `szBuffer`. Tuttavia, gli errori di sistema di analisi di `_Pre_notnull_` e `_Post_z_` annotazioni SAL per il tipo di parametro o il nome del parametro.  
  
 **Codice sorgente:**  
  
```  
static void FormatWindowClassName(_Pre_notnull__Post_z_ PXSTR szBuffer)  
```  
  
 **Strategia:** Null definizione  
  
 La strategia in questa situazione consiste nel considerare le annotazioni SAL come se non esistono. A tale scopo, specificare un hint per cui la stringa di sostituzione è null. Di conseguenza, il sistema di analisi ignora le annotazioni e **Visualizzazione classi** queste non vengono visualizzate nel browser. (Visual C++ include un file dei suggerimenti incorporato che consente di nascondere le annotazioni SAL).  
  
 **File dei suggerimenti:**  
  
```  
#define _Pre_notnull_  
```  
  
### <a name="concealed-cc-language-elements"></a>Elementi del linguaggio C/C++ nascosti  
 Un tipico che il sistema di analisi interpreta per il codice sorgente, infatti, se una macro nasconde un C/C++ [segno di punteggiatura](../cpp/punctuators-cpp.md) o [parola chiave](../cpp/keywords-cpp.md) token. Vale a dire, una macro potrebbe contenere metà di una coppia di segni di punteggiatura, ad esempio `<>`, `[]`, `{}`, e `()`.  
  
 Nel seguente codice sorgente, la `START_NAMESPACE` macro nasconde una parentesi graffa sinistra non abbinata (`{`).  
  
 **Codice sorgente:**  
  
```  
#define START_NAMESPACE namespace MyProject {  
```  
  
 **Strategia:** diretta copia  
  
 Se la semantica di una macro è fondamentale per l'esperienza di esplorazione, creare un suggerimento che è identico alla macro. Il sistema di analisi consente di risolvere la macro per la definizione nel file dei suggerimenti.  
  
 Si noti che, se la macro nel file di origine contiene altre macro, le macro vengono interpretate solo se sono già nel set di suggerimenti.  
  
 **File dei suggerimenti:**  
  
```  
#define START_NAMESPACE namespace MyProject {  
```  
  
### <a name="maps"></a>Mappe  
 Una mappa è costituita da macro che definiscono un elemento iniziale e finale elemento zero o più elementi intermedi. Il sistema di analisi interpreta per mappe perché ogni macro di mapping nasconde gli elementi del linguaggio C/C++, e la sintassi di un'istruzione di C/C++ completa viene distribuita tra più macro distinte.  
  
 Definisce il seguente codice sorgente di `BEGIN_CATEGORY_MAP`, `IMPLEMENTED_CATEGORY`, e `END_CATEGORY_MAP` macro.  
  
 **Codice sorgente:**  
  
```  
#define BEGIN_CATEGORY_MAP(x)\  
static const struct ATL::_ATL_CATMAP_ENTRY* GetCategoryMap() throw() {\  
static const struct ATL::_ATL_CATMAP_ENTRY pMap[] = {  
#define IMPLEMENTED_CATEGORY( catid ) { _ATL_CATMAP_ENTRY_IMPLEMENTED, &catid },  
#define END_CATEGORY_MAP()\  
   { _ATL_CATMAP_ENTRY_END, NULL } };\  
   return( pMap ); }  
```  
  
 **Strategia:** gli elementi della mappa di identità  
  
 Specificare gli hint per l'inizio, intermedio (se presente) e di fine, gli elementi di una mappa. Utilizzare le stringhe di sostituzione mappa speciale, `@<`, `@=`, e `@>`. Per ulteriori informazioni, vedere il `Syntax` in questo argomento.  
  
 **File dei suggerimenti:**  
  
```  
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
 Le macro composite contengono uno o più dei tipi di macro che confondere il sistema di analisi.  
  
 Contiene il seguente codice sorgente di `START_NAMESPACE` (macro), che specifica l'inizio di un ambito dello spazio dei nomi, e `BEGIN_CATEGORY_MAP` (macro), che specifica l'inizio di una mappa.  
  
 **Codice sorgente:**  
  
```  
#define NSandMAP START_NAMESPACE BEGIN_CATEGORY_MAP  
```  
  
 **Strategia:** diretta copia  
  
 Creare gli hint per la `START_NAMESPACE` e `BEGIN_CATEGORY_MAP` macro, quindi creare un suggerimento per il `NSandMAP` macro che è identico a quello illustrato in precedenza per il codice sorgente. In alternativa, se una macro composita costituito dal solo le macro che possono causare interruzioni e gli spazi vuoti, è possibile definire un hint di cui la stringa di sostituzione è una definizione di null.  
  
 In questo esempio, si supponga `START_NAMESPACE` disponga già di un suggerimento come descritto in questo argomento in di `Concealed C/C++ Language Elements` sottotitolo. E presuppongono `BEGIN_CATEGORY_MAP` disponga di un suggerimento come descritto precedentemente in `Maps`.  
  
 **File dei suggerimenti:**  
  
```  
#define NSandMAP START_NAMESPACE BEGIN_CATEGORY_MAP  
```  
  
### <a name="inconvenient-macros"></a>Macro di disturbo  
 Alcune macro può essere interpretato dal sistema di analisi, ma il codice sorgente è difficile da leggere perché la macro è lunga o complessa. Per ragioni di leggibilità, è possibile fornire un suggerimento che semplifica la visualizzazione della macro.  
  
 **Codice sorgente:**  
  
```  
#define STDMETHOD(methodName) HRESULT (STDMETHODCALLTYPE * methodName)  
```  
  
 **Strategia:** semplificazione  
  
 Creare un suggerimento che consente di visualizzare una semplice definizione di macro.  
  
 **File dei suggerimenti:**  
  
```  
#define STDMETHOD(methodName) void* methodName  
```  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrato come i suggerimenti vengono accumulati da file dei suggerimenti. File di interruzione non vengono utilizzati in questo esempio.  
  
 La figura seguente illustra alcune delle directory fisiche in un progetto di Visual C++. File dei suggerimenti presenti il `vcpackages`, `Debug`, `A1`, e `A2` directory.  
  
### <a name="hint-file-directories"></a>Directory dei File dei suggerimenti  
 ![Comune e progetto di&#45;directory di file dei suggerimenti specifici. ] (../ide/media/hintfile.png "HintFile")  
  
### <a name="directories-and-hint-file-contents"></a>Hint per il contenuto del File e directory  
 L'elenco seguente mostra le directory in questo progetto contenenti i file dei suggerimenti e il contenuto di tali file hint. Solo alcuni degli hint in molti di `vcpackages` sono elencati i file dei suggerimenti di directory.  
  
-   vcpackages  
  
    ```  
    // vcpackages (partial list)  
    #define _In_  
    #define _In_opt_  
    #define _In_z_  
    #define _In_opt_z_  
    #define _In_count_(size)  
    ```  
  
-   Debug  
  
    ```  
    // Debug  
    #undef _In_  
    #define OBRACE {  
    #define CBRACE }  
    #define RAISE_EXCEPTION(x) throw (x)  
    #define START_NAMESPACE namespace MyProject {  
    #define END_NAMESPACE }  
    ```  
  
-   A1  
  
    ```  
    // A1  
    #define START_NAMESPACE namespace A1Namespace {  
    ```  
  
-   A2  
  
    ```  
    // A2  
    #undef OBRACE  
    #undef CBRACE  
    ```  
  
### <a name="effective-hints"></a>Suggerimenti  
 Nella tabella seguente sono elencati i suggerimenti validi per i file di origine in questo progetto.  
  
-   File di origine: A1_A2_B.cpp  
  
-   Suggerimenti:  
  
    ```  
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
  
-   Suggerimenti validi sono compresi il `vcpackages`, `Debug`, `A1`, e `A2` directory.  
  
-   Il **#undef** direttiva la `Debug` rimossi file dei suggerimenti di `#define _In_` hint nel `vcpackages` file dei suggerimenti di directory.  
  
-   Il file dei suggerimenti di `A1` directory ridefinisce `START_NAMESPACE`.  
  
-   Il `#undef` hint nel `A2` rimuovere gli hint per la directory `OBRACE` e `CBRACE` nel `Debug` file dei suggerimenti di directory.  
  
## <a name="see-also"></a>Vedere anche  
 [Tipi di file creati per i progetti di Visual C++](../ide/file-types-created-for-visual-cpp-projects.md)    
 [#define (direttiva) (C/C++)](../preprocessor/hash-define-directive-c-cpp.md)   
 [#undef (direttiva) (C/C++)](../preprocessor/hash-undef-directive-c-cpp.md)   
 [SAL (annotazioni)](../c-runtime-library/sal-annotations.md)   
 [Mappe messaggi](../mfc/reference/message-maps-mfc.md)   
 [Macro della mappa messaggi](../atl/reference/message-map-macros-atl.md)   
 [Macro della mappa oggetti](../atl/reference/object-map-macros.md)