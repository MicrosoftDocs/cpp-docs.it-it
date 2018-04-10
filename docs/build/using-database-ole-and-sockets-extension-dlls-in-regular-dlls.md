---
title: Utilizzando le DLL di estensione Database, OLE e Sockets MFC nella DLL di MFC regolari | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-tools
ms.tgt_pltfrm: ''
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- DLLs [C++], initializing
- DLLs [C++], extension
- DLLs [C++], regular
ms.assetid: 9f1d14a7-9e2a-4760-b3b6-db014fcdb7ff
caps.latest.revision: 7
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 0042dd5dc6049447868cf5ca5ea1112b3695f3a3
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="using-database-ole-and-sockets-mfc-extension-dlls-in-regular-mfc-dlls"></a>Utilizzando le DLL di estensione Database, OLE e Sockets MFC nella DLL regolari
Quando si utilizza un'estensione MFC DLL da una DLL regolare MFC, se l'estensione MFC DLL non è connessa la **CDynLinkLibrary** oggetto catena della DLL regolare MFC, è possibile eseguire in una o più di un set di problemi correlati. Poiché le versioni di debug del Database MFC, OLE e Sockets supportano le DLL vengono implementate come DLL di estensione MFC, è possibile che problemi simili, se si usano questi MFC, funzionalità, anche se non si in modo esplicito utilizza una delle DLL di estensione MFC. Alcuni sintomi sono:  
  
-   Quando il tentativo di deserializzare un oggetto di un tipo di classe definito in MFC DLL di estensione, il messaggio "avviso: Impossibile caricare CClasse dall'archivio. Classe non definita." viene visualizzato nella finestra di debug di traccia e l'oggetto non riesce a serializzare.  
  
-   Potrebbe essere generata un'eccezione che indica la classe non valida.  
  
-   Le risorse memorizzate nella DLL di estensione MFC non caricare perché `AfxFindResourceHandle` restituisce **NULL** o un handle di risorsa non corretto.  
  
-   `DllGetClassObject`, `DllCanUnloadNow`e `UpdateRegistry`, `Revoke`, `RevokeAll`, e `RegisterAll` funzioni membro di `COleObjectFactory` non riescono a individuare una class factory definita nella DLL di estensione MFC.  
  
-   `AfxDoForAllClasses`non funziona per tutte le classi nella DLL di estensione MFC.  
  
-   Database standard di MFC, sockets o risorse OLE non caricato. Ad esempio, **AfxLoadString**(**AFX_IDP_SQL_CONNECT_FAIL**) restituisce una stringa vuota, anche quando la DLL regolare MFC utilizza correttamente le classi di Database MFC.  
  
 La soluzione a questi problemi consiste nel creare ed esportare una funzione di inizializzazione di MFC DLL di estensione che consente di creare un **CDynLinkLibrary** oggetto. Chiamare questa funzione di inizializzazione esattamente una volta da ciascuna DLL MFC regolare che utilizza la DLL di estensione MFC.  
  
## <a name="mfc-ole-mfc-database-or-dao-or-mfc-sockets-support"></a>OLE MFC, Database MFC (o DAO) o MFC socket supportati  
 Se si utilizza qualsiasi OLE MFC, Database MFC (o DAO) o supportare Sockets MFC nella DLL regolare MFC, rispettivamente, il debug MFC MFCOxxD. dll DLL di estensione MFC, MFCDxxD e MFCNxxD (dove xx rappresenta il numero di versione) vengono collegati automaticamente. È necessario chiamare una funzione di inizializzazione predefiniti per ciascuna di queste DLL che si siano utilizzando.  
  
 Per il supporto di database, aggiungere una chiamata a `AfxDbInitModule` per le regolari MFC DLL `CWinApp::InitInstance` (funzione). Assicurarsi che questa chiamata si verifica prima di qualsiasi chiamata di classe di base o qualsiasi codice che accede MFCDxxD aggiunto. Questa funzione non accetta parametri e restituisce void.  
  
 Per il supporto OLE, aggiungere una chiamata a `AfxOleInitModule` per le regolari MFC DLL `CWinApp::InitInstance`. Si noti che il **COleControlModule InitInstance** chiamate di funzione `AfxOleInitModule` già, pertanto se si sta creando un controllo OLE e utilizza `COleControlModule`, non è necessario aggiungere questa chiamata a `AfxOleInitModule`.  
  
 Per il supporto di socket, aggiungere una chiamata a `AfxNetInitModule` per le regolari MFC DLL `CWinApp::InitInstance`.  
  
 Si noti che build di rilascio di DLL di MFC e le applicazioni non utilizzano DLL distinte per database, sockets supporta OLE. Tuttavia, è possibile chiamare queste funzioni di inizializzazione in modalità di rilascio.  
  
