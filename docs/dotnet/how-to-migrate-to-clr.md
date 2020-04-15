---
title: 'Procedura: Eseguire la migrazione a -clr'
ms.custom: get-started-article
ms.date: 09/18/2018
helpviewer_keywords:
- upgrading Visual C++ applications, /clr compiler option
- compiling native code [C++]
- interoperability [C++], /clr compiler option
- interop [C++], /clr compiler option
- migration [C++], /clr compiler option
- /clr compiler option [C++], porting to
ms.assetid: c9290b8b-436a-4510-8b56-eae51f4a9afc
ms.openlocfilehash: 339b1f3172d8b82ece3e98f117f53ed399cbd4e2
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81376073"
---
# <a name="how-to-migrate-to-clr"></a>Procedura: eseguire la migrazione a /clr

In questo argomento vengono illustrati i problemi che si verificano durante la compilazione di codice nativo con **/clr** (vedere [/clr (compilazione Common Language Runtime)](../build/reference/clr-common-language-runtime-compilation.md) per ulteriori informazioni). **/clr** consente di richiamare il codice nativo di C, ad essere richiamato dagli assembly .NET, oltre ad altri codici nativi di C. Per ulteriori informazioni sui vantaggi della compilazione con **/clr,** vedere [Assembly misti (nativi e gestiti)](../dotnet/mixed-native-and-managed-assemblies.md) e [Interoperabilità nativa e .NET.](../dotnet/native-and-dotnet-interoperability.md)

## <a name="known-issues-compiling-library-projects-with-clr"></a>Problemi noti relativi alla compilazione di progetti di libreria con /clrKnown Issues Compiling Library Projects with /clr

Visual Studio contiene alcuni problemi noti durante la compilazione di progetti di libreria con **/clr**:

