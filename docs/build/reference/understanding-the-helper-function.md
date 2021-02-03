---
description: Altre informazioni sulla funzione helper di caricamento ritardato
title: Informazioni sulla funzione di supporto del caricamento ritardato
ms.date: 01/19/2021
helpviewer_keywords:
- delayed loading of DLLs, helper function
- __delayLoadHelper2 function
- delayimp.lib
- __delayLoadHelper function
- delayhlp.cpp
- delayimp.h
- helper functions
ms.openlocfilehash: 6108e896b6d7a370f2b4d6ab8f5baa880112a21e
ms.sourcegitcommit: c20734f18d3d49bb38b1628c68b53b54b3eeeb03
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/03/2021
ms.locfileid: "99522742"
---
# <a name="understand-the-delay-load-helper-function"></a>Informazioni sulla funzione di supporto del caricamento ritardato

La funzione di supporto per il caricamento ritardato supportato dal linker è quella che carica effettivamente la DLL in fase di esecuzione. È possibile modificare la funzione helper per personalizzarne il comportamento. Anziché utilizzare la funzione helper fornita in *`delayimp.lib`* , scrivere una funzione personalizzata e collegarla al programma. Una funzione helper serve tutte le dll a caricamento ritardato.

È possibile fornire la propria versione della funzione di supporto se si desidera eseguire un'elaborazione specifica in base ai nomi della DLL o alle importazioni.

La funzione helper esegue le azioni seguenti:

- Controlla l'handle archiviato nella libreria per verificare se è già stato caricato

- Chiama `LoadLibrary` per tentare di caricare la dll

- Chiama `GetProcAddress` per tentare di ottenere l'indirizzo della routine

- Torna al thunk di caricamento dell'importazione ritardata per chiamare il punto di ingresso caricato attualmente

La funzione helper può richiamare un hook di notifica nel programma dopo ognuna delle azioni seguenti:

- Quando viene avviata la funzione helper

- Appena prima `LoadLibrary` viene chiamato nella funzione helper

- Appena prima `GetProcAddress` viene chiamato nella funzione helper

- Se la chiamata a `LoadLibrary` nella funzione helper ha esito negativo

- Se la chiamata a `GetProcAddress` nella funzione helper ha esito negativo

- Al termine dell'elaborazione della funzione di supporto

Ognuno di questi punti di hook può restituire un valore che modifica in qualche modo la normale elaborazione della routine di supporto, ad eccezione del ritorno al thunk di caricamento dell'importazione ritardata.

Il codice di supporto predefinito è disponibile in *`delayhlp.cpp`* e *`delayimp.h`* nella *`include`* directory MSVC Viene compilato nella *`delayimp.lib`* *`lib`* directory MSVC per l'architettura di destinazione. È necessario includere questa libreria nelle compilazioni, a meno che non si scriva una funzione helper personalizzata.

## <a name="delay-load-helper-calling-conventions-parameters-and-return-type"></a><a name="calling-conventions-parameters-and-return-type"></a> Convenzioni di chiamata, parametri e tipo restituito dell'helper di caricamento ritardato

Il prototipo per la routine di supporto del caricamento ritardato è:

```C
FARPROC WINAPI __delayLoadHelper2(
    PCImgDelayDescr pidd,
    FARPROC * ppfnIATEntry
);
```

### <a name="parameters"></a>Parametri

*`pidd`*\
**`const`** Puntatore a un oggetto `ImgDelayDescr` che contiene gli offset di vari dati correlati all'importazione, un timestamp per le informazioni di associazione e un set di attributi che forniscono ulteriori informazioni sul contenuto del descrittore. Attualmente esiste un solo attributo, `dlattrRva` , che indica che gli indirizzi nel descrittore sono indirizzi virtuali relativi. Per ulteriori informazioni, vedere le dichiarazioni in *`delayimp.h`* .

I puntatori nel descrittore di ritardo ( `ImgDelayDescr` in *`delayimp.h`* ) utilizzano indirizzi virtuali relativi (RVA) per funzionare come previsto nei programmi a 32 bit e a 64 bit. Per usarli, convertirli di nuovo in puntatori usando la funzione `PFromRva` , disponibile in *`delayhlp.cpp`* . È possibile utilizzare questa funzione su ognuno dei campi del descrittore per convertirli nuovamente in puntatori a 32 bit o a 64 bit. La funzione di supporto per il caricamento ritardato predefinito è un modello valido da usare come esempio.

