---
title: Utilizzo di dll di estensione MFC per database, OLE e Sockets nelle normali DLL MFC
ms.date: 11/04/2016
helpviewer_keywords:
- DLLs [C++], initializing
- DLLs [C++], extension
- DLLs [C++], regular
ms.assetid: 9f1d14a7-9e2a-4760-b3b6-db014fcdb7ff
ms.openlocfilehash: d08822a04abe5a01883ad8aa1bd6d94269e810cc
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62314689"
---
# <a name="using-database-ole-and-sockets-mfc-extension-dlls-in-regular-mfc-dlls"></a>Utilizzo di dll di estensione MFC per database, OLE e Sockets nelle normali DLL MFC

Quando si utilizza una DLL di estensione MFC da una normale DLL MFC, se la DLL di estensione MFC non è collegata alla catena di oggetti **CDynLinkLibrary** della normale DLL MFC, è possibile che si verifichi uno o più problemi correlati. Poiché le versioni di debug delle DLL di supporto per database, OLE e Sockets di MFC sono implementate come DLL di estensione MFC, è possibile che si verifichino problemi simili se si utilizzano queste funzionalità MFC, anche se non si utilizza in modo esplicito una delle proprie DLL di estensione MFC. Di seguito sono riportati alcuni sintomi:

- Quando si tenta di deserializzare un oggetto di un tipo di classe definito nella DLL dell'estensione MFC, viene visualizzato il messaggio "avviso: Impossibile caricare CYourClass dall'archivio. Classe non definita ". viene visualizzato nella finestra di debug della traccia e l'oggetto non viene serializzato.

- È possibile che venga generata un'eccezione che indica che la classe non è valida.

- Impossibile caricare le risorse archiviate nella DLL dell'estensione MFC `AfxFindResourceHandle` perché restituisce **null** o un handle di risorsa errato.

- `DllGetClassObject`, `DllCanUnloadNow`e le `UpdateRegistry` `Revoke`funzioni `RevokeAll` `RegisterAll` membro,, e di `COleObjectFactory` non riescono a individuare un class factory definito nella DLL dell'estensione MFC.

- `AfxDoForAllClasses`non funziona per le classi nella DLL di estensione MFC.

- Impossibile caricare il database MFC standard, i socket o le risorse OLE. Ad esempio, **AfxLoadString**(**AFX_IDP_SQL_CONNECT_FAIL**) restituisce una stringa vuota, anche quando la normale DLL MFC utilizza correttamente le classi di database MFC.

La soluzione a questi problemi consiste nel creare ed esportare una funzione di inizializzazione nella DLL dell'estensione MFC che crea un oggetto **CDynLinkLibrary** . Chiamare questa funzione di inizializzazione esattamente una volta da ogni DLL MFC normale che usa la DLL di estensione MFC.

## <a name="mfc-ole-mfc-database-or-dao-or-mfc-sockets-support"></a>Supporto MFC OLE, database MFC (o DAO) o socket MFC

Se si utilizza un file OLE MFC, un database MFC (o DAO) o un supporto per socket MFC nella normale DLL MFC, rispettivamente, le DLL di estensione MFC di debug MFC MFCOxxD. dll, MFCDxxD. dll e MFCNxxD. dll (dove XX è il numero di versione) vengono collegate automaticamente. Per ognuna di queste DLL utilizzate, è necessario chiamare una funzione di inizializzazione predefinita.

Per il supporto del database, aggiungere una `AfxDbInitModule` chiamata a alla funzione della `CWinApp::InitInstance` DLL MFC normale. Verificare che questa chiamata venga eseguita prima di qualsiasi chiamata della classe base o di qualsiasi codice aggiunto che accede a MFCDxxD. dll. Questa funzione non accetta parametri e restituisce void.

Per il supporto OLE, aggiungere una chiamata `AfxOleInitModule` a per le normali DLL MFC `CWinApp::InitInstance`. Si noti che la funzione **COleControlModule InitInstance** chiama `AfxOleInitModule` già, pertanto se si compila un controllo OLE e si usa `COleControlModule`, non è necessario aggiungere questa chiamata a `AfxOleInitModule`.

