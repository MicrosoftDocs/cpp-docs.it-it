---
title: 'Procedura: migrare a - clr'
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
ms.openlocfilehash: d293b6c3795b9abe57da0c6bcb92dd3f1de810ee
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50454444"
---
# <a name="how-to-migrate-to-clr"></a>Procedura: eseguire la migrazione a /clr

In questo argomento vengono illustrati i problemi che si verificano durante la compilazione di codice nativo con **/clr** (vedere [/clr (compilazione Common Language Runtime)](../build/reference/clr-common-language-runtime-compilation.md) per altre informazioni). **/CLR** consente codice C++ nativo richiamare e richiamato dall'assembly .NET oltre a altro codice C++ nativo. Visualizzare [assembly misti (nativi e gestiti)](../dotnet/mixed-native-and-managed-assemblies.md) e [interoperabilità .NET e nativa](../dotnet/native-and-dotnet-interoperability.md) per altre informazioni sui vantaggi della compilazione con **/clr**.

## <a name="known-issues-compiling-library-projects-with-clr"></a>Noti problemi di compilazione di progetti di libreria con /clr

Visual Studio contiene alcuni problemi noti durante la compilazione di progetti di libreria con **/clr**:

- Il codice può eseguire query su tipi in fase di esecuzione con [CRuntimeClass:: FromName](../mfc/reference/cruntimeclass-structure.md#fromname). Tuttavia, se è un tipo in un file dll MSIL (compilati con **/clr**), la chiamata a `FromName` potrebbe non riuscire se si verifica prima dell'esecuzione dei costruttori statici nella DLL gestita (non si vedranno questo problema se la chiamata a FromName accade dopo il codice contiene eseguire nella DLL gestita). Per risolvere questo problema, è possibile forzare la costruzione del costruttore statico gestita dalla definizione di una funzione nella DLL gestita, esportarlo e chiamata da applicazione nativa di MFC. Ad esempio:

    ```
    // MFC extension DLL Header file:
    __declspec( dllexport ) void EnsureManagedInitialization () {
       // managed code that won't be optimized away
       System::GC::KeepAlive(System::Int32::MaxValue);
    }
    ```

## <a name="compile-with-visual-c"></a>Eseguire la compilazione con Visual C++

Prima di usare **/clr** in tutti i moduli nel progetto, compilare e collegare il progetto nativo con Visual Studio 2010.

I passaggi seguenti, seguiti nell'ordine, specificare il percorso più semplice di un **/clr** compilazione. È importante compilare ed eseguire il progetto dopo ognuno di questi passaggi.

### <a name="versions-prior-to-visual-c-2003"></a>Versioni precedenti a Visual C++ 2003

Se esegue l'aggiornamento a Visual Studio 2010 una versione precedente di Visual C++ 2003, è possibile riscontrare errori del compilatore relativi alla conformità di standard C++ avanzato in Visual C++ 2003

### <a name="upgrading-from-visual-c-2003"></a>L'aggiornamento da Visual C++ 2003

I progetti creati con Visual C++ 2003 precedenti anche prima di tutto devono essere compilati senza **/clr** come Visual Studio ora dispone di una maggiore conformità agli standard ANSI/ISO e alcune modifiche di rilievo. La modifica che è probabile che richiedono più attenzione [funzionalità di sicurezza in CRT](../c-runtime-library/security-features-in-the-crt.md). Codice che usa la libreria CRT è molto probabile che gli avvisi di deprecazione. Questi avvisi possono essere eliminati, ma la migrazione al nuovo [sicurezza avanzata di versioni di funzioni CRT](../c-runtime-library/security-enhanced-versions-of-crt-functions.md) è preferibile, in quanto forniscono una migliore sicurezza e può rivelare problemi di sicurezza nel codice.

### <a name="upgrading-from-managed-extensions-for-c"></a>Aggiornamento dalle estensioni gestite per C++

A partire da Visual Studio 2005, non verrà compilato il codice scritto con le estensioni gestite per C++ in **/clr**.

## <a name="convert-c-code-to-c"></a>Converti il codice C a C++

Anche se Visual Studio compila i file C, è necessario convertirli in C++ per un **/clr** compilazione. Il nome effettivo del file non dovrà essere modificato. è possibile usare **/Tp** (vedere [/Tc, /Tp, /TC, /TP (specifica del tipo di File di origine)](../build/reference/tc-tp-tc-tp-specify-source-file-type.md).) Si noti che anche se sono necessario per il file di codice sorgente C++ **/clr**, non è necessario effettuare il refactoring del codice per utilizzare paradigmi orientate a oggetti.

Codice C è molto probabile che richiedono modifiche quando viene compilato come file C++. Regole di indipendenza del linguaggio C++ sono fissi, conversioni di tipi devono essere reso con cast esplicite. Ad esempio, malloc restituisce un puntatore void, ma può essere assegnato a un puntatore a qualsiasi tipo c con un cast:

```
int* a = malloc(sizeof(int));   // C code
int* b = (int*)malloc(sizeof(int));   // C++ equivalent
```

I puntatori a funzione sono anche rigorosamente indipendente dai tipi in C++, in modo che il codice C seguente richiede la modifica. In C++ è consigliabile creare un `typedef` che definisce il tipo puntatore a funzione e quindi usare tale tipo per eseguire il cast di puntatori a funzione:

```
NewFunc1 = GetProcAddress( hLib, "Func1" );   // C code
typedef int(*MYPROC)(int);   // C++ equivalent
NewFunc2 = (MYPROC)GetProcAddress( hLib, "Func2" );
```

Il linguaggio C++ richiede anche che funzioni di essere completamente definita o la creazione di prototipi prima che possano essere fatto riferimento o richiamati.

Gli identificatori utilizzati nel codice C che sono costituiti da parole chiave c++ (ad esempio **virtuale**, **nuove**, **Elimina**, **bool**, **true** , **false**e così via) deve essere rinominato. Questa operazione può in genere essere eseguita con semplici operazioni di ricerca e sostituzione.

```
COMObj1->lpVtbl->Method(COMObj, args);  // C code
COMObj2->Method(args);  // C++ equivalent
```

## <a name="reconfigure-project-settings"></a>Riconfigurare le impostazioni di progetto

Dopo che il progetto compilato ed eseguito in Visual Studio 2010 è necessario creare nuove configurazioni di progetto per **/clr** anziché modificare le configurazioni predefinite. **/CLR** è incompatibile con alcune opzioni del compilatore e la creazione di configurazioni separate consente di compilare il progetto come nativo o gestito. Quando **/clr** sia selezionata nella finestra di dialogo Pagine delle proprietà, impostazioni del progetto non è compatibile con **/clr** sono disabilitati (e opzioni disabilitate non vengono ripristinate automaticamente se **/clr** non è stato selezionato successivamente).

### <a name="create-new-project-configurations"></a>Crea nuove configurazioni progetto

È possibile usare **Copia impostazioni da** opzione il **nuova finestra di dialogo di configurazione di progetto** (**compilare** > **diConfigurationManager**  >  **Configurazione soluzione attiva** > **New**) per creare una configurazione di progetto in base alle impostazioni di progetto esistente. Eseguire questa operazione una sola volta per la configurazione di Debug e una volta per la configurazione di rilascio. Modifiche successive possono quindi essere applicate per il **/clr** -configurazioni specifiche solo, lasciando invariate le configurazioni di progetto originale.

I progetti che usano regole di compilazione personalizzati potrebbero richiedere particolare attenzione.

Questo passaggio ha diverse implicazioni per i progetti che usano makefile. In questo caso è possibile configurare una destinazione di compilazione separata o versione specifica per **/clr** compilazione può essere creata da una copia dell'originale.

### <a name="change-project-settings"></a>Modificare le impostazioni di progetto

**/CLR** può essere selezionato nell'ambiente di sviluppo seguendo le istruzioni riportate in [/clr (compilazione Common Language Runtime)](../build/reference/clr-common-language-runtime-compilation.md). Come accennato in precedenza, questo passaggio verrà disabilitato automaticamente le impostazioni di progetto in conflitto.

> [!NOTE]
>  Durante l'aggiornamento di una libreria gestita o un progetto di servizio web da Visual C++ 2003, il **/Zl** will opzione del compilatore aggiunto alle **della riga di comando** pagina delle proprietà. Ciò determina l'errore LNK2001. Rimuovere **/Zl** dalle **della riga di comando** pagina delle proprietà da risolvere. Visualizzare [/Zl (Omit Default Library Name)](../build/reference/zl-omit-default-library-name.md) e [funziona con le proprietà del progetto](../ide/working-with-project-properties.md) per altre informazioni. In alternativa, aggiungere msvcrt. lib e msvcmrt. lib al linker **dipendenze aggiuntive** proprietà.

Per i progetti creati con makefile, opzioni del compilatore incompatibile devono essere disabilitate manualmente dopo aver **/clr** viene aggiunto. Vedere /[limitazioni di /clr](../build/reference/clr-restrictions.md) per informazioni sulle opzioni del compilatore che non sono compatibili con **/clr**.

### <a name="precompiled-headers"></a>Intestazioni precompilate

In sono supportate le intestazioni precompilate **/clr**. Tuttavia, se si compilano alcuni dei file CPP con **/clr** (compilare il resto come nativi) alcune modifiche sarà necessarie perché le intestazioni precompilate generate con **/clr** non sono compatibili con quelli generata senza **/clr**. Questa incompatibilità è dovuta al fatto che **/clr** genera l'errore e richiede i metadati. I moduli compilati **/clr** non possono quindi utilizzare le intestazioni precompilate che non includono i metadati e non **/clr** moduli non è possibile usare file di intestazione precompilata che contengono i metadati.

Il modo più semplice per compilare un progetto vengono compilati alcuni moduli **/clr** consiste nel disabilitare completamente le intestazioni precompilate. (Nella finestra di dialogo Pagine delle proprietà del progetto, aprire il nodo C/C++ e selezionare le intestazioni precompilate. Quindi modificare la proprietà Crea/Usa intestazione precompilata per "Senza intestazioni precompilate".)

Tuttavia, in particolare per progetti di grandi dimensioni, le intestazioni precompilate forniscono più elevata velocità di compilazione, in modo da disabilitare questa funzionalità non è consigliabile. In questo caso è consigliabile configurare il **/clr** e non **/clr** i file di utilizzo delle intestazioni precompilate separate. Questa operazione può essere eseguita in un unico passaggio, selezionano più moduli da compilare **/clr** utilizzando **Esplora soluzioni**, pulsante destro del mouse sul gruppo e scegliendo proprietà. Quindi modificare le proprietà di File di intestazione precompilato sia Crea/Usa PCH tramite File per usare rispettivamente il nome di file di intestazione diverso e alcun file PCH.

## <a name="fixing-errors"></a>Correzione degli errori

La compilazione con **/clr** può comportare errori del compilatore, linker o runtime. Questa sezione vengono illustrati i problemi più comuni.

### <a name="metadata-merge"></a>Unione dei metadati

Versioni diverse dei tipi di dati possono causare al linker di non riuscire perché i metadati generati per i due tipi non corrispondono. (Ciò è causato generalmente quando i membri di un tipo sono definiti in modo condizionale, ma le condizioni non sono uguali per tutti i file CPP che utilizzano il tipo.) In questo caso il linker ha esito negativo, solo il nome del simbolo e il nome del secondo file OBJ in cui è stato definito il tipo di reporting. Spesso è utile ruotare l'ordine che i file OBJ vengono inviati al linker per individuare la posizione di altra versione del tipo di dati.

### <a name="loader-lock-deadlock"></a>Deadlock di blocco del caricatore

Il "deadlock del blocco del caricatore" possono verificarsi, ma è deterministico e vengono rilevati e segnalati in fase di esecuzione. Visualizzare [Initialization of Mixed Assemblies](../dotnet/initialization-of-mixed-assemblies.md) per soluzioni, indicazioni e informazioni dettagliate.

### <a name="data-exports"></a>Esportazioni di dati

Esportazione dei dati DLL è soggetta a errori e non è consigliata. Questo avviene perché la sezione di dati di una DLL non è garantita a essere inizializzato fino a quando non è stata eseguita una parte della DLL gestita. I metadati di riferimento con [# direttiva using](../preprocessor/hash-using-directive-cpp.md).

### <a name="type-visibility"></a>Visibilità di tipi

I tipi nativi sono privati per impostazione predefinita. Ciò può comportare un tipo nativo non è visibile all'esterno della DLL. Correggere l'errore aggiungendo `public` a questi tipi.

### <a name="floating-point-and-alignment-issues"></a>Virgola mobile e problemi di allineamento

`__controlfp` non è supportata in common language runtime (vedere [_control87, controlfp, \__control87_2](../c-runtime-library/reference/control87-controlfp-control87-2.md) per altre informazioni). CLR non rispetta inoltre [allineare](../cpp/align-cpp.md).

### <a name="com-initialization"></a>Inizializzazione di COM

Common Language Runtime consente di inizializzare COM automaticamente quando viene inizializzato un modulo (quando viene inizializzato automaticamente COM darne come MTA). Di conseguenza, in modo esplicito l'inizializzazione di COM genera codici restituiti che indica che è già inizializzato COM. Tentativo di inizializzare in modo esplicito COM con un modello di threading CLR era già inizializzata COM a un altro modello di threading può causare arresti l'applicazione.

Common language runtime viene avviato COM come MTA per impostazione predefinita. usare [/CLRTHREADATTRIBUTE (Imposta attributo Thread di CLR)](../build/reference/clrthreadattribute-set-clr-thread-attribute.md) per modificare questo valore.

### <a name="performance-issues"></a>Problemi relativi alle prestazioni

Si verifichi una riduzione delle prestazioni quando i metodi di C++ nativi a MSIL generati vengono chiamati indirettamente (chiamate di funzioni virtuali o tramite i puntatori a funzione). Per altre informazioni, vedere [doppio thunk](../dotnet/double-thunking-cpp.md).

Quando si passa dal codice nativo al codice MSIL, si noterà un aumento delle dimensioni del working set. Questo avviene perché common language runtime fornisce molte funzionalità per garantire che i programmi eseguiti correttamente. Se il **/clr** dell'applicazione non venga eseguito correttamente, è possibile abilitare C4793 (disattivato per impostazione predefinita), vedere [avviso del compilatore (livello 1 e 3) C4793](../error-messages/compiler-warnings/compiler-warning-level-1-and-3-c4793.md) per altre informazioni.

### <a name="program-crashes-on-shutdown"></a>Arresti anomali in fase di arresto

In alcuni casi, CLR può arrestare prima del completamento di codice gestito in esecuzione. Usando `std::set_terminate` e `SIGTERM` può causare questo. Visualizzare [costanti signal](../c-runtime-library/signal-constants.md) e [set_terminate](../c-runtime-library/abnormal-termination.md) per altre informazioni.

## <a name="using-new-visual-c-features"></a>Utilizzo delle nuove funzionalità di Visual C++

Dopo l'applicazione consente di compilare, collegamenti e viene eseguito, è possibile iniziare a usare le funzionalità di .NET in qualsiasi modulo compilato con **/clr**. Per altre informazioni, vedere [Estensioni componenti per le piattaforme runtime](../windows/component-extensions-for-runtime-platforms.md).

Se hai usato le estensioni gestite per C++, è possibile convertire il codice per usare la nuova sintassi. Per informazioni dettagliate sulla conversione delle estensioni gestite per C++, vedere [C + c++ /CLI Migration Primer](../dotnet/cpp-cli-migration-primer.md).

Per informazioni sulla programmazione in Visual C++ .NET, vedere:

- [Programmazione .NET con C++/CLI (Visual C++)](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md)

- [Interoperabilità .NET e nativa](../dotnet/native-and-dotnet-interoperability.md)

- [Estensioni componenti per le piattaforme runtime](../windows/component-extensions-for-runtime-platforms.md)

## <a name="see-also"></a>Vedere anche

[Assembly misti (nativi e gestiti)](../dotnet/mixed-native-and-managed-assemblies.md)
