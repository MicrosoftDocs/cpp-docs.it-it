---
title: "Utilizzo di DLL di estensione per database, OLE e Sockets nelle DLL regolari | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "DLL [C++], estensione"
  - "DLL [C++], inizializzazione"
  - "DLL [C++], regolare"
ms.assetid: 9f1d14a7-9e2a-4760-b3b6-db014fcdb7ff
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Utilizzo di DLL di estensione per database, OLE e Sockets nelle DLL regolari
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Quando si utilizza una DLL di estensione da una DLL regolare, è possibile che si verifichino uno o più problemi correlati se la DDL di estensione non è connessa alla catena di oggetti **CDynLinkLibrary** della DLL regolare.  Poiché le versioni di debug delle DLL di supporto per database, OLE e Sockets MFC vengono implementate come DLL di estensione, possono verificarsi problemi simili se si utilizzano queste funzionalità MFC, anche se non si utilizzano esplicitamente le proprie DLL di estensione.  Di seguito sono indicati alcuni sintomi.  
  
-   Quando si tenta di deserializzare un oggetto di un tipo di classe definito nella DLL di estensione, viene visualizzato un messaggio di tipo "Avviso: impossibile caricare CClasse dall'archivio.  Classe non definita." visibile nella finestra di debug TRACE. La serializzazione dell'oggetto non può essere eseguita.  
  
-   È possibile che venga generata un'eccezione indicante una classe non valida.  
  
-   Le risorse memorizzate nella DLL di estensione non vengono caricate poiché `AfxFindResourceHandle` restituisce **NULL** o un handle di risorsa errato.  
  
-   `DllGetClassObject`, `DllCanUnloadNow` e le funzioni membro `UpdateRegistry`, `Revoke`, `RevokeAll` e `RegisterAll` di `COleObjectFactory` non riescono a individuare una class factory definita nella DLL di estensione.  
  
-   `AfxDoForAllClasses` non funziona per nessuna classe nella DLL di estensione.  
  
-   Le risorse database, Sockets o OLE MFC standard non vengono caricate.  **AfxLoadString**\(**AFX\_IDP\_SQL\_CONNECT\_FAIL**\), ad esempio, restituisce una stringa vuota, anche se la DLL regolare utilizza correttamente le classi database MFC.  
  
 Per risolvere questi problemi, creare ed esportare una funzione di inizializzazione nella DLL di estensione che crea un oggetto **CDynLinkLibrary**.  Chiamare questa funzione di inizializzazione esattamente una volta da ciascuna DLL regolare che utilizza la DLL di estensione.  
  
## Supporto MFC per OLE, database \(o DAO\) o Sockets  
 Se si utilizza un qualsiasi supporto MFC per OLE, database \(o DAO\) o Sockets nella DLL regolare, vengono collegate automaticamente le DLL di estensione di debug MFC MFCOxxD.dll, MFCDxxD.dll e MFCNxxD.dll, rispettivamente, dove xx è il numero di versione.  È necessario chiamare una funzione di inizializzazione predefinita per ciascuna di queste DLL in uso.  
  
 Per il supporto di database, aggiungere una chiamata a `AfxDbInitModule` nella funzione `CWinApp::InitInstance` della DLL regolare.  Assicurarsi che questa chiamata si verifichi prima di qualsiasi chiamata alla classe base o dell'accesso a MFCDxxD.dll da parte di qualsiasi codice aggiunto.  Questa funzione non accetta alcun parametro e restituisce un valore nullo.  
  
 Per il supporto di OLE, aggiungere una chiamata a `AfxOleInitModule` nella funzione `CWinApp::InitInstance` della DLL regolare.  Dato che la funzione **COleControlModule InitInstance** chiama già `AfxOleInitModule`, se si compila un controllo OLE e si utilizza `COleControlModule`, non è necessario aggiungere questa chiamata a `AfxOleInitModule`.  
  
 Per il supporto di Sockets, aggiungere una chiamata a `AfxNetInitModule` nella funzione `CWinApp::InitInstance` della DLL regolare.  
  
 Le build di rilascio delle DLL MFC e delle applicazioni non utilizzano DLL separate per il supporto di database, Sockets o OLE.  È tuttavia opportuno chiamare queste funzioni di inizializzazione nella modalità di rilascio.  
  
