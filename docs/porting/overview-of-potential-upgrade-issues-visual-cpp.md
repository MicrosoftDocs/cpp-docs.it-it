---
title: Panoramica dei potenziali problemi di aggiornamento (Visual C++)
ms.date: 05/03/2019
ms.assetid: 2c99a8cb-098f-4a9d-bf2c-b80fd06ace43
ms.openlocfilehash: e42762d4b47931f21536146cd0146b2749c52cf9
ms.sourcegitcommit: 6b3d793f0ef3bbb7eefaf9f372ba570fdfe61199
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/15/2020
ms.locfileid: "86404821"
---
# <a name="overview-of-potential-upgrade-issues-visual-c"></a>Panoramica dei potenziali problemi di aggiornamento (Visual C++)

Nel corso degli anni il compilatore Microsoft C++ ha subito molte modifiche, che si aggiungono a quelle apportate al linguaggio C++, alla libreria standard C++, al runtime C (CRT) e ad altre librerie, ad esempio MFC e ATL. Di conseguenza, quando si aggiorna un'applicazione da una versione precedente di Visual Studio è possibile che il codice che prima veniva compilato correttamente mostri errori e avvisi del compilatore e del linker. Più la base di codice è vecchia, maggiore è la possibilità di tali errori. Questa panoramica riepiloga i tipi di problemi più comuni che possono verificarsi e offre collegamenti a informazioni più dettagliate.

> [!NOTE]
> In passato si consigliava di eseguire in modo incrementale, una versione alla volta, gli aggiornamenti che includevano più versioni di Visual Studio. Questo approccio non è più consigliato. Si è constatato che è quasi sempre più semplice eseguire l'aggiornamento alla versione più recente di Visual Studio, indipendentemente dalla versione della base di codice.

È possibile inviare domande o commenti sul processo di aggiornamento all'indirizzo vcupgrade@microsoft.com.

## <a name="library-and-toolset-dependencies"></a>Dipendenze di librerie e set di strumenti

> [!NOTE]
> Questa sezione si applica ad applicazioni e librerie compilate con Visual Studio 2013 e versioni precedenti. I set di strumenti usati in Visual Studio 2015, Visual Studio 2017 e Visual Studio 2019 sono compatibili a livello binario. Per altre informazioni, vedere [Compatibilità binaria C++ tra Visual Studio 2015 e Visual Studio 2019](binary-compat-2015-2017.md).

Quando si aggiorna un'applicazione a una nuova versione di Visual Studio, è consigliabile e in molti casi necessario aggiornare anche tutte le librerie e le DLL alle quali è collegata l'applicazione. È necessario l'accesso al codice sorgente oppure è necessario richiedere al fornitore della libreria la possibilità di avere nuovi file binari compilati con la stessa versione principale del compilatore. Se una di queste condizioni è vera è possibile ignorare questa sezione, che illustra i dettagli della compatibilità binaria. Se nessuna delle due condizioni è vera, potrebbe non essere possibile usare le librerie nell'applicazione aggiornata. Le informazioni contenute in questa sezione contribuiscono a determinare se sarà possibile procedere con l'aggiornamento.

### <a name="toolset"></a>Set di strumenti

I formati di file obj e lib sono definiti in modo completo e vengono modificati di rado. Talvolta vengono eseguite aggiunte a questi formati di file, ma tali aggiunte in genere non influenzano la capacità dei set di strumenti più recenti di usare file oggetto e librerie prodotte da set di strumenti meno recenti. L'eccezione importante è la compilazione con [/GL (Ottimizzazione intero programma)](../build/reference/gl-whole-program-optimization.md). Se si esegue la compilazione usando `/GL`, il file oggetto risultante può essere collegato solo mediante lo stesso set di strumenti usato per la sua creazione. Pertanto, se si genera un file oggetto con `/GL` e si usa il compilatore di Visual Studio 2017 (v141), è necessario collegare il file oggetto mediante il linker di Visual Studio 2017 (v141). Il motivo è il fatto che le strutture dati interne dei file oggetto non sono stabili tra diverse versioni principali del set di strumenti e i set più recenti non supportano i formati di dati meno recenti.

