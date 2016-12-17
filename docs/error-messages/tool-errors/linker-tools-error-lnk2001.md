---
title: "Errore degli strumenti del linker LNK2001 | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "LNK2001"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LNK2001"
ms.assetid: dc1cf267-c984-486c-abd2-fd07c799f7ef
caps.latest.revision: 21
caps.handback.revision: 21
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore degli strumenti del linker LNK2001
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

simbolo esterno 'simbolo' non risolto  
  
 Il codice fa riferimento a un elemento, come una funzione, una variabile o un'etichetta, che non viene trovato dal linker nelle librerie e nei file oggetto.  
  
 Questo messaggio di errore è seguito dall'errore irreversibile [LNK1120](../../error-messages/tool-errors/linker-tools-error-lnk1120.md).  
  
 **Possibili cause**  
  
-   Quando si aggiorna una libreria gestita o un progetto di servizi Web da Visual C\+\+ 2003, l'opzione del compilatore **\/Zl** viene aggiunta alla pagina delle proprietà **Riga di comando**.  Ciò determina l'errore LNK2001.  
  
     Per risolvere questo errore, aggiungere msvcrt.lib e msvcmrt.lib alla proprietà Dipendenze aggiuntive del linker.  In alternativa, rimuovere **\/Zl** dalla pagina delle proprietà **Riga di comando**.  Per ulteriori informazioni, vedere [\/Zl \(Omette il nome della libreria predefinita\)](../../build/reference/zl-omit-default-library-name.md) e [Procedura: aprire le pagine delle proprietà dei progetti](../../misc/how-to-open-project-property-pages.md).  
  
-   L'elemento richiesto dal codice è inesistente: è possibile, ad esempio, che il simbolo sia stato digitato in modo errato.  
  
-   L'elemento richiesto dal codice non è corretto: è possibile che si utilizzino versioni diverse delle librerie, corrispondenti a varie versioni del prodotto.  
  
 **Cause specifiche**  
  
 **Problemi di codifica**  
  
-   Se nel messaggio di diagnostica LNK2001 viene indicato che `__check_commonlanguageruntime_version` è un simbolo esterno non risolto, vedere [LNK2019](../../error-messages/tool-errors/linker-tools-error-lnk2019.md) per informazioni su come procedere.  
  
-   La definizione del template del membro è esterna alla classe.  Una limitazione di Visual C\+\+ prevede che i template dei membri vengano definiti completamente all'interno della classe che li contiene.  Per ulteriori informazioni sull'errore LNK2001 e sui template dei membri, vedere l'articolo della Knowledge Base Q239436 \(informazioni in lingua inglese\).  
  
-   Una mancata corrispondenza tra lettere maiuscole e minuscole nel codice o nel file di definizione dei moduli \(def\) può essere la causa dell'errore LNK2001.  Ad esempio, una variabile viene denominata `var1` in un file di origine di C\+\+, ma si tenta di accedervi come `VAR1` in un altro.  
  
-   Un progetto che utilizza l'[inline di funzioni](../../error-messages/tool-errors/function-inlining-problems.md), ma definisce le funzioni in un file cpp anziché in un file di intestazione può provocare l'errore LNK2001.  
  
-   L'errore LNK2001 può dipendere dalla chiamata di una funzione C da un programma C\+\+ senza l'uso di `extern` "C", situazione che provoca l'utilizzo della convenzione di chiamata C.  Le opzioni del compilatore [\/Tp](../../build/reference/tc-tp-tc-tp-specify-source-file-type.md) e [\/Tc](../../build/reference/tc-tp-tc-tp-specify-source-file-type.md) determinano la compilazione dei file in C\+\+ o C, rispettivamente, indipendentemente dall'estensione del nome di file.  Con queste opzioni i nomi di funzione possono risultare diversi dal previsto.  
  
-   Il tentativo di fare riferimento a funzioni o dati senza collegamento esterno può provocare l'errore LNK2001.  In C\+\+ le funzioni inline e i dati `const` hanno il collegamento interno, a meno che non siano specificati in modo esplicito come `extern`.  
  
