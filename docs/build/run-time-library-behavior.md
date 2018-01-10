---
title: DLL e il comportamento della libreria di runtime di Visual C++ | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- _DllMainCRTStartup
- CRT_INIT
dev_langs: C++
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
caps.latest.revision: "8"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 75bf84eeaf9277c5cf037c4fa59c28d109d95856
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="dlls-and-visual-c-run-time-library-behavior"></a>DLL e il comportamento della libreria di runtime di Visual C++  
  
Quando si compila una libreria di collegamento dinamico (DLL) utilizzando Visual C++, per impostazione predefinita, il linker include la libreria di run-time di Visual C++ (VCRuntime). La libreria VCRuntime contiene codice necessario per l'inizializzazione e terminazione di un file eseguibile di C/C++. Quando è collegato in una DLL, il codice di libreria VCRuntime fornisce una funzione di punto di ingresso DLL interna denominata `_DllMainCRTStartup` che gestisce i messaggi di sistema operativo Windows per la DLL da collegare o scollegare da un processo o thread. Il `_DllMainCRTStartup` funzione esegue le attività essenziali, ad esempio sicurezza buffer di stack impostato, l'inizializzazione della libreria di runtime (CRT) C e la chiusura e le chiamate a costruttori e distruttori per gli oggetti globali e statici. `_DllMainCRTStartup`anche le chiamate funzioni per le altre librerie, ad esempio WinRT, MFC e ATL per eseguire i propri inizializzazione e terminazione hook. Senza l'inizializzazione, la libreria CRT e altre librerie, nonché le variabili statiche, verrà lasciata in uno stato non inizializzato. Le routine di terminazione e la stessa inizializzazione interno VCRuntime vengono chiamate se la DLL utilizza una libreria CRT collegata in modo statico o una DLL CRT collegata in modo dinamico.  
  
## <a name="default-dll-entry-point-dllmaincrtstartup"></a>DllMainCRTStartup punto di ingresso DLL predefinito  
  
In Windows, tutte le DLL possono contenere una funzione di punto di ingresso facoltativa, in genere chiamata `DllMain`, che viene chiamato per l'inizializzazione e terminazione. Questo offre la possibilità di assegnare o rilasciare risorse aggiuntive in base alle esigenze. Windows chiama la funzione di punto di ingresso in quattro situazioni: connessione del processo, disconnessione del processo, thread collegamento e scollegamento thread. Quando una DLL viene caricata in uno spazio degli indirizzi di processo, quando viene caricata un'applicazione che utilizza o quando l'applicazione richiede la DLL in fase di esecuzione, il sistema operativo crea una copia separata dei dati DLL. Si tratta di *connessione del processo*. *Collegare thread* si verifica quando il processo la DLL viene caricata in Crea un nuovo thread. *Scollegamento thread* si verifica quando termina il thread, e *disconnessione del processo* quando la DLL non è più necessario e viene rilasciata da un'applicazione. Il sistema operativo effettua una chiamata separata al punto di ingresso DLL per ciascuno di questi eventi, passando un *motivo* argomento per ogni tipo di evento. Ad esempio, il sistema operativo invia `DLL_PROCESS_ATTACH` come il *motivo* collegare argomento per l'elaborazione del segnale.  
  
La libreria VCRuntime offre una funzione di punto di ingresso denominata `_DllMainCRTStartup` per gestire le operazioni di inizializzazione e terminazione predefinito. Processo di collegamento, il `_DllMainCRTStartup` funzione consente di impostare i controlli di sicurezza buffer, inizializza la libreria CRT e altre librerie, inizializza le informazioni sul tipo in fase di esecuzione, inizializza e chiama i costruttori per i dati statici e non locali, inizializza l'archiviazione locale di thread , incrementa un contatore interno statico per ogni collegamento e quindi chiama un fornito dall'utente o libreria- `DllMain`. Processo di disconnessione, la funzione passa questi passaggi in ordine inverso. Chiama `DllMain`, decrementa il contatore interno, la chiamata di distruttori, funzioni di terminazione chiamate CRT e registrato `atexit` funzioni e notifica ad altre librerie di terminazione. Quando il contatore allegato va a zero, la funzione restituisce `FALSE` per indicare a Windows che la DLL può essere scaricata. Il `_DllMainCRTStartup` funzione viene chiamata anche durante i thread di collegamento e scollegamento thread. In questi casi, il codice VCRuntime non alcuna inizializzazione aggiuntiva o terminazione autonomamente e chiama semplicemente `DllMain` per passare il messaggio lungo. Se `DllMain` restituisce `FALSE` dal processo collegare, segnalazione dell'errore, `_DllMainCRTStartup` chiamate `DllMain` nuovamente e passa `DLL_PROCESS_DETACH` come il *motivo* argomento, quindi passa attraverso il resto del processo di terminazione.  
  
