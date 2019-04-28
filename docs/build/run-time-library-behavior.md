---
title: Le DLL e comportamento delle librerie di runtime Visual C++
ms.date: 11/04/2016
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
ms.openlocfilehash: ea970f010e86d655963485339c48b8f7d36d6270
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62314793"
---
# <a name="dlls-and-visual-c-run-time-library-behavior"></a>Le DLL e comportamento delle librerie di runtime Visual C++

Quando si compila una libreria di collegamento dinamico (DLL) usando Visual C++, per impostazione predefinita, il linker include la libreria di runtime di Visual C++ (VCRuntime). La libreria VCRuntime contiene codice necessario per l'inizializzazione e terminazione di un file eseguibile di C/C++. Quando collegati in una DLL, il codice di libreria VCRuntime fornisce una funzione di punto di ingresso DLL interna denominata `_DllMainCRTStartup` che gestisce i messaggi del sistema operativo Windows per la DLL da collegare o scollegare da un processo o thread. Il `_DllMainCRTStartup` funzione esegue le attività essenziali, ad esempio protezione del buffer di stack impostato, l'inizializzazione della libreria di runtime (CRT) C e la chiusura e le chiamate a costruttori e distruttori per gli oggetti globali e statici. `_DllMainCRTStartup` anche le chiamate funzioni hook di altre librerie, ad esempio WinRT, MFC e ATL per eseguire le proprie inizializzazione e terminazione di. Senza l'inizializzazione, la libreria CRT e altre librerie, nonché le variabili statiche, verrà lasciata in uno stato non inizializzato. Le routine di terminazione e stesso inizializzazione interno VCRuntime vengono chiamate se la DLL non usa una libreria collegata staticamente CRT o una DLL di CRT collegate in modo dinamico.

## <a name="default-dll-entry-point-dllmaincrtstartup"></a>DllMainCRTStartup punto di ingresso DLL predefinito

In Windows, tutte le DLL possono contenere una funzione di punto di ingresso facoltativa, in genere chiamata `DllMain`, che viene chiamato per l'inizializzazione e terminazione. Questo offre la possibilità di assegnare o rilasciare risorse aggiuntive in base alle esigenze. Windows chiama la funzione di punto di ingresso in quattro situazioni: connessione del processo, disconnessione del processo, connessione e disconnessione del thread. Quando una DLL viene caricata in uno spazio degli indirizzi di processo, quando viene caricata un'applicazione che lo usa, o quando l'applicazione richiede la DLL in fase di esecuzione, il sistema operativo crea una copia separata dei dati di DLL. Questa operazione viene definita *connessione del processo*. *Thread collegare* si verifica quando il processo la DLL viene caricata in Crea un nuovo thread. *Disconnessione del thread* si verifica quando termina il thread, e *disconnessione del processo* è quando la DLL non è più necessaria e viene rilasciata da un'applicazione. Il sistema operativo effettua una chiamata separata per il punto di ingresso DLL per ciascuno di questi eventi, il passaggio di un *motivo* argomento per ogni tipo di evento. Ad esempio, il sistema operativo invia `DLL_PROCESS_ATTACH` come il *motivo* collegare argomento per l'elaborazione del segnale.

La libreria VCRuntime fornisce una funzione di punto di ingresso denominata `_DllMainCRTStartup` per gestire le operazioni di inizializzazione e terminazione predefiniti. Nel processo di collegamento, il `_DllMainCRTStartup` funzione consente di impostare i controlli di sicurezza del buffer, inizializza la libreria CRT e altre librerie, inizializza le informazioni sul tipo in fase di esecuzione, inizializza e chiama i costruttori per i dati statici e non locali, inizializza l'archiviazione thread-local , incrementa un contatore interno statico per ogni collegamento e quindi chiama una fornita dall'utente o libreria- `DllMain`. Nel processo di disconnessione, la funzione esegue questi passaggi in ordine inverso. Viene chiamato `DllMain`, decrementa il contatore interno, chiama i distruttori, funzioni e registrate le chiamate CRT chiusura `atexit` funziona e comunica a qualsiasi altra libreria di terminazione. Quando il contatore allegato si avvicina allo zero, la funzione restituisce `FALSE` per indicare a Windows che la DLL può essere scaricata. Il `_DllMainCRTStartup` funzione viene chiamata anche durante thread collegamento e scollegamento thread. In questi casi, il codice di libreria VCRuntime effettua alcuna inizializzazione aggiuntiva o chiusura di per sé e chiama semplicemente `DllMain` per passare il messaggio lungo. Se `DllMain` restituisce `FALSE` dal processo di collegamento, della segnalazione dell'errore, `_DllMainCRTStartup` chiamate `DllMain` nuovamente e lo passa `DLL_PROCESS_DETACH` come il *motivo* argomento, quindi passa attraverso il resto del processo di terminazione.

