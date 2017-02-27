---
title: Panoramica dei potenziali problemi di aggiornamento (Visual C++) | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.tgt_pltfrm: 
ms.topic: article
ms.assetid: 2c99a8cb-098f-4a9d-bf2c-b80fd06ace43
caps.latest.revision: 5
author: mikeblome
ms.author: mblome
manager: ghogen
translationtype: Human Translation
ms.sourcegitcommit: fb1f9f25be6d32f15324c8d3a7bd5069ca869a35
ms.openlocfilehash: 6951129578e28251cef8eb54abb4ef790eb7f944

---
# <a name="overview-of-potential-upgrade-issues-visual-c"></a>Panoramica dei potenziali problemi di aggiornamento (Visual C++)
Nel corso degli anni il compilatore Visual C++ ha subito molte modifiche, che si aggiungono alle modifiche apportate al linguaggio C++, alla libreria standard C++, al runtime C (CRT) e ad altre librerie come MFC e ATL. Di conseguenza, quando si aggiorna un'applicazione da una versione precedente di Visual C++ è possibile che il codice che prima veniva compilato correttamente mostri errori e avvisi del compilatore e del linker. Più la base di codice è vecchia, maggiore è la possibilità di tali errori. Questa panoramica riepiloga i tipi di problemi più comuni che possono verificarsi e offre collegamenti a informazioni più dettagliate.  
  
 Nota: In passato si consigliava di eseguire in modo incrementale, una versione alla volta, gli aggiornamenti che includevano più versioni. Questo approccio non è più consigliato. Si è constatato che è quasi sempre più semplice eseguire l'aggiornamento diretto alla versione più recente di Visual Studio, indipendentemente dalla versione della base di codice.  
  
 È possibile inviare domande o commenti sul processo di aggiornamento all'indirizzo vcupgrade@microsoft.com.  
  
## <a name="library-and-toolset-dependencies"></a>Dipendenze di librerie e set di strumenti  
 Quando si aggiorna un'applicazione a una nuova versione del compilatore Visual C++, è vivamente consigliabile e in molti casi necessario aggiornare anche tutte le librerie e le DLL alle quali è collegata l'applicazione. Ciò richiede l'accesso al codice sorgente oppure la fornitura da parte del produttore della libreria di nuovi file binari compilati con la stessa versione principale del compilatore Visual C++. Se una di queste condizioni è vera è possibile ignorare questa sezione, che illustra i dettagli della compatibilità binaria. Se nessuna delle due condizioni è vera, potrebbe non risultare possibile usare le librerie nell'applicazione aggiornata. Le informazioni contenute in questa sezione contribuiscono a determinare se sarà possibile procedere con l'aggiornamento.  
  
### <a name="toolset"></a>Set di strumenti  
 I formati di file obj e lib sono definiti in modo completo e vengono modificati di rado. Talvolta vengono eseguite aggiunte a questi formati di file, ma tali aggiunte in genere non influenzano la capacità dei set di strumenti più recenti di usare file oggetto e librerie prodotte da set di strumenti meno recenti. L'unica eccezione importante è la compilazione con /GL (Generazione di codice in fase di collegamento/Ottimizzazione intero programma). Se si esegue la compilazione usando /GL, il file oggetto risultante può essere collegato solo mediante lo stesso set di strumenti usato per la sua creazione. Pertanto, se si genera un file oggetto con /GL e si usa il compilatore di Visual Studio 2017 (v141), è necessario collegare il file oggetto mediante il linker di Visual Studio 2017 (v141). Il motivo è il fatto che le strutture dati interne degli oggetti /GL non sono stabili tra diverse versioni principali del set di strumenti e i set più recenti non supportano i formati di dati meno recenti.  
  
 C++ non dispone di un'interfaccia binaria dell'applicazione (ABI) stabile. Visual C++ gestisce un'ABI stabile per tutte le versioni secondarie di una versione principale. Ad esempio, Visual Studio 2017 e tutti i relativi aggiornamenti sono compatibili a livello binario. Tuttavia l'ABI non è necessariamente compatibile tra versioni principali di Visual C++ (ad eccezione delle versioni 2015 e 2017, che _sono_ compatibili a livello binario). In altri termini è possibile che vengano apportate modifiche di rilievo al layout di tipo, alla decorazione dei nomi, alla gestione delle eccezioni e ad altre parti dell'ABI C++. Pertanto, se è presente un file oggetto che include simboli esterni con collegamento a C++, tale file oggetto potrebbe non collegarsi correttamente con file oggetto creati con un'altra versione principale del set di strumenti Visual C++. In questo caso, "potrebbe non collegarsi" può dare risultati diversi: il collegamento può non riuscire affatto (ad esempio in caso di modifica della decorazione dei nomi), il collegamento può riuscire e possono verificarsi errori in fase di runtime (ad esempio in caso di modifica del layout di tipo) o come accade in molti casi il collegamento può funzionare e non originare nessun errore. Si noti anche che sebbene l'ABI C++ non sia stabile, l'ABI C e il subset dell'ABI C++ necessaria per COM sono stabili.  
  