Quando si compila una DLL in Visual C++, il punto di ingresso predefinito `_DllMainCRTStartup` fornito da VCRuntime viene automaticamente collegata. Non è necessario specificare una funzione di punto di ingresso per la DLL utilizzando il [/ENTRY (simbolo del punto di ingresso)](../build/reference/entry-entry-point-symbol.md) l'opzione del linker.  
  
> [!NOTE]
> Sebbene sia possibile specificare un'altra funzione di punto di ingresso per una DLL mediante il /ENTRY: l'opzione del linker, non è consigliabile, perché la funzione di punto di ingresso necessario duplicare tutti gli elementi che `_DllMainCRTStartup` caso, nello stesso ordine. La libreria VCRuntime fornisce funzioni che consentono di duplicare il comportamento. Ad esempio, è possibile chiamare [security_init_cookie](../c-runtime-library/reference/security-init-cookie.md) processo collegare immediatamente per supportare il [/GS (controllo sicurezza Buffer)](../build/reference/gs-buffer-security-check.md) buffer, opzione di controllo. È possibile chiamare il `_CRT_INIT` funzione, passando gli stessi parametri come la funzione di punto di ingresso, per eseguire il resto delle funzioni di inizializzazione o terminazione DLL.  
  
<a name="initializing-a-dll"></a>  
  
## <a name="initialize-a-dll"></a>Inizializzazione di una DLL  
  
La DLL potrebbe essere il codice di inizializzazione che deve essere eseguite al caricamento della DLL. È possibile eseguire una delle funzioni di inizializzazione e terminazione DLL, affinché `_DllMainCRTStartup` chiama una funzione denominata `DllMain` che è possibile fornire. Il `DllMain` deve avere la firma necessaria per un punto di ingresso DLL. La funzione di punto di ingresso predefinito `_DllMainCRTStartup` chiamate `DllMain` utilizzando gli stessi parametri passati da Windows. Per impostazione predefinita, se non si fornisce un `DllMain` (funzione), Visual C++ fornisce uno automaticamente e lo collega in modo che `_DllMainCRTStartup` ha sempre qualche elemento da chiamare. Ciò significa che se non è necessaria inizializzare la DLL, non è speciale che è necessario eseguire durante la compilazione della DLL.  
  
Si tratta della firma utilizzata per `DllMain`:  
  
```cpp  
#include <windows.h>  
  
extern "C" BOOL WINAPI DllMain (
    HINSTANCE const instance,  // handle to DLL module 
    DWORD     const reason,    // reason for calling function
    LPVOID    const reserved); // reserved
```  
  
Eseguire il wrapping di alcune librerie di `DllMain` funzione per l'utente. In una DLL regolare MFC, ad esempio, è consigliabile implementare la `CWinApp` dell'oggetto `InitInstance` e `ExitInstance` funzioni membro per eseguire l'inizializzazione e terminazione richieste dalla DLL. Per ulteriori informazioni, vedere il [regular inizializzare le DLL MFC](#initializing-regular-dlls) sezione.  
  