-   L'errore LNK2001 può essere provocato da una [funzione senza codice o una variabile mancante](../../error-messages/tool-errors/missing-function-body-or-variable.md).  La compilazione può continuare senza errori solo con un prototipo di funzione o con una dichiarazione `extern`, ma una chiamata a un indirizzo o il riferimento a una variabile non può essere risolto dal linker, poiché non esiste il codice della funzione o uno spazio riservato per la variabile.  
  
-   La chiamata a una funzione con tipi di parametro non corrispondenti a quelli nella dichiarazione di funzione può provocare l'errore LNK2001.  La [decorazione dei nomi](../../error-messages/tool-errors/name-decoration.md) incorpora i parametri di una funzione nel nome di funzione finale decorato.  
  
-   L'errore LNK2001 può essere dovuto all'inclusione errata di prototipi, in base alla quale è previsto del codice di funzione che non viene fornito.  Se è presente sia un'implementazione di classe che un'implementazione non di classe di una funzione `F`, prestare attenzione alle regole di risoluzione dell'ambito del linguaggio C\+\+.  
  
-   Quando si utilizza C\+\+, l'inclusione di un prototipo di funzione e la mancata [inclusione dell'implementazione](../../error-messages/tool-errors/missing-function-body-or-variable.md) della funzione per tale classe può provocare l'errore LNK2001.  
  
-   Il tentativo di chiamare una funzione virtuale pura dal costruttore o dal distruttore di una classe base astratta può essere la causa dell'errore LNK2001.  Una funzione virtuale pura non ha alcuna implementazione della classe base.  
  
-   Il tentativo di utilizzare una variabile dichiarata all'interno di una funzione \([una variabile locale](../../error-messages/tool-errors/automatic-function-scope-variables.md)\) al di fuori dell'ambito di tale funzione può provocare l'errore LNK2001.  
  
-   Quando si compila una versione di rilascio di un progetto ATL, questo errore indica che è necessario il codice di avvio CRT.  Per risolvere il problema, eseguire una delle seguenti operazioni:  
  
    -   Rimuovere `_ATL_MIN_CRT` dall'elenco delle definizioni del preprocessore per consentire l'inclusione del codice di avvio CRT.  Per ulteriori informazioni, vedere [Pagina delle proprietà Impostazioni di configurazione\/Generale](../../ide/general-property-page-project.md).  
  
    -   Se possibile, rimuovere le chiamate alle funzioni CRT che richiedono il codice di avvio CRT.  Utilizzare invece gli equivalenti Win32.  Ad esempio, utilizzare `lstrcmp` anziché `strcmp`.  Richiedono il codice di avvio CRT alcune delle funzioni stringa e a virgola mobile.  
  
 **Problemi di compilazione e collegamento**  
  
-   Nel progetto manca un riferimento a un file di libreria \(lib\) o di oggetto \(obj\).  Per ulteriori informazioni, vedere [File LIB come input del linker](../../build/reference/dot-lib-files-as-linker-input.md).  
  
-   Se viene utilizzata l'opzione [\/NODEFAULTLIB](../../build/reference/nodefaultlib-ignore-libraries.md) o [\/Zl](../../build/reference/zl-omit-default-library-name.md), le librerie che contengono il codice necessario non verranno collegate al progetto, a meno che non siano state incluse in modo esplicito. Quando si esegue la compilazione con **\/clr** o **\/clr:pure**, viene visualizzato un riferimento a .cctor. Per ulteriori informazioni, vedere [Inizializzazione di assembly misti](../../dotnet/initialization-of-mixed-assemblies.md).  
  
-   Quando si utilizzano Unicode e MFC, si ottiene un esterno non risolto in `_WinMain@16` se non viene creato un punto di ingresso per `wWinMainCRTStartup`. Utilizzare l'opzione [\/ENTRY](../../build/reference/entry-entry-point-symbol.md).  Vedere [Riepilogo della programmazione Unicode](../../text/unicode-programming-summary.md)  
  
     Per ulteriori informazioni, vedere i seguenti articoli della Knowledge Base in MSDN Library \(informazioni in lingua inglese\).  In MSDN Library, fare clic sulla scheda **Search**, incollare il numero o il titolo dell'articolo nella casella di testo, quindi fare clic su **List Topics**.  Se si effettua la ricerca in base al numero dell'articolo, verificare che l'opzione **Search titles only** sia deselezionata.  
  
    -   Q125750   "PRB: Error LNK2001: '\_WinMain@16': Unresolved External Symbol"  
  
    -   Q131204   "PRB: Wrong Project Selection Causes LNK2001 on \_WinMain@16"  
  
    -   Q100639   "Unicode Support in the Microsoft Foundation Class Library"  
  
    -   Q291952    "PRB: Link Error LNK2001: Unresolved External Symbol \_main"  
  
