---
title: Strumenti del linker LNK2001 errore | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- LNK2001
dev_langs:
- C++
helpviewer_keywords:
- LNK2001
ms.assetid: dc1cf267-c984-486c-abd2-fd07c799f7ef
caps.latest.revision: 21
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: 9dee257bec0f09bd729bf10c4a1468ecb20dfa61
ms.openlocfilehash: 3629075e5659cb89ab751b011f3ce2cbf89397cc
ms.lasthandoff: 02/24/2017

---
# <a name="linker-tools-error-lnk2001"></a>Errore degli strumenti del linker LNK2001
simbolo esterno non risolto "simbolo"  
  
 Il codice fa riferimento a un elemento (ad esempio, una funzione, variabile o etichetta) che il linker non può trovare nel file oggetto e librerie.  
  
 Questo messaggio di errore è seguito dall'errore irreversibile [LNK1120](../../error-messages/tool-errors/linker-tools-error-lnk1120.md).  
  
 **Le possibili cause**  
  
-   Quando si aggiorna una libreria gestita o un progetto di servizio web da Visual C++ 2003, il **/Zl** aggiunta l'opzione del compilatore per il **della riga di comando** pagina delle proprietà. Questo determina l'errore LNK2001.  
  
     Per risolvere questo errore, aggiungere msvcrt. lib e msvcmrt. lib alla proprietà Dipendenze aggiuntive del linker. In alternativa, rimuovere **/Zl** dal **della riga di comando** pagina delle proprietà. Per ulteriori informazioni, vedere [/Zl (omette nome della libreria predefinita)](../../build/reference/zl-omit-default-library-name.md) e [funziona con le proprietà del progetto](../../ide/working-with-project-properties.md).  
  
-   Ciò che il codice richiede inesistente (il simbolo è stato digitato correttamente o viene utilizzato nel caso di errore, ad esempio).  
  
-   Il codice richiesto per l'elemento corretto (si utilizzano versioni diverse di librerie, da una versione del prodotto, ad altri utenti di un'altra versione).  
  
 **Cause specifiche**  
  
 **Problemi di codifica**  
  
