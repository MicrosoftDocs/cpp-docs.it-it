---
title: 'Procedura: eseguire la migrazione a clr-| Documenti Microsoft'
ms.custom: get-started-article
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- upgrading Visual C++ applications, /clr compiler option
- compiling native code [C++]
- interoperability [C++], /clr compiler option
- interop [C++], /clr compiler option
- migration [C++], /clr compiler option
- /clr compiler option [C++], porting to
ms.assetid: c9290b8b-436a-4510-8b56-eae51f4a9afc
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: f5d7dafdc377723e33372529af1b8f125561366e
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="how-to-migrate-to-clr"></a>Procedura: eseguire la migrazione a /clr
In questo argomento vengono illustrati i problemi che si verificano durante la compilazione di codice nativo con **/clr** (vedere [/clr (compilazione Common Language Runtime)](../build/reference/clr-common-language-runtime-compilation.md) per altre informazioni). **/CLR** consente ai moduli di Visual C++ di richiamare ed essere richiamati dagli assembly .NET mantenendo la compatibilità con i moduli non gestiti. Vedere [assembly misti (nativi e gestiti)](../dotnet/mixed-native-and-managed-assemblies.md) e [interoperabilità .NET e Native](../dotnet/native-and-dotnet-interoperability.md) per ulteriori informazioni sui vantaggi di compilazione con **/clr**.  
  
## <a name="known-issues-compiling-library-projects-with-clr"></a>Noti problemi di compilazione di progetti di libreria con /clr  
 Visual Studio presenta alcuni problemi noti durante la compilazione di progetti di libreria con **/clr**:  
  