> [!WARNING]
> Vi sono limiti significativi per le operazioni possibile in modo sicuro in un punto di ingresso DLL. Vedere [procedure consigliate generali](https://msdn.microsoft.com/library/windows/desktop/dn633971#general_best_practices) per le API di Windows specifiche che non sono sicuri per chiamare in `DllMain`. Se è necessario non può essere quindi l'inizializzazione più semplice eseguire questa operazione in una funzione di inizializzazione per la DLL. È possibile richiedere le applicazioni di chiamare la funzione di inizializzazione dopo `DllMain` dispone di esecuzione e prima che chiamano altre funzioni nella DLL.  
  
<a name="initializing-non-mfc-dlls"></a>  
  
### <a name="initialize-ordinary-non-mfc-dlls"></a>Inizializzazione di DLL normali (non MFC)  
  
Per eseguire la propria inizializzazione nelle DLL normali (non MFC) che utilizzano la libreria VCRuntime fornito `_DllMainCRTStartup` punto di ingresso, il codice sorgente della DLL deve contenere una funzione denominata `DllMain`. Il codice seguente presenta uno schema di base che illustra la definizione della funzione `DllMain` potrebbe essere simile:  
  
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
> Documentazione di Windows SDK precedente indica che il nome effettivo della funzione di punto di ingresso DLL deve essere specificato nella riga di comando con l'opzione /ENTRY del linker. Con Visual C++, non è necessario utilizzare l'opzione /ENTRY se il nome della funzione di punto di ingresso è `DllMain`. Infatti, se si utilizza l'opzione /ENTRY e il nome del punto di ingresso funzione qualcosa diverso da `DllMain`, CRT non inizializzata correttamente a meno che la funzione di punto di ingresso effettua le chiamate di inizializzazione stesso che `_DllMainCRTStartup` rende.  
  
<a name="initializing-regular-dlls"></a>  
  
### <a name="initialize-regular-mfc-dlls"></a>Inizializzare le DLL regolari MFC  
  
Poiché le DLL regolari MFC avere un `CWinApp` dell'oggetto, devono eseguire le attività di inizializzazione e terminazione nella stessa posizione di un'applicazione MFC: nel `InitInstance` e `ExitInstance` funzioni membro della DLL `CWinApp`-derivato classe. Poiché MFC fornisce un `DllMain` funzione che viene chiamato da `_DllMainCRTStartup` per `DLL_PROCESS_ATTACH` e `DLL_PROCESS_DETACH`, non è necessario scrivere la propria `DllMain` (funzione). MFC fornita dal `DllMain` chiamate di funzione `InitInstance` quando la DLL viene caricata e chiama `ExitInstance` prima dello scaricamento di DLL.  
  
DLL regolare MFC può tenere traccia di più thread chiamando [TlsAlloc](http://msdn.microsoft.com/library/windows/desktop/ms686801) e [TlsGetValue](http://msdn.microsoft.com/library/windows/desktop/ms686812) nel relativo `InitInstance` (funzione). Queste funzioni consentono alla DLL di tenere traccia dei dati specifico del thread.  
  
Nella DLL regolare MFC collegata in modo dinamico a MFC, se si utilizza qualsiasi OLE MFC, Database MFC (o DAO) o Sockets MFC supporta, rispettivamente, il debug di estensione MFC DLL MFCO*versione*D.dll, MFCD*versione*D.dll e MFCN*versione*D.dll (dove *versione* è il numero di versione) vengono collegate automaticamente. È necessario chiamare una delle seguenti funzioni di inizializzazione predefiniti per ciascuna di queste DLL in uso il regolare MFC DLL `CWinApp::InitInstance`.  
  
|Tipo di supporto MFC|Per chiamare una funzione di inizializzazione|  
|-------------------------|-------------------------------------|  
|OLE MFC (MFCO*versione*D.dll)|`AfxOleInitModule`|  
|Database MFC (MFCD*versione*D.dll)|`AfxDbInitModule`|  
|Sockets MFC (MFCN*versione*D.dll)|`AfxNetInitModule`|  
  
<a name="initializing-extension-dlls"></a>  
  
### <a name="initialize-mfc-extension-dlls"></a>Inizializzare le DLL di estensione MFC  
  
Poiché le DLL di estensione MFC non contengono un `CWinApp`-derivato dell'oggetto (come le DLL regolari MFC), è necessario aggiungere il codice di inizializzazione e terminazione per il `DllMain` funzione che genera la creazione guidata DLL MFC.  
  
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
  
Creazione di un nuovo `CDynLinkLibrary` oggetto durante l'inizializzazione consente MFC DLL di estensione da esportare `CRuntimeClass` risorse all'applicazione client o gli oggetti.  
  
Se si intende utilizzare la DLL da uno o più DLL regolari MFC di estensione MFC, è necessario esportare una funzione di inizializzazione che crea un `CDynLinkLibrary` oggetto. Tale funzione deve essere chiamata da ognuna delle DLL regolare MFC che usano la DLL di estensione MFC. La posizione appropriata per chiamare questa funzione di inizializzazione è il `InitInstance` funzione membro del regolare MFC DLL `CWinApp`-oggetto derivato prima di utilizzare le classi esportate o funzioni della DLL di estensione MFC.  
  
Nel `DllMain` che la creazione guidata DLL MFC genera l'errore, la chiamata a `AfxInitExtensionModule` acquisisce le classi del modulo in fase di esecuzione (`CRuntimeClass` strutture) nonché le object factory (`COleObjectFactory` oggetti) per utilizzare quando il `CDynLinkLibrary` viene creato l'oggetto. Controllare il valore restituito di `AfxInitExtensionModule`; se viene restituito un valore zero da `AfxInitExtensionModule`, restituire zero dal `DllMain` (funzione).  
  
Se la DLL di estensione MFC viene collegata in modo esplicito di un file eseguibile (vale a dire l'eseguibile chiama `AfxLoadLibrary` il collegamento alla DLL), è necessario aggiungere una chiamata a `AfxTermExtensionModule` su `DLL_PROCESS_DETACH`. Questa funzione consente di MFC per pulire la DLL di estensione MFC quando ogni processo si disconnette dalla DLL di estensione MFC (situazione che si verifica quando il processo viene chiuso o quando la DLL viene scaricata come risultato di un `AfxFreeLibrary` chiamare). Se la DLL di estensione MFC viene collegata in modo implicito per l'applicazione, la chiamata a `AfxTermExtensionModule` non è necessario.  
  
Le applicazioni che è necessario chiamare in modo esplicito collegamento alla DLL di estensione MFC `AfxTermExtensionModule` quando liberare la DLL. Devono inoltre utilizzare `AfxLoadLibrary` e `AfxFreeLibrary` (anziché le funzioni Win32 `LoadLibrary` e `FreeLibrary`) se l'applicazione usa più thread. Utilizzando `AfxLoadLibrary` e `AfxFreeLibrary` assicura che il codice di avvio e arresto viene eseguito quando l'estensione MFC DLL viene caricato e scaricato non danneggiare lo stato globale di MFC.  
  
Poiché il è completamente MFCx0 il tempo `DllMain` viene chiamato, è possibile allocare la memoria e chiamare le funzioni MFC in `DllMain` (a differenza delle versioni di MFC a 16 bit).  
  
DLL di estensione possono essere usato multithreading gestendo il `DLL_THREAD_ATTACH` e `DLL_THREAD_DETACH` case nel `DllMain` (funzione). Questi case vengono passati a `DllMain` quando thread collegare e scollegare dalla DLL. La chiamata [TlsAlloc](http://msdn.microsoft.com/library/windows/desktop/ms686801) quando si connette una DLL consente alla DLL di mantenere thread (TLS) di archiviazione locale di indici per ogni thread connesso alla DLL.  
  
Si noti che il file di intestazione Afxdllx. h contiene definizioni speciali per le strutture utilizzate nelle DLL di estensione MFC, ad esempio la definizione per `AFX_EXTENSION_MODULE` e `CDynLinkLibrary`. È necessario includere questo file di intestazione nella DLL di estensione MFC.  
  
> [!NOTE]
>  È importante che di definire o annullare la definizione di `_AFX_NO_XXX` macro in stdafx. h. Queste macro esistono solo allo scopo di verifica se una piattaforma di destinazione specifico supporta tale funzionalità o meno. È possibile scrivere un programma per controllare queste macro (ad esempio, `#ifndef _AFX_NO_OLE_SUPPORT`), ma il programma mai deve definire o annullare la definizione di queste macro.  
  
Un esempio di funzione di inizializzazione che gestisce le operazioni multithread è incluso in [Using Thread Local Storage in una libreria a collegamento dinamico](http://msdn.microsoft.com/library/windows/desktop/ms686997) in Windows SDK. Si noti che il codice di esempio contiene una funzione di punto di ingresso denominata `LibMain`, ma è necessario specificare nome di questa funzione `DllMain` in modo che funziona con le librerie di runtime C e MFC.  
  
## <a name="see-also"></a>Vedere anche  
  
[DLL in Visual C++](../build/dlls-in-visual-cpp.md)  
[Punto di ingresso DllMain](https://msdn.microsoft.com/library/windows/desktop/ms682583.aspx)  
[Procedure consigliate di libreria a collegamento dinamico](https://msdn.microsoft.com/library/windows/desktop/dn633971.aspx)  