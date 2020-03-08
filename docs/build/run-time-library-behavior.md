---
title: Dll e comportamento C++ della libreria in fase di esecuzione visiva
ms.date: 08/19/2019
f1_keywords:
- _DllMainCRTStartup
- CRT_INIT
helpviewer_keywords:
- DLLs [C++], entry point function
- process detach [C++]
- process attach [C++]
- DLLs [C++], run-time library behavior
- DllMain function
- _CRT_INIT macro
- _DllMainCRTStartup method
- run-time [C++], DLL startup sequence
- DLLs [C++], startup sequence
ms.assetid: e06f24ab-6ca5-44ef-9857-aed0c6f049f2
ms.openlocfilehash: 572a0ba70c1ba2d46d2d9fd6d8ac543a77bbbc01
ms.sourcegitcommit: 3e8fa01f323bc5043a48a0c18b855d38af3648d4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/06/2020
ms.locfileid: "78856774"
---
# <a name="dlls-and-visual-c-run-time-library-behavior"></a>Dll e comportamento C++ della libreria in fase di esecuzione visiva

Quando si compila una libreria di collegamento dinamico (DLL) utilizzando Visual Studio, per impostazione predefinita il linker include la libreria di C++ runtime di Visual (VCRuntime). VCRuntime contiene il codice necessario per inizializzare e terminare un CC++ /eseguibile. Quando si è collegati a una DLL, il codice VCRuntime fornisce una funzione di punto di ingresso DLL interna denominata `_DllMainCRTStartup` che gestisce i messaggi del sistema operativo Windows alla DLL per connettersi o disconnettersi da un processo o da un thread. La funzione `_DllMainCRTStartup` esegue attività essenziali come la configurazione della sicurezza del buffer dello stack, l'inizializzazione e la terminazione della libreria di runtime C (CRT) e le chiamate a costruttori e distruttori per oggetti statici e globali. `_DllMainCRTStartup` chiama anche funzioni hook per altre librerie, ad esempio WinRT, MFC e ATL, per eseguire la propria inizializzazione e terminazione. Senza questa inizializzazione, CRT e altre librerie, nonché le variabili statiche, verranno lasciate in uno stato non inizializzato. Le stesse routine di inizializzazione e terminazione interna di VCRuntime vengono chiamate se la DLL usa una libreria CRT collegata staticamente o una DLL CRT collegata in modo dinamico.

## <a name="default-dll-entry-point-_dllmaincrtstartup"></a>_DllMainCRTStartup punto di ingresso DLL predefinito

In Windows tutte le dll possono contenere una funzione del punto di ingresso facoltativa, in genere denominata `DllMain`, che viene chiamata per l'inizializzazione e la terminazione. In questo modo è possibile allocare o rilasciare risorse aggiuntive in base alle esigenze. Windows chiama la funzione del punto di ingresso in quattro situazioni: associazione processo, scollegamento processi, collegamento thread e scollegamento thread. Quando una DLL viene caricata in uno spazio degli indirizzi del processo, quando viene caricata un'applicazione che lo usa o quando l'applicazione richiede la DLL in fase di esecuzione, il sistema operativo crea una copia separata dei dati della DLL. Questa operazione è denominata *associazione processi*. La *connessione al thread* si verifica quando il processo in cui viene caricata la dll crea un nuovo thread. La *disconnessione del thread* si verifica quando il thread termina ed è in *corso la disconnessione del processo* quando la dll non è più necessaria e viene rilasciata da un'applicazione. Il sistema operativo effettua una chiamata separata al punto di ingresso della DLL per ognuno di questi eventi, passando un argomento *reason* per ogni tipo di evento. Ad esempio, il sistema operativo invia `DLL_PROCESS_ATTACH` come argomento *reason* per segnalare la connessione al processo.

