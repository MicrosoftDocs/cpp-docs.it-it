---
description: 'Altre informazioni su: dll e Visual C++ comportamento della libreria di runtime'
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
ms.openlocfilehash: 5b76ec562b87969350b49d38e24c33ce7a4fabf8
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97275451"
---
# <a name="dlls-and-visual-c-run-time-library-behavior"></a>DLL e comportamento delle librerie di runtime Visual C++

Quando si compila una libreria di collegamento dinamico (DLL) usando Visual Studio, per impostazione predefinita il linker include la libreria di runtime Visual C++ (VCRuntime). VCRuntime contiene il codice necessario per inizializzare e terminare un eseguibile C/C++. Quando si è collegati a una DLL, il codice VCRuntime fornisce una funzione di punto di ingresso DLL interna denominata `_DllMainCRTStartup` che gestisce i messaggi del sistema operativo Windows alla dll per connettersi o disconnettersi da un processo o da un thread. La `_DllMainCRTStartup` funzione esegue attività essenziali come la configurazione della sicurezza del buffer dello stack, l'inizializzazione e la terminazione della libreria di runtime C (CRT) e le chiamate a costruttori e distruttori per oggetti statici e globali. `_DllMainCRTStartup` chiama anche funzioni hook per altre librerie, ad esempio WinRT, MFC e ATL, per eseguire la propria inizializzazione e terminazione. Senza questa inizializzazione, CRT e altre librerie, nonché le variabili statiche, verranno lasciate in uno stato non inizializzato. Le stesse routine di inizializzazione e terminazione interna di VCRuntime vengono chiamate se la DLL usa una libreria CRT collegata staticamente o una DLL CRT collegata in modo dinamico.

## <a name="default-dll-entry-point-_dllmaincrtstartup"></a>_DllMainCRTStartup punto di ingresso DLL predefinito

In Windows tutte le dll possono contenere una funzione del punto di ingresso facoltativa, chiamata in genere `DllMain` , che viene chiamata per l'inizializzazione e la terminazione. In questo modo è possibile allocare o rilasciare risorse aggiuntive in base alle esigenze. Windows chiama la funzione del punto di ingresso in quattro situazioni: associazione processo, scollegamento processi, collegamento thread e scollegamento thread. Quando una DLL viene caricata in uno spazio degli indirizzi del processo, quando viene caricata un'applicazione che lo usa o quando l'applicazione richiede la DLL in fase di esecuzione, il sistema operativo crea una copia separata dei dati della DLL. Questa operazione è denominata *associazione processi*. La *connessione al thread* si verifica quando il processo in cui viene caricata la dll crea un nuovo thread. La *disconnessione del thread* si verifica quando il thread termina ed è in *corso la disconnessione del processo* quando la dll non è più necessaria e viene rilasciata da un'applicazione. Il sistema operativo effettua una chiamata separata al punto di ingresso della DLL per ognuno di questi eventi, passando un argomento *reason* per ogni tipo di evento. Ad esempio, il sistema operativo invia `DLL_PROCESS_ATTACH` come argomento *reason* per segnalare la connessione al processo.

La libreria VCRuntime fornisce una funzione del punto di ingresso chiamata `_DllMainCRTStartup` per gestire le operazioni di inizializzazione e terminazione predefinite. Durante il processo di connessione, la `_DllMainCRTStartup` funzione imposta i controlli di sicurezza del buffer, Inizializza la libreria CRT e altre librerie, Inizializza le informazioni sui tipi in fase di esecuzione, Inizializza e chiama i costruttori per i dati statici e non locali, Inizializza l'archiviazione locale di thread, incrementa un contatore statico interno per ogni connessione e quindi chiama un utente o una libreria fornita `DllMain` . Quando si disconnette il processo, la funzione esegue questi passaggi in ordine inverso. Chiama `DllMain` , decrementa il contatore interno, chiama distruttori, chiama funzioni di terminazione CRT e funzioni registrate `atexit` e notifica qualsiasi altra libreria di terminazione. Quando il contatore degli allegati va a zero, la funzione restituisce per `FALSE` indicare a Windows che la dll può essere scaricata. La `_DllMainCRTStartup` funzione viene chiamata anche durante la connessione del thread e la separazione dei thread. In questi casi, il codice VCRuntime non esegue ulteriori inizializzazioni o terminazioni in modo autonomo e chiama semplicemente `DllMain` per passare il messaggio lungo. Se `DllMain` restituisce `FALSE` dalla connessione al processo, segnalando un errore, `_DllMainCRTStartup` chiama di `DllMain` nuovo e `DLL_PROCESS_DETACH` viene passato come argomento *reason* , quindi esegue il resto del processo di terminazione.

