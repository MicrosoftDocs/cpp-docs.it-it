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
ms.openlocfilehash: 0c21fe585049ebce6383c5d8f673704e7362cd72
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87225696"
---
# <a name="how-to-migrate-to-clr"></a>Procedura: eseguire la migrazione a /clr

In questo argomento vengono illustrati i problemi che si verificano durante la compilazione di codice nativo con **/CLR** (vedere [/CLR (compilazione Common Language Runtime)](../build/reference/clr-common-language-runtime-compilation.md) per ulteriori informazioni. **/CLR** consente a codice c++ nativo di richiamare e richiamare da assembly .NET oltre ad altro codice C++ nativo. Per ulteriori informazioni sui vantaggi della compilazione con **/CLR**, vedere [assembly misti (nativi e gestiti)](../dotnet/mixed-native-and-managed-assemblies.md) e [interoperabilità .NET e nativa](../dotnet/native-and-dotnet-interoperability.md) .

## <a name="known-issues-compiling-library-projects-with-clr"></a>Problemi noti relativi alla compilazione di progetti di libreria con/CLR

Visual Studio contiene alcuni problemi noti durante la compilazione di progetti di libreria con **/CLR**:

- Il codice può eseguire query sui tipi in fase di esecuzione con [CRuntimeClass:: FromName](../mfc/reference/cruntimeclass-structure.md#fromname). Tuttavia, se un tipo si trova in una dll MSIL (compilata con **/CLR**), la chiamata a `FromName` potrebbe non riuscire se si verifica prima dell'esecuzione dei costruttori statici nella DLL gestita (questo problema non verrà visualizzato se la chiamata FromName viene eseguita dopo l'esecuzione del codice nella DLL gestita). Per ovviare a questo problema, è possibile forzare la costruzione del costruttore statico gestito definendo una funzione nel file Managed. dll, esportandola e richiamandola dall'applicazione MFC nativa. Ad esempio:

    ```
    // MFC extension DLL Header file:
    __declspec( dllexport ) void EnsureManagedInitialization () {
       // managed code that won't be optimized away
       System::GC::KeepAlive(System::Int32::MaxValue);
    }
    ```

## <a name="compile-with-visual-c"></a>Compila con Visual C++

Prima di usare **/CLR** per qualsiasi modulo nel progetto, compilare e collegare il progetto nativo con Visual Studio 2010.

I passaggi seguenti, seguiti nell'ordine, forniscono il percorso più semplice per una compilazione **/CLR** . È importante compilare ed eseguire il progetto dopo ognuno di questi passaggi.

### <a name="versions-prior-to-visual-studio-2003"></a>Versioni precedenti a Visual Studio 2003

Se si esegue l'aggiornamento a Visual Studio 2010 da una versione precedente a Visual Studio 2003, è possibile che vengano visualizzati errori del compilatore correlati alla conformità allo standard C++ migliorata in Visual Studio 2003

### <a name="upgrading-from-visual-studio-2003"></a>Aggiornamento da Visual Studio 2003

I progetti creati in precedenza con Visual Studio 2003 devono essere prima compilati senza **/CLR** perché Visual Studio ha ora una maggiore conformità ANSI/ISO e alcune modifiche di rilievo. La modifica che probabilmente richiede la massima attenzione è rappresentata dalle [funzionalità di sicurezza in CRT](../c-runtime-library/security-features-in-the-crt.md). Il codice che usa CRT è molto probabile che generi avvisi di deprecazione. Questi avvisi possono essere eliminati, ma è preferibile eseguire la migrazione alle nuove [versioni con sicurezza avanzata delle funzioni CRT](../c-runtime-library/security-enhanced-versions-of-crt-functions.md) , perché forniscono una migliore sicurezza e possono rivelare problemi di sicurezza nel codice.

### <a name="upgrading-from-managed-extensions-for-c"></a>Aggiornamento da Estensioni gestite per C++

A partire da Visual Studio 2005, il codice scritto con Estensioni gestite per C++ non verrà compilato in **/CLR**.

## <a name="convert-c-code-to-c"></a>Converte il codice C in C++

Sebbene Visual Studio compili i file C, è necessario convertirli in C++ per una compilazione **/CLR** . Non è necessario modificare il nome file effettivo; è possibile usare **/TP** (vedere [/TC,/TP,/TC,/TP (specifica il tipo di file di origine)](../build/reference/tc-tp-tc-tp-specify-source-file-type.md). Si noti che anche se per **/CLR**sono necessari file di codice sorgente C++, non è necessario eseguire il refactoring del codice per usare paradigmi orientati a oggetti.

È molto probabile che il codice C richieda modifiche quando viene compilato come file C++. Le regole di indipendenza dai tipi C++ sono rigorose, pertanto le conversioni di tipi devono essere rese esplicite con i cast. Ad esempio, malloc restituisce un puntatore void, ma può essere assegnato a un puntatore a qualsiasi tipo in C con un cast:

```
int* a = malloc(sizeof(int));   // C code
int* b = (int*)malloc(sizeof(int));   // C++ equivalent
```

I puntatori a funzione sono anche rigorosamente indipendenti dai tipi in C++, quindi il codice C seguente richiede una modifica. In C++ è preferibile creare un oggetto **`typedef`** che definisce il tipo di puntatore a funzione e quindi usare tale tipo per eseguire il cast dei puntatori a funzione:

```
NewFunc1 = GetProcAddress( hLib, "Func1" );   // C code
typedef int(*MYPROC)(int);   // C++ equivalent
NewFunc2 = (MYPROC)GetProcAddress( hLib, "Func2" );
```

In C++ è inoltre necessario che le funzioni siano prototipi o completamente definite prima che sia possibile farvi riferimento o richiamarle.

Gli identificatori usati nel codice C che si verificano come parole chiave in C++, ad esempio **`virtual`** ,, **`new`** **`delete`** , **`bool`** , **`true`** , **`false`** e così via, devono essere rinominati. Questa operazione può essere eseguita in genere con semplici operazioni di ricerca e sostituzione.

```
COMObj1->lpVtbl->Method(COMObj, args);  // C code
COMObj2->Method(args);  // C++ equivalent
```

## <a name="reconfigure-project-settings"></a>Riconfigura impostazioni progetto

Dopo la compilazione e l'esecuzione del progetto in Visual Studio 2010, è necessario creare nuove configurazioni di progetto per **/CLR** anziché modificare le configurazioni predefinite. **/CLR** è incompatibile con alcune opzioni del compilatore e la creazione di configurazioni separate consente di compilare il progetto come nativo o gestito. Quando si seleziona **/CLR** nella finestra di dialogo Pagine delle proprietà, le impostazioni di progetto non compatibili con **/CLR** sono disabilitate (e le opzioni disabilitate non vengono ripristinate automaticamente se **/CLR** viene deselezionato successivamente).

### <a name="create-new-project-configurations"></a>Crea nuove configurazioni di progetto

È possibile usare l'opzione **Copia impostazioni da** nella finestra di **dialogo nuova configurazione progetto** (**Compila**  >  **Configuration Manager**  >  **Configurazione soluzione attiva**  >  **nuova**) per creare una configurazione di progetto in base alle impostazioni del progetto esistenti. Eseguire questa operazione una volta per la configurazione di debug e una volta per la configurazione del rilascio. Le modifiche successive possono quindi essere applicate solo alle configurazioni specifiche di **/CLR** , lasciando intatte le configurazioni originali del progetto.

I progetti che usano regole di compilazione personalizzate possono richiedere particolare attenzione.

Questo passaggio ha implicazioni diverse per i progetti che usano Makefile. In questo caso può essere configurata una destinazione di compilazione separata oppure è possibile creare una versione specifica della compilazione **/CLR** da una copia del originale.

### <a name="change-project-settings"></a>Modificare le impostazioni del progetto

è possibile selezionare **/CLR** nell'ambiente di sviluppo seguendo le istruzioni in [/CLR (compilazione Common Language Runtime)](../build/reference/clr-common-language-runtime-compilation.md). Come indicato in precedenza, in questo passaggio verranno disabilitate automaticamente le impostazioni di progetto in conflitto.

> [!NOTE]
> Quando si aggiorna una libreria gestita o un progetto di servizio Web da Visual Studio 2003, l'opzione del compilatore **/ZL** viene aggiunta alla pagina delle proprietà della **riga di comando** . Verrà generato LNK2001. Rimuovere **/ZL** dalla pagina delle proprietà della **riga di comando** per risolverlo. Per ulteriori informazioni, vedere [/Zl (omette il nome della libreria predefinita)](../build/reference/zl-omit-default-library-name.md) e [impostare le proprietà del compilatore e della compilazione](../build/working-with-project-properties.md) . In alternativa, aggiungere msvcrt. lib e msvcmrt. lib alla proprietà **dipendenze aggiuntive** del linker.

Per i progetti compilati con makefile, le opzioni del compilatore incompatibili devono essere disabilitate manualmente una volta aggiunto **/CLR** . Per informazioni sulle opzioni del compilatore che non sono compatibili con **/CLR**, vedere le[restrizioni](../build/reference/clr-restrictions.md) relative a/CLR.

### <a name="precompiled-headers"></a>Intestazioni precompilate

Le intestazioni precompilate sono supportate in **/CLR**. Tuttavia, se si compilano solo alcuni file CPP con **/CLR** (compilando il resto come nativo), saranno necessarie alcune modifiche perché le intestazioni precompilate generate con **/CLR** non sono compatibili con quelle generate senza **/CLR**. Questa incompatibilità è dovuta al fatto che **/CLR** genera e richiede metadati. I moduli compilati **/CLR** non possono quindi usare intestazioni precompilate che non includono metadati e i moduli non **/CLR** non possono usare file di intestazione precompilata che contengono metadati.

Il modo più semplice per compilare un progetto in cui alcuni moduli sono compilati **/CLR** consiste nel disabilitare completamente le intestazioni precompilate. Nella finestra di dialogo Pagine delle proprietà del progetto aprire il nodo C/C++ e selezionare intestazioni precompilate. Modificare quindi la proprietà Crea/Usa intestazioni precompilate in "non usando intestazioni precompilate".

Tuttavia, in particolare per i progetti di grandi dimensioni, le intestazioni precompilate forniscono una maggiore velocità di compilazione, quindi la disabilitazione di questa funzionalità non è auspicabile. In questo caso è preferibile configurare i file **/CLR** e non **/CLR** per l'uso di intestazioni precompilate separate. Questa operazione può essere eseguita in un unico passaggio selezionando i moduli per la compilazione **/CLR** usando **Esplora soluzioni**, facendo clic con il pulsante destro del mouse sul gruppo e scegliendo Proprietà. Modificare quindi le proprietà Crea/Usa PCH tramite file e file di intestazione precompilata in modo da usare rispettivamente un nome file di intestazione e un file PCH diversi.

## <a name="fixing-errors"></a>Correzione degli errori

La compilazione con **/CLR** può causare errori del compilatore, del linker o del runtime. In questa sezione vengono illustrati i problemi più comuni.

### <a name="metadata-merge"></a>Unione di metadati

Diverse versioni dei tipi di dati possono causare un errore del linker perché i metadati generati per i due tipi non corrispondono. Questo problema si verifica in genere quando i membri di un tipo sono definiti in modo condizionale, ma le condizioni non sono le stesse per tutti i file CPP che usano il tipo. In questo caso si verifica un errore del linker, che segnala solo il nome del simbolo e il nome del secondo file OBJ in cui è stato definito il tipo. Spesso è utile ruotare l'ordine di invio dei file OBJ al linker per individuare il percorso dell'altra versione del tipo di dati.

### <a name="loader-lock-deadlock"></a>Deadlock blocco caricatore

Il "deadlock del blocco del caricatore" può verificarsi, ma è deterministico e viene rilevato e segnalato in fase di esecuzione. Per informazioni dettagliate, istruzioni e soluzioni, vedere [inizializzazione di assembly misti](../dotnet/initialization-of-mixed-assemblies.md) .

### <a name="data-exports"></a>Esportazioni di dati

L'esportazione dei dati DLL è soggetta a errori e non è consigliata. Ciò è dovuto al fatto che la sezione dei dati di una DLL non è garantita per essere inizializzata fino a quando non è stata eseguita una parte gestita della DLL. Metadati di riferimento con [#using direttiva](../preprocessor/hash-using-directive-cpp.md).

### <a name="type-visibility"></a>Visibilità di tipi

I tipi nativi sono privati per impostazione predefinita. Questo può comportare un tipo nativo che non è visibile all'esterno della DLL. Risolvere l'errore aggiungendo **`public`** a questi tipi.

### <a name="floating-point-and-alignment-issues"></a>Problemi relativi a virgola mobile e allineamento

`__controlfp`non è supportato nella Common Language Runtime (vedere [_control87, _controlfp \_ _control87_2](../c-runtime-library/reference/control87-controlfp-control87-2.md) per ulteriori informazioni). CLR non rispetta inoltre l' [allineamento](../cpp/align-cpp.md).

### <a name="com-initialization"></a>Inizializzazione COM

Common Language Runtime inizializza automaticamente i componenti COM quando un modulo viene inizializzato (quando COM viene inizializzato automaticamente e viene eseguito come MTA). Di conseguenza, l'inizializzazione esplicita di COM restituisce codici restituiti che indicano che COM è già inizializzato. Il tentativo di inizializzare in modo esplicito COM con un modello di threading quando CLR ha già inizializzato COM su un altro modello di threading può causare un errore dell'applicazione.

Per impostazione predefinita, il Common Language Runtime avvia COM come MTA; usare [/CLRTHREADATTRIBUTE (Set CLR Thread Attribute)](../build/reference/clrthreadattribute-set-clr-thread-attribute.md) per modificare questo.

### <a name="performance-issues"></a>Problemi di prestazioni

È possibile che si verifichi una riduzione delle prestazioni quando i metodi C++ nativi generati in MSIL vengono chiamati indirettamente (chiamate di funzioni virtuali o con puntatori a funzione). Per ulteriori informazioni, vedere [doppio thunk](../dotnet/double-thunking-cpp.md).

Quando si passa da nativo a MSIL, si noterà un aumento delle dimensioni del working set. Ciò è dovuto al fatto che il Common Language Runtime fornisce molte funzionalità per garantire la corretta esecuzione dei programmi. Se l'applicazione **/CLR** non viene eseguita correttamente, è possibile abilitare C4793 (disattivata per impostazione predefinita). per ulteriori informazioni, vedere [Avviso del compilatore (livello 1 e 3) C4793](../error-messages/compiler-warnings/compiler-warning-level-1-and-3-c4793.md) .

### <a name="program-crashes-on-shutdown"></a>Arresto anomalo del programma in corso

In alcuni casi, CLR può essere arrestato prima del completamento dell'esecuzione del codice gestito. `std::set_terminate`L'uso di e `SIGTERM` può causare questa operazione. Per ulteriori informazioni, vedere [costanti Signal](../c-runtime-library/signal-constants.md) e [set_terminate](../c-runtime-library/abnormal-termination.md) .

## <a name="using-new-visual-c-features"></a>Uso delle nuove funzionalità di Visual C++

Dopo che l'applicazione è stata compilata, collegata ed eseguita, è possibile iniziare a usare le funzionalità di .NET in qualsiasi modulo compilato con **/CLR**. Per altre informazioni, vedere [Estensioni componenti per le piattaforme runtime](../extensions/component-extensions-for-runtime-platforms.md).

Per informazioni sulla programmazione .NET in Visual C++ vedere:

- [Programmazione .NET con C++/CLI (Visual C++)](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md)

- [Interoperabilità .NET e nativa](../dotnet/native-and-dotnet-interoperability.md)

- [Estensioni componenti per le piattaforme runtime](../extensions/component-extensions-for-runtime-platforms.md)

## <a name="see-also"></a>Vedere anche

[Assembly misti (nativi e gestiti)](../dotnet/mixed-native-and-managed-assemblies.md)