Durante la creazione di DLL in Visual C++, il punto di ingresso predefinito `_DllMainCRTStartup` forniti da VCRuntime viene automaticamente collegata. Non è necessario specificare una funzione di punto di ingresso per la DLL usando il [/ENTRY (simbolo del punto di ingresso)](reference/entry-entry-point-symbol.md) l'opzione del linker.

> [!NOTE]
> Sebbene sia possibile specificare un'altra funzione di punto di ingresso per una DLL utilizzando il /ENTRY: l'opzione del linker, non è consigliabile, perché la funzione di punto di ingresso necessario duplicare tutti gli elementi che `_DllMainCRTStartup` esegue, nello stesso ordine. La libreria VCRuntime fornisce funzioni che consentono di duplicare il comportamento. Ad esempio, è possibile chiamare [security_init_cookie](../c-runtime-library/reference/security-init-cookie.md) immediatamente nel processo di collegamento per supportare le [/GS (controllo sicurezza Buffer)](reference/gs-buffer-security-check.md) buffer opzione di controllo. È possibile chiamare il `_CRT_INIT` funzione, passando gli stessi parametri come la funzione di punto di ingresso, per eseguire il resto delle funzioni di inizializzazione o terminazione DLL.

<a name="initializing-a-dll"></a>

## <a name="initialize-a-dll"></a>Inizializzare una DLL

La DLL può avere il codice di inizializzazione da esegue al caricamento della DLL. È possibile eseguire le funzioni di inizializzazione e terminazione DLL, affinché `_DllMainCRTStartup` chiama una funzione denominata `DllMain` che è possibile fornire. Il `DllMain` deve avere la firma necessaria per un punto di ingresso DLL. La funzione di punto di ingresso predefinito `_DllMainCRTStartup` chiamate `DllMain` usando gli stessi parametri passati da Windows. Per impostazione predefinita, se non si specifica un `DllMain` (funzione), Visual C++ fornisce uno automaticamente e lo collega in modo che `_DllMainCRTStartup` ha sempre qualcosa da chiamare. Ciò significa che se non è necessaria inizializzare la DLL, non ci sono particolari che è necessario eseguire durante la compilazione della DLL.

Si tratta della firma usata per `DllMain`:

```cpp
#include <windows.h>

extern "C" BOOL WINAPI DllMain (
    HINSTANCE const instance,  // handle to DLL module
    DWORD     const reason,    // reason for calling function
    LPVOID    const reserved); // reserved
```

Eseguire il wrapping di alcune librerie di `DllMain` funzione per l'utente. Ad esempio, in una DLL MFC regolari, implementare il `CWinApp` dell'oggetto `InitInstance` e `ExitInstance` funzioni membro per eseguire l'inizializzazione e terminazione richieste dalla DLL. Per altre informazioni, vedere la [inizializzare normali DLL MFC](#initializing-regular-dlls) sezione.

> [!WARNING]
> Sono previsti limiti significativi in modo sicuro operazioni possibili in un punto di ingresso DLL. Visualizzare [procedure consigliate generali](/windows/desktop/Dlls/dynamic-link-library-best-practices) per le API di Windows specifiche che è preferibile chiamare in `DllMain`. Se è necessario tutt'altro che quindi l'inizializzazione più semplice usare una funzione di inizializzazione per la DLL. È possibile richiedere alle applicazioni di chiamare la funzione di inizializzazione dopo `DllMain` dispone di esecuzione e prima che chiamano altre funzioni nella DLL.

<a name="initializing-non-mfc-dlls"></a>

### <a name="initialize-ordinary-non-mfc-dlls"></a>Inizializzazione di DLL normali (non MFC)