-   Il collegamento di codice compilato con \/MT alla libreria LIBC.lib genera l'errore LNK2001 su `_beginthread`, `_beginthreadex`, `_endthread` e `_endthreadex`.  
  
-   Il collegamento di codice che richiede le librerie con multithreading, ossia qualsiasi codice MFC o compilato con [\/MT](../../build/reference/md-mt-ld-use-run-time-library.md), provoca l'errore LNK2001 su [\_beginthread](../../c-runtime-library/reference/beginthread-beginthreadex.md), `_beginthreadex`, [\_endthread](../../c-runtime-library/reference/endthread-endthreadex.md) e `_endthreadex`.  Per ulteriori informazioni, vedere i seguenti articoli della Knowledge Base \(informazioni in lingua inglese\):  
  
    -   Q126646 "PRB: Error Msg: LNK2001 on \_\_beginthreadex and \_\_endthreadex"  
  
    -   Q128641 "INFO: \/Mx Compiler Options and the LIBC, LIBCMT, MSVCRT Libs"  
  
    -   Q166504 "PRB: MFC and CRT Must Match in debug\/release and static\/dynamic"  
  
-   Quando si esegue la compilazione con **\/MD**, un riferimento a "func" nell'origine diventa un riferimento "`__imp__func`" nell'oggetto, dal momento che tutto il codice runtime è contenuto in una DLL.  Se si tenta di collegarsi alle librerie statiche LIBC.lib o LIBCMT.lib, viene generato l'errore LNK2001 in `__imp__func`.  Se si tenta di effettuare il collegamento con MSVCxx.lib durante la compilazione senza \/MD, non viene sempre restituito l'errore LNK2001, ma è probabile che si verifichino altri problemi.  
  
-   Il collegamento alle librerie della modalità rilascio durante la compilazione di una versione di debug di un'applicazione può causare l'errore LNK2001.  Analogamente, se si utilizza un'opzione **\/Mxd** \(**\/MTd** o **\/MDd**\) e\/o si definisce `_DEBUG` e quindi si effettua il collegamento alle librerie di rilascio, tra i vari problemi che possono verificarsi vi è la generazione di potenziali esterni non risolti.   Anche il collegamento di una build di rilascio alle librerie di debug provoca problemi simili.  
  
-   L'utilizzo di diverse versioni di librerie e compilatori Microsoft può risultare problematica.  Le librerie di una nuova versione del compilatore possono contenere nuovi simboli non presenti nelle librerie delle versioni precedenti.  Può essere utile modificare l'ordine delle directory nel percorso di ricerca o modificare le directory in modo che facciano riferimento alla versione corrente.  
  
     La finestra di dialogo Directory di VC\+\+ in Strumenti &#124; Opzioni &#124; Progetti, disponibile in File di libreria, consente di modificare l'ordine di ricerca.  La cartella Linker nella finestra di dialogo Pagine delle proprietà del progetto può contenere percorsi non aggiornati.  
  
     Questo problema può verificarsi quando si installa un nuovo SDK, di solito in un percorso diverso, e non si aggiorna l'ordine di ricerca per fare riferimento al nuovo percorso.  In genere, il percorso delle directory di inclusione e lib dei nuovi SDK deve essere immesso prima di quello predefinito di Visual C\+\+.  Inoltre, è possibile che un progetto contenente percorsi incorporati continui a fare riferimento a percorsi precedenti validi, ma non aggiornati con le funzionalità della nuova versione installata in un altro percorso.  
  