La libreria VCRuntime fornisce una funzione del punto di ingresso denominata `_DllMainCRTStartup` per gestire le operazioni di inizializzazione e terminazione predefinite. Durante il processo di connessione, la funzione `_DllMainCRTStartup` imposta i controlli di sicurezza del buffer, Inizializza la libreria CRT e altre librerie, Inizializza le informazioni sui tipi in fase di esecuzione, Inizializza e chiama i costruttori per i dati statici e non locali, Inizializza l'archiviazione locale di thread, incrementa un contatore statico interno per ogni connessione, quindi chiama un `DllMain`fornito dall'utente o dalla libreria. Quando si disconnette il processo, la funzione esegue questi passaggi in ordine inverso. Chiama `DllMain`, decrementa il contatore interno, chiama distruttori, chiama funzioni di terminazione CRT e funzioni di `atexit` registrate e notifica a qualsiasi altra libreria di terminazione. Quando il contatore degli allegati va a zero, la funzione restituisce `FALSE` per indicare a Windows che la DLL può essere scaricata. La funzione `_DllMainCRTStartup` viene chiamata anche durante la connessione del thread e la separazione dei thread. In questi casi, il codice VCRuntime non esegue alcuna inizializzazione o terminazione aggiuntiva e chiama solo `DllMain` per passare il messaggio. Se `DllMain` restituisce `FALSE` dalla connessione al processo, l'errore di segnalazione, `_DllMainCRTStartup` chiama di nuovo `DllMain` e passa `DLL_PROCESS_DETACH` come argomento *reason* , quindi passa attraverso il resto del processo di terminazione.

Quando si compilano dll in Visual Studio, il punto di ingresso predefinito `_DllMainCRTStartup` fornito da VCRuntime è collegato automaticamente. Non è necessario specificare una funzione del punto di ingresso per la DLL usando l'opzione del linker [/entry (simbolo del punto di ingresso)](reference/entry-entry-point-symbol.md) .

> [!NOTE]
> Sebbene sia possibile specificare un'altra funzione del punto di ingresso per una DLL usando l'opzione del linker/ENTRY:, non è consigliabile, perché la funzione del punto di ingresso dovrebbe duplicare tutti gli elementi che `_DllMainCRTStartup`, nello stesso ordine. VCRuntime fornisce funzioni che consentono di duplicare il comportamento. È possibile, ad esempio, chiamare [__security_init_cookie](../c-runtime-library/reference/security-init-cookie.md) immediatamente on processo Connetti per supportare l'opzione di controllo del buffer [/GS (controllo sicurezza buffer)](reference/gs-buffer-security-check.md) . È possibile chiamare la funzione `_CRT_INIT`, passando gli stessi parametri della funzione del punto di ingresso, per eseguire il resto delle funzioni di inizializzazione o terminazione della DLL.

<a name="initializing-a-dll"></a>

## <a name="initialize-a-dll"></a>Inizializzare una DLL

La DLL può includere codice di inizializzazione che deve essere eseguito quando la DLL viene caricata. Per poter eseguire le proprie funzioni di inizializzazione e terminazione della DLL, `_DllMainCRTStartup` chiama una funzione denominata `DllMain` che è possibile fornire. Il `DllMain` deve avere la firma necessaria per un punto di ingresso della DLL. La funzione predefinita del punto di ingresso `_DllMainCRTStartup` chiama `DllMain` utilizzando gli stessi parametri passati da Windows. Per impostazione predefinita, se non si specifica una funzione `DllMain`, Visual Studio ne fornisce uno per l'utente e lo collega a in modo che `_DllMainCRTStartup` abbia sempre qualcosa da chiamare. Ciò significa che se non è necessario inizializzare la DLL, non c'è niente di speciale da fare quando si compila la DLL.

Si tratta della firma utilizzata per `DllMain`:

```cpp
#include <windows.h>

extern "C" BOOL WINAPI DllMain (
    HINSTANCE const instance,  // handle to DLL module
    DWORD     const reason,    // reason for calling function
    LPVOID    const reserved); // reserved
```