## <a name="cdynlinklibrary-objects"></a>Oggetti CDynLinkLibrary  
 Durante ciascuna delle operazioni indicate all'inizio di questo argomento, MFC deve eseguire la ricerca per un oggetto o il valore desiderato. Durante la deserializzazione, ad esempio, MFC deve eseguire una ricerca in tutte le classi in fase di esecuzione attualmente disponibili per abbinare gli oggetti nell'archivio con la classe di runtime appropriata.  
  
 Come parte di queste ricerche, vengono esaminate tutte le DLL di estensione MFC in uso scorrendo una catena di **CDynLinkLibrary** oggetti. **CDynLinkLibrary** oggetti automaticamente a una catena durante la costruzione e vengono creati per ogni DLL di estensione MFC durante l'inizializzazione. Inoltre, ogni modulo (applicazione o DLL MFC regolare) dispone della propria catena di **CDynLinkLibrary** oggetti.  
  
 Per la DLL di estensione MFC un **CDynLinkLibrary** catena, è necessario creare un **CDynLinkLibrary** oggetto nel contesto di ogni modulo che utilizza la DLL di estensione MFC. Pertanto, se un'estensione MFC DLL verrà utilizzato dalla DLL di MFC regolari, è necessario fornire una funzione di inizializzazione esportata che crea un **CDynLinkLibrary** oggetto. Tutte le DLL MFC regolare che usa l'estensione MFC DLL deve chiamare la funzione di inizializzazione esportata.  
  
 Se un'estensione MFC DLL si limiterà a essere utilizzato da un'applicazione MFC (.exe) e non da DLL regolare MFC, è sufficiente creare il **CDynLinkLibrary** oggetto MFC della DLL di estensione `DllMain`. Questo avviene con il codice della DLL di estensione MFC di creazione guidata DLL MFC. Durante il caricamento di DLL estensione MFC in modo implicito, `DllMain` carica ed esegue prima dell'avvio dell'applicazione. Qualsiasi **CDynLinkLibrary** creazioni cablate una catena predefinita che la DLL MFC riserva per un'applicazione MFC.  
  
 Si noti che è opportuno evitare di usare più **CDynLinkLibrary** oggetti da una DLL di estensione MFC in una catena, in particolare se la DLL di estensione MFC verrà scaricato in modo dinamico dalla memoria. Non chiamare la funzione di inizializzazione più di una volta da un qualsiasi modulo.  
  
## <a name="sample-code"></a>Codice di esempio  
 Questo codice di esempio si presuppone che la DLL regolare MFC in modo implicito è il collegamento alla DLL di estensione MFC. Questa operazione viene eseguita mediante il collegamento alla libreria di importazione (lib) della DLL di estensione MFC quando si compila una DLL regolare MFC.  
  
 L'origine della DLL di estensione MFC devono rispettare le seguenti righe:  
  
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
  
 Assicurarsi di esportare il **InitYourExtDLL** (funzione). Questa operazione può essere eseguita tramite **dllexport** o nel file con estensione def della DLL come indicato di seguito:  
  
```  
// YourExtDLL.Def:  
LIBRARY      YOUREXTDLL  
CODE         PRELOAD MOVEABLE DISCARDABLE  
DATA         PRELOAD SINGLE  
EXPORTS  
    InitYourExtDLL  
```  
  
 Aggiungere una chiamata al `InitInstance` appartenente il `CWinApp`-oggetto in ogni DLL regolare MFC che utilizza la DLL di estensione MFC derivato:  
  
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
  
-   [Inizializzazione di DLL estensione MFC](../build/run-time-library-behavior.md#initializing-extension-dlls)  
  
-   [Inizializzare le DLL regolari MFC](../build/run-time-library-behavior.md#initializing-regular-dlls)  
  
### <a name="what-do-you-want-to-know-more-about"></a>Scegliere l'argomento su cui visualizzare maggiori informazioni  
  
-   [MFC (DLL di estensione)](../build/extension-dlls.md)  
  
-   [DLL MFC regolari collegate a MFC in modo statico](../build/regular-dlls-statically-linked-to-mfc.md)  
  
-   [DLL MFC regolari collegate a MFC in modo dinamico](../build/regular-dlls-dynamically-linked-to-mfc.md)  
  
-   [Utilizzo di MFC come parte di una DLL](../mfc/tn011-using-mfc-as-part-of-a-dll.md)  
  
-   [Versione DLL di MFC](../mfc/tn033-dll-version-of-mfc.md)  
  
## <a name="see-also"></a>Vedere anche  
 [MFC (DLL di estensione)](../build/extension-dlls.md)