Per la definizione della `PCImgDelayDescr` struttura, vedere [struttura e definizioni di costanti](#structure-and-constant-definitions).

*`ppfnIATEntry`*\
Puntatore a uno slot nella tabella di indirizzi di importazione a caricamento ritardato (IAT). Si tratta dello slot aggiornato con l'indirizzo della funzione importata. La routine di supporto deve archiviare lo stesso valore restituito in questa posizione.

### <a name="expected-return-values"></a>Valori restituiti previsti

Se la funzione di supporto ha esito positivo, restituisce l'indirizzo della funzione importata.

Se la funzione ha esito negativo, genera un'eccezione strutturata e restituisce 0. Possono essere generati tre tipi di eccezioni:

- Parametro non valido, che si verifica se gli attributi in *`pidd`* non sono specificati correttamente. Considerarlo come un errore irreversibile.

- `LoadLibrary`: impossibile leggere la DLL specificata.

- Errore di `GetProcAddress`.

È responsabilità dell'utente gestire queste eccezioni. Per ulteriori informazioni, vedere la pagina [relativa alla gestione degli errori e alla notifica](error-handling-and-notification.md).

### <a name="remarks"></a>Commenti

La convenzione di chiamata per la funzione helper è **`__stdcall`** . Il tipo del valore restituito non è pertinente, pertanto `FARPROC` viene usato. Questa funzione ha un collegamento C, che significa che è necessario eseguire il wrapper `extern "C"` quando viene dichiarata nel codice C++. `ExternC`Questa operazione viene gestita automaticamente dalla macro.

Per usare la routine di supporto come hook di notifica, è necessario che il codice specifichi il puntatore a funzione appropriato da restituire. Il codice thunk generato dal linker accetta quindi quel valore restituito come destinazione effettiva dell'importazione e passa direttamente ad essa. Se non si vuole usare la routine di supporto come hook di notifica, archiviare il valore restituito della funzione helper in `ppfnIATEntry` , ovvero la posizione del puntatore della funzione passata.

## <a name="sample-hook-function"></a>Funzione hook di esempio

Nel codice seguente viene illustrato come implementare una funzione hook di base.

```C
FARPROC WINAPI delayHook(unsigned dliNotify, PDelayLoadInfo pdli)
{
    switch (dliNotify) {
        case dliStartProcessing :

            // If you want to return control to the helper, return 0.
            // Otherwise, return a pointer to a FARPROC helper function
            // that will be used instead, thereby bypassing the rest
            // of the helper.

            break;

        case dliNotePreLoadLibrary :

            // If you want to return control to the helper, return 0.
            // Otherwise, return your own HMODULE to be used by the
            // helper instead of having it call LoadLibrary itself.

            break;

        case dliNotePreGetProcAddress :

            // If you want to return control to the helper, return 0.
            // If you choose you may supply your own FARPROC function
            // address and bypass the helper's call to GetProcAddress.

            break;

        case dliFailLoadLib :

            // LoadLibrary failed.
            // If you don't want to handle this failure yourself, return 0.
            // In this case the helper will raise an exception
            // (ERROR_MOD_NOT_FOUND) and exit.
            // If you want to handle the failure by loading an alternate
            // DLL (for example), then return the HMODULE for
            // the alternate DLL. The helper will continue execution with
            // this alternate DLL and attempt to find the
            // requested entrypoint via GetProcAddress.

            break;

        case dliFailGetProc :

            // GetProcAddress failed.
            // If you don't want to handle this failure yourself, return 0.
            // In this case the helper will raise an exception
            // (ERROR_PROC_NOT_FOUND) and exit.
            // If you choose, you may handle the failure by returning
            // an alternate FARPROC function address.

            break;

        case dliNoteEndProcessing :

            // This notification is called after all processing is done.
            // There is no opportunity for modifying the helper's behavior
            // at this point except by longjmp()/throw()/RaiseException.
            // No return value is processed.

            break;

        default :

            return NULL;
    }

    return NULL;
}

/*
and then at global scope somewhere:

ExternC const PfnDliHook __pfnDliNotifyHook2 = delayHook;
ExternC const PfnDliHook __pfnDliFailureHook2 = delayHook;
*/
```

## <a name="delay-load-structure-and-constant-definitions"></a><a name="structure-and-constant-definitions"></a> Struttura di carico ritardato e definizioni di costanti

La routine di supporto per il caricamento ritardato predefinito usa diverse strutture per comunicare con le funzioni hook e durante qualsiasi eccezione. Queste strutture sono definite in *`delayimp.h`* . Di seguito sono riportate le macro, i typedef, i valori di notifica e di errore, le strutture di informazioni e il tipo di funzione puntatore a gancio passato agli hook:

```C
#define _DELAY_IMP_VER  2

#if defined(__cplusplus)
#define ExternC extern "C"
#else
#define ExternC extern
#endif

typedef IMAGE_THUNK_DATA *          PImgThunkData;
typedef const IMAGE_THUNK_DATA *    PCImgThunkData;
typedef DWORD                       RVA;

typedef struct ImgDelayDescr {
    DWORD           grAttrs;        // attributes
    RVA             rvaDLLName;     // RVA to dll name
    RVA             rvaHmod;        // RVA of module handle
    RVA             rvaIAT;         // RVA of the IAT
    RVA             rvaINT;         // RVA of the INT
    RVA             rvaBoundIAT;    // RVA of the optional bound IAT
    RVA             rvaUnloadIAT;   // RVA of optional copy of original IAT
    DWORD           dwTimeStamp;    // 0 if not bound,
                                    // O.W. date/time stamp of DLL bound to (Old BIND)
    } ImgDelayDescr, * PImgDelayDescr;

typedef const ImgDelayDescr *   PCImgDelayDescr;

enum DLAttr {                   // Delay Load Attributes
    dlattrRva = 0x1,                // RVAs are used instead of pointers
                                    // Having this set indicates a VC7.0
                                    // and above delay load descriptor.
    };

//
// Delay load import hook notifications
//
enum {
    dliStartProcessing,             // used to bypass or note helper only
    dliNoteStartProcessing = dliStartProcessing,

    dliNotePreLoadLibrary,          // called just before LoadLibrary, can
                                    //  override w/ new HMODULE return val
    dliNotePreGetProcAddress,       // called just before GetProcAddress, can
                                    //  override w/ new FARPROC return value
    dliFailLoadLib,                 // failed to load library, fix it by
                                    //  returning a valid HMODULE
    dliFailGetProc,                 // failed to get proc address, fix it by
                                    //  returning a valid FARPROC
    dliNoteEndProcessing,           // called after all processing is done, no
                                    //  bypass possible at this point except
                                    //  by longjmp()/throw()/RaiseException.
    };

typedef struct DelayLoadProc {
    BOOL                fImportByName;
    union {
        LPCSTR          szProcName;
        DWORD           dwOrdinal;
        };
    } DelayLoadProc;

typedef struct DelayLoadInfo {
    DWORD               cb;         // size of structure
    PCImgDelayDescr     pidd;       // raw form of data (everything is there)
    FARPROC *           ppfn;       // points to address of function to load
    LPCSTR              szDll;      // name of dll
    DelayLoadProc       dlp;        // name or ordinal of procedure
    HMODULE             hmodCur;    // the hInstance of the library we have loaded
    FARPROC             pfnCur;     // the actual function that will be called
    DWORD               dwLastError;// error received (if an error notification)
    } DelayLoadInfo, * PDelayLoadInfo;

typedef FARPROC (WINAPI *PfnDliHook)(
    unsigned        dliNotify,
    PDelayLoadInfo  pdli
    );
```

## <a name="calculate-necessary-values-for-delay-loading"></a><a name="calculate-necessary-values"></a> Calcolare i valori necessari per il caricamento ritardato

La routine di supporto del caricamento ritardato deve calcolare due informazioni critiche. Per consentire il calcolo di queste informazioni, sono disponibili due funzioni inline in *`delayhlp.cpp`* .

- Il primo, `IndexFromPImgThunkData` , calcola l'indice dell'importazione corrente nelle tre tabelle diverse, ovvero la tabella di indirizzi di importazione (IAT), la tabella di indirizzi di importazione associata (BIAT) e la tabella degli indirizzi di importazione non associata (UIAT)).

