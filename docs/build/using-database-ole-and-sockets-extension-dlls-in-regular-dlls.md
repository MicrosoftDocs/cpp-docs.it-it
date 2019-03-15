---
title: Uso di DLL di estensione Database, OLE e Sockets MFC nelle DLL MFC regolari
ms.date: 11/04/2016
helpviewer_keywords:
- DLLs [C++], initializing
- DLLs [C++], extension
- DLLs [C++], regular
ms.assetid: 9f1d14a7-9e2a-4760-b3b6-db014fcdb7ff
ms.openlocfilehash: d08822a04abe5a01883ad8aa1bd6d94269e810cc
ms.sourcegitcommit: faa42c8a051e746d99dcebe70fd4bbaf3b023ace
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/15/2019
ms.locfileid: "57807975"
---
# <a name="using-database-ole-and-sockets-mfc-extension-dlls-in-regular-mfc-dlls"></a>Uso di DLL di estensione Database, OLE e Sockets MFC nelle DLL MFC regolari

Quando si utilizza un'estensione MFC DLL da una DLL regolare MFC, se l'estensione MFC DLL non è connessa il **CDynLinkLibrary** oggetto catena della DLL MFC regolari, è possibile riscontrare uno o più di una serie di problemi correlati. Perché le versioni di debug del Database di MFC, OLE e Sockets supportano le DLL vengono implementate come DLL estensione MFC, è possibile che problemi simili se si Usa MFC queste funzionalità, anche se si sono non in modo esplicito usando una delle DLL di estensione MFC. Alcuni sintomi sono:

- Quando si prova a deserializzare un oggetto di un tipo di classe definito nella DLL, il messaggio di estensione MFC "avviso: Non è possibile caricare CClasse dall'archivio. Classe non definita". viene visualizzato nella finestra di traccia di debug e l'oggetto non riesce a serializzare.

- Potrebbe essere generata un'eccezione che indica la classe non valida.

- Impossibile caricare perché le risorse archiviate nella DLL di estensione MFC `AfxFindResourceHandle` restituisce **NULL** o un handle di risorsa non corretto.

- `DllGetClassObject`, `DllCanUnloadNow`e il `UpdateRegistry`, `Revoke`, `RevokeAll`, e `RegisterAll` funzioni membro di `COleObjectFactory` non riescono a individuare una class factory definite nella DLL di estensione MFC.

- `AfxDoForAllClasses` non funziona per tutte le classi nella DLL di estensione MFC.

- Database MFC standard, sockets o risorse OLE non caricato. Ad esempio, **AfxLoadString**(**AFX_IDP_SQL_CONNECT_FAIL**) restituisce una stringa vuota, anche quando la DLL MFC regolari viene correttamente tramite le classi di Database MFC.

La soluzione a questi problemi consiste nel creare ed esportare una funzione di inizializzazione in MFC DLL di estensione che consente di creare un **CDynLinkLibrary** oggetto. Chiamare questa funzione di inizializzazione esattamente una volta da ogni DLL MFC regolare che usa la DLL di estensione MFC.

## <a name="mfc-ole-mfc-database-or-dao-or-mfc-sockets-support"></a>OLE MFC, Database MFC (o DAO) o MFC socket supportati

Se si usa qualsiasi OLE MFC, Database MFC (o DAO) o socket MFC supportano nella DLL MFC regolari, rispettivamente, il debug MFC di estensione MFC DLL MFCOxxD. dll, MFCDxxD e MFCNxxD (dove xx è il numero di versione) vengono collegati automaticamente. È necessario chiamare una funzione di inizializzazione predefiniti per ognuna di queste DLL che si siano utilizzando.

Per il supporto di database, aggiungere una chiamata a `AfxDbInitModule` per le normali MFC DLL `CWinApp::InitInstance` (funzione). Assicurarsi che questa chiamata si verifica prima di qualsiasi chiamata di classe di base o qualsiasi codice che si acceda a MFCDxxD.dll aggiunto. Questa funzione non accetta parametri e restituisce un valore nullo.

Per il supporto OLE, aggiungere una chiamata a `AfxOleInitModule` per le normali MFC DLL `CWinApp::InitInstance`. Si noti che il **COleControlModule InitInstance** chiamate di funzione `AfxOleInitModule` già, pertanto se si compila un controllo OLE e Usa `COleControlModule`, non è necessario aggiungere la chiamata a `AfxOleInitModule`.

Per il supporto di socket, aggiungere una chiamata a `AfxNetInitModule` per le normali MFC DLL `CWinApp::InitInstance`.

Si noti che la build di rilascio di MFC (DLL) e applicazioni non usano DLL separate per il database, socket, o il supporto OLE. Tuttavia, è possibile chiamare queste funzioni di inizializzazione in modalità di rilascio.

## <a name="cdynlinklibrary-objects"></a>Oggetti si connettono

Durante ogni operazione accennati all'inizio di questo argomento, MFC deve eseguire la ricerca per un oggetto o il valore desiderato. Ad esempio, durante la deserializzazione, la libreria MFC deve eseguire una ricerca in tutte le classi in fase di esecuzione attualmente disponibili per associare gli oggetti nell'archivio con la classe di runtime appropriata.

