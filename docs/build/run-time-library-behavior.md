---
title: DLL e comportamento delle librerie di runtime Visual C++
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
ms.openlocfilehash: 2f2ffb13e6a80b144298bbf8cd76b5666a10b4dd
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81335669"
---
# <a name="dlls-and-visual-c-run-time-library-behavior"></a>DLL e comportamento delle librerie di runtime Visual C++

Quando si compila una libreria a collegamento dinamico (DLL) utilizzando Visual Studio, per impostazione predefinita, il linker include la libreria di runtime di Visual C. Il VCRuntime contiene il codice necessario per inizializzare e terminare un eseguibile C/C. Quando è collegato a una DLL, il codice VCRuntime `_DllMainCRTStartup` fornisce una funzione di punto di ingresso DLL interna chiamata che gestisce i messaggi del sistema operativo Windows alla DLL per connettersi o disconnettersi da un processo o da un thread. La `_DllMainCRTStartup` funzione esegue attività essenziali come la configurazione della sicurezza del buffer dello stack, l'inizializzazione e la terminazione della libreria di runtime del linguaggio C (CRT) e le chiamate a costruttori e distruttori per gli oggetti statici e globali. `_DllMainCRTStartup`chiama anche le funzioni hook per altre librerie, ad esempio WinRT, MFC e ATL per eseguire la propria inizializzazione e terminazione. Senza questa inizializzazione, LA libreria CRT e altre librerie, nonché le variabili statiche, verrebbero lasciate in uno stato non inizializzato. Le stesse routine di inizializzazione e terminazione interne di VCRuntime vengono chiamate se la DLL utilizza una libreria CRT collegata in modo statico o una DLL CRT collegata dinamicamente.

## <a name="default-dll-entry-point-_dllmaincrtstartup"></a>Punto di ingresso DLL predefinito _DllMainCRTStartup

In Windows, tutte le DLL possono contenere una funzione `DllMain`di punto di ingresso facoltativa, in genere denominata , che viene chiamata sia per l'inizializzazione che per la terminazione. In questo modo è possibile allocare o rilasciare risorse aggiuntive in base alle esigenze. Windows chiama la funzione di punto di ingresso in quattro situazioni: connessione del processo, disconnessione del processo, collegamento del thread e disconnessione del thread. Quando una DLL viene caricata in uno spazio di indirizzi di processo, quando viene caricata un'applicazione che la utilizza o quando l'applicazione richiede la DLL in fase di esecuzione, il sistema operativo crea una copia separata dei dati DLL. Questo è chiamato *process attach*. *La connessione del thread* si verifica quando il processo in cui viene caricata la DLL crea un nuovo thread. *La disconnessione del thread* si verifica quando il thread termina e *la disconnessione* del processo è quando la DLL non è più necessaria e viene rilasciata da un'applicazione. Il sistema operativo effettua una chiamata separata al punto di ingresso DLL per ognuno di questi eventi, passando un argomento *motivo* per ogni tipo di evento. Ad esempio, il `DLL_PROCESS_ATTACH` sistema operativo invia come argomento *motivo* per collegare il processo del segnale.

La libreria VCRuntime fornisce una `_DllMainCRTStartup` funzione di punto di ingresso chiamata per gestire le operazioni di inizializzazione e terminazione predefinite. Al collegamento del `_DllMainCRTStartup` processo, la funzione imposta i controlli di sicurezza del buffer, inizializza LA libreria CRT e altre librerie, inizializza le informazioni sui tipi in fase di esecuzione, inizializza e chiama i `DllMain`costruttori per i dati statici e non locali, inizializza l'archiviazione locale del thread, incrementa un contatore statico interno per ogni connessione e quindi chiama un file fornito dall'utente o dalla libreria. Al distacco del processo, la funzione passa attraverso questi passaggi in senso inverso. Chiama `DllMain`, decrementa il contatore interno, chiama i distruttori, `atexit` chiama le funzioni di terminazione CRT e le funzioni registrate e notifica qualsiasi altra libreria di terminazione. Quando il contatore degli allegati `FALSE` diventa zero, la funzione torna a indicare a Windows che la DLL può essere scaricata. La `_DllMainCRTStartup` funzione viene chiamata anche durante l'associazione del thread e la disconnessione del thread. In questi casi, il codice VCRuntime non esegue alcuna `DllMain` inizializzazione o terminazione aggiuntiva in modo proprio e chiama solo per passare il messaggio. Se `DllMain` `FALSE` restituisce dalla connessione del `_DllMainCRTStartup` `DllMain` processo, `DLL_PROCESS_DETACH` l'errore di segnalazione, chiama di nuovo e passa come argomento *reason,* quindi passa attraverso il resto del processo di terminazione.