- Il secondo, `CountOfImports` , conta il numero di importazioni in una IAT valida.

```C
// utility function for calculating the index of the current import
// for all the tables (INT, BIAT, UIAT, and IAT).
__inline unsigned
IndexFromPImgThunkData(PCImgThunkData pitdCur, PCImgThunkData pitdBase) {
    return pitdCur - pitdBase;
    }

// utility function for calculating the count of imports given the base
// of the IAT. NB: this only works on a valid IAT!
__inline unsigned
CountOfImports(PCImgThunkData pitdBase) {
    unsigned        cRet = 0;
    PCImgThunkData  pitd = pitdBase;
    while (pitd->u1.Function) {
        pitd++;
        cRet++;
        }
    return cRet;
    }
```

## <a name="support-unload-of-a-delay-loaded-dll"></a><a name="unload-a-delay-loaded-dll"></a> Supporto dello scaricamento di una DLL a caricamento ritardato

Quando viene caricata una DLL a caricamento ritardato, l'helper di caricamento ritardato predefinito verifica se i descrittori di caricamento ritardato hanno un puntatore e una copia della tabella di indirizzi di importazione originale (IAT) nel `pUnloadIAT` campo. In tal caso, l'helper salva un puntatore in un elenco nel descrittore di ritardo dell'importazione. Questa voce consente alla funzione helper di trovare la DLL in base al nome, per supportare lo scaricamento esplicito della DLL.