C++ non dispone di un'interfaccia binaria dell'applicazione stabile (ABI, Aplication Binary Interface). Visual Studio gestisce tuttavia un'ABI C++ stabile per tutte le versioni secondarie di una versione. Visual Studio 2015 (v140), Visual Studio 2017 (v141) e Visual Studio 2019 (v142) variano solo nella versione secondaria. Hanno tutti lo stesso numero di versione principale, vale a dire 14. Per altre informazioni, vedere [Compatibilità binaria C++ tra Visual Studio 2015 e Visual Studio 2019](binary-compat-2015-2017.md).

Se è presente un file oggetto che include simboli esterni con collegamento a C++, tale file oggetto potrebbe non collegarsi correttamente con file oggetto creati con un'altra versione principale del set di strumenti. Esistono molti risultati possibili. Il collegamento potrebbe non riuscire completamente, ad esempio se la decorazione dei nomi è stata modificata. Il collegamento potrebbe riuscire, ma le operazioni potrebbero non funzionare in fase di esecuzione, ad esempio se il layout del tipo è stato modificato. Oppure in molti casi può succedere che tutto funzioni senza errori. Si noti anche che sebbene l'ABI C++ non sia stabile, l'ABI C e il subset dell'ABI C++ necessaria per COM sono stabili.

Se si effettua il collegamento a una libreria di importazione, in fase di esecuzione si potranno usare tutte le versioni successive delle librerie ridistribuibili di Visual Studio che mantengono la compatibilità ABI. Ad esempio, se l'app viene compilata e collegata usando il set di strumenti di Visual Studio 2015 Update 3, è possibile usare qualsiasi componente ridistribuibile di Visual Studio 2017 o Visual Studio 2019 poiché le librerie 2015, 2017 e 2019 conservano la compatibilità binaria con le versioni precedenti. Il contrario non è vero: non è possibile usare un ridistribuibile per una versione precedente del set di strumenti rispetto a quello usato per compilare il codice, anche se è presente un ABI compatibile.

### <a name="libraries"></a>Librerie