Quando si compilano DLL in Visual Studio, il punto `_DllMainCRTStartup` di ingresso predefinito fornito da VCRuntime viene collegato automaticamente. Non è necessario specificare una funzione di punto di ingresso per la DLL utilizzando l'opzione del linker [/ENTRY (simbolo del punto](reference/entry-entry-point-symbol.md) di ingresso).

> [!NOTE]
> Sebbene sia possibile specificare un'altra funzione di punto di ingresso per una DLL utilizzando l'opzione del linker /ENTRY:, non è consigliabile, perché la funzione di punto di ingresso deve duplicare tutte le operazione eseguite `_DllMainCRTStartup` nello stesso ordine. Il VCRuntime fornisce funzioni che consentono di duplicarne il comportamento. Ad esempio, è possibile chiamare [__security_init_cookie](../c-runtime-library/reference/security-init-cookie.md) immediatamente al momento della connessione del processo per supportare l'opzione di controllo del buffer [/GS (controllo di sicurezza del buffer).](reference/gs-buffer-security-check.md) È possibile `_CRT_INIT` chiamare la funzione, passando gli stessi parametri della funzione del punto di ingresso, per eseguire il resto delle funzioni di inizializzazione o terminazione della DLL.

<a name="initializing-a-dll"></a>

## <a name="initialize-a-dll"></a>Inizializzare una DLL

La DLL potrebbe avere codice di inizializzazione che deve essere eseguito al caricamento della DLL. Per poter eseguire le proprie funzioni di `_DllMainCRTStartup` inizializzazione e `DllMain` terminazione DLL, chiama una funzione chiamata che è possibile fornire. È `DllMain` necessario disporre della firma necessaria per un punto di ingresso DLL. La funzione del `_DllMainCRTStartup` `DllMain` punto di ingresso predefinito chiama utilizzando gli stessi parametri passati da Windows.The default entry point function calls using the same parameters passed by Windows. Per impostazione predefinita, se `DllMain` non si fornisce una funzione, Visual `_DllMainCRTStartup` Studio ne fornisce una e la collega in modo che abbia sempre qualcosa da chiamare. Ciò significa che se non è necessario inizializzare la DLL, non è necessario eseguire alcuna operazione speciale durante la compilazione della DLL.

Questa è la `DllMain`firma utilizzata per:

```cpp
#include <windows.h>

extern "C" BOOL WINAPI DllMain (
    HINSTANCE const instance,  // handle to DLL module
    DWORD     const reason,    // reason for calling function
    LPVOID    const reserved); // reserved
```