Per il supporto dei socket, aggiungere una `AfxNetInitModule` chiamata a per le normali dll `CWinApp::InitInstance`MFC.

Si noti che le build di versione di dll e applicazioni MFC non utilizzano DLL separate per il supporto di database, socket o OLE. Tuttavia, è possibile chiamare queste funzioni di inizializzazione in modalità di rilascio.

## <a name="cdynlinklibrary-objects"></a>Oggetti CDynLinkLibrary

Durante ognuna delle operazioni indicate all'inizio di questo argomento, è necessario che MFC cerchi un valore o un oggetto desiderato. Ad esempio, durante la deserializzazione, MFC deve eseguire la ricerca in tutte le classi di Runtime attualmente disponibili per trovare la corrispondenza con gli oggetti dell'archivio con la classe di runtime appropriata.

Come parte di queste ricerche, MFC analizza tutte le DLL dell'estensione MFC in uso tramite una catena di oggetti **CDynLinkLibrary** . Gli oggetti **CDynLinkLibrary** vengono collegati automaticamente a una catena durante la relativa costruzione e vengono creati da ogni DLL di estensione MFC durante l'inizializzazione. Ogni modulo (applicazione o DLL MFC normale) dispone inoltre di una propria catena di oggetti **CDynLinkLibrary** .

Affinché una DLL di estensione MFC venga cablata in una catena **CDynLinkLibrary** , è necessario creare un oggetto **CDynLinkLibrary** nel contesto di ogni modulo che utilizza la dll di estensione MFC. Se pertanto una DLL di estensione MFC verrà utilizzata dalle normali DLL MFC, deve fornire una funzione di inizializzazione esportata che crei un oggetto **CDynLinkLibrary** . Ogni normale DLL MFC che utilizza la DLL di estensione MFC deve chiamare la funzione di inizializzazione esportata.

Se una DLL di estensione MFC verrà utilizzata solo da un'applicazione MFC (exe) e mai da una normale DLL MFC, è sufficiente creare l'oggetto **CDynLinkLibrary** nelle DLL dell'estensione MFC `DllMain`. Questo è il codice DLL dell'estensione MFC della creazione guidata DLL MFC. Quando si carica in modo implicito una DLL `DllMain` di estensione MFC, carica ed esegue prima che l'applicazione venga avviata. Tutte le creazioni di **CDynLinkLibrary** sono cablate in una catena predefinita che la DLL MFC riserva per un'applicazione MFC.

Si noti che non è consigliabile avere più oggetti **CDynLinkLibrary** da una DLL di estensione MFC in una catena, soprattutto se la DLL dell'estensione MFC verrà scaricata in modo dinamico dalla memoria. Non chiamare la funzione di inizializzazione più di una volta da un modulo.

## <a name="sample-code"></a>Codice di esempio

Questo codice di esempio presuppone che la DLL MFC normale venga collegata in modo implicito alla DLL dell'estensione MFC. Questa operazione viene eseguita tramite il collegamento alla libreria di importazione (lib) della DLL di estensione MFC durante la compilazione della normale DLL MFC.

Le righe seguenti devono trovarsi nell'origine della DLL dell'estensione MFC:

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

Assicurarsi di esportare la funzione **InitYourExtDLL** . Per eseguire questa operazione, è possibile usare **__declspec (dllexport)** o nel file def della dll, come indicato di seguito:

```
// YourExtDLL.Def:
LIBRARY      YOUREXTDLL
CODE         PRELOAD MOVEABLE DISCARDABLE
DATA         PRELOAD SINGLE
EXPORTS
    InitYourExtDLL
```

Aggiungere una chiamata al `InitInstance` membro dell' `CWinApp`oggetto derivato da in ogni DLL MFC normale utilizzando la DLL dell'estensione MFC:

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

### <a name="what-do-you-want-to-do"></a>Per saperne di più

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
