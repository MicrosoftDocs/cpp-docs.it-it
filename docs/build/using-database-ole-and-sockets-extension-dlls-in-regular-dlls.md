---
title: Utilizzo di dll di estensione MFC per database, OLE e Sockets nelle normali DLL MFC
description: Viene illustrato come utilizzare le DLL di estensione MFC del database, OLE e Sockets nelle normali DLL MFC.
ms.date: 11/30/2020
helpviewer_keywords:
- DLLs [C++], initializing
- DLLs [C++], extension
- DLLs [C++], regular
ms.openlocfilehash: a28e80c4d554a86f45f708e661382ee4a54eca9e
ms.sourcegitcommit: 432c24dde31c400437c4320e8432b1ddb232f844
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/01/2020
ms.locfileid: "96440269"
---
# <a name="using-database-ole-and-sockets-mfc-extension-dlls-in-regular-mfc-dlls"></a>Utilizzo di dll di estensione MFC per database, OLE e Sockets nelle normali DLL MFC

Quando si usa una DLL di estensione MFC da una normale DLL MFC, se la DLL di estensione MFC non è collegata alla `CDynLinkLibrary` catena di oggetti della normale DLL MFC, è possibile che si verifichino uno o più problemi correlati. Poiché le versioni di debug delle DLL di supporto per database, OLE e Sockets di MFC sono implementate come DLL dell'estensione MFC, è possibile che si verifichino problemi simili se si usano queste funzionalità MFC, anche se non si usa in modo esplicito una delle proprie DLL di estensione MFC. Di seguito sono riportati alcuni sintomi:

- Quando si tenta di deserializzare un oggetto di un tipo di classe definito nella DLL dell'estensione MFC, viene visualizzato il messaggio "avviso: Impossibile caricare CYourClass dall'archivio. Classe non definita ". viene visualizzato nella finestra di debug della traccia e l'oggetto non viene serializzato.

- È possibile che venga generata un'eccezione che indica che la classe non è valida.

- Impossibile caricare le risorse archiviate nella DLL dell'estensione MFC perché `AfxFindResourceHandle` restituisce `NULL` o un handle di risorsa errato.

- `DllGetClassObject`, `DllCanUnloadNow` e le `UpdateRegistry` `Revoke` funzioni membro,, e `RevokeAll` `RegisterAll` di `COleObjectFactory` non riescono a individuare un class factory definito nella DLL dell'estensione MFC.

- `AfxDoForAllClasses` non funziona per le classi nella DLL di estensione MFC.

- Impossibile caricare il database MFC standard, i socket o le risorse OLE. Restituisce, ad esempio, `AfxLoadString(AFX_IDP_SQL_CONNECT_FAIL)` una stringa vuota, anche quando la normale DLL MFC utilizza correttamente le classi di database MFC.

La soluzione a questi problemi consiste nel creare ed esportare una funzione di inizializzazione nella DLL dell'estensione MFC che crea un `CDynLinkLibrary` oggetto. Chiamare questa funzione di inizializzazione esattamente una volta da ogni DLL MFC normale che usa la DLL di estensione MFC.

## <a name="mfc-ole-mfc-database-or-dao-or-mfc-sockets-support"></a>Supporto MFC OLE, database MFC (o DAO) o socket MFC

Se si utilizza un file OLE MFC, un database MFC (o DAO) o un supporto per socket MFC nella normale DLL MFC, rispettivamente, le DLL dell'estensione MFC di debug MFC *`MFCOxxD.dll`* , *`MFCDxxD.dll`* e *`MFCNxxD.dll`* (dove *XX* è il numero di versione) vengono collegate automaticamente. Chiamare una funzione di inizializzazione predefinita per ogni DLL in uso:

- Per il supporto del database, aggiungere una chiamata a `AfxDbInitModule` alla DLL MFC normale nella `CWinApp::InitInstance` funzione. Verificare che questa chiamata venga eseguita prima di qualsiasi chiamata della classe base o di qualsiasi codice aggiunto che acceda a *`MFCDxxD.dll`* . Questa funzione non accetta parametri e restituisce `void` .