-   Se viene segnalato che il testo di diagnostica LNK2001 `__check_commonlanguageruntime_version` è un simbolo esterno non risolto, vedere [l'errore LNK2019](../../error-messages/tool-errors/linker-tools-error-lnk2019.md) per informazioni sulle modalità di risoluzione.  
  
-   La definizione del modello di membro è all'esterno della classe. Visual C++ dispone di una limitazione in cui i modelli di membro devono essere definiti completamente all'interno della classe che lo contiene. Vedere l'articolo della Knowledge Base Q239436 per ulteriori informazioni sui modelli LNK2001 e membro.  
  
-   Caso di mancata corrispondenza nel codice o di definizione moduli (def) nel file può provocare l'errore LNK2001. Ad esempio, se una variabile denominata `var1` in un C++ file di origine e si tenta di accedervi come `VAR1` in un altro.  
  
-   Un progetto che utilizza [l'inline delle funzioni](../../error-messages/tool-errors/function-inlining-problems.md) ma definisce le funzioni in un file con estensione cpp anziché nell'intestazione del file può provocare l'errore LNK2001.  
  
-   Chiamata di una funzione C da un programma C++ senza utilizzare `extern` "C" (che indica al compilatore di utilizzare la convenzione di denominazione C) può provocare l'errore LNK2001. Opzioni del compilatore [/Tp](../../build/reference/tc-tp-tc-tp-specify-source-file-type.md) e [/Tc](../../build/reference/tc-tp-tc-tp-specify-source-file-type.md) determinano la compilazione dei file in C++ o C, rispettivamente, indipendentemente dall'estensione di file. Queste opzioni possono generare nomi di funzione diversi da quello previsto.  
  
-   L'errore LNK2001 può dipendere il tentativo di fare riferimento a funzioni o dati che non dispongono di collegamento esterno. In C++, le funzioni inline e `const` dati dispongono di collegamento interno se non è specificato come `extern`.  
  
-   Oggetto [corpo della funzione o variabile mancante](../../error-messages/tool-errors/missing-function-body-or-variable.md) può provocare l'errore LNK2001. Con un prototipo di funzione o `extern` dichiarazione il compilatore può continuare senza errori, ma il linker non può risolvere una chiamata a un indirizzo o un riferimento a una variabile perché non è disponibile codice della funzione o variabile spazio riservato.  
  
-   L'errore LNK2001 può essere provocato da una chiamata a una funzione con tipi di parametro che non corrispondono a quelli nella dichiarazione di funzione. [Nome decoration](../../error-messages/tool-errors/name-decoration.md) incorpora i parametri di una funzione nel nome funzionale decorato finale.  
  
-   Inclusi prototipi, che prevede che il corpo di una funzione che non viene fornito il compilatore possono causare LNK2001. Se si dispone di classe non sia una classe di implementazione di una funzione `F`, prestare attenzione le regole di risoluzione dell'ambito di C++.  
  
-   Quando si utilizza C++, inclusi un prototipo di funzione in una definizione di classe e la mancata [includono l'implementazione](../../error-messages/tool-errors/missing-function-body-or-variable.md) della funzione per tale classe può provocare l'errore LNK2001.  
  
-   L'errore LNK2001 può dipendere il tentativo di chiamare una funzione virtuale pura dal costruttore o distruttore della classe base astratta. Una funzione virtuale pura non è Nessuna implementazione della classe base.  
  
-   Tentativo di utilizzare una variabile dichiarata all'interno di una funzione ([una variabile locale](../../error-messages/tool-errors/automatic-function-scope-variables.md)) di fuori dell'ambito di tale funzione può provocare l'errore LNK2001.  
  
-   Quando si compila una versione di un progetto ATL, indica che il codice di avvio CRT è necessario. Per correggere l'errore, effettuare una delle operazioni seguenti,  
  
    -   Rimuovere `_ATL_MIN_CRT` dall'elenco delle definizioni del preprocessore definisce per consentire al codice di avvio CRT da includere. Vedere [pagina delle proprietà impostazioni di configurazione generale](../../ide/general-property-page-project.md) per ulteriori informazioni.  
  
    -   Se possibile, rimuovere le chiamate alle funzioni CRT che richiedono il codice di avvio CRT. Utilizzare invece i rispettivi equivalenti di Win32. Ad esempio, utilizzare `lstrcmp` anziché `strcmp`. Nota le funzioni che richiedono il codice di avvio CRT sono alcune delle stringhe e funzioni a virgola mobile.  
  
 **Compilazione e collegamento di problemi**  
  
-   Nel progetto manca un riferimento a una libreria (. LIB) o un oggetto (. File OBJ). Vedere [file LIB come Input del Linker](../../build/reference/dot-lib-files-as-linker-input.md) per ulteriori informazioni.  
  
-   Se si utilizza [/NODEFAULTLIB](../../build/reference/nodefaultlib-ignore-libraries.md) o [/Zl](../../build/reference/zl-omit-default-library-name.md), le librerie che contengono il codice necessario non sarà collegate nel progetto a meno che non si sono incluse in modo esplicito. (Durante la compilazione con **/clr** o **/clr: pure**, si noterà un riferimento a. cctor; vedere [inizializzazione di assembly misti](../../dotnet/initialization-of-mixed-assemblies.md) per ulteriori informazioni.)  
  
-   Se si utilizza Unicode e MFC, si otterrà un esterno non risolto `_WinMain@16` se non si crea un punto di ingresso per `wWinMainCRTStartup`; utilizzare il [/ENTRY](../../build/reference/entry-entry-point-symbol.md). Vedere [riepilogo della programmazione Unicode](../../text/unicode-programming-summary.md).  
  
     Vedere i seguenti articoli della Knowledge Base, disponibile in MSDN Library, per ulteriori informazioni. In MSDN Library, fare clic su di **ricerca** scheda, incollare il numero di articolo o il titolo dell'articolo nella casella di testo e quindi fare clic su **elenco argomenti**. Se esegue la ricerca per il numero di articolo, verificare che il **Cerca solo titoli** opzione è deselezionata.  
  
    -   Q125750 "PRB: errore LNK2001: '_WinMain@16': non risolti simbolo esterno"  
  
    -   Q131204 "PRB: selezione del progetto errato provoca l'errore LNK2001 su _WinMain@16"  
  
    -   Q100639 "supporto di Unicode in Microsoft Foundation Class Library"  
  
    -   Q291952 "PRB: collegamento errore LNK2001: simbolo esterno non risolto Main"  
  
-   Collegamento del codice compilato con /MT alla libreria LIBC. lib provoca l'errore LNK2001 su `_beginthread`, `_beginthreadex`, `_endthread`, e `_endthreadex`.  
  
-   Collegamento del codice che richiede le librerie con multithreading (qualsiasi codice MFC o codice compilato con [/MT](../../build/reference/md-mt-ld-use-run-time-library.md)) provoca l'errore LNK2001 su [beginthread](../../c-runtime-library/reference/beginthread-beginthreadex.md), `_beginthreadex`, [endthread](../../c-runtime-library/reference/endthread-endthreadex.md), e `_endthreadex`. Vedere il seguente articolo della Knowledge Base per ulteriori informazioni:  
  
    -   Q126646 "PRB: il messaggio di errore: errore LNK2001 su __beginthreadex e \_endthreadex"  
  
    -   Q128641 "INFO: opzioni del compilatore /Mx e LIBC, LIBCMT, MSVCRT Libs"  
  
    -   Q166504 "PRB: MFC e CRT devono corrispondere per il debug/rilascio e statica o dinamica"  
  
-   Durante la compilazione con **/MD**, un riferimento a "func" nell'origine diventa un riferimento "`__imp__func`" nell'oggetto poiché tutto il codice runtime è contenuto all'interno di una DLL. Se si tenta di collegarsi alle librerie statiche LIBC. lib o LIBCMT. lib, si otterrà LNK2001 `__imp__func`. Se si tenta di collegarsi con MSVCxx. lib durante la compilazione senza /MD non viene sempre visualizzato LNK2001, ma è possibile disporre di altri problemi.  
  
-   Il collegamento alle librerie di modalità di rilascio durante la creazione di una versione di debug di un'applicazione può provocare l'errore LNK2001. Analogamente, l'utilizzo un **/Mxd** opzione (**/MTd**, o **/MDd**) e/o la definizione di `_DEBUG` e quindi il collegamento alle librerie di rilascio fornirà potenziali esterni non risolti (tra gli altri problemi). Collegamento di una build di rilascio con le librerie di debug anche comporterà altri problemi simili.  
  
-   Combinazione di versioni di librerie di Microsoft e i prodotti del compilatore può rivelarsi problematica. Librerie di una nuova versione del compilatore possono contenere nuovi simboli non presenti nelle librerie con le versioni precedenti. Si desidera modificare l'ordine di directory nel percorso di ricerca o modificarli in modo da puntare alla versione corrente.  
  
     Gli strumenti | Opzioni | Progetti | Finestra di dialogo Directory di VC + +, in file di libreria, consente di modificare l'ordine di ricerca. Cartella Linker nella finestra di dialogo Pagine delle proprietà del progetto può contenere anche i percorsi che possono essere aggiornati.  
  
     Questo problema può verificarsi quando un nuovo SDK viene installato (ad esempio in una posizione diversa) e l'ordine di ricerca non viene aggiornato per puntare al nuovo percorso. In genere, è necessario inserire il percorso per i nuovi SDK include e lib directory davanti a quella predefinita Visual C++. Inoltre, un progetto contenente percorsi incorporati continui a fare riferimento a percorsi precedenti validi, ma aggiornata alla nuova funzionalità aggiunta dalla nuova versione che viene installata in un percorso diverso.  
  
-   Non è attualmente non standard per [denominazione C++](../../error-messages/tool-errors/name-decoration.md) tra i fornitori di compilatori o anche tra versioni diverse di un compilatore. Pertanto, si collegano file oggetto compilati con altri compilatori potrebbe non produrre lo stesso schema di denominazione e generare l'errore LNK2001.  
  
-   [Opzioni di compilazione combinazione inline e non inline](../../error-messages/tool-errors/function-inlining-problems.md) in moduli diversi può causare l'errore LNK2001. Se si crea una libreria di C++ con l'inline delle funzioni attivato (**/Ob1** o **/Ob2**), ma il file di intestazione corrispondente che descrive le funzioni ha l'inline disattivato (non `inline` parola chiave), si verificherà questo errore. Per evitare questo problema, le funzioni inline definite con `inline` nel file di intestazione si desidera includere in altri file.  
  
-   Se si utilizza il `#pragma inline_depth` assicurarsi direttiva del compilatore che si dispone di un [valore di 2 o superiore](../../error-messages/tool-errors/function-inlining-problems.md)e assicurarsi che si utilizza il [/Ob1](../../build/reference/ob-inline-function-expansion.md) o [/Ob2](../../build/reference/ob-inline-function-expansion.md) l'opzione del compilatore.  
  
-   Omettendo l'opzione di collegamento /NOENTRY durante la creazione di una DLL di sole risorse determina l'errore LNK2001.  
  
-   L'errore LNK2001 può dipendere utilizzando impostazioni /SUBSYSTEM o /ENTRY errate. Ad esempio, se si scrive un'applicazione basata su caratteri (un'applicazione console) e si specifica /SUBSYSTEM: Windows, si otterrà un esterno non risolto per `WinMain`. Per ulteriori informazioni su queste opzioni e i punti di ingresso, vedere il [/SUBSYSTEM](../../build/reference/subsystem-specify-subsystem.md) e [/ENTRY](../../build/reference/entry-entry-point-symbol.md) opzioni del linker.  
  
 **Problemi di esportazione**  
  
-   Quando si esegue il porting di un'applicazione da 16 a 32 o 64 bit, può verificarsi l'errore LNK2001. La sintassi del file di definizione moduli (def) corrente richiede che `__cdecl`, `__stdcall`, e `__fastcall` le funzioni siano elencate nella sezione EXPORTS senza caratteri di sottolineatura (non decorati). Questo comportamento è diverso dalla sintassi a 16 bit, in cui devono essere elencati con caratteri di sottolineatura (decorati). Per ulteriori informazioni, vedere la descrizione del [esportazioni](../../build/reference/exports.md) sezione del file di definizione moduli.  
  
-   Qualsiasi esportazione elencati nel file. def e non disponibile genera l'errore LNK2001. È possibile che non esiste, è stato digitato correttamente oppure utilizza i nomi decorati di C++ (file con estensione def non accettano nomi decorati)  
  
 **Interpretazione dell'Output**  
  
 Quando un simbolo non è stato risolto, è possibile ottenere informazioni sulla funzione per le linee guida seguenti:  
  
 Su x86 piattaforme, la decorazione della convenzione di chiamata per i nomi di compilazione in C o per extern "C" nomi in C++ è:  
  
 `__cdecl`  
 La funzione ha un prefisso di un carattere di sottolineatura (_).  
  
 `__stdcall`  
 La funzione ha un prefisso di un carattere di sottolineatura (_) e un suffisso, seguito da dword dimensione allineata dei parametri nello stack.  
  
 `__fastcall`  
 Funzione ha un prefisso @ e un suffisso, seguito da dword dimensione allineata dei parametri nello stack.  
  
 Utilizzare undname.exe per ottenere la forma non decorata del nome decorato.  
  
 Per ulteriori informazioni su alcune delle cause elencate in precedenza, vedere [nome decoration](../../error-messages/tool-errors/name-decoration.md).