Di seguito sono riportate le strutture e le funzioni associate per lo scaricamento esplicito di una DLL a caricamento ritardato:

```cpp
//
// Unload support from delayimp.h
//

// routine definition; takes a pointer to a name to unload

ExternC
BOOL WINAPI
__FUnloadDelayLoadedDLL2(LPCSTR szDll);

// structure definitions for the list of unload records
typedef struct UnloadInfo * PUnloadInfo;
typedef struct UnloadInfo {
    PUnloadInfo     puiNext;
    PCImgDelayDescr pidd;
    } UnloadInfo;

// from delayhlp.cpp
// the default delay load helper places the unloadinfo records in the
// list headed by the following pointer.
ExternC
PUnloadInfo __puiHead;
```

La `UnloadInfo` struttura viene implementata usando una classe C++ che usa le `LocalAlloc` `LocalFree` implementazioni e `operator new` come `operator delete` rispettivamente e. Queste opzioni vengono mantenute in un elenco collegato standard che utilizza `__puiHead` come inizio dell'elenco.

Quando si chiama `__FUnloadDelayLoadedDLL` , tenta di trovare il nome fornito nell'elenco delle DLL caricate. È necessaria una corrispondenza esatta. Se viene trovato, la copia della tabella IAT in `pUnloadIAT` viene copiata nella parte superiore della tabella IAT in esecuzione per ripristinare i puntatori del thunk. Quindi, la libreria viene liberata usando `FreeLibrary` , il `UnloadInfo` record corrispondente viene scollegato dall'elenco ed eliminato e `TRUE` viene restituito.

L'argomento della funzione `__FUnloadDelayLoadedDLL2` fa distinzione tra maiuscole e minuscole. Ad esempio, specificare:

```cpp
__FUnloadDelayLoadedDLL2("user32.dll");
```

e non:

```cpp
__FUnloadDelayLoadedDLL2("User32.DLL");
```

Per un esempio di scaricamento di una DLL a caricamento ritardato, vedere [scaricare in modo esplicito una dll a caricamento ritardato](linker-support-for-delay-loaded-dlls.md).

## <a name="develop-your-own-delay-load-helper-function"></a><a name="develop-your-own-helper-function"></a> Sviluppare una funzione di supporto per il caricamento ritardato

Potrebbe essere necessario fornire una versione personalizzata della routine di supporto per il caricamento ritardato. Nella propria routine è possibile eseguire operazioni di elaborazione specifiche in base ai nomi della DLL o alle importazioni. Esistono due modi per inserire il proprio codice: scrivere il codice della funzione di supporto, possibilmente in base al codice fornito. In alternativa, associare l'helper fornito per chiamare una funzione personalizzata usando gli [hook di notifica](error-handling-and-notification.md#notification-hooks).

### <a name="code-your-own-helper"></a>Codificare il proprio Helper

La creazione di una routine di supporto è semplice. È possibile usare il codice esistente come guida per la nuova funzione. La funzione deve usare le stesse convenzioni di chiamata dell'helper esistente. E, se viene restituito ai thunk generati dal linker, deve restituire un puntatore a funzione appropriato. Una volta creato il codice, è possibile soddisfare la chiamata o uscire dalla chiamata, tuttavia si desidera.

### <a name="use-the-start-processing-notification-hook"></a>Usare l'hook di notifica avvia elaborazione

È probabilmente più semplice fornire un nuovo puntatore a una funzione hook di notifica fornita dall'utente che accetta gli stessi valori dell'helper predefinito per la `dliStartProcessing` notifica. A questo punto, la funzione hook può diventare essenzialmente la nuova funzione helper, perché un ritorno all'helper predefinito ignora tutte le altre elaborazioni nell'helper predefinito.

## <a name="see-also"></a>Vedi anche

[Supporto per le DLL a caricamento ritardato nel linker](linker-support-for-delay-loaded-dlls.md#explicitly-unload-a-delay-loaded-dll)