Per eseguire la propria inizializzazione nelle DLL normali (non MFC) che usano la libreria VCRuntime fornita dal `_DllMainCRTStartup` punto di ingresso, il codice sorgente della DLL deve contenere una funzione denominata `DllMain`. Il codice seguente presenta una struttura di base che mostra la definizione della funzione `DllMain` potrebbe essere simile:

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
> Documentazione di Windows SDK precedente afferma che è necessario specificare il nome effettivo della funzione di punto di ingresso DLL nella riga di comando con l'opzione /ENTRY del linker. Con Visual C++, non occorre usare l'opzione /ENTRY se il nome della funzione di punto di ingresso è `DllMain`. Infatti, se si usa l'opzione /ENTRY e il nome del punto di ingresso funzione qualcosa di diverso da `DllMain`, la libreria CRT non inizializzata correttamente a meno che la funzione di punto di ingresso effettua le chiamate di inizializzazione stessa che `_DllMainCRTStartup` rende.

<a name="initializing-regular-dlls"></a>

### <a name="initialize-regular-mfc-dlls"></a>Inizializzazione di DLL MFC regolari

Perché le DLL MFC regolari ha un `CWinApp` dell'oggetto, che devono eseguire le attività di inizializzazione e terminazione nello stesso percorso di un'applicazione MFC: nel `InitInstance` e `ExitInstance` dalle funzioni membro della DLL `CWinApp`-derivato classe. Poiché MFC fornisce un' `DllMain` funzione che viene chiamato dal `_DllMainCRTStartup` per `DLL_PROCESS_ATTACH` e `DLL_PROCESS_DETACH`, è consigliabile non scrivere il proprio `DllMain` (funzione). MFC fornito dal `DllMain` chiamate di funzione `InitInstance` quando la DLL viene caricata e chiama il metodo `ExitInstance` prima dello scaricamento di DLL.

Una DLL regolare MFC può tenere traccia di più thread chiamando [TlsAlloc](/windows/desktop/api/processthreadsapi/nf-processthreadsapi-tlsalloc) e [TlsGetValue](/windows/desktop/api/processthreadsapi/nf-processthreadsapi-tlsgetvalue) nel relativo `InitInstance` (funzione). Queste funzioni consentono alla DLL di tenere traccia dei dati specifico del thread.

Nella DLL MFC regolare collegata in modo dinamico a MFC, se si usa qualsiasi OLE MFC, Database MFC (o DAO) o supportare socket MFC, rispettivamente, il debug MFC di estensione dll MFCO*versione*D.dll, MFCD*versione*D.dll e MFCN*versione*D.dll (dove *versione* è il numero di versione) vengono collegate automaticamente. È necessario chiamare una delle seguenti funzioni di inizializzazione predefiniti per ognuna di queste DLL che si siano utilizzando nel regolare MFC DLL `CWinApp::InitInstance`.

|Tipo di supporto MFC|Funzione di inizializzazione per chiamare|
|-------------------------|-------------------------------------|
|OLE MFC (MFCO*versione*D.dll)|`AfxOleInitModule`|
|Database MFC (MFCD*versione*D.dll)|`AfxDbInitModule`|
|Socket MFC (MFCN*versione*D.dll)|`AfxNetInitModule`|

<a name="initializing-extension-dlls"></a>

### <a name="initialize-mfc-extension-dlls"></a>Inizializzazione di DLL estensione MFC

Poiché MFC di estensione dll non è un `CWinApp`-derivato dell'oggetto (come le DLL MFC regolari), è necessario aggiungere il codice di inizializzazione e terminazione per la `DllMain` funzione che genera la creazione guidata DLL MFC.

La procedura guidata fornisce il codice seguente per le DLL di estensione MFC. Nel codice, `PROJNAME` è un segnaposto per il nome del progetto.