- Per il supporto OLE, aggiungere una chiamata a `AfxOleInitModule` alla normale DLL MFC per la `CWinApp::InitInstance` relativa funzione. La `COleControlModule::InitInstance` funzione chiama `AfxOleInitModule` già, quindi se si compila un controllo OLE e si usa `COleControlModule` , non è necessario aggiungere questa chiamata a `AfxOleInitModule` .

- Per il supporto dei socket, aggiungere una chiamata a `AfxNetInitModule` alla DLL MFC normale in `CWinApp::InitInstance` .

Le build di versione di dll e applicazioni MFC non utilizzano DLL separate per il supporto di database, socket o OLE. Tuttavia, è sicuro chiamare queste funzioni di inizializzazione in modalità di rilascio.

## <a name="cdynlinklibrary-objects"></a>Oggetti CDynLinkLibrary

Durante ogni operazione citata all'inizio di questo articolo, è necessario che MFC cerchi un valore o un oggetto specifico. Ad esempio, durante la deserializzazione, MFC deve eseguire la ricerca in tutte le classi di Runtime attualmente disponibili per trovare la corrispondenza con gli oggetti dell'archivio con la classe di runtime appropriata.

Come parte di queste ricerche, MFC analizza tutte le DLL dell'estensione MFC in uso mediante l'esplorazione di una catena di `CDynLinkLibrary` oggetti. `CDynLinkLibrary` gli oggetti si collegano automaticamente a una catena durante la relativa costruzione e vengono creati da ogni DLL di estensione MFC durante l'inizializzazione. Ogni modulo (applicazione o DLL MFC normale) ha una propria catena di `CDynLinkLibrary` oggetti.

Affinché una DLL di estensione MFC venga cablata in una `CDynLinkLibrary` catena, deve creare un `CDynLinkLibrary` oggetto nel contesto di ogni modulo che utilizza la dll di estensione MFC. Per usare una DLL di estensione MFC in normali DLL MFC, la DLL di estensione deve fornire una funzione di inizializzazione esportata che crea un `CDynLinkLibrary` oggetto. Ogni normale DLL MFC che utilizza la DLL di estensione MFC deve chiamare la funzione di inizializzazione esportata.

Se si usa una DLL di estensione MFC solo da un'applicazione MFC e mai da una normale DLL MFC, è sufficiente creare l' `CDynLinkLibrary` oggetto nella funzione DLL dell'estensione MFC `DllMain` . Si tratta del codice DLL dell'estensione MFC della creazione guidata DLL MFC. Quando si carica in modo implicito una DLL di estensione MFC, `DllMain` carica ed esegue prima che l'applicazione venga avviata. Tutte `CDynLinkLibrary` le creazioni vengono cablate in una catena predefinita che la DLL MFC riserva per un'applicazione MFC.

Non è buona norma avere più `CDynLinkLibrary` oggetti da una DLL di estensione MFC in una catena. È soprattutto vero se la DLL di estensione MFC può essere scaricata dinamicamente dalla memoria. Non chiamare la funzione di inizializzazione più di una volta da un modulo.

## <a name="sample-code"></a>Codice di esempio

In questo codice di esempio si presuppone che la DLL MFC normale sia collegata in modo implicito alla DLL dell'estensione MFC. Per collegare in modo implicito, eseguire il collegamento alla libreria di importazione (file LIB) della DLL dell'estensione MFC quando si compila la normale DLL MFC.

Le righe seguenti devono trovarsi nell'origine della DLL dell'estensione MFC:

```cpp
// YourExtDLL.cpp:

// standard MFC extension DLL routines
#include "afxdllx.h"

static AFX_EXTENSION_MODULE extensionDLL;

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

Assicurarsi di esportare la funzione **InitYourExtDLL** . È possibile usare **`__declspec(dllexport)`** o esportarlo nel file def per la dll, come illustrato di seguito:

```def
// YourExtDLL.Def:
LIBRARY      YOUREXTDLL
CODE         PRELOAD MOVEABLE DISCARDABLE
DATA         PRELOAD SINGLE
EXPORTS
    InitYourExtDLL
```

Aggiungere una chiamata al `InitInstance` membro dell' `CWinApp` oggetto derivato da in ogni DLL MFC normale utilizzando la DLL dell'estensione MFC:

```cpp
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

## <a name="see-also"></a>Vedi anche

[MFC (DLL di estensione)](extension-dlls.md)