Quando si compilano dll in Visual Studio, il punto di ingresso predefinito  `_DllMainCRTStartup` fornito da VCRuntime è collegato automaticamente. Non è necessario specificare una funzione del punto di ingresso per la DLL usando l'opzione del linker [/entry (simbolo del punto di ingresso)](reference/entry-entry-point-symbol.md) .

> [!NOTE]
> Sebbene sia possibile specificare un'altra funzione del punto di ingresso per una DLL usando l'opzione del linker/ENTRY:, non è consigliabile, perché la funzione del punto di ingresso dovrebbe duplicare tutti gli elementi che lo `_DllMainCRTStartup` fanno, nello stesso ordine. VCRuntime fornisce funzioni che consentono di duplicare il comportamento. È possibile, ad esempio, chiamare [__security_init_cookie](../c-runtime-library/reference/security-init-cookie.md) immediatamente on processo Connetti per supportare l'opzione di controllo del buffer [/GS (controllo sicurezza buffer)](reference/gs-buffer-security-check.md) . È possibile chiamare la `_CRT_INIT` funzione, passando gli stessi parametri della funzione del punto di ingresso, per eseguire il resto delle funzioni di inizializzazione o terminazione della dll.

<a name="initializing-a-dll"></a>

## <a name="initialize-a-dll"></a>Inizializzare una DLL

La DLL può includere codice di inizializzazione che deve essere eseguito quando la DLL viene caricata. Per poter eseguire le proprie funzioni di inizializzazione e terminazione della DLL, `_DllMainCRTStartup` chiama una funzione denominata `DllMain` che è possibile fornire. Il `DllMain` deve avere la firma necessaria per un punto di ingresso della dll. La funzione predefinita del punto `_DllMainCRTStartup` di ingresso chiama `DllMain` usando gli stessi parametri passati da Windows. Per impostazione predefinita, se non si specifica una `DllMain` funzione, Visual Studio ne fornisce uno per l'utente e lo collega a in modo che `_DllMainCRTStartup` abbia sempre qualcosa da chiamare. Ciò significa che se non è necessario inizializzare la DLL, non c'è niente di speciale da fare quando si compila la DLL.

Si tratta della firma utilizzata per `DllMain` :

```cpp
#include <windows.h>

extern "C" BOOL WINAPI DllMain (
    HINSTANCE const instance,  // handle to DLL module
    DWORD     const reason,    // reason for calling function
    LPVOID    const reserved); // reserved
```