```cpp
#include "stdafx.h"
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

Creazione di una nuova `CDynLinkLibrary` oggetto durante l'inizializzazione consente l'estensione MFC esportazione della DLL `CRuntimeClass` oggetti o le risorse per l'applicazione client.

Se si intende usare l'estensione MFC DLL da uno o più DLL MFC regolari, è necessario esportare una funzione di inizializzazione che crea un `CDynLinkLibrary` oggetto. Tale funzione deve essere chiamata da ognuna delle DLL MFC regolari che usano la DLL di estensione MFC. Una posizione appropriata per chiamare questa funzione di inizializzazione è il `InitInstance` funzione membro del regolare MFC DLL `CWinApp`-oggetto derivato prima di usare una delle classi esportate della DLL estensione MFC o delle funzioni.

Nel `DllMain` che la creazione guidata DLL MFC genera l'errore, la chiamata a `AfxInitExtensionModule` acquisisce le classi di runtime del modulo (`CRuntimeClass` strutture), nonché le factory di oggetto (`COleObjectFactory` oggetti) per utilizzare quando il `CDynLinkLibrary` oggetto viene creato. È consigliabile controllare il valore restituito di `AfxInitExtensionModule`; se un valore pari a zero viene restituito da `AfxInitExtensionModule`, restituiscono zero dal `DllMain` (funzione).

Se la DLL di estensione MFC viene collegata in modo esplicito a un file eseguibile (vale a dire le chiamate eseguibile `AfxLoadLibrary` per collegare alla DLL), è necessario aggiungere una chiamata a `AfxTermExtensionModule` sul `DLL_PROCESS_DETACH`. Questa funzione consente di MFC pulire la DLL di estensione MFC quando ogni processo viene scollegato dalla DLL di estensione MFC (situazione che si verifica quando il processo viene chiuso o quando la DLL viene scaricata come risultato di un `AfxFreeLibrary` chiamare). Se la DLL di estensione MFC viene collegata in modo implicito per l'applicazione, la chiamata a `AfxTermExtensionModule` non è necessario.

Le applicazioni che è necessario chiamare in modo esplicito collegamento a DLL di estensione MFC `AfxTermExtensionModule` quando liberare la DLL. Usano inoltre `AfxLoadLibrary` e `AfxFreeLibrary` (anziché le funzioni Win32 `LoadLibrary` e `FreeLibrary`) se l'applicazione usa più thread. Usando `AfxLoadLibrary` e `AfxFreeLibrary` assicura che il codice di avvio e arresto del sistema che viene eseguita quando l'estensione MFC DLL viene caricata e scaricata non danneggiare lo stato complessivo di MFC.

Poiché MFCx0.dll entro l'ora di completamento dell'inizializzazione `DllMain` viene chiamato, è possibile allocare la memoria e chiamare le funzioni MFC in `DllMain` (diversamente dalla versione 16 bit di MFC).

DLL di estensione possono occuparsi di multithreading gestendo il `DLL_THREAD_ATTACH` e `DLL_THREAD_DETACH` casi nel `DllMain` (funzione). Questi casi vengono passati al `DllMain` quando i thread collegare e scollegare dalla DLL. La chiamata [TlsAlloc](/windows/desktop/api/processthreadsapi/nf-processthreadsapi-tlsalloc) quando si connette una DLL consente alla DLL di mantenere thread indicizza archiviazione-local (TLS) per ogni thread collegato alla DLL.

Si noti che il file di intestazione Afxdllx. h contiene le definizioni speciali per le strutture utilizzate nelle DLL di estensione MFC, ad esempio la definizione per `AFX_EXTENSION_MODULE` e `CDynLinkLibrary`. È necessario includere questo file di intestazione nella DLL di estensione MFC.

> [!NOTE]
>  È importante né definire né di annullare la definizione del `_AFX_NO_XXX` macro in stdafx. h. Queste macro esistono solo allo scopo di controllo se una piattaforma di destinazione particolare supporta tale funzionalità o meno. È possibile scrivere un programma per verificare queste macro (ad esempio, `#ifndef _AFX_NO_OLE_SUPPORT`), ma il programma dovrebbe mai definire o annullare la definizione di queste macro.

Una funzione di inizializzazione di esempio che gestisce il multithreading è inclusa nella [Using Thread Local Storage in una libreria a collegamento dinamico](/windows/desktop/Dlls/using-thread-local-storage-in-a-dynamic-link-library) nel SDK di Windows. Si noti che il codice di esempio contiene una funzione di punto di ingresso denominata `LibMain`, ma è necessario assegnare nomi a questa funzione `DllMain` in modo che funziona con le librerie di runtime C e MFC.

## <a name="see-also"></a>Vedere anche

[DLL in Visual C++](dlls-in-visual-cpp.md)<br/>
[Punto di ingresso DllMain](/windows/desktop/Dlls/dllmain)<br/>
[Libreria a collegamento dinamico di procedure consigliate](/windows/desktop/Dlls/dynamic-link-library-best-practices)