Alcune librerie `DllMain` avvolgono la funzione per te. Ad esempio, in una DLL `CWinApp` MFC regolare, implementare le funzioni membro e `InitInstance` `ExitInstance` dell'oggetto per eseguire l'inizializzazione e la chiusura richieste dalla DLL. Per ulteriori informazioni, vedere la sezione [Inizializzare DLL MFC regolari.](#initializing-regular-dlls)

> [!WARNING]
> Esistono limiti significativi sulle operazioni che è possibile eseguire in modo sicuro in un punto di ingresso DLL. Vedere [Procedure consigliate generali](/windows/win32/Dlls/dynamic-link-library-best-practices) per API di Windows specifiche `DllMain`che non sono sicure da chiamare. Se avete bisogno di qualcosa, ma l'inizializzazione più semplice quindi farlo in una funzione di inizializzazione per la DLL. È possibile richiedere alle applicazioni `DllMain` di chiamare la funzione di inizializzazione dopo l'esecuzione e prima di chiamare qualsiasi altra funzione nella DLL.

<a name="initializing-non-mfc-dlls"></a>

### <a name="initialize-ordinary-non-mfc-dlls"></a>Inizializzare DLL ordinarie (non MFC)

Per eseguire l'inizializzazione in DLL ordinarie (non MFC) che `_DllMainCRTStartup` utilizzano il punto di ingresso fornito `DllMain`da VCRuntime, il codice sorgente della DLL deve contenere una funzione denominata . Il codice seguente presenta uno scheletro `DllMain` di base che illustra l'aspetto della definizione di :The following code presents a basic skeleton showing what the definition of might look like:

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
> La documentazione precedente di Windows SDK indica che il nome effettivo della funzione di punto di ingresso DLL deve essere specificato nella riga di comando del linker con l'opzione /ENTRY. Con Visual Studio non è necessario utilizzare l'opzione /ENTRY se il `DllMain`nome della funzione di punto di ingresso è . Infatti, se si utilizza l'opzione /ENTRY e si `DllMain`assegna alla funzione del punto di ingresso un valore diverso da `_DllMainCRTStartup` , la libreria CRT non viene inizializzata correttamente a meno che la funzione del punto di ingresso non esegua le stesse chiamate di inizializzazione effettuate.

<a name="initializing-regular-dlls"></a>

### <a name="initialize-regular-mfc-dlls"></a>Inizializzazione di DLL MFC regolari

Poiché le DLL MFC `CWinApp` regolari dispongono di un oggetto, devono eseguire le attività di `InitInstance` `ExitInstance` inizializzazione e terminazione `CWinApp`nella stessa posizione di un'applicazione MFC: nelle funzioni membro e e della classe derivata dalla DLL. Poiché MFC `DllMain` fornisce una `_DllMainCRTStartup` funzione `DLL_PROCESS_ATTACH` `DLL_PROCESS_DETACH`che viene chiamata da `DllMain` for e , non è necessario scrivere una funzione personalizzata. La funzione `DllMain` fornita `InitInstance` da MFC chiama quando `ExitInstance` la DLL viene caricata e chiama prima che la DLL venga scaricata.

Una DLL MFC regolare può tenere traccia di più thread `InitInstance` chiamando [TlsAlloc](/windows/win32/api/processthreadsapi/nf-processthreadsapi-tlsalloc) e [TlsGetValue](/windows/win32/api/processthreadsapi/nf-processthreadsapi-tlsgetvalue) nella relativa funzione. Queste funzioni consentono alla DLL di tenere traccia dei dati specifici del thread.

Nella DLL MFC regolare che si collega in modo dinamico a MFC, se si utilizza qualsiasi MFC OLE, Database MFC (o DAO) o MFC Sockets supporto, rispettivamente, le DLL di estensione MFC di debug MFCO*versione*D.dll, VERSIONE*MFCD*D.dll e MFCN*versione*D.dll (dove *la versione* è il numero di versione) sono collegati automaticamente. È necessario chiamare una delle seguenti funzioni di inizializzazione predefinite per ognuna di queste `CWinApp::InitInstance`DLL che si sta utilizzando nella DLL MFC regolare .

|Tipo di supporto MFC|Funzione di inizializzazione da chiamare|
|-------------------------|-------------------------------------|
|OLE MFC (MFCO*versione*D.dll)|`AfxOleInitModule`|
|Database MFC *(versione*MFCD D.dll)|`AfxDbInitModule`|
|Sockets MFC *(versione*MFCN D.dll)|`AfxNetInitModule`|

<a name="initializing-extension-dlls"></a>

### <a name="initialize-mfc-extension-dlls"></a>Inizializzare le DLL di estensione MFC

Poiché le DLL di estensione `CWinApp`MFC non dispongono di un oggetto derivato da MFC (come `DllMain` le DLL MFC regolari), è necessario aggiungere il codice di inizializzazione e terminazione alla funzione generata dalla Creazione guidata DLL MFC.

La procedura guidata fornisce il codice seguente per le DLL di estensione MFC. Nel codice, `PROJNAME` è un segnaposto per il nome del progetto.

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

La creazione `CDynLinkLibrary` di un nuovo oggetto durante `CRuntimeClass` l'inizializzazione consente alla DLL di estensione MFC di esportare oggetti o risorse nell'applicazione client.

Se si intende utilizzare la DLL di estensione MFC da una o più DLL MFC `CDynLinkLibrary` regolari, è necessario esportare una funzione di inizializzazione che crea un oggetto. Tale funzione deve essere chiamata da ciascuna delle DLL MFC regolari che utilizzano la DLL di estensione MFC. Una posizione appropriata per chiamare questa `InitInstance` funzione di inizializzazione è `CWinApp`nella funzione membro dell'oggetto derivato dalla DLL MFC regolare prima di utilizzare una qualsiasi delle classi o funzioni esportate della DLL di estensione MFC.

`DllMain` Nella generazione della Creazione guidata DLL `AfxInitExtensionModule` MFC, la chiamata a acquisisce`CRuntimeClass` le classi di runtime del`COleObjectFactory` modulo (strutture) `CDynLinkLibrary` e le relative object factory (oggetti) da utilizzare quando viene creato l'oggetto. È necessario controllare il `AfxInitExtensionModule`valore restituito di ; se viene restituito un `AfxInitExtensionModule`valore zero da `DllMain` , restituire zero dalla funzione.

Se la DLL di estensione MFC verrà collegata `AfxLoadLibrary` in modo esplicito a un eseguibile (ovvero le chiamate eseguibili per il collegamento alla DLL), è necessario aggiungere una chiamata a `AfxTermExtensionModule` on `DLL_PROCESS_DETACH`. Questa funzione consente a MFC di pulire la DLL di estensione MFC quando ogni processo si disconnette dalla DLL di `AfxFreeLibrary` estensione MFC (che si verifica quando il processo termina o quando la DLL viene scaricata come risultato di una chiamata). Se la DLL di estensione MFC verrà collegata `AfxTermExtensionModule` in modo implicito all'applicazione, la chiamata a non è necessaria.

Le applicazioni che si collegano in `AfxTermExtensionModule` modo esplicito alle DLL di estensione MFC devono chiamare quando si libera la DLL. Devono inoltre `AfxLoadLibrary` utilizzare `AfxFreeLibrary` e (anziché le `LoadLibrary` `FreeLibrary`funzioni Win32 e ) se l'applicazione utilizza più thread. L'utilizzo `AfxLoadLibrary` e `AfxFreeLibrary` assicura che il codice di avvio e arresto che viene eseguito quando la DLL di estensione MFC viene caricata e scaricata non danneggia lo stato globale MFC.

Poiché il MFCx0.dll è completamente `DllMain` inizializzato al momento viene chiamato, `DllMain` è possibile allocare memoria e chiamare le funzioni MFC all'interno (a differenza della versione a 16 bit di MFC).

Le DLL di estensione possono occuparsi del `DLL_THREAD_ATTACH` `DLL_THREAD_DETACH` multithreading `DllMain` gestendo i casi e nella funzione. Questi casi vengono `DllMain` passati a quando i thread si collegano e si discollegano dalla DLL. La chiamata a [TlsAlloc](/windows/win32/api/processthreadsapi/nf-processthreadsapi-tlsalloc) quando una DLL è collegata consente alla DLL di mantenere gli indici TLS (Thread Local Storage) per ogni thread collegato alla DLL.

Si noti che il file di intestazione Afxdllx.h contiene definizioni speciali `AFX_EXTENSION_MODULE` per `CDynLinkLibrary`le strutture utilizzate nelle DLL di estensione MFC, ad esempio la definizione per e . È necessario includere questo file di intestazione nella DLL di estensione MFC.

> [!NOTE]
> È importante non definire né annullare `_AFX_NO_XXX` la definizione di nessuna delle macro in *pch.h* (*stdafx.h* in Visual Studio 2017 e versioni precedenti). Queste macro esistono solo allo scopo di verificare se una particolare piattaforma di destinazione supporta o meno tale funzionalità. È possibile scrivere il programma per controllare `#ifndef _AFX_NO_OLE_SUPPORT`queste macro (ad esempio, ), ma il programma non deve mai definire o dedefinire queste macro.

Una funzione di inizializzazione di esempio che gestisce il multithreading è inclusa in Utilizzo dell'archiviazione locale di thread in una libreria a [collegamento dinamico](/windows/win32/Dlls/using-thread-local-storage-in-a-dynamic-link-library) in Windows SDK. Si noti che l'esempio `LibMain`contiene una funzione di `DllMain` punto di ingresso denominata , ma è necessario denominarla in modo che funzioni con le librerie di runtime MFC e C.

## <a name="see-also"></a>Vedere anche

[Creare DLL C/C++ in Visual Studio](dlls-in-visual-cpp.md)<br/>
[Punto di ingresso DllMain](/windows/win32/Dlls/dllmain)<br/>
[Procedure consigliate per la libreria a collegamento dinamicoDynamic-link Library Best Practices](/windows/win32/Dlls/dynamic-link-library-best-practices)