## Oggetti CDynLinkLibrary  
 Durante ciascuna delle operazioni indicate all'inizio di questo argomento, MFC deve cercare un valore o un oggetto desiderato.  Durante la deserializzazione, ad esempio, è necessario effettuare una ricerca in tutte le classi di runtime attualmente disponibili per individuare gli oggetti nell'archivio con la classe di runtime appropriata.  
  
 In queste ricerche, vengono esaminate tutte le DLL di estensione in uso scorrendo una catena di oggetti **CDynLinkLibrary**.  Questi oggetti si connettono automaticamente a una catena durante la costruzione e vengono creati da ciascuna DLL di estensione durante l'inizializzazione.  Ogni modulo, inoltre, che si tratti di una DLL regolare o di una applicazione, dispone della propria catena di oggetti **CDynLinkLibrary**.  
  
 Affinché possa connettersi a una catena **CDynLinkLibrary**, una DLL di estensione deve creare un oggetto **CDynLinkLibrary** nel contesto di ogni modulo che utilizza la DLL di estensione.  Pertanto, se la DLL di estensione viene utilizzata da una o più DLL regolari, è necessario che fornisca una funzione di inizializzazione esportata che crei un oggetto **CDynLinkLibrary**.  Ogni DLL regolare che utilizza la DLL di estensione deve chiamare la funzione di inizializzazione esportata.  
  
 Se una DLL di estensione viene utilizzata unicamente da un'applicazione MFC \(exe\) e non da una DLL regolare, è sufficiente creare l'oggetto **CDynLinkLibrary** nella funzione `DllMain` della DLL di estensione.  Questa operazione viene eseguita dal codice della DLL di estensione della Creazione guidata DLL MFC.  Quando si carica una DLL di estensione in modo implicito, `DllMain` viene caricata ed eseguita prima dell'avvio dell'applicazione.  Qualsiasi creazione di **CDynLinkLibrary** viene connessa a una catena predefinita che la DLL MFC riserva per un'applicazione MFC.  
  
 È opportuno evitare di avere più oggetti **CDynLinkLibrary** provenienti da una DLL di estensione in una catena, in particolare se la DLL di estensione verrà scaricata in modo dinamico dalla memoria.  Non chiamare la funzione di inizializzazione più di una volta da ciascun modulo.  
  
## Codice di esempio  
 In questo codice di esempio si presuppone che la DLL regolare venga collegata in modo implicito alla DLL di estensione.  Ciò avviene mediante il collegamento alla libreria di importazione \(lib\) della DLL di estensione durante la compilazione della DLL regolare.  
  
 Nel codice sorgente della DLL di estensione devono essere presenti le seguenti righe:  
  
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
        // extension DLL one-time initialization  
        if (!AfxInitExtensionModule(extensionDLL, hInstance))  
           return 0;  
    }  
    return 1;   // ok  
}  
  
// Exported DLL initialization is run in context of  
// application or regular DLL  
extern "C" void WINAPI InitYourExtDLL()  
{  
    // create a new CDynLinkLibrary for this app  
    new CDynLinkLibrary(extensionDLL);  
  
    // add other initialization here  
}  
```  
  
 Accertarsi di esportare la funzione **InitYourExtDLL**.  A questo scopo, è possibile utilizzare **\_\_declspec\(dllexport\)** o aggiungere il seguente codice nel file def della DLL:  
  
```  
// YourExtDLL.Def:  
LIBRARY      YOUREXTDLL  
CODE         PRELOAD MOVEABLE DISCARDABLE  
DATA         PRELOAD SINGLE  
EXPORTS  
    InitYourExtDLL  
```  
  
 Aggiungere una chiamata al membro `InitInstance` dell'oggetto derivato da `CWinApp` in ogni DLL regolare che utilizza la DLL di estensione:  
  
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
    TRACE0("YOUR regular DLL initializing\n");  
  
    // wire any extension DLLs into CDynLinkLibrary chain  
    InitYourExtDLL();  
  
    return TRUE;  
}  
```  
  
### Scegliere l'argomento con cui si desidera procedere  
  
-   [Inizializzazione di DLL di estensione](../build/initializing-extension-dlls.md)  
  
-   [Inizializzazione di DLL regolari](../build/initializing-regular-dlls.md)  
  
### Scegliere l'argomento su cui visualizzare maggiori informazioni  
  
-   [DLL di estensione](../build/extension-dlls.md)  
  
-   [DLL regolari collegate a MFC in modo statico](../build/regular-dlls-statically-linked-to-mfc.md)  
  
-   [DLL regolari collegate a MFC in modo dinamico](../build/regular-dlls-dynamically-linked-to-mfc.md)  
  
-   [Utilizzo di MFC come parte di una DLL](../mfc/tn011-using-mfc-as-part-of-a-dll.md)  
  
-   [Versione DLL di MFC](../mfc/tn033-dll-version-of-mfc.md)  
  
## Vedere anche  
 [DLL di estensione](../build/extension-dlls.md)