Come parte di queste ricerche, MFC vengono esaminate tutte le DLL estensione MFC in uso scorrendo una catena **CDynLinkLibrary** oggetti. **CDynLinkLibrary** Collega automaticamente a una catena durante la costruzione di oggetti e vengono creati da ogni DLL dell'estensione MFC a sua volta durante l'inizializzazione. Inoltre, tutti i moduli (applicazione o DLL MFC regolari) dispone della propria catena del **CDynLinkLibrary** oggetti.

Per la DLL di estensione MFC un **CDynLinkLibrary** catena, è necessario creare un **CDynLinkLibrary** oggetto nel contesto di ogni modulo che utilizza la DLL di estensione MFC. Pertanto, se un'estensione MFC DLL sta per essere usata da DLL MFC regolari, è necessario fornire una funzione di inizializzazione esportato che crea una **CDynLinkLibrary** oggetto. Ogni DLL MFC regolare che usa l'estensione MFC DLL deve chiamare la funzione di inizializzazione esportato.

Se un'estensione MFC DLL dovrà essere usato da un'applicazione MFC (.exe) e non da una DLL MFC regolari, allora è sufficiente creare il **CDynLinkLibrary** oggetto in MFC della DLL di estensione `DllMain`. Ciò avviene con il codice della DLL di estensione MFC di creazione guidata DLL MFC. Durante il caricamento di DLL estensione MFC in modo implicito, `DllMain` carica ed esegue prima dell'avvio dell'applicazione. Eventuali **CDynLinkLibrary** creazioni vengono connessa una catena predefinita che la DLL MFC riserva per un'applicazione MFC.

Si noti che è opportuno evitare di avere più **CDynLinkLibrary** oggetti da una DLL di estensione MFC in una catena, in particolare se la DLL di estensione MFC verrà dinamicamente scaricato dalla memoria. Non chiamare la funzione di inizializzazione più di una volta da uno qualsiasi dei moduli.

## <a name="sample-code"></a>Codice di esempio

Questo codice di esempio si presuppone che la DLL regolare MFC in modo implicito è collegato alla DLL di estensione MFC. Questa operazione viene eseguita mediante il collegamento alla libreria di importazione (lib) della DLL di estensione MFC quando si compila la DLL MFC regolari.

L'origine della DLL di estensione MFC devono avere le righe seguenti:

```
// YourExtDLL.cpp:

// standard MFC extension DLL routines
#include "afxdllx.h"

static AFX_EXTENSION_MODULE NEAR extensionDLL = { NULL, NULL };

extern "C" int APIENTRY
DllMain(HINSTANCE hInstance, DWORD dwReason, LPVOID lpReserved)
{
    if (dwReason == DLL_PROCESS_ATTACH)
    {
        // MFC extension DLL one-time initialization
        if (!AfxInitExtensionModule(extensionDLL, hInstance))
           return 0;
    }
    return 1;   // ok
}

// Exported DLL initialization is run in context of
// application or regular MFC DLL
extern "C" void WINAPI InitYourExtDLL()
{
    // create a new CDynLinkLibrary for this app
    new CDynLinkLibrary(extensionDLL);

    // add other initialization here
}
```

Assicurarsi di esportare le **InitYourExtDLL** (funzione). Questa operazione può essere eseguita tramite **dllexport** o nel file def della DLL come indicato di seguito:

```
// YourExtDLL.Def:
LIBRARY      YOUREXTDLL
CODE         PRELOAD MOVEABLE DISCARDABLE
DATA         PRELOAD SINGLE
EXPORTS
    InitYourExtDLL
```

Aggiungere una chiamata ai `InitInstance` membro del `CWinApp`-oggetto in ogni DLL MFC regolari con la DLL di estensione MFC derivato:

```
// YourRegularDLL.cpp:

class CYourRegularDLL : public CWinApp
{
public:
    virtual BOOL InitInstance(); // Initialization
    virtual int ExitInstance();  // Termination

    // nothing special for the constructor
    CYourRegularDLL(LPCTSTR pszAppName) : CWinApp(pszAppName) { }
};

BOOL CYourRegularDLL::InitInstance()
{
    // any DLL initialization goes here
    TRACE0("YOUR regular MFC DLL initializing\n");

    // wire any MFC extension DLLs into CDynLinkLibrary chain
    InitYourExtDLL();

    return TRUE;
}
```

### <a name="what-do-you-want-to-do"></a>Selezionare l'operazione da eseguire.

- [Inizializzare una DLL di estensione MFC](run-time-library-behavior.md#initializing-extension-dlls)

- [Inizializzazione di DLL MFC regolari](run-time-library-behavior.md#initializing-regular-dlls)

### <a name="what-do-you-want-to-know-more-about"></a>Scegliere l'argomento su cui visualizzare maggiori informazioni

- [MFC (DLL di estensione)](extension-dlls.md)

- [DLL MFC regolari collegate a MFC in modo statico](regular-dlls-statically-linked-to-mfc.md)

- [DLL MFC regolari collegate a MFC in modo dinamico](regular-dlls-dynamically-linked-to-mfc.md)

- [Utilizzo di MFC come parte di una DLL](../mfc/tn011-using-mfc-as-part-of-a-dll.md)

- [Versione DLL di MFC](../mfc/tn033-dll-version-of-mfc.md)

## <a name="see-also"></a>Vedere anche

[MFC (DLL di estensione)](extension-dlls.md)