Se si compila un file di origine usando una versione particolare dei file di intestazione delle librerie di Visual Studio C++ (usando #include per le intestazioni), il file oggetto risultante deve essere collegato con la stessa versione delle librerie. Se, ad esempio, il file di origine viene compilato con Visual Studio 2015 Update 3 \<immintrin.h> , è necessario collegarsi alla libreria Visual studio 2015 Update 3 vcruntime. Analogamente, se il file di origine viene compilato con Visual Studio 2017 versione 15,5 \<iostream> , è necessario collegarsi alla libreria C++ standard di Visual studio 2017 versione 15,5, MSVCPRT. L'uso di elementi di versioni diverse non è supportato.

Per la libreria standard C++ l'uso di elementi di versioni diverse è stato esplicitamente disattivato con l'introduzione di `#pragma detect_mismatch` nelle intestazioni standard a partire da Visual Studio 2010. Se si prova a collegare file oggetto incompatibili o di creare un collegamento con una libreria standard non adatta, il collegamento non funziona.

Per la libreria CRT, l'uso di elementi di versioni diverse non è mai stato supportato ma funzionava in molti casi, almeno fino a Visual Studio 2015 e alla libreria Universal CRT, in quanto la superficie API ha subito variazioni minime nel corso del tempo. Con la libreria Universal CRT è stata interrotta la compatibilità con le versioni precedenti, che ora è soggetta a gestione. In altre parole non è prevista l'introduzione di nuove versioni di file binari Universal CRT in futuro. Al contrario, ora viene aggiornata la libreria Universal CRT esistente.

Per garantire la compatibilità di collegamento parziale con file oggetto (e librerie) compilati con versioni precedenti delle intestazioni del runtime Microsoft C, è disponibile la libreria legacy_stdio_definitions.lib con Visual Studio 2015 e versioni successive. Questa libreria include simboli di compatibilità per la maggior parte delle funzioni e delle esportazioni dati che sono state rimosse da Universal CRT. Il set di simboli di compatibilità offerto da legacy_stdio_definitions.lib è sufficiente a soddisfare la maggior parte delle dipendenze, incluse tutte le dipendenze delle librerie incluse in Windows SDK. Tuttavia, per alcuni simboli rimossi da Universal CRT non è possibile offrire simboli di compatibilità. Questi simboli includono alcune funzioni (ad esempio \_\_iob\_func) e le esportazioni di dati (ad esempio \_\_imp\_\_\_iob, \_\_imp\_\_\_pctype, \_\_imp\_\_\_mb\_cur\_max).

Se è presente una libreria statica creata con una versione precedente delle intestazioni del runtime C, è consigliabile adottare le seguenti misure (nell'ordine indicato):

1. Ricompilare la libreria statica con la versione recente di Visual Studio 2017 e le intestazioni Universal CRT per garantire il supporto del collegamento con la libreria Universal CRT. Questo approccio è completamente supportato e pertanto è il migliore.

1. Se non è possibile o non si vuole ricompilare la libreria statica, è possibile provare il collegamento con legacy\_stdio\_definitions.lib. Se questa soluzione soddisfa le dipendenze in fase di collegamento della libreria statica, è consigliabile testare in modo approfondito la libreria statica quando viene usata nel codice binario, per assicurarsi che non dia origine a problemi causati da una delle [modifiche funzionali apportate alla libreria Universal CRT](visual-cpp-change-history-2003-2015.md#BK_CRT).

1. Se le dipendenze della libreria statica non sono soddisfatte da legacy \_ stdio \_ Definitions. lib o se la libreria non funziona con la libreria Universal CRT a causa delle modifiche del comportamento indicate sopra, è consigliabile incapsulare la libreria statica in una DLL collegata con la versione corretta del runtime di Microsoft C. Ad esempio, se la libreria statica è stata creata con Visual Studio 2013 sarà necessario creare la DLL usando Visual Studio 2013 e le librerie di Visual Studio 2013 C++. Incorporando la libreria in una DLL si isola il dettaglio di implementazione rappresentato dalla dipendenza della libreria da una versione specifica del runtime Microsoft C. Sarà necessario assicurarsi che l'interfaccia della DLL non trasmetta esternamente dettagli del runtime C usato, ad esempio restituendo un'istruzione FILE* fuori dall'ambito della DLL o restituendo un puntatore allocato da malloc e prevedendone lo sblocco da parte del chiamante.

L'uso di più CRT in un unico processo non è di per sé un problema; di fatto la maggior parte dei processi carica DLL con più CRT. Ad esempio i componenti del sistema operativo Windows dipendono da msvcrt.dll e mentre CLR dipende dal proprio CRT privato. I problemi si verificano quando si usa in modo non ordinato lo stato di più CRT. Ad esempio è sconsigliabile allocare memoria usando msvcr110.dll!malloc e provare a deallocare la memoria usando msvcr120.dll!free. Allo stesso modo è sconsigliabile provare ad aprire un FILE usando msvcr110!fopen e quindi provare a leggere il FILE usando msvcr120!fread. Se lo stato non viene confuso da CRT diversi, è possibile caricare più CRT in un unico processo.

Per altre informazioni, vedere [Upgrade your code to the Universal CRT](upgrade-your-code-to-the-universal-crt.md) (Aggiornare il codice a Universal CRT).

## <a name="errors-due-to-project-settings"></a>Errori causati da impostazioni di progetto

Per iniziare il processo di aggiornamento, aprire un progetto/soluzione/area di lavoro precedente nella versione più recente di Visual Studio. In Visual Studio verrà creato un nuovo progetto basato sulle impostazioni di progetto precedenti. Se nel progetto precedente sono presenti percorsi di libreria o di inclusione hardcoded in posizioni non standard, è possibile che i file in tali percorsi non siano visibili al compilatore quando il progetto utilizza le impostazioni predefinite. Per altre informazioni, vedere [Configurazione della proprietà OutputFile del linker](porting-guide-spy-increment.md#linker_output_settings).

In generale, questo è il momento ideale per organizzare il codice del progetto in modo da semplificare la gestione, favorendo la compilazione del codice aggiornato in tempi rapidi. Se il codice sorgente è già ben organizzato e il vecchio progetto viene compilato con Visual Studio 2010 o versioni successive, è possibile modificare manualmente il nuovo file di progetto in modo da supportare la compilazione sia con il nuovo che con il vecchio compilatore. Nell'esempio seguente viene illustrato come compilare sia per Visual Studio 2015 che per Visual Studio 2017:

```xml
<PlatformToolset Condition="'$(VisualStudioVersion)'=='14.0'">v140</PlatformToolset>
<PlatformToolset Condition="'$(VisualStudioVersion)'=='15.0'">v141</PlatformToolset>
```

### <a name="lnk2019-unresolved-external"></a>LNK2019: simbolo esterno non risolto

Se vengono rilevati simboli non risolti, potrebbe essere necessario correggere le impostazioni del progetto.

- Se il file di origine si trova in un percorso non predefinito, è stato aggiunto il percorso alle directory di inclusione del progetto?

- Se il simbolo esterno è definito in un file con estensione lib, è stato specificato il percorso lib nelle proprietà del progetto e nel percorso è presente la versione corretta del file con estensione lib?

- Si sta provando a creare ul collegamento a un file con estensione lib compilato con una versione diversa di Visual Studio? In questo caso, vedere la sezione precedente relativa alle dipendenze di librerie e set di strumenti.

- I tipi degli argomenti nel sito di chiamata corrispondono di fatto a un overload esistente della funzione? Verificare i tipi sottostanti per qualsiasi typedef nella firma della funzione e nel codice che chiama la funzione sono gli elementi previsti.

Per risolvere gli errori di simbolo non risolto, provare a usare dumpbin.exe per esaminare i simboli definiti in un file binario. Provare la riga di comando seguente per visualizzare i simboli definiti in una libreria:

```cmd
dumpbin.exe /LINKERMEMBER somelibrary.lib
```

### <a name="zcwchar_t-wchar_t-is-native-type"></a>/Zc:wchar_t (Tipo nativo wchar_t)

(In Microsoft Visual C++ 6,0 e versioni precedenti **wchar_t** non è stato implementato come tipo predefinito, ma è stato dichiarato in WCHAR. h come typedef per unsigned short). Lo standard C++ richiede che **wchar_t** sia un tipo incorporato. L'uso della versione typedef può causare problemi di portabilità. Se si esegue l'aggiornamento da versioni precedenti di Visual Studio e si verifica l'errore del compilatore C2664 perché il codice sta cercando di convertire in modo implicito **wchar_t** in **unsigned short**, è consigliabile modificare il codice per risolvere l'errore anziché impostare `/Zc:wchar_t-`. Per altre informazioni, vedere [/Zc:wchar_t (Tipo nativo wchar_t)](../build/reference/zc-wchar-t-wchar-t-is-native-type.md).

### <a name="upgrading-with-the-linker-options-nodefaultlib-entry-and-noentry"></a>Aggiornare con le opzioni del linker /NODEFAULTLIB, /ENTRY e /NOENTRY

L'opzione del linker `/NODEFAULTLIB`, o la proprietà del linker Ignora tutte le librerie predefinite, indica al linker di non collegare automaticamente le librerie predefinite, ad esempio la libreria CRT. Significa che ogni libreria deve essere elencata come input singolarmente. Questo elenco di librerie è disponibile nella proprietà **Dipendenze aggiuntive**, nella sezione **Linker** della finestra di dialogo **Proprietà progetto**.

I progetti che usano questa opzione evidenziano un problema durante l'aggiornamento, perché i nomi di alcune librerie predefinite sono cambiati. Dato che ogni singola libreria va elencata nella proprietà **Dipendenze aggiuntive** o nella riga di comando del linker, è necessario aggiornare l'elenco di librerie in modo che usi tutti i nomi correnti.

La tabella seguente elenca le librerie delle quali è stato cambiato il contenuto a partire da Visual Studio 2015. Per eseguire l'aggiornamento è necessario aggiungere i nomi libreria nuovi nella seconda colonna alle librerie nella prima colonna. Alcune di queste librerie sono librerie di importazione, ma ciò non dovrebbe essere rilevante.

|||
|-|-|
|Se si usava:|È necessario usare queste librerie:|
|LIBCMT.lib|libcmt.lib, libucrt.lib, libvcruntime.lib|
|libcmtd.lib|libcmtd.lib, libucrtd.lib, libvcruntimed.lib|
|msvcrt.lib|msvcrt.lib, ucrt.lib, vcruntime.lib|
|msvcrtd.lib|msvcrtd.lib, ucrtd.lib, vcruntimed.lib|

Lo stesso vale se si usa l'opzione `/ENTRY` o l'opzione `/NOENTRY`, che hanno anche l'effetto di ignorare le librerie predefinite.

## <a name="errors-due-to-improved-language-conformance"></a>Errori causati dal miglioramento della conformità al linguaggio

Nel corso degli anni è stata migliorata in modo continuativo la conformità del compilatore Microsoft C++ allo standard C++. Il codice compilato in versioni precedenti potrebbe non essere compilato in versioni recenti di Visual Studio, perché ora il compilatore segnala correttamente un errore che in precedenza ignorava o autorizzava in modo esplicito.

Ad esempio, l'opzione `/Zc:forScope` è stata introdotta nella cronologia di MSVC. L'opzione consente un comportamento non conforme per le variabili di ciclo. Questa opzione ora è deprecata e potrebbe essere rimossa nelle versioni future. L'uso dell'opzione quando si aggiorna il codice è sconsigliato. Per altre informazioni, vedere [/Zc:forScope- è deprecata](porting-guide-spy-increment.md#deprecated_forscope).

Un esempio di errore comune durante l'aggiornamento si verifica quando un argomento non const viene passato a un parametro const. Le versioni meno recenti del compilatore non segnalavano sempre questa operazione come errore. Per altre informazioni, vedere [Conversioni più rigorose del compilatore](porting-guide-spy-increment.md#stricter_conversions).

Per altre informazioni sui miglioramenti specifici della conformità, vedere [Cronologia delle modifiche di Visual C++ dal 2003 al 2015](visual-cpp-change-history-2003-2015.md) e [Miglioramenti della conformità di C++ in Visual Studio](../overview/cpp-conformance-improvements.md).

## <a name="errors-involving-stdinth-integral-types"></a>Errori che coinvolgono \<stdint.h> tipi integrali

L' \<stdint.h> intestazione definisce typedef e macro che, a differenza dei tipi integrali incorporati, hanno la lunghezza specificata in tutte le piattaforme. Alcuni esempi sono `uint32_t` e `int64_t`. L' \<stdint.h> intestazione è stata aggiunta in Visual Studio 2010. Il codice scritto prima del 2010 potrebbe avere fornito definizioni private per tali tipi e tali definizioni potrebbero non essere sempre coerenti con le \<stdint.h> definizioni.

Se l'errore è C2371 e riguarda un tipo `stdint`, è probabile che il tipo sia definito in un'intestazione nel proprio codice o in un file lib di terze parti. Quando si esegue l'aggiornamento, è consigliabile eliminare le definizioni personalizzate dei \<stdint.h> tipi, ma prima di tutto confrontare le definizioni personalizzate con le definizioni standard correnti per assicurarsi di non introdurre nuovi problemi.

È possibile premere **F12** (**Vai a definizione**) per vedere dove è definito il tipo in questione.

L'opzione del compilatore [/showIncludes](../build/reference/showincludes-list-include-files.md) può essere utile in questo contesto. Nella finestra di dialogo **Pagine delle proprietà** per il progetto aprire la pagina **C/C++** > **Avanzate** e impostare **Mostra inclusioni** su **Sì**. Ricompilare il progetto e visualizzare l'elenco di `#include` nella finestra di output. Ogni intestazione è provvista di un rientro sotto l'intestazione che la include.

## <a name="errors-involving-crt-functions"></a>Errori relativi alle funzioni CRT

Nel corso degli anni sono state apportate numerose modifiche al runtime C. Sono state aggiunte molte versioni sicure delle funzioni e alcune sono state rimosse. Inoltre, come descritto in precedenza in questo articolo, l'implementazione Microsoft di CRT è stata sottoposta a refactoring in Visual Studio 2015 in nuovi file binari e file con estensione LIB associati.

Se un errore riguarda una funzione CRT, cercare altre informazioni in [Cronologia delle modifiche di Visual C++ dal 2003 al 2015](visual-cpp-change-history-2003-2015.md) o in [Miglioramenti della conformità di C++ in Visual Studio](../overview/cpp-conformance-improvements.md). Se l'errore è LNK2019, simbolo esterno non risolto, assicurarsi che la funzione non sia stata rimossa. In alternativa, se si è certi che la funzione esiste ancora e che il codice chiamante è corretto, verificare se il progetto usa `/NODEFAULTLIB`. In tal caso è necessario aggiornare l'elenco delle librerie, in modo che il progetto usi le nuove librerie universali. Per altre informazioni, vedere la sezione precedente relativa alla libreria e alle dipendenze.

Se l'errore riguarda `printf` o `scanf`, assicurarsi che nessuna delle due funzioni sia definita privatamente senza l'inclusione di stdio.h. Se così fosse, rimuovere le definizioni private o definire il collegamento con legacy\_stdio\_definitions.lib. È possibile impostare questa libreria nella finestra di dialogo **Pagine delle proprietà** in **Proprietà di configurazione** > **Linker** > **Input** nella proprietà **Dipendenze aggiuntive**. Se si esegue il collegamento con Windows SDK 8.1 o versione precedente, aggiungere legacy\_stdio\_definitions.lib.

Se l'errore riguarda argomenti della stringa di formato, è probabile che il compilatore applichi lo standard in modo più restrittivo. Per altre informazioni, vedere la cronologia delle modifiche. Prestare particolare attenzione a eventuali errori in questa fase, in quanto possono rappresentare rischi per la sicurezza.

## <a name="errors-due-to-changes-in-the-c-standard"></a>Errori dovuti a modifiche dello standard C++

Anche lo standard C++ è stato sottoposto ad aggiornamenti non sempre compatibili con le versioni precedenti. L'introduzione della semantica di spostamento, di nuove parole chiave e di altre funzionalità del linguaggio e della libreria standard in C++ 11 può causare errori del compilatore e anche un comportamento diverso in fase di runtime.

Ad esempio, un vecchio programma C++ può includere l'intestazione iostream.h. Questa intestazione è stata deprecata nelle prime versioni di C++ e alla fine è stata completamente rimossa da Visual Studio. In questo caso, sarà necessario usare \<iostream> e riscrivere il codice. Per altre informazioni, vedere [Aggiornamento del vecchio codice iostream](porting-guide-spy-increment.md#updating_iostreams_code).

### <a name="c4838-narrowing-conversion-warning"></a>C4838: avviso di conversione verso un tipo di dati più piccolo

Ora lo standard C++ specifica che le conversioni da valori integrali senza segno a valori integrali con segno sono considerate come conversioni verso un tipo di dati più piccolo. Il compilatore non generava questo avviso prima di Visual Studio 2015. Controllare ogni ricorrenza per assicurarsi che la conversione verso un tipo di dati più piccolo non generi errori nel codice.

## <a name="warnings-to-use-secure-crt-functions"></a>Avvisi per l'uso di funzioni CRT protette

Nel corso degli anni sono state introdotte versioni sicure delle funzioni runtime C. Le versioni precedenti e non sicure sono ancora disponibili, ma è consigliabile modificare il codice per usare le versioni sicure. Il compilatore genererà un avviso se si usano versioni non sicure. È possibile scegliere di disabilitare o ignorare questi avvisi. Per disabilitare l'avviso per tutti i progetti nella soluzione, aprire **Visualizza**  >  **Gestione proprietà**, selezionare tutti i progetti per i quali si desidera disabilitare l'avviso, quindi fare clic con il pulsante destro del mouse sugli elementi selezionati e scegliere **Proprietà**. Nella finestra di dialogo **Pagine delle proprietà** in **Proprietà di configurazione** > **C/C++** > **Avanzate**, selezionare **Disabilita avvisi specifici**. Fare clic sulla freccia a discesa e quindi su **modifica**. Immettere 4996 nella casella di testo. Non includere il prefisso "C". Per altre informazioni, vedere [porting to use the Secure CRT](porting-guide-spy-increment.md#porting_to_secure_crt).

## <a name="errors-due-to-changes-in-windows-apis-or-obsolete-sdks"></a>Errori dovuti a modifiche alle API di Windows o a SDK obsoleti

Nel corso degli anni sono stati aggiunti (e talvolta modificati o rimossi) tipi di dati e API di Windows. Sono stati anche aggiunti e rimossi altri SDK non appartenenti al sistema operativo principale. È perciò possibile che i programmi meno recenti contengano chiamate ad API che non esistono più. Possono anche contenere chiamate ad API di altri SDK Microsoft che non sono più supportati. Se viene visualizzato un errore relativo a un'API di Windows o a un'API di un SDK Microsoft meno recente, è possibile che un'API sia stata rimossa e/o sostituita da una funzione più recente e sicura.

Per altre informazioni sul set di API corrente e sui sistemi operativi minimi supportati per un'API Windows specifica, vedere l'argomento [relativo all'indice API per le applicazioni Windows Desktop](/windows/win32/apiindex/api-index-portal) e passare all'API in questione.

### <a name="windows-version"></a>Versione di Windows

Quando si aggiorna un programma che usa direttamente o indirettamente l'API di Windows, è necessario scegliere la versione minima di Windows da supportare. Nella maggior parte dei casi Windows 7 è una scelta ottimale. Per altre informazioni, vedere [Problemi del file di intestazione](porting-guide-spy-increment.md#header_file_problems). La macro `WINVER` definisce la versione meno recente di Windows nella quale è possibile eseguire il programma. Se il programma MFC imposta WINVER su 0x0501 (Windows XP) verrà visualizzato un avviso, perché MFC non supporta più XP anche se il compilatore dispone di una modalità XP.

Per altre informazioni, vedere [Aggiornamento della versione di Windows di destinazione](porting-guide-spy-increment.md#updating_winver) e [Altri file di intestazione obsoleti](porting-guide-spy-increment.md#outdated_header_files).

## <a name="atl--mfc"></a>ATL/MFC

ATL e MFC sono API relativamente stabili, ma anch'esse vengono modificate occasionalmente. Per altre informazioni, vedere [Cronologia delle modifiche di Visual C++ dal 2003 al 2015](visual-cpp-change-history-2003-2015.md), [Novità di Visual C++ in Visual Studio](../overview/what-s-new-for-visual-cpp-in-visual-studio.md) e [Miglioramenti della conformità di Visual C++ in Visual Studio](../overview/cpp-conformance-improvements.md).

### <a name="lnk-2005-_dllmain12-already-defined-in-msvcrtdlib"></a>LNK 2005 _DllMain@12 già definito in MSVCRTD.lib

Questo errore può verificarsi nelle applicazioni MFC. Indica un problema di ordinamento tra la libreria CRT e la libreria MFC. La libreria MFC deve essere collegata per prima, in modo che renda disponibili gli operatori new e delete. Per correggere l'errore, usare l'opzione `/NODEFAULTLIB` per ignorare le librerie predefinite MSVCRTD.lib e mfcs140d.lib. Quindi aggiungere queste librerie come dipendenze aggiuntive.

## <a name="32-vs-64-bit"></a>32 bit e 64 bit

Se il codice originale viene compilato per sistemi a 32 bit, è possibile scegliere di creare una versione a 64 bit in sostituzione o in aggiunta a una nuova applicazione a 32 bit. In genere è consigliabile completare la compilazione del programma in modalità a 32 bit, quindi provare a eseguire la compilazione a 64 bit. La compilazione in modalità a 64 bit è semplice, ma in alcuni casi evidenzia bug che non apparivano nelle build a 32 bit.

È anche necessario tenere presenti possibili problemi in fase di compilazione e runtime relativi a dimensioni del puntatore, valori di ora e dimensioni e identificatori di formato nelle funzioni printf e scanf. Per altre informazioni, vedere [Configurare Visual C++ per destinazioni x64 a 64 bit](../build/configuring-programs-for-64-bit-visual-cpp.md) e [Problemi comuni relativi alla migrazione di Visual C++ a 64 bit](../build/common-visual-cpp-64-bit-migration-issues.md). Per altri suggerimenti relativi alla migrazione, vedere [Guida alla programmazione per Windows a 64 bit](/windows/win32/WinProg64/programming-guide-for-64-bit-windows).

## <a name="unicode-vs-mbcsascii"></a>Unicode e MBCS/ASCII

Prima dell'introduzione dello standard Unicode, molti programmi usavano set di caratteri multibyte (MBCS) per rappresentare i caratteri non inclusi nel set di caratteri ASCII. Nei vecchi progetti MFC, MBCS era l'impostazione predefinita. Quando si aggiorna un programma di questo tipo vengono visualizzati avvisi che consigliano di usare Unicode. È possibile scegliere di disabilitare o ignorare l'avviso se si decide che la conversione a Unicode comporta costi di sviluppo eccessivi. Per disabilitarlo per tutti i progetti nella soluzione, aprire **Visualizza**  >  **Gestione proprietà**, selezionare tutti i progetti per i quali si desidera disabilitare l'avviso, quindi fare clic con il pulsante destro del mouse sugli elementi selezionati e scegliere **Proprietà**. Nella finestra di dialogo **Pagina delle proprietà** selezionare **Proprietà di configurazione** > **C/C++** > **Avanzate**. Nella proprietà **Disabilita avvisi specifici** fare clic sulla freccia a discesa, quindi scegliere **Modifica**. Immettere 4996 nella casella di testo. Non includere il prefisso "C". Scegliere **OK** per salvare la proprietà, quindi scegliere **OK** per salvare le modifiche.

Per altre informazioni, vedere [Porting da MBCS a Unicode](porting-guide-spy-increment.md#porting_to_unicode). Per informazioni generali su MBCS e Unicode, vedere il [testo e le stringhe in Visual C++](../text/text-and-strings-in-visual-cpp.md) e [internazionalizzazione](../c-runtime-library/internationalization.md) .

## <a name="see-also"></a>Vedere anche

[Aggiornamento di progetti da versioni precedenti di Visual C++](upgrading-projects-from-earlier-versions-of-visual-cpp.md)<br/>
[Miglioramenti della conformità di C++ in Visual Studio 2017](../overview/cpp-conformance-improvements.md)