Alcune librerie incapsulano la `DllMain` funzione. In una normale DLL MFC, ad esempio, implementare le `CWinApp` `InitInstance` funzioni membro e dell'oggetto `ExitInstance` per eseguire l'inizializzazione e la terminazione richieste dalla dll. Per ulteriori informazioni, vedere la sezione [Initialize Regular MFC DLLs](#initializing-regular-dlls) .

> [!WARNING]
> Esistono limiti significativi sulle operazioni che è possibile eseguire in modo sicuro in un punto di ingresso della DLL. Vedere [le procedure consigliate generali per le](/windows/win32/Dlls/dynamic-link-library-best-practices) API Windows specifiche che non sono sicure per chiamare `DllMain` . Se è necessario solo l'inizializzazione più semplice, eseguire questa operazione in una funzione di inizializzazione per la DLL. È possibile richiedere alle applicazioni di chiamare la funzione di inizializzazione dopo `DllMain` l'esecuzione di e prima di chiamare qualsiasi altra funzione nella dll.

<a name="initializing-non-mfc-dlls"></a>

### <a name="initialize-ordinary-non-mfc-dlls"></a>Inizializzazione di dll ordinarie (non MFC)

Per eseguire un'inizializzazione personalizzata in dll ordinarie (non MFC) che usano il punto di ingresso fornito da VCRuntime `_DllMainCRTStartup` , il codice sorgente della dll deve contenere una funzione denominata `DllMain` . Il codice seguente presenta uno scheletro di base che mostra la definizione di `DllMain` :

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
> La documentazione di Windows SDK precedente afferma che il nome effettivo della funzione del punto di ingresso della DLL deve essere specificato nella riga di comando del linker con l'opzione/ENTRY. Con Visual Studio, non è necessario usare l'opzione/ENTRY se il nome della funzione del punto di ingresso è `DllMain` . Infatti, se si usa l'opzione/ENTRY e si assegna alla funzione del punto di ingresso un nome diverso da `DllMain` , CRT non viene inizializzato correttamente, a meno che la funzione del punto di ingresso non faccia le stesse chiamate di inizializzazione `_DllMainCRTStartup` .

<a name="initializing-regular-dlls"></a>

### <a name="initialize-regular-mfc-dlls"></a>Inizializzazione di DLL MFC regolari

Poiché le normali DLL MFC hanno un `CWinApp` oggetto, devono eseguire le attività di inizializzazione e terminazione nello stesso percorso di un'applicazione MFC: nelle `InitInstance` `ExitInstance` funzioni membro e della classe derivata da della dll `CWinApp` . Poiché MFC fornisce una `DllMain` funzione chiamata da `_DllMainCRTStartup` per `DLL_PROCESS_ATTACH` e `DLL_PROCESS_DETACH` , non è necessario scrivere una `DllMain` funzione personalizzata. La funzione fornita da MFC `DllMain` chiama `InitInstance` quando la dll viene caricata e chiama `ExitInstance` prima che la dll venga scaricata.

Una normale DLL MFC può tenere traccia di più thread chiamando [TlsAlloc](/windows/win32/api/processthreadsapi/nf-processthreadsapi-tlsalloc) e [TlsGetValue](/windows/win32/api/processthreadsapi/nf-processthreadsapi-tlsgetvalue) nella sua `InitInstance` funzione. Queste funzioni consentono alla DLL di rilevare i dati specifici del thread.

Nella DLL MFC normale che si collega dinamicamente a MFC, se si utilizza qualsiasi OLE MFC, database MFC (o DAO) o il supporto di socket MFC, rispettivamente, le DLL dell'estensione MFC di debug MFCO *versione* D.dll, MFCD *versione* D.dll e MFCN *versione* D.dll (dove *Version* è il numero di versione) sono collegate automaticamente. È necessario chiamare una delle funzioni di inizializzazione predefinite seguenti per ognuna di queste dll che si sta utilizzando nelle normali DLL MFC `CWinApp::InitInstance` .

|Tipo di supporto MFC|Funzione di inizializzazione da chiamare|
|-------------------------|-------------------------------------|
|OLE MFC (MFCO *version* D.dll)|`AfxOleInitModule`|
|Database MFC (MFCD *version* D.dll)|`AfxDbInitModule`|
|Socket MFC (*versione* MFCND.dll)|`AfxNetInitModule`|

<a name="initializing-extension-dlls"></a>

### <a name="initialize-mfc-extension-dlls"></a>Inizializza dll estensione MFC

Poiché le DLL dell'estensione MFC non dispongono di un `CWinApp` oggetto derivato da, come le normali DLL MFC, è necessario aggiungere il codice di inizializzazione e di terminazione alla `DllMain` funzione generata dalla procedura guidata DLL MFC.

La procedura guidata fornisce il codice seguente per le DLL di estensione MFC. Nel codice, `PROJNAME` è un segnaposto per il nome del progetto.

```cpp
#include "pch.h" // For Visual Studio 2017 and earlier, use "stdafx.h"
#include <afxdllx.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif
static AFX_EXTENSION_MODULE PROJNAMEDLL;

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

La creazione di un nuovo `CDynLinkLibrary` oggetto durante l'inizializzazione consente alla DLL dell'estensione MFC di esportare `CRuntimeClass` oggetti o risorse nell'applicazione client.

Se si prevede di utilizzare la DLL dell'estensione MFC da una o più DLL MFC regolari, è necessario esportare una funzione di inizializzazione per la creazione di un `CDynLinkLibrary` oggetto. Questa funzione deve essere chiamata da ogni DLL MFC normale che usa la DLL di estensione MFC. Una posizione appropriata per chiamare questa funzione di inizializzazione è la `InitInstance` funzione membro dell'oggetto derivato da DLL MFC normale `CWinApp` prima di utilizzare le classi o le funzioni esportate della DLL dell'estensione MFC.

Nell' `DllMain` oggetto generato dalla creazione guidata DLL MFC, la chiamata a `AfxInitExtensionModule` acquisisce le classi di runtime (strutture) del modulo e le `CRuntimeClass` relative Factory ( `COleObjectFactory` oggetti) da utilizzare quando `CDynLinkLibrary` viene creato l'oggetto. È necessario controllare il valore restituito di `AfxInitExtensionModule` ; se viene restituito un valore zero da `AfxInitExtensionModule` , restituire zero dalla `DllMain` funzione.

Se la DLL dell'estensione MFC sarà collegata in modo esplicito a un eseguibile (ovvero le chiamate eseguibili `AfxLoadLibrary` per il collegamento alla dll), è necessario aggiungere una chiamata a `AfxTermExtensionModule` on `DLL_PROCESS_DETACH` . Questa funzione consente a MFC di pulire la DLL di estensione MFC quando ogni processo si disconnette dalla DLL dell'estensione MFC (che si verifica quando il processo viene chiuso o quando la DLL viene scaricata in seguito a una `AfxFreeLibrary` chiamata). Se la DLL dell'estensione MFC verrà collegata in modo implicito all'applicazione, la chiamata a `AfxTermExtensionModule` non è necessaria.

Le applicazioni che si collegano in modo esplicito alle DLL dell'estensione MFC devono chiamare `AfxTermExtensionModule` quando libera la dll. Devono anche usare `AfxLoadLibrary` e `AfxFreeLibrary` (anziché le funzioni Win32 `LoadLibrary` e `FreeLibrary` ) se l'applicazione usa più thread. L'utilizzo `AfxLoadLibrary` di e `AfxFreeLibrary` garantisce che il codice di avvio e di arresto eseguito quando la dll di estensione MFC venga caricato e scaricato non danneggi lo stato globale di MFC.

Poiché il MFCx0.dll è completamente inizializzato dal momento in `DllMain` cui viene chiamato, è possibile allocare memoria e chiamare funzioni MFC all'interno di `DllMain` (a differenza della versione a 16 bit di MFC).

Le DLL di estensione possono occuparsi del multithreading gestendo i `DLL_THREAD_ATTACH` `DLL_THREAD_DETACH` case e nella `DllMain` funzione. Questi casi vengono passati a `DllMain` quando i thread vengono collegati e scollegati dalla dll. La chiamata di [TlsAlloc](/windows/win32/api/processthreadsapi/nf-processthreadsapi-tlsalloc) quando una dll è collegata consente alla DLL di gestire gli indici TLS (thread local storage) per ogni thread collegato alla dll.

Si noti che il file di intestazione Afxdllx. h contiene definizioni speciali per le strutture utilizzate nelle DLL di estensione MFC, ad esempio la definizione per `AFX_EXTENSION_MODULE` e `CDynLinkLibrary` . È necessario includere questo file di intestazione nella DLL dell'estensione MFC.

> [!NOTE]
> È importante non definire né annullare la definizione delle `_AFX_NO_XXX` macro in *PCH. h* (*stdafx. h* in Visual Studio 2017 e versioni precedenti). Queste macro sono disponibili solo per verificare se una determinata piattaforma di destinazione supporta tale funzionalità o meno. È possibile scrivere il programma per controllare queste macro (ad esempio, `#ifndef _AFX_NO_OLE_SUPPORT` ), ma il programma non dovrebbe mai definire o annullare la definizione di queste macro.

Una funzione di inizializzazione di esempio che gestisce il multithreading è inclusa nell' [utilizzo dell'archiviazione locale di thread in una libreria di Dynamic-Link](/windows/win32/Dlls/using-thread-local-storage-in-a-dynamic-link-library) nel Windows SDK. Si noti che l'esempio contiene una funzione del punto di ingresso denominata `LibMain` , ma è necessario denominare questa funzione `DllMain` in modo che funzioni con le librerie di runtime di C e MFC.

## <a name="see-also"></a>Vedi anche

[Creare DLL C/C++ in Visual Studio](dlls-in-visual-cpp.md)<br/>
[Punto di ingresso DllMain](/windows/win32/Dlls/dllmain)<br/>
[Procedure consigliate per la libreria a collegamento dinamico](/windows/win32/Dlls/dynamic-link-library-best-practices)