-   Attualmente, non esiste alcuno standard per la [denominazione C\+\+](../../error-messages/tool-errors/name-decoration.md) tra i fornitori di compilatori, né tra versioni diverse dello stesso compilatore.  Pertanto, il collegamento di file oggetto creati con altri compilatori può non produrre lo stesso schema di denominazione e generare l'errore LNK2001.  
  
-   La [mescolanza di opzioni del compilatore inline e non inline](../../error-messages/tool-errors/function-inlining-problems.md) su moduli diversi può provocare l'errore LNK2001.  Questo errore viene generato se si crea una libreria C\+\+ in cui la funzionalità inline delle funzioni è attivata \(**\/Ob1** o **\/Ob2**\), mentre tale funzionalità è disattivata nel file di intestazione corrispondente che descrive le funzioni \(nessuna parola chiave `inline`\).  Per evitare questo problema, definire le funzioni inline con `inline` nel file di intestazione da includere in altri file.  
  
-   Se si utilizza la direttiva del compilatore `#pragma inline_depth`, assicurarsi che venga impostato [un valore di 2 o superiore](../../error-messages/tool-errors/function-inlining-problems.md) e che venga utilizzata l'opzione del compilatore [\/Ob1](../../build/reference/ob-inline-function-expansion.md) o [\/Ob2](../../build/reference/ob-inline-function-expansion.md).  
  
-   L'omissione dell'opzione \/NOENTRY di LINK durante la creazione di una DLL di sole risorse provoca l'errore LNK2001.  
  
-   L'uso di impostazioni \/SUBSYSTEM o \/ENTRY errate può provocare l'errore LNK2001.  Ad esempio, se si scrive un'applicazione basata su caratteri, cioè un'applicazione di console, e si specifica \/SUBSYSTEM:WINDOWS, si ottiene un esterno non risolto per `WinMain`.  Per ulteriori informazioni su queste opzioni e sui punti di ingresso, vedere le opzioni del linker [\/SUBSYSTEM](../../build/reference/subsystem-specify-subsystem.md) ed [\/ENTRY](../../build/reference/entry-entry-point-symbol.md).  
  
 **Problemi di esportazione**  
  
-   Quando si effettua il porting di un'applicazione da 16 a 32 bit o 64 bit, è possibile che si verifichi l'errore LNK2001.  La sintassi del file di definizione moduli \(con estensione def\) corrente richiede che le funzioni `__cdecl`, `__stdcall` e `__fastcall` siano elencate nella sezione EXPORTS senza segni di sottolineatura, ovvero non decorate.  Nella sintassi a 16 bit, invece, è necessario che siano elencate con i segni di sottolineatura, ossia decorate.  Per ulteriori informazioni, vedere la descrizione della sezione [EXPORTS](../../build/reference/exports.md) dei file di definizione dei moduli.  
  
-   Qualsiasi esportazione elencata nel file def e non trovata genera l'errore LNK2001.  Questo può dipendere dal fatto che l'esportazione non esiste, è digitata in modo errato o utilizza nomi decorati di C\+\+ \(i file def non accettano i nomi decorati\).  
  
 **Interpretazione dell'output**  
  
 Quando un simbolo non è risolto, è possibile ottenere informazioni sulla funzione attenendosi alle istruzioni riportate di seguito.  
  
 Sulle piattaforme x86, la decorazione della convenzione di chiamata per i nomi compilati in C o per i nomi extern "C" in C\+\+ è la seguente:  
  
 `__cdecl`  
 La funzione ha un segno di sottolineatura \(\_\) come prefisso.  
  
 `__stdcall`  
 La funzione ha un segno di sottolineatura \(\_\) come prefisso e il segno @ come suffisso seguito dalla dimensione allineata al valore dword dei parametri sullo stack.  
  
 `__fastcall`  
 La funzione ha un segno @ come prefisso e come suffisso, seguito dalla dimensione allineata al valore dword dei parametri sullo stack.  
  
 Utilizzare undname.exe per ottenere il formato non decorato di un nome decorato.  
  
 Per ulteriori informazioni su alcune delle cause elencate in precedenza, vedere [Decorazione dei nomi](../../error-messages/tool-errors/name-decoration.md).