### <a name="libraries"></a>Librerie  

 Se si compila un file di origine usando una versione particolare delle intestazioni delle librerie di Visual C++ (usando #include per le intestazioni), il file oggetto risultante deve essere collegato con la stessa versione delle librerie di Visual C++. Se ad esempio il file di origine viene compilato con \<immintrin.h> di Visual Studio 2017, è necessario collegarlo con la libreria vcruntime di Visual Studio 2017. In modo analogo, se il file di origine viene compilato con \<iostream> di Visual Studio 2017 è necessario collegarlo con la libreria standard C++ di Visual Studio 2017, msvcprt. L'uso di elementi di versioni diverse non è supportato.  
  
 Per la libreria standard C++ l'uso di elementi di versioni diverse è stato esplicitamente disattivato con l'introduzione di `#pragma detect_mismatch` nelle intestazioni standard a partire da Visual Studio 2010. Se si prova a collegare file oggetto incompatibili o di creare un collegamento con una libreria standard non adatta, il collegamento non funziona.  
  
 Per la libreria CRT, l'uso di elementi di versioni diverse non è mai stato supportato ma funzionava in molti casi, almeno fino a Visual Studio 2015 e alla libreria Universal CRT, in quanto la superficie API ha subito variazioni minime nel corso del tempo. Con la libreria Universal CRT è stata interrotta la compatibilità con le versioni precedenti, che ora è soggetta a gestione. In altre parole non è prevista l'introduzione di nuove versioni di file binari Universal CRT in futuro. Al contrario, ora viene aggiornata la libreria Universal CRT esistente.  
  
 Per garantire la compatibilità di collegamento parziale con file oggetto (e librerie) compilati con versioni precedenti delle intestazioni del runtime Microsoft C, è disponibile la libreria legacy_stdio_definitions.lib con Visual Studio 2015 e versioni successive. Questa libreria include simboli di compatibilità per la maggior parte delle funzioni e delle esportazioni dati che sono state rimosse da Universal CRT. Il set di simboli di compatibilità offerto da legacy_stdio_definitions.lib è sufficiente a soddisfare la maggior parte delle dipendenze, incluse tutte le dipendenze delle librerie incluse in Windows SDK. Tuttavia, per alcuni simboli rimossi da Universal CRT non è possibile offrire simboli di compatibilità in questo modo. Questi simboli includono alcune funzioni (ad esempio \__iob_func) e le esportazioni di dati (ad esempio \__imp\_\__iob, \__imp\_\__pctype, \__imp\_\__mb_cur_max).  
  
 Se è presente una libreria statica creata con una versione precedente delle intestazioni del runtime C, è consigliabile adottare le seguenti misure (nell'ordine indicato):  
  
1.  Ricompilare la libreria statica con Visual C++ 2017 e le intestazioni Universal CRT per garantire il supporto del collegamento con la libreria Universal CRT. Questa è l'opzione completamente supportata (e pertanto migliore).  
  
2.  Se non è possibile (o non si vuole) ricompilare la libreria statica, è possibile provare il collegamento con legacy_stdio_definitions.lib. Se questa soluzione soddisfa le dipendenze in fase di collegamento della libreria statica, è consigliabile testare in modo approfondito la libreria statica quando viene usata nel codice binario, per assicurarsi che non dia origine a problemi causati da una delle [modifiche funzionali apportate alla libreria Universal CRT](visual-cpp-change-history-2003-2015.md#BK_CRT).  
  
3.  Se le dipendenze della libreria statica in uso non sono soddisfatte da legacy_stdio_definitions.lib o se la libreria non funziona con la libreria Universal CRT a causa delle modifiche funzionali sopra citate, è consigliabile incapsulare la libreria statica in una DLL e quindi collegare la DLL alla versione appropriata del runtime Microsoft C. Ad esempio, se la libreria statica è stata creata con Visual C++ 2013 sarà necessario creare la DLL usando Visual C++ 2013 e le librerie di Visual C++ 2013. Incorporando la libreria in una DLL si isola il dettaglio di implementazione rappresentato dalla dipendenza della libreria da una versione specifica del runtime Microsoft C. (Sarà necessario assicurarsi che l'interfaccia della DLL non trasmetta esternamente dettagli del runtime C usato, ad esempio restituendo un'istruzione FILE* fuori dall'ambito della DLL o restituendo un puntatore allocato da malloc e prevedendone lo sblocco da parte del chiamante.)  
  
 L'uso di più CRT in un unico processo non è di per sé un problema; di fatto la maggior parte dei processi carica DLL con più CRT. Ad esempio i componenti del sistema operativo Windows dipendono da msvcrt.dll e mentre CLR dipende dal proprio CRT privato. I problemi si verificano quando si usa in modo non ordinato lo stato di più CRT. Ad esempio è sconsigliabile allocare memoria usando msvcr110.dll!malloc e provare a deallocare la memoria usando msvcr120.dll!free. Allo stesso modo è sconsigliabile provare ad aprire un FILE usando msvcr110!fopen e quindi provare a leggere il FILE usando msvcr120!fread. Se si evita di usare in modo non ordinato lo stato di più CRT, è possibile avere più CRT caricati in un singolo processo.  
  
 Per altre informazioni, vedere [Upgrade your code to the Universal CRT](upgrade-your-code-to-the-universal-crt.md) (Aggiornare il codice a Universal CRT).  
  
## <a name="errors-due-to-project-settings"></a>Errori causati da impostazioni di progetto  
 Per iniziare il processo di aggiornamento basta aprire un progetto/soluzione/area di lavoro precedente nella versione più recente di Visual Studio. In Visual Studio verrà creato un nuovo progetto basato sulle impostazioni di progetto precedenti. Se il progetto precedente presenta percorsi di libreria o di inclusione hardcoded su percorsi non standard, i file in tali percorsi potrebbero non essere visibili al compilatore quando il progetto usa le impostazioni predefinite. Per altre informazioni, vedere [Configurazione della proprietà OutputFile del linker](porting-guide-spy-increment.md#linker_output_settings).  
  
 In generale, questo è il momento ideale per organizzare il codice del progetto in modo da semplificare la gestione, favorendo la compilazione del codice aggiornato in tempi rapidi. Se il codice sorgente è già ben organizzato e il vecchio progetto viene compilato con Visual Studio 2010 o versioni successive, è possibile modificare manualmente il nuovo file di progetto in modo da supportare la compilazione sia con il nuovo che con il vecchio compilatore. Nell'esempio seguente viene illustrato come compilare sia per Visual Studio 2015 che per Visual Studio 2017:  
  
```  
<PlatformToolset Condition="'$(VisualStudioVersion)'=='14.0'">v140</PlatformToolset>  
<PlatformToolset Condition="'$(VisualStudioVersion)'=='15.0'">v141</PlatformToolset>   
```  
  
### <a name="lnk2019-unresolved-external"></a>LNK2019: simbolo esterno non risolto  
 Se vengono rilevati simboli non risolti, potrebbe essere necessario correggere le impostazioni del progetto.  
  
-   •   Se il file di origine si trova in un percorso non predefinito, è stato aggiunto il percorso delle directory di inclusione del progetto?  
  
-   •   Se il simbolo esterno è definito in un file .lib, è stato specificato il percorso lib nelle proprietà del progetto e in tale percorso è presente la versione corretta del file .lib?  
  
-   •   Si sta provando a creare ul collegamento a un file .lib compilato con una versione diversa di Visual Studio? In questo caso, vedere la sezione precedente relativa alle dipendenze di librerie e set di strumenti.  
  
-   •   I tipi degli argomenti nel sito di chiamata corrispondono di fatto a un overload esistente della funzione? Verificare che i tipi sottostanti degli eventuali typedef nella firma della funzione e nel codice che chiama la funzione siano quelli previsti.  
  
 Per risolvere gli errori di simbolo non risolto, provare a usare dumpbin.exe per esaminare i simboli definiti in un file binario. Provare la riga di comando seguente per visualizzare i simboli definiti in una libreria:  
  
```  
dumpbin.exe /LINKERMEMBER somelibrary.lib  
```  
  
### <a name="zcwchart-wchart-is-native-type"></a>/Zc:wchar_t (Tipo nativo wchar_t)  
 In Visual C++ 6.0 e versioni precedenti, wchar_t non è implementato come tipo predefinito, ma è dichiarato in wchar.h come typedef per unsigned short. Lo standard C++ richiede che wchar_t sia un tipo incorporato. L'uso della versione typedef può causare problemi di portabilità. Se si esegue l'aggiornamento da versioni precedenti di Visual C++ e si verifica l'errore del compilatore C2664 perché il codice sta cercando di convertire in modo implicito wchar_t in unsigned short, è consigliabile modificare il codice per risolvere l'errore anziché impostare /Zc:wchar_t-. Per altre informazioni, vedere [/Zc:wchar_t (Tipo nativo wchar_t)](../build/reference/zc-wchar-t-wchar-t-is-native-type.md).  
  
### <a name="upgrading-with-the-linker-options-nodefaultlib-entry-and-noentry"></a>Aggiornare con le opzioni del linker /NODEFAULTLIB, /ENTRY e /NOENTRY  
 L'opzione del linker /NODEFAULTLIB (o la proprietà del linker Ignora tutte le librerie predefinite) indica al linker di non collegare automaticamente le librerie predefinite, ad esempio la libreria CRT. Ciò significa che ogni libreria deve essere elencata come input singolarmente. Questo elenco di librerie è disponibile nella proprietà Dipendenze aggiuntive, nella sezione Linker delle proprietà del progetto.  
  
 I progetti che usano questa opzione rappresentano un problema durante l'aggiornamento, perché i nomi di alcune librerie predefinite sono cambiati. Dato che ogni singola libreria va elencata nella proprietà Dipendenze aggiuntive o nella riga di comando del linker, è necessario aggiornare l'elenco di librerie in modo che usi i nomi correnti.  
  
 La tabella seguente visualizza le librerie delle quali è stato cambiato il nome a partire da Visual Studio 2015. Per eseguire l'aggiornamento è necessario sostituire i nomi nella prima colonna con i nomi nella seconda colonna.  Alcune di queste librerie sono librerie di importazione, ma questo fatto non è rilevante.  
  
|||  
|-|-|  
|Se si usava:|Sostituire con:|  
|libcmt.lib|libucrt.lib, libvcruntime.lib|  
|libcmtd.lib|libucrtd.lib, libvcruntimed.lib|  
|msvcrt.lib|ucrt.lib, vcruntime.lib|  
|msvcrtd.lib|ucrtd.lib, vcruntimed.lib|  
  
 Lo stesso vale se si usa l'opzione /ENTRY o l'opzione /NOENTRY, che hanno anche l'effetto di ignorare le librerie predefinite.  
  
## <a name="errors-due-to-improved-language-conformance"></a>Errori causati dal miglioramento della conformità al linguaggio  
 Nel corso degli anni è stata migliorata in modo continuativo la conformità del compilatore Visual C++ allo standard C++. Il codice che veniva compilato correttamente con versioni precedenti di Visual C++ potrebbe non essere compilato in Visual Studio 2017, perché ora il compilatore segnala correttamente un errore che in precedenza ignorava o autorizzava in modo esplicito.  
  
 Ad esempio, l'opzione /Zc:forScope è stata introdotta nelle prime versioni di Visual C++. L'opzione consente un comportamento non conforme per le variabili di ciclo. Questa opzione ora è deprecata e potrebbe essere rimossa nelle versioni future. L'uso dell'opzione quando si aggiorna il codice è sconsigliato. Per altre informazioni, vedere [/Zc:forScope- è deprecata](porting-guide-spy-increment.md#deprecated_forscope).  
  
 Un esempio di errore comune durante l'aggiornamento si verifica quando un argomento non const viene passato a un parametro const. Le versioni meno recenti di Visual C++ non segnalavano sempre questa operazione come errore. Per altre informazioni, vedere [Conversioni più rigorose del compilatore](porting-guide-spy-increment.md#stricter_conversions).  
  
 Per altre informazioni sui miglioramenti specifici della conformità, vedere [Cronologia delle modifiche di Visual C++ dal 2003 al 2015](visual-cpp-change-history-2003-2015.md) e [Miglioramenti della conformità di C++ in Visual Studio 2017](../cpp-conformance-improvements-2017.md).  
  
## <a name="errors-involving-stdinth-integral-types"></a>Errori con i tipi integrali \<stdint.h>  
 L'intestazione \<stdint.h> definisce typedef e macro che, a differenza dei tipi integrali incorporati, hanno necessariamente una lunghezza specifica in tutte le piattaforme. Alcuni esempi sono uint32_t e int64_t. \<stdint.h> è stata aggiunta a Visual C++ in Visual Studio 2010. È possibile che il codice scritto con versioni precedenti alla 2010 offra definizioni private per questi tipi e che tali definizioni non siano sempre coerenti con quelle di \<stdint.h>.  
  
 Se l'errore è C2371 e riguarda un tipo stdint, è probabile che il tipo sia definito in un'intestazione nel proprio codice o in un file lib di terze parti.  Durante l'aggiornamento è necessario eliminare eventuali definizioni personalizzate di tipi \<stdint.h>, ma prima confrontare le definizioni personalizzate con le definizioni standard correnti, per assicurarsi di non introdurre nuovi problemi.  
  
 È possibile premere F12 "Vai a definizione" per vedere dove è definito il tipo in questione.  
  
 L'opzione del compilatore [/showIncludes](../build/reference/showincludes-list-include-files.md) può essere utile in questo contesto. Nella finestra di dialogo Pagine delle proprietà per il progetto, aprire la pagina **C/C++**, **Avanzate** e impostare **Mostra inclusioni** su "Sì". Ricompilare il progetto e visualizzare l'elenco di #include (inclusioni) nella finestra di output.  Ogni intestazione è provvista di un rientro sotto l'intestazione che la include.  
  
## <a name="errors-involving-crt-functions"></a>Errori relativi alle funzioni CRT  
 Nel corso degli anni sono state apportate numerose modifiche al runtime C. Sono state aggiunte molte versioni sicure delle funzioni e alcune sono state rimosse. Come già descritto in precedenza in questo articolo, l'implementazione Microsoft della libreria CRT è stata sottoposta a refactoring in Visual Studio 2015, con nuovi file binari e file .lib associati.  
  
 Se un errore riguarda una funzione CRT, cercare altre informazioni in [Cronologia delle modifiche di Visual C++ dal 2003 al 2015](visual-cpp-change-history-2003-2015.md) o in [Miglioramenti della conformità di C++ in Visual Studio 2017](../cpp-conformance-improvements-2017.md). Se l'errore è LNK2019, simbolo esterno non risolto, assicurarsi che la funzione non sia stata rimossa. In alternativa, se si è certi che la funzione esiste ancora e che il codice chiamante è corretto, verificare se il progetto usa /NODEFAULTLIB. In tal caso è necessario aggiornare l'elenco delle librerie, in modo che il progetto usi le nuove librerie universali (UCRT). Per altre informazioni, vedere la sezione precedente relativa alla libreria e alle dipendenze.  
  
 Se l'errore riguarda printf o scanf, assicurarsi che nessuna delle due funzioni sia definita privatamente senza l'inclusione di stdio.h. Se così fosse, rimuovere le definizioni private o definire il collegamento con legacy_stdio_definitions.lib (Progetto &#124; Proprietà &#124; Linker &#124; Classe di input del linker). Se esegue il collegamento con Windows SDK 8.1 o versione precedente, aggiungere legacy_stdio_definitions.lib.  
  
 Se l'errore riguarda argomenti della stringa di formato, è probabile che il compilatore applichi lo standard in modo più restrittivo. Per altre informazioni vedere la cronologia delle modifiche. Prestare particolare attenzione a eventuali errori in questa fase, in quanto possono rappresentare rischi per la sicurezza.  
  
## <a name="errors-due-to-changes-in-the-c-standard"></a>Errori dovuti a modifiche dello standard C++  
 Anche lo standard C++ è stato sottoposto ad aggiornamenti non sempre compatibili con le versioni precedenti. L'introduzione della semantica di spostamento, di nuove parole chiave e di altre funzionalità del linguaggio e della libreria standard in C++&11; può causare errori del compilatore e anche un comportamento diverso in fase di runtime.  
  
 Ad esempio, un vecchio programma C++ può includere l'intestazione iostream.h. Questa intestazione è stata deprecata nelle fasi iniziali della storia di C++ e alla fine è stata completamente rimossa da Visual C++. In questo caso sarà necessario usare \<iostream> e riscrivere il codice. Per altre informazioni, vedere [Aggiornamento del vecchio codice iostream](porting-guide-spy-increment.md#updating_iostreams_code).  
  
### <a name="c4838-narrowing-conversion-warning"></a>C4838: avviso di conversione verso un tipo di dati più piccolo  
 Ora lo standard C++ specifica che le conversioni da valori integrali senza segno a valori integrali con segno sono considerate come conversioni verso un tipo di dati più piccolo. Il compilatore Visual C++ non generava questo avviso prima di Visual Studio 2015. Controllare ogni ricorrenza per assicurarsi che la conversione verso un tipo di dati più piccolo non introduca errori nel codice.  
  
## <a name="warnings-to-use-secure-crt-functions"></a>Avvisi per l'uso di funzioni CRT protette  
 Nel corso degli anni sono state introdotte versioni sicure delle funzioni runtime C. Le versioni precedenti e non sicure sono ancora disponibili, ma è consigliabile modificare il codice per usare le versioni sicure. Il compilatore genererà un avviso se si usano versioni non sicure. È possibile scegliere di disabilitare o ignorare questi avvisi. Per disabilitare l'avviso per tutti i progetti nella soluzione, aprire **Visualizza &#124; Gestione proprietà**, selezionare tutti i progetti per i quali disabilitare l'avviso, quindi fare clic con il pulsante destro del mouse sugli elementi selezionati e scegliere **Proprietà &#124; C/C++ &#124; Avanzate &#124; Disabilita avvisi specifici**. Fare clic sulla freccia a discesa e quindi su Modifica. Immettere 4996 nella casella di testo. (Non includere il prefisso "C".) Per altre informazioni, vedere [Porting per l'uso di funzioni CRT sicure](porting-guide-spy-increment.md#porting_to_secure_crt).  
  
## <a name="errors-due-to-changes-in-windows-apis-or-obsolete-sdks"></a>Errori dovuti a modifiche alle API di Windows o a SDK obsoleti  
 Nel corso degli anni sono stati aggiunti (e talvolta modificati o rimossi) tipi di dati e API di Windows. Sono stati anche aggiunti e rimossi altri SDK non appartenenti al sistema operativo principale. È perciò possibile che i programmi meno recenti contengano chiamate ad API che non esistono più. Possono anche contenere chiamate ad API di altri SDK Microsoft che non sono più supportati.  Se viene visualizzato un errore relativo a un'API di Windows o a un'API di un SDK Microsoft meno recente, è possibile che un'API sia stata rimossa e/o sostituita da una funzione più recente e sicura.  
  
 Per altre informazioni sul set di API corrente e sul sistema operativo minimo supportato da un'API specifica di Windows, vedere [Windows API Index](https://msdn.microsoft.com/en-us/library/ff818516\(v=vs.85\).aspx) (Indice delle API di Windows) e passare all'API in questione.  
  
### <a name="windows-version"></a>Versione di Windows  
 Quando si aggiorna un programma che usa direttamente o indirettamente l'API di Windows, è necessario scegliere la versione minima di Windows da supportare. Nella maggior parte dei casi Windows 7 è una scelta ottimale. Per altre informazioni, vedere [Problemi del file di intestazione](porting-guide-spy-increment.md#header_file_problems). La macro WINVER definisce la versione più vecchia di Windows nella quale è possibile eseguire il programma. Se il programma MFC imposta WINVER su 0x0501 (Windows XP) verrà visualizzato un avviso, perché MFC non supporta più XP anche se il compilatore dispone di una modalità XP.  
  
 Per altre informazioni, vedere [Aggiornamento della versione di Windows di destinazione](porting-guide-spy-increment.md#updating_winver) e [Altri file di intestazione obsoleti](porting-guide-spy-increment.md#outdated_header_files).  
  
## <a name="atl--mfc"></a>ATL/MFC  
 ATL e MFC sono API relativamente stabili, ma anch'esse vengono modificate occasionalmente. Per altre informazioni, vedere [Cronologia delle modifiche di Visual C++ dal 2003 al 2015](visual-cpp-change-history-2003-2015.md), [Novità di Visual C++ in Visual Studio 2017](../what-s-new-for-visual-cpp-in-visual-studio.md) e [Miglioramenti della conformità di Visual C++ in Visual Studio 2017](../cpp-conformance-improvements-2017.md).  
  
### <a name="lnk-2005-dllmain12-already-defined-in-msvcrtdlib"></a>LNK 2005 _DllMain@12 già definito in MSVCRTD.lib  
 Questo errore può verificarsi nelle applicazioni MFC. Indica un problema di ordinamento tra la libreria CRT e la libreria MFC. La libreria MFC deve essere collegata per prima, in modo che renda disponibili gli operatori new e delete. Per correggere l'errore, usare l'opzione /NODEFAULTLIB per ignorare le librerie predefinite MSVCRTD.lib e mfcs140d.lib. Quindi aggiungere queste librerie come dipendenze aggiuntive.  
  
## <a name="32-vs-64-bit"></a>32 bit e 64 bit  
 Se il codice originale viene compilato per sistemi a 32 bit, è possibile scegliere di creare una versione a 64 bit in sostituzione o in aggiunta a una nuova applicazione a 32 bit. In genere è consigliabile completare la compilazione del programma in modalità a 32 bit, quindi provare a eseguire la compilazione a 64 bit. La compilazione in modalità a 64 bit è semplice, ma in alcuni casi evidenzia bug che non apparivano nelle build a 32 bit.  
  
 È anche necessario tenere presenti possibili problemi in fase di compilazione e runtime relativi a dimensioni del puntatore, valori di ora e dimensioni e identificatori di formato nelle funzioni printf e scanf. Per altre informazioni, vedere [Configurazione di programmi per processori a 64 bit (Visual C++)](../build/configuring-programs-for-64-bit-visual-cpp.md) e [Problemi comuni relativi alla migrazione di Visual C++ a 64 bit](../build/common-visual-cpp-64-bit-migration-issues.md). Per altri suggerimenti relativi alla migrazione, vedere [Guida alla programmazione per Windows a 64 bit](https://msdn.microsoft.com/library/windows/desktop/bb427430\(v=vs.85\).aspx).  
  
## <a name="unicode-vs-mbcsascii"></a>Unicode e MBCS/ASCII  
 Prima dell'introduzione dello standard Unicode, molti programmi usavano set di caratteri multibyte (MBCS) per rappresentare i caratteri non inclusi nel set di caratteri ASCII. Nei vecchi progetti MFC, MBCS era l'impostazione predefinita. Quando si aggiorna un programma di questo tipo vengono visualizzati avvisi che consigliano di usare Unicode. È possibile scegliere di disabilitare o ignorare l'avviso se si decide che la conversione a Unicode comporta costi di sviluppo eccessivi. Per disabilitare l'avviso per tutti i progetti nella soluzione, aprire **Visualizza &#124; Gestione proprietà**, selezionare tutti i progetti per i quali disabilitare l'avviso, quindi fare clic con il pulsante destro del mouse sugli elementi selezionati e scegliere **Proprietà &#124; C/C++ &#124; Avanzate &#124; Disabilita avvisi specifici**. Fare clic sulla freccia a discesa e quindi su Modifica. Immettere 4996 nella casella di testo. (Non includere il prefisso "C".)  
  
 Per altre informazioni, vedere [Porting da MBCS a Unicode](porting-guide-spy-increment.md#porting_to_unicode). Per informazioni generali su MBCS e Unicode, vedere [Testo e stringhe in Visual C++](../text/text-and-strings-in-visual-cpp.md) e [Internazionalizzazione](../c-runtime-library/internationalization.md) .  
  
## <a name="see-also"></a>Vedere anche  
 [Aggiornamento di progetti da versioni precedenti di Visual C++](upgrading-projects-from-earlier-versions-of-visual-cpp.md)
 [Miglioramenti della conformità di C++ in Visual Studio 2017](../cpp-conformance-improvements-2017.md)



<!--HONumber=Feb17_HO4-->