- Il codice può eseguire query sui tipi in fase di esecuzione con [CRuntimeClass::FromName](../mfc/reference/cruntimeclass-structure.md#fromname). Tuttavia, se un tipo si trova in una DLL MSIL (compilata con **/clr**), la chiamata a `FromName` potrebbe non riuscire se si verifica prima dell'esecuzione dei costruttori statici nella DLL gestita (questo problema non si verifica se la chiamata a FromName si verifica dopo l'esecuzione del codice nella dll gestita). Per risolvere questo problema, è possibile forzare la costruzione del costruttore statico gestito definendo una funzione nella DLL gestita, esportandola e richiamandola dall'applicazione MFC nativa. Ad esempio:

    ```
    // MFC extension DLL Header file:
    __declspec( dllexport ) void EnsureManagedInitialization () {
       // managed code that won't be optimized away
       System::GC::KeepAlive(System::Int32::MaxValue);
    }
    ```

## <a name="compile-with-visual-c"></a>Compilare con Visual C

Prima di usare **/clr** in qualsiasi modulo del progetto, compilare e collegare il progetto nativo con Visual Studio 2010.

I passaggi seguenti, seguiti nell'ordine, forniscono il percorso più semplice per una compilazione **/clr.** È importante compilare ed eseguire il progetto dopo ognuno di questi passaggi.

### <a name="versions-prior-to-visual-studio-2003"></a>Versioni precedenti a Visual Studio 2003

Se si esegue l'aggiornamento a Visual Studio 2010 da una versione precedente a Visual Studio 2003, è possibile che vengano visualizzati errori del compilatore correlati alla conformità standard di C

### <a name="upgrading-from-visual-studio-2003"></a>Aggiornamento da Visual Studio 2003

I progetti compilati in precedenza con Visual Studio 2003 devono prima essere compilati senza **/clr** poiché Visual Studio ora ha aumentato la conformità ANSI/ISO e alcune modifiche di rilievo. La modifica che probabilmente richiede la massima attenzione è Funzionalità di [protezione in CRT](../c-runtime-library/security-features-in-the-crt.md). È molto probabile che il codice che usa LA libreria CRT produca avvisi di deprecazione. Questi avvisi possono essere eliminati, ma è preferibile eseguire la migrazione alle nuove [versioni con sicurezza avanzata delle funzioni CRT,](../c-runtime-library/security-enhanced-versions-of-crt-functions.md) in quanto forniscono una maggiore sicurezza e possono rivelare problemi di sicurezza nel codice.

### <a name="upgrading-from-managed-extensions-for-c"></a>Aggiornamento dalle estensioni gestite per C

A partire da Visual Studio 2005, il codice scritto con le estensioni gestite per C, non verrà compilato in **/clr**.

## <a name="convert-c-code-to-c"></a>Convertire il codice C in C

Anche se Visual Studio compilerà i file C, è necessario convertirli in C , per una compilazione **/clr.** Il nome file effettivo non deve essere modificato; è possibile utilizzare **/Tp** (vedere [/Tc, /Tp, /TC, /TP (Specifica](../build/reference/tc-tp-tc-tp-specify-source-file-type.md)il tipo di file di origine) .) Si noti che, anche se per **/clr**sono necessari file di codice sorgente c'è necessario, non è necessario fare di nuovo il factoring del codice per utilizzare paradigmi orientati agli oggetti.

È molto probabile che il codice C richieda modifiche quando viene compilato con un file in linguaggio C. Le regole di indipendenza dai tipi di C, ovvero il linguaggio C, sono rigorose, pertanto le conversioni dei tipi devono essere rese esplicite con i cast. Ad esempio, malloc restituisce un puntatore void, ma può essere assegnato a un puntatore a qualsiasi tipo in C con un cast:For example, malloc returns a void pointer, but can be assigned to a pointer to any type in C with a cast:

```
int* a = malloc(sizeof(int));   // C code
int* b = (int*)malloc(sizeof(int));   // C++ equivalent
```

I puntatori a funzione sono anche rigorosamente indipendenti dai tipi in C, pertanto il codice C seguente richiede modifiche. È consigliabile creare un `typedef` oggetto che definisce il tipo di puntatore a funzione e quindi utilizzare tale tipo per eseguire il cast dei puntatori a funzione:

```
NewFunc1 = GetProcAddress( hLib, "Func1" );   // C code
typedef int(*MYPROC)(int);   // C++ equivalent
NewFunc2 = (MYPROC)GetProcAddress( hLib, "Func2" );
```

È inoltre necessario che le funzioni vengano prototipate o definite completamente prima di poter essere referenziate o richiamate.

Gli identificatori utilizzati nel codice C che sono parole chiave in C, ad esempio **virtual**, **new**, **delete**, **bool**, **true**, **false**e così via, devono essere rinominati. Questa operazione può essere eseguita in genere con semplici operazioni di ricerca e sostituzione.

```
COMObj1->lpVtbl->Method(COMObj, args);  // C code
COMObj2->Method(args);  // C++ equivalent
```

## <a name="reconfigure-project-settings"></a>Riconfigurare le impostazioni del progetto

Dopo che il progetto viene compilato ed eseguito in Visual Studio 2010 è necessario creare nuove configurazioni di progetto per **/clr** anziché modificare le configurazioni predefinite. **/clr** non è compatibile con alcune opzioni del compilatore e la creazione di configurazioni separate consente di compilare il progetto come nativo o gestito. Quando si seleziona **/clr** nella finestra di dialogo delle pagine delle proprietà, le impostazioni di progetto non compatibili con **/clr** vengono disabilitate (e le opzioni disabilitate non vengono ripristinate automaticamente se **/clr** viene successivamente deselezionata).

### <a name="create-new-project-configurations"></a>Creazione di nuove configurazioni di progetto

È possibile utilizzare l'opzione **Copia impostazioni da** nella finestra di **dialogo Nuova configurazione progetto** (Nuovo**configurazione**attiva **-Build** > **Configuration** > **Configuration** > ) per creare una configurazione di progetto basata sulle impostazioni di progetto esistenti. Eseguire questa operazione una volta per la configurazione di Debug e una volta per la configurazione di rilascio. Le modifiche successive possono quindi essere applicate solo alle configurazioni specifiche di **/clr,** lasciando intatte le configurazioni di progetto originali.

I progetti che utilizzano regole di compilazione personalizzate possono richiedere particolare attenzione.

Questo passaggio ha implicazioni diverse per i progetti che utilizzano makefiles. In questo caso è possibile configurare una destinazione di compilazione separata oppure creare una versione specifica della compilazione **/clr** da una copia dell'originale.

### <a name="change-project-settings"></a>Modifica delle impostazioni del progetto

**/clr** può essere selezionato nell'ambiente di sviluppo seguendo le istruzioni in [/clr (Compilazione Common Language Runtime)](../build/reference/clr-common-language-runtime-compilation.md). Come accennato in precedenza, questo passaggio disabiliterà automaticamente le impostazioni di progetto in conflitto.

> [!NOTE]
> Quando si aggiorna una libreria gestita o un progetto di servizio Web da Visual Studio 2003, l'opzione del compilatore **//l** verrà aggiunta alla pagina delle proprietà Riga di **comando.** Ciò causerà l'errore LNK2001. Per risolvere il **problema,** **rimuovere l'opzione /ol** dalla pagina delle proprietà Riga di comando. Per ulteriori informazioni, vedere [//l (Omettere il nome della libreria predefinita)](../build/reference/zl-omit-default-library-name.md) e [Impostare il compilatore e la compilazione.](../build/working-with-project-properties.md) In alternativa, aggiungere msvcrt.lib e msvcmrt.lib alla proprietà **Dipendenze aggiuntive** del linker.

Per i progetti compilati con makefile, le opzioni del compilatore incompatibili devono essere disabilitate manualmente dopo l'aggiunta di **/clr.** Vedere /[/clr Restrizioni](../build/reference/clr-restrictions.md) per informazioni sulle opzioni del compilatore non compatibili con **/clr**.

### <a name="precompiled-headers"></a>Intestazioni precompilate

Le intestazioni precompilate sono supportate in **/clr**. Tuttavia, se si compilano solo alcuni dei file CPP con **/clr** (compilando il resto come nativo) saranno necessarie alcune modifiche perché le intestazioni precompilate generate con **/clr** non sono compatibili con quelle generate senza **/clr**. Questa incompatibilità è dovuta al fatto che **/clr** genera e richiede metadati. I moduli compilati **/clr** non possono pertanto utilizzare intestazioni precompilate che non includono metadati e i moduli non **/clr** non possono utilizzare file di intestazione precompilati che contengono metadati.

Il modo più semplice per compilare un progetto in cui alcuni moduli vengono compilati **/clr** consiste nel disabilitare completamente le intestazioni precompilate. (Nella finestra di dialogo Pagine delle proprietà del progetto, aprire il nodo C/C, quindi selezionare Intestazioni precompilate. Modificare quindi la proprietà Crea/Usa intestazioni precompilate in "Non utilizzare intestazioni precompilate".)

Tuttavia, in particolare per i progetti di grandi dimensioni, le intestazioni precompilate forniscono una velocità di compilazione molto migliore, pertanto la disattivazione di questa funzionalità non è auspicabile. In questo caso è consigliabile configurare i file **/clr** e non **/clr** per l'utilizzo di intestazioni precompilate separate. Questa operazione può essere eseguita in un unico passaggio selezionando più moduli da compilare **/clr** utilizzando **Esplora soluzioni**, facendo clic con il pulsante destro del mouse sul gruppo e scegliendo Proprietà. Modificare quindi entrambe le proprietà Crea/Usa PCH tramite file e File di intestazione precompilato per utilizzare rispettivamente un nome di file di intestazione e un file PCH diversi.

## <a name="fixing-errors"></a>Correzione degli erroriFixing Errors

La compilazione con **/clr** può causare errori di compilatore, linker o runtime. In questa sezione vengono illustrati i problemi più comuni.

### <a name="metadata-merge"></a>Unione dei metadati

Versioni diverse dei tipi di dati possono causare l'esito negativo del linker perché i metadati generati per i due tipi non corrispondono. In genere ciò si verifica quando i membri di un tipo sono definiti in modo condizionale, ma le condizioni non sono le stesse per tutti i file CPP che utilizzano il tipo. In questo caso il linker ha esito negativo, segnalando solo il nome del simbolo e il nome del secondo file OBJ in cui è stato definito il tipo. È spesso utile ruotare l'ordine in cui i file OBJ vengono inviati al linker per individuare la posizione dell'altra versione del tipo di dati.

### <a name="loader-lock-deadlock"></a>Deadlock blocco caricatore

Il "deadlock di blocco del caricatore" può verificarsi, ma è deterministico e viene rilevato e segnalato in fase di esecuzione. Per informazioni [dettagliate,](../dotnet/initialization-of-mixed-assemblies.md) istruzioni e soluzioni, vedere Inizializzazione di assembly misti.

### <a name="data-exports"></a>Esportazioni di dati

L'esportazione dei dati DLL è soggetta a errori e non è consigliata. Ciò è dovuto al fatto che non è garantito che la sezione dati di una DLL venga inizializzata fino a quando non è stata eseguita una parte gestita della DLL. Metadati di riferimento con [#using direttiva](../preprocessor/hash-using-directive-cpp.md).

### <a name="type-visibility"></a>Visibilità di tipi

I tipi nativi sono privati per impostazione predefinita. Ciò può comportare un tipo nativo non è visibile all'esterno della DLL. Risolvere questo errore `public` aggiungendo a questi tipi.

### <a name="floating-point-and-alignment-issues"></a>Problemi relativi a punti mobili e allineamento

`__controlfp`non è supportato in Common Language Runtime (vedere [_control87, _controlfp \__control87_2](../c-runtime-library/reference/control87-controlfp-control87-2.md) per ulteriori informazioni). CLR inoltre non rispetterà [align](../cpp/align-cpp.md).

### <a name="com-initialization"></a>Inizializzazione COM

Common Language Runtime inizializza AUTOMATICAMENTE COM quando un modulo viene inizializzato (quando COM viene inizializzato automaticamente viene eseguito come MTA). Di conseguenza, l'inizializzazione esplicita di COM produce codici restituiti che indicano che COM è già inizializzato. Il tentativo di inizializzare in modo esplicito COM con un modello di threading quando CLR ha già inizializzato COM in un altro modello di threading può causare un errore dell'applicazione.

Common Language Runtime avvia COM come MTA per impostazione predefinita; utilizzare [/CLRTHREADATTRIBUTE (Imposta attributo thread CLR)](../build/reference/clrthreadattribute-set-clr-thread-attribute.md) per modificarlo.

### <a name="performance-issues"></a>Problemi di prestazioni

È possibile che le prestazioni siano diminuite quando i metodi nativi di C, generati da MSIL, generati in MSIL vengono chiamati indirettamente (chiamate di funzione virtuali o utilizzando puntatori a funzione). Per ulteriori informazioni, consultate [Doppio Thunking](../dotnet/double-thunking-cpp.md).

Quando si passa da nativo a MSIL, si noterà un aumento delle dimensioni del working set. Ciò è dovuto al fatto che Common Language Runtime fornisce molte funzionalità per garantire che i programmi vengano eseguiti correttamente. Se l'applicazione **/clr** non viene eseguita correttamente, è possibile abilitare l'errore C4793 (disattivato per impostazione predefinita), vedere [Avviso del compilatore (livello 1 e 3) C4793](../error-messages/compiler-warnings/compiler-warning-level-1-and-3-c4793.md) per ulteriori informazioni.

### <a name="program-crashes-on-shutdown"></a>Arresti anomali del programma all'arresto

In alcuni casi, CLR può arrestarsi prima del termine dell'esecuzione del codice gestito. Utilizzando `std::set_terminate` `SIGTERM` e può causare questo. Per ulteriori informazioni, vedere Costanti e [set_terminate](../c-runtime-library/abnormal-termination.md) del [segnale.](../c-runtime-library/signal-constants.md)

## <a name="using-new-visual-c-features"></a>Utilizzo delle nuove funzionalità di Visual C

Dopo la compilazione, i collegamenti e le esecuzioni dell'applicazione, è possibile iniziare a utilizzare le funzionalità .NET in qualsiasi modulo compilato con **/clr**. Per altre informazioni, vedere [Estensioni componenti per le piattaforme runtime](../extensions/component-extensions-for-runtime-platforms.md).

Per informazioni sulla programmazione .NET in Visual C

- [Programmazione di .NET con C/CLI (Visual C](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md)

- [Interoperabilità nativa e .NET](../dotnet/native-and-dotnet-interoperability.md)

- [Estensioni componenti per le piattaforme runtime](../extensions/component-extensions-for-runtime-platforms.md)

## <a name="see-also"></a>Vedere anche

[Assembly misti (nativi e gestiti)](../dotnet/mixed-native-and-managed-assemblies.md)