-   Il codice può eseguire una query in fase di esecuzione con [CRuntimeClass:: FromName](../mfc/reference/cruntimeclass-structure.md#fromname). Tuttavia, se è un tipo in un file dll MSIL (compilato con **/clr**), la chiamata a `FromName` potrebbe non riuscire se si verifica prima dell'esecuzione dei costruttori statici nella DLL gestita (non si vedranno il problema se la chiamata a FromName si verifica dopo che dispone di codice eseguita nella DLL gestita). Per risolvere questo problema, è possibile forzare la costruzione di costruttore statico gestito definendo una funzione nella DLL gestita, esportandola e chiamata da applicazione MFC nativa. Ad esempio:  
  
    ```  
    // MFC extension DLL Header file:  
    __declspec( dllexport ) void EnsureManagedInitialization () {  
       // managed code that won't be optimized away  
       System::GC::KeepAlive(System::Int32::MaxValue);  
    }  
    ```  
  
## <a name="compile-with-visual-c"></a>Eseguire la compilazione con Visual C++  
 Prima di utilizzare **/clr** su qualsiasi modulo nel progetto, compilare e collegare il progetto nativo con Visual Studio 2010.  
  
 I passaggi seguenti, seguiti nell'ordine, specificare il percorso più semplice per un **/clr** compilazione. È importante compilare ed eseguire il progetto dopo ognuno di questi passaggi.  
  
### <a name="versions-prior-to-visual-c-2003"></a>Versioni precedenti a Visual C++ 2003  
 Se esegue l'aggiornamento a Visual Studio 2010 da una versione precedente di Visual C++ 2003, vengono visualizzati errori del compilatore relativi alla conformità standard di C++ avanzato in Visual C++ 2003  
  
### <a name="upgrading-from-visual-c-2003"></a>L'aggiornamento da Visual C++ 2003  
 Progetti compilati con Visual C++ 2003 in precedenza devono innanzitutto compilati senza **/clr** come Visual Studio ora è aumentato di conformità ANSI/ISO e alcune modifiche di rilievo. La modifica che potrebbe richiedere più attenzione è [funzionalità di sicurezza in CRT](../c-runtime-library/security-features-in-the-crt.md). Il codice che utilizza la libreria CRT è molto probabile per produrre gli avvisi di deprecazione. Questi avvisi possono essere eliminati, ma la migrazione al nuovo [sicurezza avanzata di versioni di funzioni CRT](../c-runtime-library/security-enhanced-versions-of-crt-functions.md) è preferibile, in quanto forniscono una migliore protezione e individuare i problemi di sicurezza nel codice.  
  
### <a name="upgrading-from-managed-extensions-for-c"></a>Aggiornamento dalle estensioni gestite per C++  
 A partire da Visual Studio 2005, non verrà compilato il codice scritto con le estensioni gestite per C++ in **/clr**.  
  
## <a name="convert-c-code-to-c"></a>Converti il codice C a C++  
 Anche se Visual Studio compilerà il file C, è necessario convertirli in C++ per un **/clr** compilazione. Il nome effettivo del file non deve essere modificato. è possibile utilizzare **/Tp** (vedere [/Tc, /Tp, /TC, /TP (specifica del tipo File di origine)](../build/reference/tc-tp-tc-tp-specify-source-file-type.md).) Si noti che, nonostante siano necessario per il file di codice sorgente C++ **/clr**, non è necessario effettuare il refactoring del codice per utilizzare paradigmi orientata agli oggetti.  
  
 Codice C è molto probabile che richiedono modifiche quando viene compilato come file C++. Le regole di indipendenza dai tipi C++ sono fissi, pertanto le conversioni di tipo devono essere resa esplicite con cast. Ad esempio, malloc restituisce un puntatore void, ma può essere assegnato a un puntatore a qualsiasi tipo c con un cast:  
  
```  
int* a = malloc(sizeof(int));   // C code  
int* b = (int*)malloc(sizeof(int));   // C++ equivalent  
```  
  
 Puntatori a funzione sono rigorosamente indipendente dai tipi in C++, pertanto il codice C seguente richiede la modifica. In C++ è consigliabile creare un `typedef` che definisce il tipo puntatore a funzione e quindi utilizzare tale tipo per eseguire il cast di puntatori a funzione:  
  
```  
NewFunc1 = GetProcAddress( hLib, "Func1" );   // C code  
typedef int(*MYPROC)(int);   // C++ equivalent  
NewFunc2 = (MYPROC)GetProcAddress( hLib, "Func2" );  
```  
  
 C++ è necessario inoltre che le funzioni essere completamente definita o un prototipo prima che possano essere a cui fa riferimento o richiamati.  
  
 Gli identificatori utilizzati nel codice C che risultano essere parole chiave c++ (ad esempio `virtual`, `new`, `delete`, `bool`, `true`, `false`e così via) deve essere rinominato. In genere possibile eseguire con semplici operazioni di ricerca e sostituzione.  
  
 Infine, mentre le chiamate COM di tipo C richiedono l'utilizzo esplicito di v-table e `this` puntatore, C++ non:  
  
```  
COMObj1->lpVtbl->Method(COMObj, args);  // C code  
COMObj2->Method(args);  // C++ equivalent  
```  
  
## <a name="reconfigure-project-settings"></a>Riconfigurare le impostazioni di progetto  
 Dopo il progetto compilato ed eseguito in Visual Studio 2010, è consigliabile creare nuove configurazioni di progetto per **/clr** anziché modificare le configurazioni predefinite. **/CLR** è incompatibile con alcune opzioni del compilatore e la creazione di configurazioni separate consente di compilare il progetto come nativo o gestito. Quando **/clr** è selezionata nella finestra di dialogo Pagine delle proprietà, non è compatibile con le impostazioni di progetto **/clr** sono disabilitate (e disabilitate opzioni non vengono ripristinate automaticamente se **/clr** è successivamente deselezionata).  
  
### <a name="create-new-project-configurations"></a>Crea nuove configurazioni progetto  
 È possibile utilizzare **Copia impostazioni da** opzione il [finestra di dialogo nuova configurazione progetto](http://msdn.microsoft.com/en-us/cca616dc-05a6-4fe3-bdc1-40c72a66f2be) per creare una configurazione di progetto in base alle impostazioni del progetto esistente. Eseguire questa operazione una volta per la configurazione di Debug e una volta per configurazione di rilascio. Le successive modifiche possono essere applicate per la **/clr** -configurazioni specifiche solo, lasciando invariati le configurazioni di progetto originale.  
  
 Progetti che utilizzano regole di compilazione personalizzate potrebbero richiedere particolare attenzione.  
  
 Questo passaggio ha diverse implicazioni per i progetti che utilizzano i makefile. In questo caso è possibile configurare una destinazione di compilazione separata o versione specifiche di **/clr** compilazione può essere creata da una copia dell'originale.  
  
### <a name="change-project-settings"></a>Modificare le impostazioni di progetto  
 **/CLR** selezionabile nell'ambiente di sviluppo seguendo le istruzioni riportate in [/clr (compilazione Common Language Runtime)](../build/reference/clr-common-language-runtime-compilation.md). Come accennato in precedenza, questo passaggio disabilita automaticamente le impostazioni di progetto in conflitto.  
  
> [!NOTE]
>  Durante l'aggiornamento di una libreria gestita o un progetto di servizio web da Visual C++ 2003 le **/Zl** viene opzione del compilatore aggiunta al **riga di comando** pagina delle proprietà. Ciò provoca l'errore LNK2001. Rimuovere **/Zl** dal **riga di comando** pagina delle proprietà da risolvere. Vedere [/Zl (omette nome della libreria predefinita)](../build/reference/zl-omit-default-library-name.md) e [funziona con le proprietà del progetto](../ide/working-with-project-properties.md) per ulteriori informazioni. In alternativa, aggiungere msvcrt.lib e msvcmrt.lib al linker **dipendenze aggiuntive** proprietà.  
  
 Per i progetti creati con makefile, opzioni del compilatore incompatibile devono essere disabilitate manualmente dopo aver **/clr** viene aggiunto. Vedere /[limitazioni di /clr](../build/reference/clr-restrictions.md) per informazioni sulle opzioni del compilatore che non sono compatibili con **/clr**.  
  
### <a name="precompiled-headers"></a>Intestazioni precompilate  
 Le intestazioni precompilate sono supportate in **/clr**. Tuttavia, se si compilano alcuni dei file CPP con **/clr** (e i restanti come nativi) alcune modifiche sarà necessarie perché le intestazioni precompilate generate con **/clr** non sono compatibili con quelli generato senza **/clr**. Questa incompatibilità è dovuta al fatto che **/clr** genera l'errore e richiede metadati. I moduli compilati **/clr** non possono quindi utilizzare le intestazioni precompilate che non includono metadati e non **/clr** moduli non possono utilizzare i file di intestazione precompilata che contengono i metadati.  
  
 Il modo più semplice per compilare un progetto vengono compilati alcuni moduli **/clr** consiste nel disabilitare completamente le intestazioni precompilate. (Nella finestra di dialogo Pagine delle proprietà del progetto, aprire il nodo C/C++ e selezionare le intestazioni precompilate. Quindi impostare la proprietà Crea/Usa intestazioni precompilate "Senza intestazioni precompilate".)  
  
 Tuttavia, in particolare per i progetti di grandi dimensioni, le intestazioni precompilate forniscono più elevata velocità di compilazione, in modo da disattivare questa funzionalità non è consigliabile. In questo caso è consigliabile configurare il **/clr** e non **/clr** file da utilizzare intestazioni precompilate separate. Questa operazione può essere eseguita in un unico passaggio, si selezionano più moduli da compilare **/clr** in Esplora soluzioni, facendo clic sul gruppo e scegliendo proprietà. Quindi modificare le proprietà di File di intestazione precompilato sia Crea/Usa PCH tramite File utilizzino un nome di file di intestazione diverso e il file PCH.  
  
## <a name="fixing-errors"></a>La correzione degli errori  
 La compilazione con **/clr** potrebbe restituire errori del compilatore, linker o runtime. Questa sezione vengono illustrati i problemi più comuni.  
  
### <a name="metadata-merge"></a>Unione di metadati  
 Versioni diverse dei tipi di dati possono causare al linker di esito negativo perché i metadati generati per i due tipi non corrispondono. (Questo è causato di solito quando i membri di un tipo sono definiti in modo condizionale, ma le condizioni non sono gli stessi per tutti i file CPP che utilizzano il tipo.) In questo caso il linker ha esito negativo, solo il nome del simbolo e il nome del secondo file OBJ in cui è stato definito il tipo di reporting. Spesso è utile ruotare l'ordine che i file con estensione OBJ vengono inviati al linker di individuare la posizione di altra versione del tipo di dati.  
  
### <a name="loader-lock-deadlock"></a>Deadlock del blocco del caricatore  
 In Visual Studio 2010 e versioni successive, il "deadlock del blocco del caricatore" può ancora verificarsi come nelle versioni precedenti, ma è deterministico e viene rilevato e segnalato in fase di esecuzione. Vedere [inizializzazione di assembly misti](../dotnet/initialization-of-mixed-assemblies.md) per informazioni dettagliate, istruzioni e soluzioni.  
  
### <a name="data-exports"></a>Esportazione di dati  
 L'esportazione di dati DLL è soggetta a errori e non è consigliata. Questo avviene perché la sezione di dati di una DLL non deve necessariamente essere inizializzato fino a quando non è stata eseguita la parte gestita della DLL. I metadati di riferimento con [# direttiva using](../preprocessor/hash-using-directive-cpp.md).  
  
### <a name="type-visibility"></a>Visibilità di tipi  
 I tipi nativi sono privati per impostazione predefinita. Ciò può comportare un tipo nativo non è visibile all'esterno della DLL. Correggere l'errore aggiungendo `public` a questi tipi.  
  
### <a name="floating-point-and-alignment-issues"></a>A virgola mobile e problemi di allineamento  
 `__controlfp` non è supportato in common language runtime (vedere [_control87, controlfp, \__control87_2](../c-runtime-library/reference/control87-controlfp-control87-2.md) per altre informazioni). CLR non rispetta inoltre [allineare](../cpp/align-cpp.md).  
  
### <a name="com-initialization"></a>Inizializzazione di COM  
 Common Language Runtime inizializza COM automaticamente quando viene inizializzato un modulo (quando COM viene inizializzato automaticamente tale operazione come MTA). Di conseguenza, in modo esplicito l'inizializzazione di COM genera codici restituiti, che indica che COM è già inizializzato. Il tentativo di inizializzare COM in modo esplicito con un modello di threading quando CLR è già inizializzato COM in un altro modello di threading può causare l'errore dell'applicazione.  
  
 Common language runtime Avvia COM come MTA per impostazione predefinita. Utilizzare [/CLRTHREADATTRIBUTE (Set CLR Thread Attribute)](../build/reference/clrthreadattribute-set-clr-thread-attribute.md) per modificare questa impostazione.  
  
### <a name="performance-issues"></a>Problemi relativi alle prestazioni  
 Si verifichi una riduzione delle prestazioni quando i metodi C++ nativi generati in MSIL vengono chiamati indirettamente (tramite puntatori di funzione o chiamate di funzioni virtuali). Per ulteriori informazioni, vedere [doppio thunk](../dotnet/double-thunking-cpp.md).  
  
 Quando si passa da codice nativo a codice MSIL, si noterà un aumento della dimensione del working set. Questo avviene perché common language runtime fornisce molte funzionalità per garantire che i programmi vengano eseguiti correttamente. Se il **/clr** non corretta esecuzione dell'applicazione, è consigliabile attivare C4793 (disattivato per impostazione predefinita), vedere [avviso del compilatore (livello 1 e 3) C4793](../error-messages/compiler-warnings/compiler-warning-level-1-and-3-c4793.md) per ulteriori informazioni.  
  
### <a name="program-crashes-on-shutdown"></a>Arresti anomali in fase di arresto  
 In alcuni casi, CLR possibile arresto del sistema prima del completamento del codice gestito è in esecuzione. Utilizzando `std::set_terminate` e `SIGTERM` può causare questo. Vedere [costanti signal](../c-runtime-library/signal-constants.md) e [set_terminate](../c-runtime-library/abnormal-termination.md) per ulteriori informazioni.  
  
## <a name="using-new-visual-c-features"></a>Utilizzo delle nuove funzionalità di Visual C++  
 Dopo l'applicazione consente di compilare, i collegamenti e viene eseguito, è possibile iniziare a utilizzare le funzionalità di .NET in qualsiasi modulo compilato con **/clr**. Per altre informazioni, vedere [Estensioni componenti per le piattaforme runtime](../windows/component-extensions-for-runtime-platforms.md).  
  
 Se si utilizza le estensioni gestite per C++, è possibile convertire il codice per utilizzare la nuova sintassi. Per informazioni dettagliate sulla conversione delle estensioni gestite per C++, vedere [C + + /CLI Migration Primer](../dotnet/cpp-cli-migration-primer.md).  
  
 Per informazioni sulla programmazione in Visual C++ .NET, vedere:  
  
-   [Programmazione .NET con C++/CLI (Visual C++)](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md)  
  
-   [Interoperabilità .NET e nativa](../dotnet/native-and-dotnet-interoperability.md)  
  
-   [Estensioni componenti per le piattaforme runtime](../windows/component-extensions-for-runtime-platforms.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Assembly misti (nativi e gestiti)](../dotnet/mixed-native-and-managed-assemblies.md)