Alcune librerie incapsulano la funzione `DllMain`. In una normale DLL MFC, ad esempio, implementare le funzioni membro `InitInstance` e `ExitInstance` dell'oggetto `CWinApp` per eseguire l'inizializzazione e la terminazione richieste dalla DLL. Per ulteriori informazioni, vedere la sezione [Initialize Regular MFC DLLs](#initializing-regular-dlls) .

> [!WARNING]
> Esistono limiti significativi sulle operazioni che è possibile eseguire in modo sicuro in un punto di ingresso della DLL. Vedere [le procedure consigliate generali](/windows/win32/Dlls/dynamic-link-library-best-practices) per API Windows specifiche che non sono sicure per chiamare in `DllMain`. Se è necessario solo l'inizializzazione più semplice, eseguire questa operazione in una funzione di inizializzazione per la DLL. È possibile richiedere alle applicazioni di chiamare la funzione di inizializzazione dopo l'esecuzione `DllMain` e prima di chiamare qualsiasi altra funzione nella DLL.

<a name="initializing-non-mfc-dlls"></a>

### <a name="initialize-ordinary-non-mfc-dlls"></a>Inizializzazione di dll ordinarie (non MFC)

Per eseguire un'inizializzazione personalizzata in dll ordinarie (non MFC) che usano il punto di ingresso `_DllMainCRTStartup` fornito da VCRuntime, il codice sorgente della DLL deve contenere una funzione denominata `DllMain`. Il codice seguente presenta una struttura di base che mostra la definizione di `DllMain` potrebbe essere simile alla seguente:

```cpp
#include <windows.h>

extern "C" BOOL WINAPI DllMain (
    HINSTANCE const instance,  // handle to DLL module
    DWORD     const reason,    // reason for calling function
    LPVOID    const reserved)  // reserved
{
    // Perform actions based on the reason for calling.
    switch (reason)
    {
    case DLL_PROCESS_ATTACH:
        // Initialize once for each new process.
        // Return FALSE to fail DLL load.
        break;

    case DLL_THREAD_ATTACH:
        // Do thread-specific initialization.
        break;

    case DLL_THREAD_DETACH:
        // Do thread-specific cleanup.
        break;

    case DLL_PROCESS_DETACH:
        // Perform any necessary cleanup.
        break;
    }
    return TRUE;  // Successful DLL_PROCESS_ATTACH.
}
```

> [!NOTE]
> La documentazione di Windows SDK precedente afferma che il nome effettivo della funzione del punto di ingresso della DLL deve essere specificato nella riga di comando del linker con l'opzione/ENTRY. Con Visual Studio, non è necessario usare l'opzione/ENTRY se il nome della funzione del punto di ingresso è `DllMain`. Infatti, se si usa l'opzione/ENTRY e si assegna un nome alla funzione del punto di ingresso diversa da `DllMain`, CRT non viene inizializzato correttamente, a meno che la funzione del punto di ingresso non faccia le stesse chiamate di inizializzazione che `_DllMainCRTStartup`.

<a name="initializing-regular-dlls"></a>

### <a name="initialize-regular-mfc-dlls"></a>Inizializzazione di DLL MFC regolari

Poiché le DLL MFC regolari hanno un oggetto `CWinApp`, devono eseguire le attività di inizializzazione e chiusura nello stesso percorso di un'applicazione MFC: nelle funzioni membro `InitInstance` e `ExitInstance` della classe derivata `CWinApp`della DLL. Poiché MFC fornisce una funzione `DllMain` chiamata da `_DllMainCRTStartup` per `DLL_PROCESS_ATTACH` e `DLL_PROCESS_DETACH`, è consigliabile non scrivere la propria funzione di `DllMain`. La funzione `DllMain` fornita da MFC chiama `InitInstance` quando la DLL viene caricata e chiama `ExitInstance` prima che la DLL venga scaricata.

Una normale DLL MFC può tenere traccia di più thread chiamando [TlsAlloc](/windows/win32/api/processthreadsapi/nf-processthreadsapi-tlsalloc) e [TlsGetValue](/windows/win32/api/processthreadsapi/nf-processthreadsapi-tlsgetvalue) nella relativa funzione `InitInstance`. Queste funzioni consentono alla DLL di rilevare i dati specifici del thread.

Nella DLL MFC normale che si collega dinamicamente a MFC, se si utilizza qualsiasi OLE MFC, database MFC (o DAO) o supporto di socket MFC, rispettivamente, le DLL dell'estensione MFC di debug MFCO*versione*d. dll, MFCD*versione*d. dll e MFCN*versione*d. dll (dove *Version* è il numero di versione) sono collegate automaticamente. È necessario chiamare una delle funzioni di inizializzazione predefinite seguenti per ognuna di queste dll che si sta usando nella `CWinApp::InitInstance`normale della DLL MFC.

|Tipo di supporto MFC|Funzione di inizializzazione da chiamare|
|-------------------------|-------------------------------------|
|OLE MFC (MFCO*versione*D. dll)|`AfxOleInitModule`|
|Database MFC (MFCD*versione*D. dll)|`AfxDbInitModule`|
|Socket MFC (MFCN*versione*D. dll)|`AfxNetInitModule`|

<a name="initializing-extension-dlls"></a>

### <a name="initialize-mfc-extension-dlls"></a>Inizializza dll estensione MFC

Poiché le DLL dell'estensione MFC non dispongono di un oggetto derivato da `CWinApp`(come le normali DLL MFC), è necessario aggiungere il codice di inizializzazione e terminazione alla funzione `DllMain` generata dalla procedura guidata DLL MFC.

La procedura guidata fornisce il codice seguente per le DLL di estensione MFC. Nel codice `PROJNAME` è un segnaposto per il nome del progetto.

```cpp
#include "pch.h" // For Visual Studio 2017 and earlier, use "stdafx.h"
#include <afxdllx.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif
static AFX_EXTENSION_MODULE PROJNAMEDLL = { NULL, NULL };

extern "C" int APIENTRY
DllMain(HINSTANCE hInstance, DWORD dwReason, LPVOID lpReserved)
{
   if (dwReason == DLL_PROCESS_ATTACH)
   {
      TRACE0("PROJNAME.DLL Initializing!\n");

      // MFC extension DLL one-time initialization
      AfxInitExtensionModule(PROJNAMEDLL,
                                 hInstance);

      // Insert this DLL into the resource chain
      new CDynLinkLibrary(Dll3DLL);
   }
   else if (dwReason == DLL_PROCESS_DETACH)
   {
      TRACE0("PROJNAME.DLL Terminating!\n");
   }
   return 1;   // ok
}
```

La creazione di un nuovo oggetto `CDynLinkLibrary` durante l'inizializzazione consente alla DLL dell'estensione MFC di esportare `CRuntimeClass` oggetti o risorse nell'applicazione client.

Se si prevede di utilizzare la DLL dell'estensione MFC da una o più DLL MFC regolari, è necessario esportare una funzione di inizializzazione per la creazione di un oggetto `CDynLinkLibrary`. Questa funzione deve essere chiamata da ogni DLL MFC normale che usa la DLL di estensione MFC. Una posizione appropriata per chiamare questa funzione di inizializzazione è la funzione membro `InitInstance` dell'oggetto normale derivato da `CWinApp`della DLL MFC prima di utilizzare le classi o le funzioni esportate della DLL dell'estensione MFC.

Nella `DllMain` generata dalla creazione guidata DLL MFC, la chiamata a `AfxInitExtensionModule` acquisisce le classi di runtime del modulo (strutture`CRuntimeClass`) e le relative Factory di oggetti (`COleObjectFactory` oggetti) da utilizzare quando viene creato l'oggetto `CDynLinkLibrary`. Verificare il valore restituito di `AfxInitExtensionModule`; Se viene restituito un valore zero da `AfxInitExtensionModule`, restituire zero dalla funzione di `DllMain`.

Se la DLL dell'estensione MFC sarà collegata in modo esplicito a un eseguibile (ovvero le chiamate eseguibili `AfxLoadLibrary` per il collegamento alla DLL), è necessario aggiungere una chiamata a `AfxTermExtensionModule` in `DLL_PROCESS_DETACH`. Questa funzione consente a MFC di pulire la DLL di estensione MFC quando ogni processo si disconnette dalla DLL dell'estensione MFC (che si verifica quando il processo viene chiuso o quando la DLL viene scaricata come risultato di una chiamata `AfxFreeLibrary`). Se la DLL dell'estensione MFC verrà collegata in modo implicito all'applicazione, la chiamata a `AfxTermExtensionModule` non è necessaria.

Le applicazioni che si collegano in modo esplicito alle DLL di estensione MFC devono chiamare `AfxTermExtensionModule` durante la liberazione della DLL. Devono anche usare `AfxLoadLibrary` e `AfxFreeLibrary`, anziché le funzioni Win32 `LoadLibrary` e `FreeLibrary`, se l'applicazione usa più thread. L'utilizzo di `AfxLoadLibrary` e `AfxFreeLibrary` garantisce che il codice di avvio e di arresto eseguito quando la DLL dell'estensione MFC venga caricata e scaricata non danneggi lo stato globale di MFC.

Poiché MFCx0. dll è completamente inizializzato dal momento in cui viene chiamato `DllMain`, è possibile allocare memoria e chiamare funzioni MFC all'interno di `DllMain` (a differenza della versione a 16 bit di MFC).

Le DLL di estensione possono gestire il multithreading gestendo i `DLL_THREAD_ATTACH` e `DLL_THREAD_DETACH` case nella funzione `DllMain`. Questi casi vengono passati a `DllMain` quando i thread vengono collegati e scollegati dalla DLL. La chiamata di [TlsAlloc](/windows/win32/api/processthreadsapi/nf-processthreadsapi-tlsalloc) quando una dll è collegata consente alla DLL di gestire gli indici TLS (thread local storage) per ogni thread collegato alla dll.

Si noti che il file di intestazione Afxdllx. h contiene definizioni speciali per le strutture utilizzate nelle DLL di estensione MFC, ad esempio la definizione per `AFX_EXTENSION_MODULE` e `CDynLinkLibrary`. È necessario includere questo file di intestazione nella DLL dell'estensione MFC.

> [!NOTE]
>  È importante non definire né annullare la definizione delle macro `_AFX_NO_XXX` in *PCH. h* (*stdafx. h* in Visual Studio 2017 e versioni precedenti). Queste macro sono disponibili solo per verificare se una determinata piattaforma di destinazione supporta tale funzionalità o meno. È possibile scrivere il programma per controllare queste macro, ad esempio `#ifndef _AFX_NO_OLE_SUPPORT`, ma il programma non deve mai definire o annullare la definizione di queste macro.

Una funzione di inizializzazione di esempio che gestisce il multithreading è inclusa nell' [utilizzo dell'archiviazione thread-local in una libreria a collegamento dinamico](/windows/win32/Dlls/using-thread-local-storage-in-a-dynamic-link-library) nella Windows SDK. Si noti che l'esempio contiene una funzione del punto di ingresso denominata `LibMain`, ma è necessario denominare questa funzione `DllMain` in modo che funzioni con le librerie di runtime di C e MFC.

## <a name="see-also"></a>Vedere anche

[Creare DLL C/C++ in Visual Studio](dlls-in-visual-cpp.md)<br/>
[Punto di ingresso DllMain](/windows/win32/Dlls/dllmain)<br/>
[Procedure consigliate per la libreria a collegamento dinamico](/windows/win32/Dlls/dynamic-link-library-best-practices)
